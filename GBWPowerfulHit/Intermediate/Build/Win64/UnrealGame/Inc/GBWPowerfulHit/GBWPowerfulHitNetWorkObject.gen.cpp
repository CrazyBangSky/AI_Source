// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBWPowerfulHitNetWorkObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWPowerfulHitNetWorkObject() {}
// Cross Module References
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHit();
	GBWPOWERFULHIT_API UScriptStruct* Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet();
// End Cross Module References
	void UGBWPowerfulHitNetWorkObject::StaticRegisterNativesUGBWPowerfulHitNetWorkObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPowerfulHitNetWorkObject);
	UClass* Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_NoRegister()
	{
		return UGBWPowerfulHitNetWorkObject::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::Class_MetaDataParams[] = {
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
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UGBWPowerfulHitNetWorkObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPowerfulHitNetWorkObject.OuterSingleton, Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPowerfulHitNetWorkObject.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPowerfulHitNetWorkObject>()
	{
		return UGBWPowerfulHitNetWorkObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPowerfulHitNetWorkObject);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet;
class UScriptStruct* FGBWPowerfulHitFeatureSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet, Z_Construct_UPackage__Script_GBWPowerfulHit(), TEXT("GBWPowerfulHitFeatureSet"));
	}
	return Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.OuterSingleton;
}
template<> GBWPOWERFULHIT_API UScriptStruct* StaticStruct<FGBWPowerfulHitFeatureSet>()
{
	return FGBWPowerfulHitFeatureSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureSet_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FeatureSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FeatureSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::Struct_MetaDataParams[] = {
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner_MetaData[] = {
		{ "Category", "FeatureSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner = { "FeatureSet", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGBWPowerfulHitNetWorkObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_MetaData[] = {
		{ "Category", "FeatureSet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitNetWorkObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet = { "FeatureSet", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBWPowerfulHitFeatureSet, FeatureSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewProp_FeatureSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.InnerSingleton, Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ScriptStructInfo[] = {
		{ FGBWPowerfulHitFeatureSet::StaticStruct, Z_Construct_UScriptStruct_FGBWPowerfulHitFeatureSet_Statics::NewStructOps, TEXT("GBWPowerfulHitFeatureSet"), &Z_Registration_Info_UScriptStruct_GBWPowerfulHitFeatureSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGBWPowerfulHitFeatureSet), 3510322579U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBWPowerfulHitNetWorkObject, UGBWPowerfulHitNetWorkObject::StaticClass, TEXT("UGBWPowerfulHitNetWorkObject"), &Z_Registration_Info_UClass_UGBWPowerfulHitNetWorkObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPowerfulHitNetWorkObject), 4230011697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_3260934940(TEXT("/Script/GBWPowerfulHit"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitNetWorkObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
