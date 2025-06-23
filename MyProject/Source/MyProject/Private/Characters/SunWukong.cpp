// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SunWukong.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DataAsset/DataAsset_InputConfig.h"
#include "Components/Input/HeroInputComponent.h"
#include "HeroGamePlayTag.h"

ASunWukong::ASunWukong()
{
	//Capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f,96.f);
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//Camera Spring Arm
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = SpringArmLength;
	CameraBoom->SocketOffset = FVector(0,55.f,65.f);
	CameraBoom->bUsePawnControlRotation = true;

	//Camera Follow
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Follow Camera"));
	FollowCamera -> SetupAttachment(CameraBoom,USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f,500.f,0.f);
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	GetCharacterMovement()->BrakingDecelerationWalking = BrakingWalkingValue;
}

void ASunWukong::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	checkf(InputConfigDataAsset, TEXT("Forgot to assign a valid data asset as input config"));
	Super::SetupPlayerInputComponent(InputComponent);
	
	// Lấy LocalPlayer và Subsystem để add Mapping Context
	ULocalPlayer* LocalPlayer = GetController<APlayerController>()->GetLocalPlayer();
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);
	check(Subsystem);
	
	Subsystem->AddMappingContext(InputConfigDataAsset->DefaultMappingContext, 0);

	// Dùng đúng kiểu EnhancedInputComponent
	UEnhancedInputComponent* EnhancedInput = CastChecked<UEnhancedInputComponent>(InputComponent);

	// Bind các hành động đầu vào
	if (const UInputAction* MoveAction = InputConfigDataAsset->FindNativeInputAction(HeroGamePlayTag::InputTag_Move))
	{
		EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::Input_Move);
	}

	if (const UInputAction* LookAction = InputConfigDataAsset->FindNativeInputAction(HeroGamePlayTag::InputTag_Look))
	{
		EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::Input_Look);
	}
}


void ASunWukong::Input_Move(const FInputActionValue& InputActionValue)
{
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	const FRotator MovementRotation(0.f,Controller->GetControlRotation().Yaw,0.f);

	if (MovementVector.Y != 0.f)
	{
		const FVector FowardDirection = MovementRotation.RotateVector(FVector::ForwardVector);
		AddMovementInput(FowardDirection,MovementVector.Y);
	}
	if (MovementVector.X != 0.f)
	{
		const FVector RightDirection = MovementRotation.RotateVector(FVector::RightVector);
		AddMovementInput(RightDirection,MovementVector.X);
	}
}
void ASunWukong::Input_Look(const FInputActionValue& InputActionValue)
{
	const FVector2D LookDirection = InputActionValue.Get<FVector2D>();
	if (LookDirection.X != 0.f)
	{
		AddControllerYawInput(LookDirection.X);
	}
	if (LookDirection.Y != 0.f)
	{
		AddControllerPitchInput(LookDirection.Y);		
	}
}