// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBWPowerfulHitNetWorkObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWPowerfulHitNetWorkObject() {}
// Cross Module References
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHit();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FGBWPowerfulHitFeatureSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GBWPOWERFULHIT_API uint32 Get_Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet, Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPowerfulHitFeatureSet"), sizeof(FGBWPowerfulHitFeatureSet), Get_Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Hash());
	}
	return Singleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPowerfulHitFeatureSet>()
{
	return FGBWPowerfulHitFeatureSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGBWPowerfulHitFeatureSet(FGBWPowerfulHitFeatureSet::StaticStruct, TEXT("/Script/GBWPowerfulHit"), TEXT("GBWPowerfulHitFeatureSet"), false, nullptr, nullptr);
static struct FScriptStruct_GBWPowerfulHit_StaticRegisterNativesFGBWPowerfulHitFeatureSet
{
	FScriptStruct_GBWPowerfulHit_StaticRegisterNativesFGBWPowerfulHitFeatureSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GBWPowerfulHitFeatureSet")),new UScriptStruct::TCppStructOps<FGBWPowerfulHitFeatureSet>);
	}
} ScriptStruct_GBWPowerfulHit_StaticRegisterNativesFGBWPowerfulHitFeatureSet;
	struct Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeatureSet_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FeatureSet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeatureSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FeatureSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "GBW_PowerfulHitFeatureSet" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGBWPowerfulHitFeatureSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner_MetaData[] = {
		{ "Category", "FeatureSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner = { "FeatureSet", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_MetaData[] = {
		{ "Category", "FeatureSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet = { "FeatureSet", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBWPowerfulHitFeatureSet, FeatureSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
		nullptr,
		&NewStructOps,
		"GBWPowerfulHitFeatureSet",
		sizeof(FGBWPowerfulHitFeatureSet),
		alignof(FGBWPowerfulHitFeatureSet),
		Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GBWPowerfulHit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GBWPowerfulHitFeatureSet"), sizeof(FGBWPowerfulHitFeatureSet), Get_Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Hash() { return 2919830056U; }
	void UGBWPowerfulHitNetWorkObject::StaticRegisterNativesUGBWPowerfulHitNetWorkObject()
	{
	}
	UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_NoRegister()
	{
		return UGBWPowerfulHitNetWorkObject::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "GBW_PowerfulHitNetWorkObject" },
		{ "IncludePath", "GBWPowerfulHitNetWorkObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPowerfulHitNetWorkObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::ClassParams = {
		&UGBWPowerfulHitNetWorkObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGBWPowerfulHitNetWorkObject, 2781519128);
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPowerfulHitNetWorkObject>()
	{
		return UGBWPowerfulHitNetWorkObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGBWPowerfulHitNetWorkObject(Z_Construct_UClass_UGBWPowerfulHitNetWorkObject, &UGBWPowerfulHitNetWorkObject::StaticClass, TEXT("/Script/GBWPowerfulHit"), TEXT("UGBWPowerfulHitNetWorkObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPowerfulHitNetWorkObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
