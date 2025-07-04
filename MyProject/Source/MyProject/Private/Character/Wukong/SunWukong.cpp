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
	return 300.f;
}

