// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstance/HeroBaseAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroBaseAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
MYPROJECT_API UClass* Z_Construct_UClass_UHeroBaseAnimInstance();
MYPROJECT_API UClass* Z_Construct_UClass_UHeroBaseAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHeroBaseAnimInstance ****************************************************
void UHeroBaseAnimInstance::StaticRegisterNativesUHeroBaseAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHeroBaseAnimInstance;
UClass* UHeroBaseAnimInstance::GetPrivateStaticClass()
{
	using TClass = UHeroBaseAnimInstance;
	if (!Z_Registration_Info_UClass_UHeroBaseAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroBaseAnimInstance"),
			Z_Registration_Info_UClass_UHeroBaseAnimInstance.InnerSingleton,
			StaticRegisterNativesUHeroBaseAnimInstance,
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
	return Z_Registration_Info_UClass_UHeroBaseAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UHeroBaseAnimInstance_NoRegister()
{
	return UHeroBaseAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHeroBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstance/HeroBaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstance/HeroBaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroBaseAnimInstance_Statics::ClassParams = {
	&UHeroBaseAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UHeroBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UHeroBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroBaseAnimInstance.OuterSingleton;
}
UHeroBaseAnimInstance::UHeroBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroBaseAnimInstance);
UHeroBaseAnimInstance::~UHeroBaseAnimInstance() {}
// ********** End Class UHeroBaseAnimInstance ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroBaseAnimInstance_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroBaseAnimInstance, UHeroBaseAnimInstance::StaticClass, TEXT("UHeroBaseAnimInstance"), &Z_Registration_Info_UClass_UHeroBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroBaseAnimInstance), 819848102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroBaseAnimInstance_h__Script_MyProject_1758536618(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroBaseAnimInstance_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroBaseAnimInstance_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
