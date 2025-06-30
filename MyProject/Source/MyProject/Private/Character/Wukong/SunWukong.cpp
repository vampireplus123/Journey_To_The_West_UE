// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Wukong/SunWukong.h"

#include "Components/AttackComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DataAsset/BaseCharacterDataAsset.h"

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
	AttackComponent->TraceHit();
}

FVector ASunWukong::IGetSocketLocation(const FName& SocketName)
{
	if (GetMesh()==nullptr)
	{
		return FVector();
	}
	return GetMesh()->GetSocketLocation(SocketName);
}

void ASunWukong::Attack()
{
	AttackComponent->RequestAttack();
}
