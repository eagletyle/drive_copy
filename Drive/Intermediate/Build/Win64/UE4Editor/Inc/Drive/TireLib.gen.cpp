// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drive/TireLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTireLib() {}
// Cross Module References
	DRIVE_API UScriptStruct* Z_Construct_UScriptStruct_FWheelSetupBP();
	UPackage* Z_Construct_UPackage__Script_Drive();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel_NoRegister();
	DRIVE_API UClass* Z_Construct_UClass_UTireLib_NoRegister();
	DRIVE_API UClass* Z_Construct_UClass_UTireLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FWheelSetupBP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DRIVE_API uint32 Get_Z_Construct_UScriptStruct_FWheelSetupBP_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelSetupBP, Z_Construct_UPackage__Script_Drive(), TEXT("WheelSetupBP"), sizeof(FWheelSetupBP), Get_Z_Construct_UScriptStruct_FWheelSetupBP_Hash());
	}
	return Singleton;
}
template<> DRIVE_API UScriptStruct* StaticStruct<FWheelSetupBP>()
{
	return FWheelSetupBP::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheelSetupBP(FWheelSetupBP::StaticStruct, TEXT("/Script/Drive"), TEXT("WheelSetupBP"), false, nullptr, nullptr);
static struct FScriptStruct_Drive_StaticRegisterNativesFWheelSetupBP
{
	FScriptStruct_Drive_StaticRegisterNativesFWheelSetupBP()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WheelSetupBP")),new UScriptStruct::TCppStructOps<FWheelSetupBP>);
	}
} ScriptStruct_Drive_StaticRegisterNativesFWheelSetupBP;
	struct Z_Construct_UScriptStruct_FWheelSetupBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableSteering_MetaData[];
#endif
		static void NewProp_bDisableSteering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableSteering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WheelClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSetupBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TireLib.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelSetupBP>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_bDisableSteering_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// Disables steering regardless of the wheel data\n" },
		{ "ModuleRelativePath", "TireLib.h" },
		{ "ToolTip", "Disables steering regardless of the wheel data" },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_bDisableSteering_SetBit(void* Obj)
	{
		((FWheelSetupBP*)Obj)->bDisableSteering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_bDisableSteering = { "bDisableSteering", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWheelSetupBP), &Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_bDisableSteering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_bDisableSteering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_bDisableSteering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_AdditionalOffset_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// Additional offset to give the wheels for this axle.\n" },
		{ "ModuleRelativePath", "TireLib.h" },
		{ "ToolTip", "Additional offset to give the wheels for this axle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_AdditionalOffset = { "AdditionalOffset", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSetupBP, AdditionalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_AdditionalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_AdditionalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// Bone name on mesh to create wheel at\n" },
		{ "ModuleRelativePath", "TireLib.h" },
		{ "ToolTip", "Bone name on mesh to create wheel at" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSetupBP, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_WheelClass_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// The wheel class to use\n" },
		{ "ModuleRelativePath", "TireLib.h" },
		{ "ToolTip", "The wheel class to use" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_WheelClass = { "WheelClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSetupBP, WheelClass), Z_Construct_UClass_UVehicleWheel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_WheelClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_WheelClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheelSetupBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_bDisableSteering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_AdditionalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSetupBP_Statics::NewProp_WheelClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelSetupBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Drive,
		nullptr,
		&NewStructOps,
		"WheelSetupBP",
		sizeof(FWheelSetupBP),
		alignof(FWheelSetupBP),
		Z_Construct_UScriptStruct_FWheelSetupBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSetupBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheelSetupBP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWheelSetupBP_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Drive();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WheelSetupBP"), sizeof(FWheelSetupBP), Get_Z_Construct_UScriptStruct_FWheelSetupBP_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWheelSetupBP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheelSetupBP_Hash() { return 982861037U; }
	DEFINE_FUNCTION(UTireLib::execmodifyTyreConfig)
	{
		P_GET_OBJECT(UWheeledVehicleMovementComponent,Z_Param_Component);
		P_GET_TARRAY(FWheelSetupBP,Z_Param_Tyres);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTireLib::modifyTyreConfig(Z_Param_Component,Z_Param_Tyres);
		P_NATIVE_END;
	}
	void UTireLib::StaticRegisterNativesUTireLib()
	{
		UClass* Class = UTireLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "modifyTyreConfig", &UTireLib::execmodifyTyreConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics
	{
		struct TireLib_eventmodifyTyreConfig_Parms
		{
			UWheeledVehicleMovementComponent* Component;
			TArray<FWheelSetupBP> Tyres;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tyres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tyres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::NewProp_Tyres = { "Tyres", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TireLib_eventmodifyTyreConfig_Parms, Tyres), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::NewProp_Tyres_Inner = { "Tyres", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWheelSetupBP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TireLib_eventmodifyTyreConfig_Parms, Component), Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::NewProp_Tyres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::NewProp_Tyres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TireLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTireLib, nullptr, "modifyTyreConfig", nullptr, nullptr, sizeof(TireLib_eventmodifyTyreConfig_Parms), Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTireLib_modifyTyreConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTireLib_modifyTyreConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTireLib_NoRegister()
	{
		return UTireLib::StaticClass();
	}
	struct Z_Construct_UClass_UTireLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTireLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Drive,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTireLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTireLib_modifyTyreConfig, "modifyTyreConfig" }, // 3547804820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTireLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "TireLib.h" },
		{ "ModuleRelativePath", "TireLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTireLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTireLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTireLib_Statics::ClassParams = {
		&UTireLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTireLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTireLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTireLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTireLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTireLib, 2891984138);
	template<> DRIVE_API UClass* StaticClass<UTireLib>()
	{
		return UTireLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTireLib(Z_Construct_UClass_UTireLib, &UTireLib::StaticClass, TEXT("/Script/Drive"), TEXT("UTireLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTireLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
