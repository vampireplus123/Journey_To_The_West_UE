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
private:
	virtual void IPlayAttackMontage(UAnimMontage* AttackMontage) override;
	virtual void IAnimNotifyEndAttack() override;
	virtual void Tick(float DeltaTime) override;
	virtual FVector IGetSocketLocation(const FName& SocketName) override;
	virtual  void AnimNotifyStateTraceHit() override;
	virtual  void TraceHitBegin() override;
private:
	UPROPERTY(EditDefaultsOnly,Category="Wukong Damage")
	float Damage;
protected:
	 virtual void Attack() override;
	virtual float ApplyDamage() override;
};

