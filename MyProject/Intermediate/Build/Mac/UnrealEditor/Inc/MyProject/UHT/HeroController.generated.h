// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HeroController/HeroController.h"

#ifdef MYPROJECT_HeroController_generated_h
#error "HeroController.generated.h already included, missing '#pragma once' in HeroController.h"
#endif
#define MYPROJECT_HeroController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHeroController **********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_AHeroController_NoRegister();

#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroController(); \
	friend struct Z_Construct_UClass_AHeroController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_AHeroController_NoRegister(); \
public: \
	DECLARE_CLASS2(AHeroController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AHeroController_NoRegister) \
	DECLARE_SERIALIZER(AHeroController)


#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHeroController(AHeroController&&) = delete; \
	AHeroController(const AHeroController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroController) \
	NO_API virtual ~AHeroController();


#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h_12_PROLOG
#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHeroController;

// ********** End Class AHeroController ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_HeroController_HeroController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
