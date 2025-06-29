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

void ASunWukong::Attack()
{
	AttackComponent->RequestAttack();
}
