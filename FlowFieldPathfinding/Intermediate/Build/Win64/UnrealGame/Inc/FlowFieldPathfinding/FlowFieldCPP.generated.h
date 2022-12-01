// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_Cell;
 
#ifdef FLOWFIELDPATHFINDING_FlowFieldCPP_generated_h
#error "FlowFieldCPP.generated.h already included, missing '#pragma once' in FlowFieldCPP.h"
#endif
#define FLOWFIELDPATHFINDING_FlowFieldCPP_generated_h

#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_Cell_Statics; \
	FLOWFIELDPATHFINDING_API static class UScriptStruct* StaticStruct();


template<> FLOWFIELDPATHFINDING_API UScriptStruct* StaticStruct<struct FS_Cell>();

#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_SPARSE_DATA
#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckIfNeigbourClose); \
	DECLARE_FUNCTION(execDebugGrid); \
	DECLARE_FUNCTION(execCreateGrid); \
	DECLARE_FUNCTION(execGenerateFlowField);


#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckIfNeigbourClose); \
	DECLARE_FUNCTION(execDebugGrid); \
	DECLARE_FUNCTION(execCreateGrid); \
	DECLARE_FUNCTION(execGenerateFlowField);


#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlowFieldCPP(); \
	friend struct Z_Construct_UClass_AFlowFieldCPP_Statics; \
public: \
	DECLARE_CLASS(AFlowFieldCPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowFieldPathfinding"), NO_API) \
	DECLARE_SERIALIZER(AFlowFieldCPP)


#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAFlowFieldCPP(); \
	friend struct Z_Construct_UClass_AFlowFieldCPP_Statics; \
public: \
	DECLARE_CLASS(AFlowFieldCPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowFieldPathfinding"), NO_API) \
	DECLARE_SERIALIZER(AFlowFieldCPP)


#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlowFieldCPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlowFieldCPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowFieldCPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowFieldCPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowFieldCPP(AFlowFieldCPP&&); \
	NO_API AFlowFieldCPP(const AFlowFieldCPP&); \
public:


#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowFieldCPP(AFlowFieldCPP&&); \
	NO_API AFlowFieldCPP(const AFlowFieldCPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowFieldCPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowFieldCPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlowFieldCPP)


#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_40_PROLOG
#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_SPARSE_DATA \
	FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_RPC_WRAPPERS \
	FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_INCLASS \
	FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_SPARSE_DATA \
	FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWFIELDPATHFINDING_API UClass* StaticClass<class AFlowFieldCPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_FlowFieldPathfinding_Source_FlowFieldPathfinding_Public_FlowFieldCPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
