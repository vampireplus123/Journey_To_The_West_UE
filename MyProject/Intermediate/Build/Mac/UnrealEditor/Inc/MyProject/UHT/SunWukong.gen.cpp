// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Wukong/SunWukong.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSunWukong() {}

// ********** Begin Cross Module References ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_ASunWukong();
MYPROJECT_API UClass* Z_Construct_UClass_ASunWukong_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UAttackInterface_NoRegister();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Wukong/SunWukong.h" },
		{ "ModuleRelativePath", "Public/Character/Wukong/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Wukong Damage" },
		{ "ModuleRelativePath", "Public/Character/Wukong/SunWukong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASunWukong>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASunWukong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASunWukong_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASunWukong_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAttackInterface_NoRegister, (int32)VTABLE_OFFSET(ASunWukong, IAttackInterface), false },  // 3001938791
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASunWukong_Statics::ClassParams = {
	&ASunWukong::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASunWukong_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
ASunWukong::ASunWukong() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASunWukong);
ASunWukong::~ASunWukong() {}
// ********** End Class ASunWukong *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASunWukong, ASunWukong::StaticClass, TEXT("ASunWukong"), &Z_Registration_Info_UClass_ASunWukong, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASunWukong), 1677554367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h__Script_MyProject_2361770666(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
