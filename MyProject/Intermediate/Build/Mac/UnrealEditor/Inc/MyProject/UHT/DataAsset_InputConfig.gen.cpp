// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/DataAsset_InputConfig.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDataAsset_InputConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MYPROJECT_API UClass* Z_Construct_UClass_UDataAsset_InputConfig();
MYPROJECT_API UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister();
MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FHeroInputConfig();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FHeroInputConfig **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHeroInputConfig;
class UScriptStruct* FHeroInputConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHeroInputConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHeroInputConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeroInputConfig, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("HeroInputConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FHeroInputConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHeroInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAsset/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "InputTag" },
		{ "ModuleRelativePath", "Public/DataAsset/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "HeroInputConfig" },
		{ "ModuleRelativePath", "Public/DataAsset/DataAsset_InputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeroInputConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeroInputConfig_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeroInputConfig, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHeroInputConfig_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeroInputConfig, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeroInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroInputConfig_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroInputConfig_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInputConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeroInputConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	nullptr,
	&NewStructOps,
	"HeroInputConfig",
	Z_Construct_UScriptStruct_FHeroInputConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInputConfig_Statics::PropPointers),
	sizeof(FHeroInputConfig),
	alignof(FHeroInputConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInputConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHeroInputConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHeroInputConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FHeroInputConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHeroInputConfig.InnerSingleton, Z_Construct_UScriptStruct_FHeroInputConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHeroInputConfig.InnerSingleton;
}
// ********** End ScriptStruct FHeroInputConfig ****************************************************

// ********** Begin Class UDataAsset_InputConfig ***************************************************
void UDataAsset_InputConfig::StaticRegisterNativesUDataAsset_InputConfig()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDataAsset_InputConfig;
UClass* UDataAsset_InputConfig::GetPrivateStaticClass()
{
	using TClass = UDataAsset_InputConfig;
	if (!Z_Registration_Info_UClass_UDataAsset_InputConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DataAsset_InputConfig"),
			Z_Registration_Info_UClass_UDataAsset_InputConfig.InnerSingleton,
			StaticRegisterNativesUDataAsset_InputConfig,
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
	return Z_Registration_Info_UClass_UDataAsset_InputConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister()
{
	return UDataAsset_InputConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDataAsset_InputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAsset/DataAsset_InputConfig.h" },
		{ "ModuleRelativePath", "Public/DataAsset/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "DataAsset_InputConfig" },
		{ "ModuleRelativePath", "Public/DataAsset/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputAction_MetaData[] = {
		{ "Category", "DataAsset_InputConfig" },
		{ "ModuleRelativePath", "Public/DataAsset/DataAsset_InputConfig.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputAction_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_InputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_InputConfig, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputAction_Inner = { "NativeInputAction", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHeroInputConfig, METADATA_PARAMS(0, nullptr) }; // 3290331861
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputAction = { "NativeInputAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_InputConfig, NativeInputAction), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputAction_MetaData), NewProp_NativeInputAction_MetaData) }; // 3290331861
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputAction_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_InputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::ClassParams = {
	&UDataAsset_InputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_InputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_InputConfig()
{
	if (!Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton, Z_Construct_UClass_UDataAsset_InputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton;
}
UDataAsset_InputConfig::UDataAsset_InputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_InputConfig);
UDataAsset_InputConfig::~UDataAsset_InputConfig() {}
// ********** End Class UDataAsset_InputConfig *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_DataAsset_DataAsset_InputConfig_h__Script_MyProject_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHeroInputConfig::StaticStruct, Z_Construct_UScriptStruct_FHeroInputConfig_Statics::NewStructOps, TEXT("HeroInputConfig"), &Z_Registration_Info_UScriptStruct_FHeroInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeroInputConfig), 3290331861U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_InputConfig, UDataAsset_InputConfig::StaticClass, TEXT("UDataAsset_InputConfig"), &Z_Registration_Info_UClass_UDataAsset_InputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_InputConfig), 1136284939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_DataAsset_DataAsset_InputConfig_h__Script_MyProject_1691442805(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_DataAsset_DataAsset_InputConfig_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_DataAsset_DataAsset_InputConfig_h__Script_MyProject_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_DataAsset_DataAsset_InputConfig_h__Script_MyProject_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_DataAsset_DataAsset_InputConfig_h__Script_MyProject_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
