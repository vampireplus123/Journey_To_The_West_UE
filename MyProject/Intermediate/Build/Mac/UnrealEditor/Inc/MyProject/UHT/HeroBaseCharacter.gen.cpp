// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/HeroBaseCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroBaseCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MYPROJECT_API UClass* Z_Construct_UClass_AHeroBaseCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_AHeroBaseCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHeroBaseCharacter *******************************************************
void AHeroBaseCharacter::StaticRegisterNativesAHeroBaseCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHeroBaseCharacter;
UClass* AHeroBaseCharacter::GetPrivateStaticClass()
{
	using TClass = AHeroBaseCharacter;
	if (!Z_Registration_Info_UClass_AHeroBaseCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroBaseCharacter"),
			Z_Registration_Info_UClass_AHeroBaseCharacter.InnerSingleton,
			StaticRegisterNativesAHeroBaseCharacter,
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
	return Z_Registration_Info_UClass_AHeroBaseCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AHeroBaseCharacter_NoRegister()
{
	return AHeroBaseCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHeroBaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/HeroBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/HeroBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroBaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHeroBaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroBaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroBaseCharacter_Statics::ClassParams = {
	&AHeroBaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeroBaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeroBaseCharacter()
{
	if (!Z_Registration_Info_UClass_AHeroBaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroBaseCharacter.OuterSingleton, Z_Construct_UClass_AHeroBaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeroBaseCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroBaseCharacter);
AHeroBaseCharacter::~AHeroBaseCharacter() {}
// ********** End Class AHeroBaseCharacter *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeroBaseCharacter, AHeroBaseCharacter::StaticClass, TEXT("AHeroBaseCharacter"), &Z_Registration_Info_UClass_AHeroBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroBaseCharacter), 160854371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h__Script_MyProject_3840661701(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
