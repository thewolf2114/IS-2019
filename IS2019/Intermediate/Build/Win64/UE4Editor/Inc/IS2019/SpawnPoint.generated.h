// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IS2019_SpawnPoint_generated_h
#error "SpawnPoint.generated.h already included, missing '#pragma once' in SpawnPoint.h"
#endif
#define IS2019_SpawnPoint_generated_h

#define IS2019_Source_IS2019_SpawnPoint_h_12_RPC_WRAPPERS
#define IS2019_Source_IS2019_SpawnPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define IS2019_Source_IS2019_SpawnPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnPoint(); \
	friend struct Z_Construct_UClass_ASpawnPoint_Statics; \
public: \
	DECLARE_CLASS(ASpawnPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IS2019"), NO_API) \
	DECLARE_SERIALIZER(ASpawnPoint)


#define IS2019_Source_IS2019_SpawnPoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawnPoint(); \
	friend struct Z_Construct_UClass_ASpawnPoint_Statics; \
public: \
	DECLARE_CLASS(ASpawnPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IS2019"), NO_API) \
	DECLARE_SERIALIZER(ASpawnPoint)


#define IS2019_Source_IS2019_SpawnPoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnPoint(ASpawnPoint&&); \
	NO_API ASpawnPoint(const ASpawnPoint&); \
public:


#define IS2019_Source_IS2019_SpawnPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnPoint(ASpawnPoint&&); \
	NO_API ASpawnPoint(const ASpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnPoint)


#define IS2019_Source_IS2019_SpawnPoint_h_12_PRIVATE_PROPERTY_OFFSET
#define IS2019_Source_IS2019_SpawnPoint_h_9_PROLOG
#define IS2019_Source_IS2019_SpawnPoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IS2019_Source_IS2019_SpawnPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	IS2019_Source_IS2019_SpawnPoint_h_12_RPC_WRAPPERS \
	IS2019_Source_IS2019_SpawnPoint_h_12_INCLASS \
	IS2019_Source_IS2019_SpawnPoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IS2019_Source_IS2019_SpawnPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IS2019_Source_IS2019_SpawnPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	IS2019_Source_IS2019_SpawnPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	IS2019_Source_IS2019_SpawnPoint_h_12_INCLASS_NO_PURE_DECLS \
	IS2019_Source_IS2019_SpawnPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IS2019_API UClass* StaticClass<class ASpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IS2019_Source_IS2019_SpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
