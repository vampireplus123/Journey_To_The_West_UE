// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstance/HeroAnimInstance.h"

#ifdef MYPROJECT_HeroAnimInstance_generated_h
#error "HeroAnimInstance.generated.h already included, missing '#pragma once' in HeroAnimInstance.h"
#endif
#define MYPROJECT_HeroAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHeroAnimInstance ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister();

#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroAnimInstance(); \
	friend struct Z_Construct_UClass_UHeroAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UHeroAnimInstance, UHeroBaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UHeroAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UHeroAnimInstance)


#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHeroAnimInstance(UHeroAnimInstance&&) = delete; \
	UHeroAnimInstance(const UHeroAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroAnimInstance) \
	NO_API virtual ~UHeroAnimInstance();


#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h_12_PROLOG
#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHeroAnimInstance;

// ********** End Class UHeroAnimInstance **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_AnimInstance_HeroAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
