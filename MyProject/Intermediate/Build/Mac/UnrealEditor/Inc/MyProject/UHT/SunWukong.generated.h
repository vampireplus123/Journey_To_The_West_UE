// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Wukong/SunWukong.h"

#ifdef MYPROJECT_SunWukong_generated_h
#error "SunWukong.generated.h already included, missing '#pragma once' in SunWukong.h"
#endif
#define MYPROJECT_SunWukong_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASunWukong ***************************************************************
MYPROJECT_API UClass* Z_Construct_UClass_ASunWukong_NoRegister();

#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASunWukong(); \
	friend struct Z_Construct_UClass_ASunWukong_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_ASunWukong_NoRegister(); \
public: \
	DECLARE_CLASS2(ASunWukong, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_ASunWukong_NoRegister) \
	DECLARE_SERIALIZER(ASunWukong) \
	virtual UObject* _getUObject() const override { return const_cast<ASunWukong*>(this); }


#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASunWukong(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASunWukong(ASunWukong&&) = delete; \
	ASunWukong(const ASunWukong&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASunWukong); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASunWukong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASunWukong) \
	NO_API virtual ~ASunWukong();


#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h_18_PROLOG
#define FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h_21_INCLASS_NO_PURE_DECLS \
	FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASunWukong;

// ********** End Class ASunWukong *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Volumes_Data_Journey_To_The_West_UE_MyProject_Source_MyProject_Public_Character_Wukong_SunWukong_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
