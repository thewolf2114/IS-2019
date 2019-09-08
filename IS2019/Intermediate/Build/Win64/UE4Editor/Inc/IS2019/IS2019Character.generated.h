// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IS2019_IS2019Character_generated_h
#error "IS2019Character.generated.h already included, missing '#pragma once' in IS2019Character.h"
#endif
#define IS2019_IS2019Character_generated_h

#define IS2019_Source_IS2019_IS2019Character_h_14_RPC_WRAPPERS
#define IS2019_Source_IS2019_IS2019Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define IS2019_Source_IS2019_IS2019Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIS2019Character(); \
	friend struct Z_Construct_UClass_AIS2019Character_Statics; \
public: \
	DECLARE_CLASS(AIS2019Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IS2019"), NO_API) \
	DECLARE_SERIALIZER(AIS2019Character)


#define IS2019_Source_IS2019_IS2019Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAIS2019Character(); \
	friend struct Z_Construct_UClass_AIS2019Character_Statics; \
public: \
	DECLARE_CLASS(AIS2019Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IS2019"), NO_API) \
	DECLARE_SERIALIZER(AIS2019Character)


#define IS2019_Source_IS2019_IS2019Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIS2019Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIS2019Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIS2019Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIS2019Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIS2019Character(AIS2019Character&&); \
	NO_API AIS2019Character(const AIS2019Character&); \
public:


#define IS2019_Source_IS2019_IS2019Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIS2019Character(AIS2019Character&&); \
	NO_API AIS2019Character(const AIS2019Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIS2019Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIS2019Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIS2019Character)


#define IS2019_Source_IS2019_IS2019Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AIS2019Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AIS2019Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AIS2019Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AIS2019Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AIS2019Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AIS2019Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AIS2019Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AIS2019Character, L_MotionController); }


#define IS2019_Source_IS2019_IS2019Character_h_11_PROLOG
#define IS2019_Source_IS2019_IS2019Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IS2019_Source_IS2019_IS2019Character_h_14_PRIVATE_PROPERTY_OFFSET \
	IS2019_Source_IS2019_IS2019Character_h_14_RPC_WRAPPERS \
	IS2019_Source_IS2019_IS2019Character_h_14_INCLASS \
	IS2019_Source_IS2019_IS2019Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IS2019_Source_IS2019_IS2019Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IS2019_Source_IS2019_IS2019Character_h_14_PRIVATE_PROPERTY_OFFSET \
	IS2019_Source_IS2019_IS2019Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	IS2019_Source_IS2019_IS2019Character_h_14_INCLASS_NO_PURE_DECLS \
	IS2019_Source_IS2019_IS2019Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IS2019_API UClass* StaticClass<class AIS2019Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IS2019_Source_IS2019_IS2019Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
