// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWheeledVehicleMovementComponent;
struct FWheelSetupBP;
#ifdef DRIVE_TireLib_generated_h
#error "TireLib.generated.h already included, missing '#pragma once' in TireLib.h"
#endif
#define DRIVE_TireLib_generated_h

#define Drive_Source_Drive_TireLib_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWheelSetupBP_Statics; \
	DRIVE_API static class UScriptStruct* StaticStruct();


template<> DRIVE_API UScriptStruct* StaticStruct<struct FWheelSetupBP>();

#define Drive_Source_Drive_TireLib_h_41_SPARSE_DATA
#define Drive_Source_Drive_TireLib_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execmodifyTyreConfig);


#define Drive_Source_Drive_TireLib_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execmodifyTyreConfig);


#define Drive_Source_Drive_TireLib_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTireLib(); \
	friend struct Z_Construct_UClass_UTireLib_Statics; \
public: \
	DECLARE_CLASS(UTireLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Drive"), NO_API) \
	DECLARE_SERIALIZER(UTireLib)


#define Drive_Source_Drive_TireLib_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUTireLib(); \
	friend struct Z_Construct_UClass_UTireLib_Statics; \
public: \
	DECLARE_CLASS(UTireLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Drive"), NO_API) \
	DECLARE_SERIALIZER(UTireLib)


#define Drive_Source_Drive_TireLib_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTireLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTireLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTireLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTireLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTireLib(UTireLib&&); \
	NO_API UTireLib(const UTireLib&); \
public:


#define Drive_Source_Drive_TireLib_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTireLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTireLib(UTireLib&&); \
	NO_API UTireLib(const UTireLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTireLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTireLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTireLib)


#define Drive_Source_Drive_TireLib_h_41_PRIVATE_PROPERTY_OFFSET
#define Drive_Source_Drive_TireLib_h_38_PROLOG
#define Drive_Source_Drive_TireLib_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Drive_Source_Drive_TireLib_h_41_PRIVATE_PROPERTY_OFFSET \
	Drive_Source_Drive_TireLib_h_41_SPARSE_DATA \
	Drive_Source_Drive_TireLib_h_41_RPC_WRAPPERS \
	Drive_Source_Drive_TireLib_h_41_INCLASS \
	Drive_Source_Drive_TireLib_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Drive_Source_Drive_TireLib_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Drive_Source_Drive_TireLib_h_41_PRIVATE_PROPERTY_OFFSET \
	Drive_Source_Drive_TireLib_h_41_SPARSE_DATA \
	Drive_Source_Drive_TireLib_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Drive_Source_Drive_TireLib_h_41_INCLASS_NO_PURE_DECLS \
	Drive_Source_Drive_TireLib_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRIVE_API UClass* StaticClass<class UTireLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Drive_Source_Drive_TireLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
