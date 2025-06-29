// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "Interfaces/AttackInterface.h"
#include "SunWukong.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API ASunWukong : public ABaseCharacter, public  IAttackInterface
{
	GENERATED_BODY()
public:
	virtual void IPlayAttackMontage(UAnimMontage* AttackMontage) override;

protected:
	 virtual void Attack() override;
};
