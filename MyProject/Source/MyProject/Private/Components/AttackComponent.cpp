

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

void UAttackComponent::TraceHit()
{
	if (CharacterDataAsset == nullptr)
	{
		return;
	}
	if (GetMesh()==nullptr)
	{
		return;
	}
	TArray<FHitResult> HitsResults;
	const FVector StartLocation = GetMesh()->GetSocketLocation(CharacterDataAsset->StartPoint);
	const FVector EndLocation = GetMesh()->GetSocketLocation(CharacterDataAsset->EndPoint);
	
	hitActors.Empty();
	HitCount = 0;
	bool bHit = UKismetSystemLibrary::SphereTraceMultiForObjects(
		this,
		StartLocation,
		EndLocation,
		CharacterDataAsset->TraceRadius,
		CharacterDataAsset->TraceObjectTyoe,
		false,
		CharacterDataAsset->ActorsToIgnore, // actors to ignore
		EDrawDebugTrace::ForDuration,
		HitsResults,
		true,
		FLinearColor::Red,
		FLinearColor::Green,
		CharacterDataAsset->DrawTime
	);
	if (!bHit)
	{
		return;
	}
	for (const FHitResult& hitresult : HitsResults)
	{
		if (hitActors.Contains(hitresult.GetActor()))
		{
			continue;
		}
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage
			(
				-1,
				1.0f,
				FColor::Red,
				hitresult.BoneName.ToString()
			);
			hitActors.Emplace(hitresult.GetActor());
			HitCount++;
		}
	}
}




