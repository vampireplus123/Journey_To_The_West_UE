// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DataAsset/EnhancedInputData.h"
#include "Components/AttackComponent.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Tạo Spring Arm
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = springArmLength;
	SpringArmComponent->bUsePawnControlRotation = true; // Cho phép camera xoay quanh nhân vật

	// Tạo Camera
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false; // Không bị ảnh hưởng bởi pitch/roll/yaw của pawn

	//Attack Component
	AttackComponent = CreateDefaultSubobject<UAttackComponent>(TEXT("Attack Component"));
	// Để nhân vật không xoay theo controller khi điều khiển camera (chỉ xoay theo hướng di chuyển)
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
}


void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<FHitResult> HitsResults;
	FVector StartLocation = GetActorLocation();
	FVector EndLocation = StartLocation + (GetActorForwardVector() * 1000.f);
	
	int HitCount = 0;
	hitActors.Empty();
	bool doHitSomething = UKismetSystemLibrary::LineTraceMultiForObjects
	(
		this,
		StartLocation,
		EndLocation,
		TraceObjectTyoe,
		false,
		ActorsToIgnore,
		EDrawDebugTrace::ForOneFrame,
		HitsResults,
		true
	);
	if (!doHitSomething)
	{
		return;
	}
	for (const FHitResult& hitresult : HitsResults)
	{
		if (hitActors.Contains(hitresult.GetActor()))
		{
			continue;
		}
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage
			(
				-1,
				1.0f,
				FColor::Red,
				hitresult.BoneName.ToString()
			);
			UKismetSystemLibrary::DrawDebugSphere
			(
				this,
				hitresult.ImpactPoint,
				10.0f
			);
			hitActors.Emplace(hitresult.GetActor());
			HitCount++;
			GEngine->AddOnScreenDebugMessage
			(
				-1,
				1.0f,
				FColor::Blue,
				FString::Printf(TEXT("HitCount: %d"), HitCount)
			);
		}
	}
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			if (EnhancedInputData == nullptr)
			{
				return;
			}
			Subsystem->AddMappingContext(EnhancedInputData->InputContext, 0);
		}
	}
}

void ABaseCharacter::Attack()
{
	
}

void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (EnhancedInputData == nullptr)
	{
		return;
	}
	if (UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(EnhancedInputData->InputAction_Move, ETriggerEvent::Triggered, this, &ABaseCharacter::MoveAround);
		Input->BindAction(EnhancedInputData->InputAction_Look, ETriggerEvent::Triggered, this, &ABaseCharacter::LookAround);
		Input->BindAction(EnhancedInputData->InputAction_Attack, ETriggerEvent::Started, this, &ABaseCharacter::Attack);
	}
}

void ABaseCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	if (AttackComponent)
	{
		AttackComponent->SettupAttackComponent(CharacterDataAsset);
	}
	
}



void ABaseCharacter::MoveAround(const FInputActionValue& Value)
{
	FVector2D InputVector = Value.Get<FVector2D>();

	if (Controller)
	{
		FRotator ControlRotation = Controller->GetControlRotation();
		FRotator YawRotation(0.f, ControlRotation.Yaw, 0.f);

		const FVector FowardDirection = YawRotation.RotateVector(FVector::ForwardVector);
		const FVector RightDirection = YawRotation.RotateVector(FVector::RightVector);
		AddMovementInput(FowardDirection, InputVector.Y);
		AddMovementInput(RightDirection, InputVector.X);
	}
}

void ABaseCharacter::LookAround(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);
}


