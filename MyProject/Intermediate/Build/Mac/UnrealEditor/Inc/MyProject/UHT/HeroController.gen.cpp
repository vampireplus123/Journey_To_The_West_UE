// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroController/HeroController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
MYPROJECT_API UClass* Z_Construct_UClass_AHeroController();
MYPROJECT_API UClass* Z_Construct_UClass_AHeroController_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHeroController **********************************************************
void AHeroController::StaticRegisterNativesAHeroController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHeroController;
UClass* AHeroController::GetPrivateStaticClass()
{
	using TClass = AHeroController;
	if (!Z_Registration_Info_UClass_AHeroController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroController"),
			Z_Registration_Info_UClass_AHeroController.InnerSingleton,
			StaticRegisterNativesAHeroController,
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
	return Z_Registration_Info_UClass_AHeroController.InnerSingleton;
}
UClass* Z_Construct_UClass_AHeroController_NoRegister()
{
	return AHeroController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHeroController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HeroController/HeroController.h" },
		{ "ModuleRelativePath", "Public/HeroController/HeroController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHeroController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroController_Statics::ClassParams = {
	&AHeroController::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeroController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeroController()
{
	if (!Z_Registration_Info_UClass_AHeroController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroController.OuterSingleton, Z_Construct_UClass_AHeroController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeroController.OuterSingleton;
}
AHeroController::AHeroController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroController);
AHeroController::~AHeroController() {}
// ********** End Class AHeroController ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeroController, AHeroController::StaticClass, TEXT("AHeroController"), &Z_Registration_Info_UClass_AHeroController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroController), 4270988442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h__Script_MyProject_1319736515(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
