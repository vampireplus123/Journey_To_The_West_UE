// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Input/HeroInputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroInputComponent() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UHeroInputComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UHeroInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHeroInputComponent ******************************************************
void UHeroInputComponent::StaticRegisterNativesUHeroInputComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHeroInputComponent;
UClass* UHeroInputComponent::GetPrivateStaticClass()
{
	using TClass = UHeroInputComponent;
	if (!Z_Registration_Info_UClass_UHeroInputComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroInputComponent"),
			Z_Registration_Info_UClass_UHeroInputComponent.InnerSingleton,
			StaticRegisterNativesUHeroInputComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UHeroInputComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHeroInputComponent_NoRegister()
{
	return UHeroInputComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHeroInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Components/Input/HeroInputComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Input/HeroInputComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroInputComponent_Statics::ClassParams = {
	&UHeroInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroInputComponent()
{
	if (!Z_Registration_Info_UClass_UHeroInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroInputComponent.OuterSingleton, Z_Construct_UClass_UHeroInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroInputComponent.OuterSingleton;
}
UHeroInputComponent::UHeroInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroInputComponent);
UHeroInputComponent::~UHeroInputComponent() {}
// ********** End Class UHeroInputComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Components_Input_HeroInputComponent_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroInputComponent, UHeroInputComponent::StaticClass, TEXT("UHeroInputComponent"), &Z_Registration_Info_UClass_UHeroInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroInputComponent), 1335518509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Components_Input_HeroInputComponent_h__Script_MyProject_1729429689(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Components_Input_HeroInputComponent_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Components_Input_HeroInputComponent_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
