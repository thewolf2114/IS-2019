// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IS2019_PlanningAgent_generated_h
#error "PlanningAgent.generated.h already included, missing '#pragma once' in PlanningAgent.h"
#endif
#define IS2019_PlanningAgent_generated_h

#define IS2019_Source_IS2019_PlanningAgent_h_15_RPC_WRAPPERS
#define IS2019_Source_IS2019_PlanningAgent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define IS2019_Source_IS2019_PlanningAgent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlanningAgent(); \
	friend struct Z_Construct_UClass_APlanningAgent_Statics; \
public: \
	DECLARE_CLASS(APlanningAgent, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IS2019"), NO_API) \
	DECLARE_SERIALIZER(APlanningAgent)


#define IS2019_Source_IS2019_PlanningAgent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlanningAgent(); \
	friend struct Z_Construct_UClass_APlanningAgent_Statics; \
public: \
	DECLARE_CLASS(APlanningAgent, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IS2019"), NO_API) \
	DECLARE_SERIALIZER(APlanningAgent)


#define IS2019_Source_IS2019_PlanningAgent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlanningAgent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlanningAgent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlanningAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanningAgent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlanningAgent(APlanningAgent&&); \
	NO_API APlanningAgent(const APlanningAgent&); \
public:


#define IS2019_Source_IS2019_PlanningAgent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlanningAgent(APlanningAgent&&); \
	NO_API APlanningAgent(const APlanningAgent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlanningAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanningAgent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlanningAgent)


#define IS2019_Source_IS2019_PlanningAgent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_enemyClass() { return STRUCT_OFFSET(APlanningAgent, m_enemyClass); }


#define IS2019_Source_IS2019_PlanningAgent_h_12_PROLOG
#define IS2019_Source_IS2019_PlanningAgent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IS2019_Source_IS2019_PlanningAgent_h_15_PRIVATE_PROPERTY_OFFSET \
	IS2019_Source_IS2019_PlanningAgent_h_15_RPC_WRAPPERS \
	IS2019_Source_IS2019_PlanningAgent_h_15_INCLASS \
	IS2019_Source_IS2019_PlanningAgent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IS2019_Source_IS2019_PlanningAgent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IS2019_Source_IS2019_PlanningAgent_h_15_PRIVATE_PROPERTY_OFFSET \
	IS2019_Source_IS2019_PlanningAgent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	IS2019_Source_IS2019_PlanningAgent_h_15_INCLASS_NO_PURE_DECLS \
	IS2019_Source_IS2019_PlanningAgent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IS2019_API UClass* StaticClass<class APlanningAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IS2019_Source_IS2019_PlanningAgent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
