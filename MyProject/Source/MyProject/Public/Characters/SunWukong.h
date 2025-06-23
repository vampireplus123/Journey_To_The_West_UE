// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Characters/HeroBaseCharacter.h"
#include "SunWukong.generated.h"

/**
 * 
 */
class USpringArmComponent;
class UCameraComponent;
class UDataAsset_InputConfig;

struct  FInputActionValue;
UCLASS()
class MYPROJECT_API ASunWukong : public AHeroBaseCharacter
{
	GENERATED_BODY()

public:
	ASunWukong();

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
private:
	UPROPERTY(EditAnywhere)
	float SpringArmLength = 300.f;
	UPROPERTY(EditAnywhere)
	float WalkSpeed = 600.f;
	UPROPERTY(EditAnywhere)
	float BrakingWalkingValue = 2000.f;
#pragma region Components
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess=true))
	USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Camera",meta=(AllowPrivateAccess=true))
	UCameraComponent* FollowCamera;
#pragma endregion
	
#pragma region Input
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="CharacterData",meta=(AllowPrivateAccess=true))
	UDataAsset_InputConfig* InputConfigDataAsset;
	void Input_Move(const FInputActionValue& InputActionValue);
	void Input_Look(const FInputActionValue& InputActionValue);

#pragma endregion 
};


