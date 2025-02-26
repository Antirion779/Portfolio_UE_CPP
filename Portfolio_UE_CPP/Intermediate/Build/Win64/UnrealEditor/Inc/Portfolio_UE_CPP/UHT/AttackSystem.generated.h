// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttackSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO_UE_CPP_AttackSystem_generated_h
#error "AttackSystem.generated.h already included, missing '#pragma once' in AttackSystem.h"
#endif
#define PORTFOLIO_UE_CPP_AttackSystem_generated_h

#define FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_AttackSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopCombo); \
	DECLARE_FUNCTION(execSwitchSwordAttack); \
	DECLARE_FUNCTION(execSwordAttackCombo); \
	DECLARE_FUNCTION(execSwordAttack); \
	DECLARE_FUNCTION(execAttack);


#define FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_AttackSystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackSystem(); \
	friend struct Z_Construct_UClass_UAttackSystem_Statics; \
public: \
	DECLARE_CLASS(UAttackSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Portfolio_UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(UAttackSystem)


#define FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_AttackSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAttackSystem(UAttackSystem&&); \
	UAttackSystem(const UAttackSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttackSystem) \
	NO_API virtual ~UAttackSystem();


#define FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_AttackSystem_h_14_PROLOG
#define FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_AttackSystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_AttackSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_AttackSystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_AttackSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO_UE_CPP_API UClass* StaticClass<class UAttackSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_AttackSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
