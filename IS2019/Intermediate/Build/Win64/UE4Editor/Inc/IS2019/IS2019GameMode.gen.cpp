// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IS2019/IS2019GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIS2019GameMode() {}
// Cross Module References
	IS2019_API UClass* Z_Construct_UClass_AIS2019GameMode_NoRegister();
	IS2019_API UClass* Z_Construct_UClass_AIS2019GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IS2019();
// End Cross Module References
	void AIS2019GameMode::StaticRegisterNativesAIS2019GameMode()
	{
	}
	UClass* Z_Construct_UClass_AIS2019GameMode_NoRegister()
	{
		return AIS2019GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIS2019GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIS2019GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IS2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIS2019GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IS2019GameMode.h" },
		{ "ModuleRelativePath", "IS2019GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIS2019GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIS2019GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIS2019GameMode_Statics::ClassParams = {
		&AIS2019GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AIS2019GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIS2019GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIS2019GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIS2019GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIS2019GameMode, 401286535);
	template<> IS2019_API UClass* StaticClass<AIS2019GameMode>()
	{
		return AIS2019GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIS2019GameMode(Z_Construct_UClass_AIS2019GameMode, &AIS2019GameMode::StaticClass, TEXT("/Script/IS2019"), TEXT("AIS2019GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIS2019GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
