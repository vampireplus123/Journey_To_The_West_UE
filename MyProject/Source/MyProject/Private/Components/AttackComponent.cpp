

#include "Components/AttackComponent.h"
#include "GameFramework/Character.h"
#include "DataAsset/BaseCharacterDataAsset.h"
#include "Interfaces/AttackInterface.h"


UAttackComponent::UAttackComponent()
{
	
	PrimaryComponentTick.bCanEverTick = false;
}
// Called when the game starts
void UAttackComponent::BeginPlay()
{
	Super::BeginPlay();
	AttackInterface = TScriptInterface<IAttackInterface>(GetOwner());
}

void UAttackComponent::RequestAttack()
{
	PlayAttackMontage = CharacterDataAsset->AttackMontage;
	if (AttackInterface)
	{
		AttackInterface->IPlayAttackMontage(PlayAttackMontage);
	}
}

void UAttackComponent::SettupAttackComponent(UBaseCharacterDataAsset* BCD)
{
	CharacterDataAsset = BCD;
}




