// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unrealTutorials/unrealTutorialsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeunrealTutorialsGameModeBase() {}
// Cross Module References
	UNREALTUTORIALS_API UClass* Z_Construct_UClass_AunrealTutorialsGameModeBase_NoRegister();
	UNREALTUTORIALS_API UClass* Z_Construct_UClass_AunrealTutorialsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_unrealTutorials();
// End Cross Module References
	void AunrealTutorialsGameModeBase::StaticRegisterNativesAunrealTutorialsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AunrealTutorialsGameModeBase_NoRegister()
	{
		return AunrealTutorialsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AunrealTutorialsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AunrealTutorialsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_unrealTutorials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AunrealTutorialsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "unrealTutorialsGameModeBase.h" },
		{ "ModuleRelativePath", "unrealTutorialsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AunrealTutorialsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AunrealTutorialsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AunrealTutorialsGameModeBase_Statics::ClassParams = {
		&AunrealTutorialsGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AunrealTutorialsGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AunrealTutorialsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AunrealTutorialsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AunrealTutorialsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AunrealTutorialsGameModeBase, 4170715506);
	template<> UNREALTUTORIALS_API UClass* StaticClass<AunrealTutorialsGameModeBase>()
	{
		return AunrealTutorialsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AunrealTutorialsGameModeBase(Z_Construct_UClass_AunrealTutorialsGameModeBase, &AunrealTutorialsGameModeBase::StaticClass, TEXT("/Script/unrealTutorials"), TEXT("AunrealTutorialsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AunrealTutorialsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
