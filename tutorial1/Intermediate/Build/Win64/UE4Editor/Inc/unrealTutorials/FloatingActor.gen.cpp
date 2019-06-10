// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unrealTutorials/FloatingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingActor() {}
// Cross Module References
	UNREALTUTORIALS_API UClass* Z_Construct_UClass_AFloatingActor_NoRegister();
	UNREALTUTORIALS_API UClass* Z_Construct_UClass_AFloatingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_unrealTutorials();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AFloatingActor::StaticRegisterNativesAFloatingActor()
	{
	}
	UClass* Z_Construct_UClass_AFloatingActor_NoRegister()
	{
		return AFloatingActor::StaticClass();
	}
	struct Z_Construct_UClass_AFloatingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Amplitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloatingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_unrealTutorials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloatingActor.h" },
		{ "ModuleRelativePath", "FloatingActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::NewProp_MovementFrequency_MetaData[] = {
		{ "Category", "FloatingActor" },
		{ "ModuleRelativePath", "FloatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloatingActor_Statics::NewProp_MovementFrequency = { "MovementFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingActor, MovementFrequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::NewProp_MovementFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::NewProp_MovementFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "FloatingActor" },
		{ "ModuleRelativePath", "FloatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloatingActor_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingActor, Amplitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::NewProp_Amplitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::NewProp_Amplitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloatingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor_Statics::NewProp_MovementFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor_Statics::NewProp_Amplitude,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloatingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloatingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloatingActor_Statics::ClassParams = {
		&AFloatingActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloatingActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloatingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloatingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloatingActor, 3918814930);
	template<> UNREALTUTORIALS_API UClass* StaticClass<AFloatingActor>()
	{
		return AFloatingActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloatingActor(Z_Construct_UClass_AFloatingActor, &AFloatingActor::StaticClass, TEXT("/Script/unrealTutorials"), TEXT("AFloatingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
