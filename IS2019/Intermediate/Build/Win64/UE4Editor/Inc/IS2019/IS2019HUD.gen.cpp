// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IS2019/IS2019HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIS2019HUD() {}
// Cross Module References
	IS2019_API UClass* Z_Construct_UClass_AIS2019HUD_NoRegister();
	IS2019_API UClass* Z_Construct_UClass_AIS2019HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_IS2019();
// End Cross Module References
	void AIS2019HUD::StaticRegisterNativesAIS2019HUD()
	{
	}
	UClass* Z_Construct_UClass_AIS2019HUD_NoRegister()
	{
		return AIS2019HUD::StaticClass();
	}
	struct Z_Construct_UClass_AIS2019HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIS2019HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_IS2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIS2019HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "IS2019HUD.h" },
		{ "ModuleRelativePath", "IS2019HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIS2019HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIS2019HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIS2019HUD_Statics::ClassParams = {
		&AIS2019HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIS2019HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIS2019HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIS2019HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIS2019HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIS2019HUD, 1207585658);
	template<> IS2019_API UClass* StaticClass<AIS2019HUD>()
	{
		return AIS2019HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIS2019HUD(Z_Construct_UClass_AIS2019HUD, &AIS2019HUD::StaticClass, TEXT("/Script/IS2019"), TEXT("AIS2019HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIS2019HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
