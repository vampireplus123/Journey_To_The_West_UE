// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Wukong/SunWukong.h"

#include "Components/AttackComponent.h"


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

void ASunWukong::Tick(float DeltaTime)
{
	
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

	/*if (DameToActor != nullptr)
	{
		auto AttackDirection = UKismetMathLibrary::GetDirectionUnitVector(
			GetActorLocation(),
			DameToActor->GetActorLocation());
		UGameplayStatics::ApplyPointDamage(
			DameToActor,
			Damage,
			AttackDirection,
			HitResult,
			GetController(),
			this,
			UDamageType::StaticClass());
	}*/
	return 300.f;
}

