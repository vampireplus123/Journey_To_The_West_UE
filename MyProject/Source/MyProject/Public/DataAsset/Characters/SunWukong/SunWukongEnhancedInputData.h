// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAsset/EnhancedInputData.h"
#include "SunWukongEnhancedInputData.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API USunWukongEnhancedInputData : public UEnhancedInputData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly,Category="Jump")
	UInputAction* IA_Jump;
};
