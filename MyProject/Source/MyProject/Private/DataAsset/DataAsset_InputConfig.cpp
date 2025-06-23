// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAsset/DataAsset_InputConfig.h"

UInputAction* UDataAsset_InputConfig::FindNativeInputAction(const FGameplayTag& InputTag) const
{
	for (const FHeroInputConfig& InputAction : NativeInputAction)
	{
		if (InputAction.InputTag == InputTag && InputAction.InputAction)
		{
			return InputAction.InputAction;
		}
	}
	return nullptr;
}
