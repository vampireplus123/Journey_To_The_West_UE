// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/HeroBaseCharacter.h"

// Sets default values
AHeroBaseCharacter::AHeroBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHeroBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHeroBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHeroBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

