// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/BaseCharacterDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseCharacterDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
MYPROJECT_API UClass* Z_Construct_UClass_UBaseCharacterDataAsset();
MYPROJECT_API UClass* Z_Construct_UClass_UBaseCharacterDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseCharacterDataAsset **************************************************
void UBaseCharacterDataAsset::StaticRegisterNativesUBaseCharacterDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseCharacterDataAsset;
UClass* UBaseCharacterDataAsset::GetPrivateStaticClass()
{
	using TClass = UBaseCharacterDataAsset;
	if (!Z_Registration_Info_UClass_UBaseCharacterDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseCharacterDataAsset"),
			Z_Registration_Info_UClass_UBaseCharacterDataAsset.InnerSingleton,
			StaticRegisterNativesUBaseCharacterDataAsset,
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
	return Z_Registration_Info_UClass_UBaseCharacterDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseCharacterDataAsset_NoRegister()
{
	return UBaseCharacterDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseCharacterDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAsset/BaseCharacterDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attack Montage" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCharacterDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_AttackMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseCharacterDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::ClassParams = {
	&UBaseCharacterDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseCharacterDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseCharacterDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseCharacterDataAsset()
{
	if (!Z_Registration_Info_UClass_UBaseCharacterDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCharacterDataAsset.OuterSingleton, Z_Construct_UClass_UBaseCharacterDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseCharacterDataAsset.OuterSingleton;
}
UBaseCharacterDataAsset::UBaseCharacterDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterDataAsset);
UBaseCharacterDataAsset::~UBaseCharacterDataAsset() {}
// ********** End Class UBaseCharacterDataAsset ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCharacterDataAsset, UBaseCharacterDataAsset::StaticClass, TEXT("UBaseCharacterDataAsset"), &Z_Registration_Info_UClass_UBaseCharacterDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCharacterDataAsset), 1882039075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h__Script_MyProject_3551484888(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
