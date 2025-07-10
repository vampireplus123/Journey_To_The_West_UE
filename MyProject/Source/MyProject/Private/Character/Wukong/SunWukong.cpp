// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Wukong/SunWukong.h"

#include "Components/AttackComponent.h"
#include "DataAsset/SunWukongDataAsset.h"
#include "Components/InputComponent.h"
#include "DataAsset/Characters/SunWukong/SunWukongEnhancedInputData.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

void ASunWukong::BeginPlay()
{
	Super::BeginPlay();
	
}
void ASunWukong::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	Input->BindAction(SunWukongEnhancedInputData->IA_Second_Attack, ETriggerEvent::Triggered, this, &ASunWukong::SecondAttack);
	Input->BindAction(SunWukongEnhancedInputData->IA_Third_Attack, ETriggerEvent::Triggered, this, &ASunWukong::ThirdAttack);
}


void ASunWukong::IPlayAttackMontage(UAnimMontage* AttackMontage)
{
	PlayAnimMontage(AttackMontage);
}

void ASunWukong::IAnimNotifyEndAttack()
{
	if (AttackComponent)
	{
		AttackComponent->EndAttack();
	}
}


FVector ASunWukong::IGetSocketLocation(const FName& SocketName)
{
	if (GetMesh()==nullptr) 
	{
		return FVector();
	}
	return GetMesh()->GetSocketLocation(SocketName);
}

void ASunWukong::TraceHitBegin()
{
	if (AttackComponent)
	{
		AttackComponent->SetUpTraceHit();
	}
}


void ASunWukong::AnimNotifyStateTraceHit()
{
	AttackComponent->TraceHit();
}

void ASunWukong::Attack()
{
	AttackComponent->RequestAttack();
}

float ASunWukong::ApplyDamage()
{
	Super::ApplyDamage();
	return WukongDamage;
}

void ASunWukong::HitImpactEffect(FVector HitLocation)
{
	Super::HitImpactEffect(HitLocation);
	if (SunWukongDataAsset)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
		GetWorld(),
		SunWukongDataAsset->WukongHitImpact,
		HitLocation
		);
	}
}

void ASunWukong::SecondAttack()
{
	
	if (SunWukongDataAsset == nullptr) return;
	if (SunWukongDataAsset->WukongOtherAttackMontages.IsValidIndex(0))
	{
		// PlayAnimMontage(SunWukongDataAsset->WukongOtherAttackMontages[0]);
		IPlayAttackMontage(SunWukongDataAsset->WukongOtherAttackMontages[0]);
	}
}

void ASunWukong::ThirdAttack()
{
	if (SunWukongDataAsset == nullptr) return;
	if (SunWukongDataAsset->WukongOtherAttackMontages.IsValidIndex(1))
	{
		/*PlayAnimMontage(SunWukongDataAsset->WukongOtherAttackMontages[1]);*/
		IPlayAttackMontage(SunWukongDataAsset->WukongOtherAttackMontages[1]);
	}
}



