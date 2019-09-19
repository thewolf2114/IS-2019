// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IS2019/EnemyAgent1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAgent1() {}
// Cross Module References
	IS2019_API UClass* Z_Construct_UClass_AEnemyAgent1_NoRegister();
	IS2019_API UClass* Z_Construct_UClass_AEnemyAgent1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_IS2019();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemyAgent1::StaticRegisterNativesAEnemyAgent1()
	{
	}
	UClass* Z_Construct_UClass_AEnemyAgent1_NoRegister()
	{
		return AEnemyAgent1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyAgent1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_staticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_staticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyAgent1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IS2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAgent1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyAgent1.h" },
		{ "ModuleRelativePath", "EnemyAgent1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_staticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyAgent1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_staticMesh = { "m_staticMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAgent1, m_staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_staticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_staticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyAgent1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAgent1_Statics::NewProp_m_staticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyAgent1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAgent1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAgent1_Statics::ClassParams = {
		&AEnemyAgent1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyAgent1_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AEnemyAgent1_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyAgent1_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemyAgent1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyAgent1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyAgent1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyAgent1, 1952055453);
	template<> IS2019_API UClass* StaticClass<AEnemyAgent1>()
	{
		return AEnemyAgent1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyAgent1(Z_Construct_UClass_AEnemyAgent1, &AEnemyAgent1::StaticClass, TEXT("/Script/IS2019"), TEXT("AEnemyAgent1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAgent1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
