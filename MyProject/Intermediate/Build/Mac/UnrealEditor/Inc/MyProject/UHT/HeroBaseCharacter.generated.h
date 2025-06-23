// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/HeroBaseCharacter.h"

#ifdef MYPROJECT_HeroBaseCharacter_generated_h
#error "HeroBaseCharacter.generated.h already included, missing '#pragma once' in HeroBaseCharacter.h"
#endif
#define MYPROJECT_HeroBaseCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHeroBaseCharacter *******************************************************
MYPROJECT_API UClass* Z_Construct_UClass_AHeroBaseCharacter_NoRegister();

#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroBaseCharacter(); \
	friend struct Z_Construct_UClass_AHeroBaseCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_AHeroBaseCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AHeroBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AHeroBaseCharacter_NoRegister) \
	DECLARE_SERIALIZER(AHeroBaseCharacter)


#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHeroBaseCharacter(AHeroBaseCharacter&&) = delete; \
	AHeroBaseCharacter(const AHeroBaseCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroBaseCharacter) \
	NO_API virtual ~AHeroBaseCharacter();


#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h_9_PROLOG
#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHeroBaseCharacter;

// ********** End Class AHeroBaseCharacter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Characters_HeroBaseCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
