// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "BaseCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UInputMappingContext;
class UInputAction;
class UEnhancedInputData;
struct FInputActionState;

UCLASS()
class MYPROJECT_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()



public:
	// Sets default values for this character's properties
	ABaseCharacter();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float springArmLength = 400.f;
private:
	void LookAround(const FInputActionValue& value);
	void MoveAround(const FInputActionValue& value);
private:
	UPROPERTY(VisibleAnywhere,Category="Spring Arm Component")
	USpringArmComponent* SpringArmComponent;
	UPROPERTY(VisibleAnywhere,Category="Camera Component")
	UCameraComponent* CameraComponent;
	
	UPROPERTY(EditDefaultsOnly,Category="Data Assett")
	UEnhancedInputData* EnhancedInputData;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
