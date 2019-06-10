// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALTUTORIALS_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define UNREALTUTORIALS_MyPawn_generated_h

#define unrealTutorials_Source_unrealTutorials_MyPawn_h_13_RPC_WRAPPERS
#define unrealTutorials_Source_unrealTutorials_MyPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define unrealTutorials_Source_unrealTutorials_MyPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealTutorials"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define unrealTutorials_Source_unrealTutorials_MyPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealTutorials"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define unrealTutorials_Source_unrealTutorials_MyPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public:


#define unrealTutorials_Source_unrealTutorials_MyPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn)


#define unrealTutorials_Source_unrealTutorials_MyPawn_h_13_PRIVATE_PROPERTY_OFFSET
#define unrealTutorials_Source_unrealTutorials_MyPawn_h_10_PROLOG
#define unrealTutorials_Source_unrealTutorials_MyPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealTutorials_Source_unrealTutorials_MyPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	unrealTutorials_Source_unrealTutorials_MyPawn_h_13_RPC_WRAPPERS \
	unrealTutorials_Source_unrealTutorials_MyPawn_h_13_INCLASS \
	unrealTutorials_Source_unrealTutorials_MyPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define unrealTutorials_Source_unrealTutorials_MyPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealTutorials_Source_unrealTutorials_MyPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	unrealTutorials_Source_unrealTutorials_MyPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	unrealTutorials_Source_unrealTutorials_MyPawn_h_13_INCLASS_NO_PURE_DECLS \
	unrealTutorials_Source_unrealTutorials_MyPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALTUTORIALS_API UClass* StaticClass<class AMyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID unrealTutorials_Source_unrealTutorials_MyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
