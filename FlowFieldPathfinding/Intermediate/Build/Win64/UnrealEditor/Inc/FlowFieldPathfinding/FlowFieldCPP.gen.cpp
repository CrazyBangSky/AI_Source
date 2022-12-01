// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowFieldPathfinding/Public/FlowFieldCPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowFieldCPP() {}
// Cross Module References
	FLOWFIELDPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FS_Cell();
	UPackage* Z_Construct_UPackage__Script_FlowFieldPathfinding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FLOWFIELDPATHFINDING_API UClass* Z_Construct_UClass_AFlowFieldCPP_NoRegister();
	FLOWFIELDPATHFINDING_API UClass* Z_Construct_UClass_AFlowFieldCPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_Cell;
class UScriptStruct* FS_Cell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_Cell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_Cell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_Cell, Z_Construct_UPackage__Script_FlowFieldPathfinding(), TEXT("S_Cell"));
	}
	return Z_Registration_Info_UScriptStruct_S_Cell.OuterSingleton;
}
template<> FLOWFIELDPATHFINDING_API UScriptStruct* StaticStruct<FS_Cell>()
{
	return FS_Cell::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_Cell_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellGridPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_cellGridPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellWorldPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_cellWorldPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellCost_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_cellCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellBestCost_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_cellBestCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_cellIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_cellDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_cellNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_Cell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_Cell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_Cell>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellGridPos_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellGridPos = { "cellGridPos", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_Cell, cellGridPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellGridPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellGridPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellWorldPos_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellWorldPos = { "cellWorldPos", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_Cell, cellWorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellWorldPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellWorldPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellCost_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellCost = { "cellCost", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_Cell, cellCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellBestCost_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellBestCost = { "cellBestCost", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_Cell, cellBestCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellBestCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellBestCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellIndex_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellIndex = { "cellIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_Cell, cellIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellDir_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellDir = { "cellDir", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_Cell, cellDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellNormal_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellNormal = { "cellNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS_Cell, cellNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_Cell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellGridPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellWorldPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellBestCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Cell_Statics::NewProp_cellNormal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_Cell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlowFieldPathfinding,
		nullptr,
		&NewStructOps,
		"S_Cell",
		sizeof(FS_Cell),
		alignof(FS_Cell),
		Z_Construct_UScriptStruct_FS_Cell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Cell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_Cell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Cell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_Cell()
	{
		if (!Z_Registration_Info_UScriptStruct_S_Cell.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_Cell.InnerSingleton, Z_Construct_UScriptStruct_FS_Cell_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_Cell.InnerSingleton;
	}
	DEFINE_FUNCTION(AFlowFieldCPP::execCheckIfNeigbourClose)
	{
		P_GET_STRUCT(FVector2D,Z_Param_currentPos);
		P_GET_STRUCT(FVector2D,Z_Param_neighbourPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckIfNeigbourClose(Z_Param_currentPos,Z_Param_neighbourPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowFieldCPP::execDebugGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugGrid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowFieldCPP::execCreateGrid)
	{
		P_GET_TARRAY_REF(FS_Cell,Z_Param_Out_GridCells);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGrid(Z_Param_Out_GridCells);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowFieldCPP::execGenerateFlowField)
	{
		P_GET_TARRAY(FS_Cell,Z_Param_GridCells);
		P_GET_STRUCT(FVector,Z_Param_goal);
		P_GET_TMAP_REF(FVector2D,FVector,Z_Param_Out_directionMap);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_goalWorldPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateFlowField(Z_Param_GridCells,Z_Param_goal,Z_Param_Out_directionMap,Z_Param_Out_goalWorldPos);
		P_NATIVE_END;
	}
	void AFlowFieldCPP::StaticRegisterNativesAFlowFieldCPP()
	{
		UClass* Class = AFlowFieldCPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIfNeigbourClose", &AFlowFieldCPP::execCheckIfNeigbourClose },
			{ "CreateGrid", &AFlowFieldCPP::execCreateGrid },
			{ "DebugGrid", &AFlowFieldCPP::execDebugGrid },
			{ "GenerateFlowField", &AFlowFieldCPP::execGenerateFlowField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics
	{
		struct FlowFieldCPP_eventCheckIfNeigbourClose_Parms
		{
			FVector2D currentPos;
			FVector2D neighbourPos;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_neighbourPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_neighbourPos;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_currentPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_currentPos = { "currentPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowFieldCPP_eventCheckIfNeigbourClose_Parms, currentPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_currentPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_currentPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_neighbourPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_neighbourPos = { "neighbourPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowFieldCPP_eventCheckIfNeigbourClose_Parms, neighbourPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_neighbourPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_neighbourPos_MetaData)) };
	void Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowFieldCPP_eventCheckIfNeigbourClose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowFieldCPP_eventCheckIfNeigbourClose_Parms), &Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_currentPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_neighbourPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowFieldCPP, nullptr, "CheckIfNeigbourClose", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::FlowFieldCPP_eventCheckIfNeigbourClose_Parms), Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics
	{
		struct FlowFieldCPP_eventCreateGrid_Parms
		{
			TArray<FS_Cell> GridCells;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridCells_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GridCells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::NewProp_GridCells_Inner = { "GridCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FS_Cell, METADATA_PARAMS(nullptr, 0) }; // 4169964248
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::NewProp_GridCells = { "GridCells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowFieldCPP_eventCreateGrid_Parms, GridCells), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4169964248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::NewProp_GridCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::NewProp_GridCells,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "Creates the Flow Field grid based on the flow field parameters, outputs an array that contains all the grid cells." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowFieldCPP, nullptr, "CreateGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::FlowFieldCPP_eventCreateGrid_Parms), Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowFieldCPP_CreateGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlowFieldCPP_CreateGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowFieldCPP_DebugGrid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowFieldCPP_DebugGrid_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "Creates a debug grid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowFieldCPP_DebugGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowFieldCPP, nullptr, "DebugGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowFieldCPP_DebugGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_DebugGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowFieldCPP_DebugGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlowFieldCPP_DebugGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics
	{
		struct FlowFieldCPP_eventGenerateFlowField_Parms
		{
			TArray<FS_Cell> GridCells;
			FVector goal;
			TMap<FVector2D,FVector> directionMap;
			FVector goalWorldPos;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridCells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GridCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_goal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_goal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_directionMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_directionMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_directionMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_goalWorldPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_GridCells_Inner = { "GridCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FS_Cell, METADATA_PARAMS(nullptr, 0) }; // 4169964248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_GridCells_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_GridCells = { "GridCells", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowFieldCPP_eventGenerateFlowField_Parms, GridCells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_GridCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_GridCells_MetaData)) }; // 4169964248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_goal = { "goal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowFieldCPP_eventGenerateFlowField_Parms, goal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_goal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_goal_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_directionMap_ValueProp = { "directionMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_directionMap_Key_KeyProp = { "directionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_directionMap = { "directionMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowFieldCPP_eventGenerateFlowField_Parms, directionMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_goalWorldPos = { "goalWorldPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowFieldCPP_eventGenerateFlowField_Parms, goalWorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_GridCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_GridCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_goal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_directionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_directionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_directionMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::NewProp_goalWorldPos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "Generates a flow field based on the input Grid Cells Array and an estimate goal World Position, outputs a Map which contains all the cell directions based on a 2D position and an exact goal world position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowFieldCPP, nullptr, "GenerateFlowField", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::FlowFieldCPP_eventGenerateFlowField_Parms), Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlowFieldCPP);
	UClass* Z_Construct_UClass_AFlowFieldCPP_NoRegister()
	{
		return AFlowFieldCPP::StaticClass();
	}
	struct Z_Construct_UClass_AFlowFieldCPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_goalPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_goalPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_showGridInGame_MetaData[];
#endif
		static void NewProp_showGridInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showGridInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_showArrowsInGame_MetaData[];
#endif
		static void NewProp_showArrowsInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showArrowsInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceForObstacles_MetaData[];
#endif
		static void NewProp_traceForObstacles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_traceForObstacles;
		static const UECodeGen_Private::FBytePropertyParams NewProp_obstacleType_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_obstacleType_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_obstacleType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cellRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_alignToGround_MetaData[];
#endif
		static void NewProp_alignToGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_alignToGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_traceHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxWalkableGroundAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxWalkableGroundAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_groundObjectType_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groundObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_groundObjectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xAmount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_xAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yAmount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_yAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_destinationIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_destinationIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DirMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllGridCells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllGridCells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllGridCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshComponentArrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedStaticMeshComponentArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshComponentCell_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedStaticMeshComponentCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshComponentObstacle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedStaticMeshComponentObstacle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllCellsBP_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllCellsBP_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCellsBP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlowFieldCPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowFieldPathfinding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlowFieldCPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlowFieldCPP_CheckIfNeigbourClose, "CheckIfNeigbourClose" }, // 2646944172
		{ &Z_Construct_UFunction_AFlowFieldCPP_CreateGrid, "CreateGrid" }, // 589728143
		{ &Z_Construct_UFunction_AFlowFieldCPP_DebugGrid, "DebugGrid" }, // 2575227967
		{ &Z_Construct_UFunction_AFlowFieldCPP_GenerateFlowField, "GenerateFlowField" }, // 3280660820
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlowFieldCPP.h" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_gridSize_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "The scale of the flow field pathfinding boundary in units" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_gridSize = { "gridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, gridSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_gridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_gridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_cellSize_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "The scale of the cells in units" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_cellSize = { "cellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, cellSize), METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_cellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_cellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_goalPosition_MetaData[] = {
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_goalPosition = { "goalPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, goalPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_goalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_goalPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showGridInGame_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "If True: Shows the debug grid in-game" },
	};
#endif
	void Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showGridInGame_SetBit(void* Obj)
	{
		((AFlowFieldCPP*)Obj)->showGridInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showGridInGame = { "showGridInGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlowFieldCPP), &Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showGridInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showGridInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showGridInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showArrowsInGame_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "If True: Shows the flow field arrows in-game" },
	};
#endif
	void Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showArrowsInGame_SetBit(void* Obj)
	{
		((AFlowFieldCPP*)Obj)->showArrowsInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showArrowsInGame = { "showArrowsInGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlowFieldCPP), &Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showArrowsInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showArrowsInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showArrowsInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceForObstacles_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "If True: When creating the grid it will sphere-trace for any mesh that isnt of the given Ground Object Type" },
	};
#endif
	void Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceForObstacles_SetBit(void* Obj)
	{
		((AFlowFieldCPP*)Obj)->traceForObstacles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceForObstacles = { "traceForObstacles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlowFieldCPP), &Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceForObstacles_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceForObstacles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceForObstacles_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_obstacleType_Inner = { "obstacleType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_obstacleType_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "Type of object the flow field deem as an obstacle" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_obstacleType = { "obstacleType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, obstacleType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_obstacleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_obstacleType_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_cellRadius_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_cellRadius = { "cellRadius", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, cellRadius), METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_cellRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_cellRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_alignToGround_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "DisplayPriority", "7" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "If True: Trace all cells for any given Ground Object Type and aligns it to the ground" },
	};
#endif
	void Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_alignToGround_SetBit(void* Obj)
	{
		((AFlowFieldCPP*)Obj)->alignToGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_alignToGround = { "alignToGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlowFieldCPP), &Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_alignToGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_alignToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_alignToGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceHeight_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "DisplayPriority", "8" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "The height of which the ground trace will start at, in units" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceHeight = { "traceHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, traceHeight), METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_maxWalkableGroundAngle_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "DisplayPriority", "9" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "The max walkable ground angle of which the ground trace will deem as a walkable cell" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_maxWalkableGroundAngle = { "maxWalkableGroundAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, maxWalkableGroundAngle), METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_maxWalkableGroundAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_maxWalkableGroundAngle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_groundObjectType_Inner = { "groundObjectType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_groundObjectType_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
		{ "ToolTip", "Object types that the flow field system will align to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_groundObjectType = { "groundObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, groundObjectType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_groundObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_groundObjectType_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_xAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_xAmount = { "xAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, xAmount), METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_xAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_xAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_yAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_yAmount = { "yAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, yAmount), METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_yAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_yAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_destinationIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_destinationIndex = { "destinationIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, destinationIndex), METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_destinationIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_destinationIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_DirMap_ValueProp = { "DirMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_DirMap_Key_KeyProp = { "DirMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_DirMap_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_DirMap = { "DirMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, DirMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_DirMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_DirMap_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllGridCells_Inner = { "AllGridCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FS_Cell, METADATA_PARAMS(nullptr, 0) }; // 4169964248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllGridCells_MetaData[] = {
		{ "Category", "Flow Field" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllGridCells = { "AllGridCells", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, AllGridCells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllGridCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllGridCells_MetaData)) }; // 4169964248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_box_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_box = { "box", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_box_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentArrow_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentArrow = { "InstancedStaticMeshComponentArrow", nullptr, (EPropertyFlags)0x00100000000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, InstancedStaticMeshComponentArrow), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentArrow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentCell_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentCell = { "InstancedStaticMeshComponentCell", nullptr, (EPropertyFlags)0x00100000000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, InstancedStaticMeshComponentCell), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentCell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentObstacle_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentObstacle = { "InstancedStaticMeshComponentObstacle", nullptr, (EPropertyFlags)0x00100000000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, InstancedStaticMeshComponentObstacle), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentObstacle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentObstacle_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllCellsBP_Inner = { "AllCellsBP", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FS_Cell, METADATA_PARAMS(nullptr, 0) }; // 4169964248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllCellsBP_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowFieldCPP.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllCellsBP = { "AllCellsBP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowFieldCPP, AllCellsBP), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllCellsBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllCellsBP_MetaData)) }; // 4169964248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlowFieldCPP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_gridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_cellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_goalPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showGridInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_showArrowsInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceForObstacles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_obstacleType_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_obstacleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_cellRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_alignToGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_traceHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_maxWalkableGroundAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_groundObjectType_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_groundObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_xAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_yAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_destinationIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_DirMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_DirMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_DirMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllGridCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllGridCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_InstancedStaticMeshComponentObstacle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllCellsBP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowFieldCPP_Statics::NewProp_AllCellsBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlowFieldCPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlowFieldCPP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlowFieldCPP_Statics::ClassParams = {
		&AFlowFieldCPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlowFieldCPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlowFieldCPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowFieldCPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlowFieldCPP()
	{
		if (!Z_Registration_Info_UClass_AFlowFieldCPP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlowFieldCPP.OuterSingleton, Z_Construct_UClass_AFlowFieldCPP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlowFieldCPP.OuterSingleton;
	}
	template<> FLOWFIELDPATHFINDING_API UClass* StaticClass<AFlowFieldCPP>()
	{
		return AFlowFieldCPP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlowFieldCPP);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_Statics::ScriptStructInfo[] = {
		{ FS_Cell::StaticStruct, Z_Construct_UScriptStruct_FS_Cell_Statics::NewStructOps, TEXT("S_Cell"), &Z_Registration_Info_UScriptStruct_S_Cell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_Cell), 4169964248U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlowFieldCPP, AFlowFieldCPP::StaticClass, TEXT("AFlowFieldCPP"), &Z_Registration_Info_UClass_AFlowFieldCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlowFieldCPP), 4071016893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_1973003959(TEXT("/Script/FlowFieldPathfinding"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
