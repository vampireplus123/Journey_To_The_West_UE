
#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "DataAsset/DataAsset_InputConfig.h"
#include "HeroInputComponent.generated.h"

class UDataAsset_InputConfig;

/**
 * 
 */
UCLASS()
class MYPROJECT_API UHeroInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
public:
	template<class UserObject,typename Callbackfunc>
	void BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig,const FGameplayTag& InputTag,ETriggerEvent TriggerEvent,UserObject* ContextObject,Callbackfunc Func);
	
};

template <class UserObject, typename Callbackfunc>
inline void UHeroInputComponent::BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig,
	const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserObject* ContextObject, Callbackfunc Func)
{

	checkf(InInputConfig,TEXT("Input Config data asset is null, can not proceed biding"));
	if (UInputAction* FoundAction = InInputConfig->FindNativeInputAction(InputTag))
		{
			 BindAction(FoundAction, TriggerEvent, ContextObject, Func);
		}
}
