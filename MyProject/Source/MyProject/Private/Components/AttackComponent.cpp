

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

void UAttackComponent::Attack()
{
	PlayAttackMontage = CharacterDataAsset->AttackMontage;
	if (AttackInterface && CharacterDataAsset)
	{
		AttackInterface->IPlayAttackMontage(PlayAttackMontage);
	}
	isAttack = true;
}

void UAttackComponent::RequestAttack()
{
	if (isAttack)
	{
		return;
	}
	Attack();
}

void UAttackComponent::SettupAttackComponent(UBaseCharacterDataAsset* BCD)
{
	CharacterDataAsset = BCD;
}
void UAttackComponent::EndAttack()
{
	isAttack = false;
}




