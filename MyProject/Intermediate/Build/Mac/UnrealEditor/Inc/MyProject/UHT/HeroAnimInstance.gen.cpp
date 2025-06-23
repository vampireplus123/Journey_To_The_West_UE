// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstance/HeroAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UHeroAnimInstance();
MYPROJECT_API UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UHeroBaseAnimInstance();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHeroAnimInstance ********************************************************
void UHeroAnimInstance::StaticRegisterNativesUHeroAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHeroAnimInstance;
UClass* UHeroAnimInstance::GetPrivateStaticClass()
{
	using TClass = UHeroAnimInstance;
	if (!Z_Registration_Info_UClass_UHeroAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroAnimInstance"),
			Z_Registration_Info_UClass_UHeroAnimInstance.InnerSingleton,
			StaticRegisterNativesUHeroAnimInstance,
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
	return Z_Registration_Info_UClass_UHeroAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister()
{
	return UHeroAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHeroAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstance/HeroAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstance/HeroAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroAnimInstance_Statics::ClassParams = {
	&UHeroAnimInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroAnimInstance()
{
	if (!Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton, Z_Construct_UClass_UHeroAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton;
}
UHeroAnimInstance::UHeroAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroAnimInstance);
UHeroAnimInstance::~UHeroAnimInstance() {}
// ********** End Class UHeroAnimInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroAnimInstance, UHeroAnimInstance::StaticClass, TEXT("UHeroAnimInstance"), &Z_Registration_Info_UClass_UHeroAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroAnimInstance), 2066288815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h__Script_MyProject_2312324625(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
