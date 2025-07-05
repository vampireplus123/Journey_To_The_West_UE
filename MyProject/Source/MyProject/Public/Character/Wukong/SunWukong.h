// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "Interfaces/AttackInterface.h"
#include "Interfaces/IFlyingInterface.h"
#include "Interfaces/JumpingInterface.h"
#include "SunWukong.generated.h"

/**
 * 
 */
class USunWukongDataAsset;
class IIFlyingInterface;
class USunWukongEnhancedInputData;
UCLASS()
class MYPROJECT_API ASunWukong : public ABaseCharacter, public  IAttackInterface
{
	GENERATED_BODY()
	// Input
private:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(EditDefaultsOnly,Category="Wukong Input Data")
	USunWukongEnhancedInputData* SunWukongEnhancedInputData;
private:
	virtual void IPlayAttackMontage(UAnimMontage* AttackMontage) override;
	virtual void IAnimNotifyEndAttack() override;
	virtual FVector IGetSocketLocation(const FName& SocketName) override;
	virtual  void AnimNotifyStateTraceHit() override;
	virtual  void TraceHitBegin() override;

private:
	UPROPERTY(EditDefaultsOnly,Category="Wukong Damage")
	float WukongDamage = 300.f;
	UPROPERTY(EditDefaultsOnly,Category="Wukong DataAsset")
	USunWukongDataAsset* SunWukongDataAsset;
protected:
	virtual void Attack() override;
	virtual float ApplyDamage() override;
};

