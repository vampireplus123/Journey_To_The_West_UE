// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAsset/BaseCharacterDataAsset.h"
#include "Interfaces/IFlyingInterface.h"
#include "SunWukongDataAsset.generated.h"

/**
 * 
 */
class UAnimMontage;
UCLASS()
class MYPROJECT_API USunWukongDataAsset : public UBaseCharacterDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "SunWukong")
	UAnimMontage* WukongFlyingMontage;
	UPROPERTY(EditAnywhere, Category = "SunWukong")
	UAnimMontage* WukongJumpingMontage;
};
