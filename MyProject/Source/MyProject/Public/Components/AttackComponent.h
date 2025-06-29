// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interfaces/AttackInterface.h"
#include "AttackComponent.generated.h"


class UBaseCharacterDataAsset;
class UAnimMontage;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UAttackComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttackComponent();
	/*
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	*/
	void RequestAttack();
	void SettupAttackComponent(UBaseCharacterDataAsset* BCD);
	void EndAttack();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
private:
	UPROPERTY()
	UBaseCharacterDataAsset* CharacterDataAsset;
	UPROPERTY()
	TScriptInterface<IAttackInterface> AttackInterface;
	UPROPERTY()
	UAnimMontage* PlayAttackMontage;
	
private:
	bool isAttack;
	void Attack();
};


