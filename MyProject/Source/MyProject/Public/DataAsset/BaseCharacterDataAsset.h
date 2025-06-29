// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseCharacterDataAsset.generated.h"

/**
 * 
 */
class UAnimMontage;
UCLASS()
class MYPROJECT_API UBaseCharacterDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Attack Montage")
	UAnimMontage* AttackMontage;
};
