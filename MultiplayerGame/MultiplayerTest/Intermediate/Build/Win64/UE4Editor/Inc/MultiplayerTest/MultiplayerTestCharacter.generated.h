// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERTEST_MultiplayerTestCharacter_generated_h
#error "MultiplayerTestCharacter.generated.h already included, missing '#pragma once' in MultiplayerTestCharacter.h"
#endif
#define MULTIPLAYERTEST_MultiplayerTestCharacter_generated_h

#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageTaken); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Hit(Z_Param_DamageTaken); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentHealth(Z_Param_healthValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReplicate_CurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReplicate_CurrentHealth(); \
		P_NATIVE_END; \
	}


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageTaken); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Hit(Z_Param_DamageTaken); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentHealth(Z_Param_healthValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReplicate_CurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReplicate_CurrentHealth(); \
		P_NATIVE_END; \
	}


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerTestCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerTest"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerTestCharacter)


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerTestCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerTest"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerTestCharacter)


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerTestCharacter(AMultiplayerTestCharacter&&); \
	NO_API AMultiplayerTestCharacter(const AMultiplayerTestCharacter&); \
public:


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerTestCharacter(AMultiplayerTestCharacter&&); \
	NO_API AMultiplayerTestCharacter(const AMultiplayerTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerTestCharacter)


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMultiplayerTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMultiplayerTestCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(AMultiplayerTestCharacter, maxHealth); } \
	FORCEINLINE static uint32 __PPO__currentHealth() { return STRUCT_OFFSET(AMultiplayerTestCharacter, currentHealth); }


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_9_PROLOG
#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_RPC_WRAPPERS \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_INCLASS \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERTEST_API UClass* StaticClass<class AMultiplayerTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiplayerTest_Source_MultiplayerTest_MultiplayerTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
