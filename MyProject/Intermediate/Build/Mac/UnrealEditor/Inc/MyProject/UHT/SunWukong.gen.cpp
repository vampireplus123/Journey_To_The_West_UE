// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/SunWukong.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSunWukong() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AHeroBaseCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_ASunWukong();
MYPROJECT_API UClass* Z_Construct_UClass_ASunWukong_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASunWukong ***************************************************************
void ASunWukong::StaticRegisterNativesASunWukong()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASunWukong;
UClass* ASunWukong::GetPrivateStaticClass()
{
	using TClass = ASunWukong;
	if (!Z_Registration_Info_UClass_ASunWukong.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SunWukong"),
			Z_Registration_Info_UClass_ASunWukong.InnerSingleton,
			StaticRegisterNativesASunWukong,
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
	return Z_Registration_Info_UClass_ASunWukong.InnerSingleton;
}
UClass* Z_Construct_UClass_ASunWukong_NoRegister()
{
	return ASunWukong::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASunWukong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/SunWukong.h" },
		{ "ModuleRelativePath", "Public/Characters/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmLength_MetaData[] = {
		{ "Category", "SunWukong" },
		{ "ModuleRelativePath", "Public/Characters/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "SunWukong" },
		{ "ModuleRelativePath", "Public/Characters/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingWalkingValue_MetaData[] = {
		{ "Category", "SunWukong" },
		{ "ModuleRelativePath", "Public/Characters/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Public/Characters/SunWukong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingWalkingValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfigDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASunWukong>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_SpringArmLength = { "SpringArmLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, SpringArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmLength_MetaData), NewProp_SpringArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_BrakingWalkingValue = { "BrakingWalkingValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, BrakingWalkingValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingWalkingValue_MetaData), NewProp_BrakingWalkingValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_InputConfigDataAsset = { "InputConfigDataAsset", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, InputConfigDataAsset), Z_Construct_UClass_UDataAsset_InputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfigDataAsset_MetaData), NewProp_InputConfigDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASunWukong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_SpringArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_BrakingWalkingValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_InputConfigDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASunWukong_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHeroBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASunWukong_Statics::ClassParams = {
	&ASunWukong::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASunWukong_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::Class_MetaDataParams), Z_Construct_UClass_ASunWukong_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASunWukong()
{
	if (!Z_Registration_Info_UClass_ASunWukong.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASunWukong.OuterSingleton, Z_Construct_UClass_ASunWukong_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASunWukong.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASunWukong);
ASunWukong::~ASunWukong() {}
// ********** End Class ASunWukong *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_SunWukong_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASunWukong, ASunWukong::StaticClass, TEXT("ASunWukong"), &Z_Registration_Info_UClass_ASunWukong, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASunWukong), 3174303880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_SunWukong_h__Script_MyProject_2927174108(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_SunWukong_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_SunWukong_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
