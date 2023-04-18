// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "streetKart/CheckpointSystem/Tracker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTracker() {}
// Cross Module References
	STREETKART_API UClass* Z_Construct_UClass_ATracker_NoRegister();
	STREETKART_API UClass* Z_Construct_UClass_ATracker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_streetKart();
// End Cross Module References
	void ATracker::StaticRegisterNativesATracker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATracker);
	UClass* Z_Construct_UClass_ATracker_NoRegister()
	{
		return ATracker::StaticClass();
	}
	struct Z_Construct_UClass_ATracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLaps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxLaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SilverTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SilverTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BronzeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BronzeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBestLap_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultBestLap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBestTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultBestTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameOfMap_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NameOfMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalCheckpoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalCheckpoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CheckpointSystem/Tracker.h" },
		{ "ModuleRelativePath", "CheckpointSystem/Tracker.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_MaxLaps_MetaData[] = {
		{ "Category", "Tracker" },
		{ "ModuleRelativePath", "CheckpointSystem/Tracker.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_MaxLaps = { "MaxLaps", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, MaxLaps), METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_MaxLaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_MaxLaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_GoldTime_MetaData[] = {
		{ "Category", "Tracker" },
		{ "ModuleRelativePath", "CheckpointSystem/Tracker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_GoldTime = { "GoldTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, GoldTime), METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_GoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_GoldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_SilverTime_MetaData[] = {
		{ "Category", "Tracker" },
		{ "ModuleRelativePath", "CheckpointSystem/Tracker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_SilverTime = { "SilverTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, SilverTime), METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_SilverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_SilverTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_BronzeTime_MetaData[] = {
		{ "Category", "Tracker" },
		{ "ModuleRelativePath", "CheckpointSystem/Tracker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_BronzeTime = { "BronzeTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, BronzeTime), METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_BronzeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_BronzeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_DefaultBestLap_MetaData[] = {
		{ "Category", "Tracker" },
		{ "ModuleRelativePath", "CheckpointSystem/Tracker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_DefaultBestLap = { "DefaultBestLap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, DefaultBestLap), METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_DefaultBestLap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_DefaultBestLap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_DefaultBestTime_MetaData[] = {
		{ "Category", "Tracker" },
		{ "ModuleRelativePath", "CheckpointSystem/Tracker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_DefaultBestTime = { "DefaultBestTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, DefaultBestTime), METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_DefaultBestTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_DefaultBestTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_NameOfMap_MetaData[] = {
		{ "Category", "Tracker" },
		{ "ModuleRelativePath", "CheckpointSystem/Tracker.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_NameOfMap = { "NameOfMap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, NameOfMap), METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_NameOfMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_NameOfMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_SaveName_MetaData[] = {
		{ "Category", "Tracker" },
		{ "ModuleRelativePath", "CheckpointSystem/Tracker.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, SaveName), METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_SaveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_TotalCheckpoints_MetaData[] = {
		{ "Category", "Tracker" },
		{ "ModuleRelativePath", "CheckpointSystem/Tracker.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_TotalCheckpoints = { "TotalCheckpoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, TotalCheckpoints), METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_TotalCheckpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_TotalCheckpoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATracker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_MaxLaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_GoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_SilverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_BronzeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_DefaultBestLap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_DefaultBestTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_NameOfMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_SaveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_TotalCheckpoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATracker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATracker_Statics::ClassParams = {
		&ATracker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATracker()
	{
		if (!Z_Registration_Info_UClass_ATracker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATracker.OuterSingleton, Z_Construct_UClass_ATracker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATracker.OuterSingleton;
	}
	template<> STREETKART_API UClass* StaticClass<ATracker>()
	{
		return ATracker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATracker);
	struct Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Tracker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Tracker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATracker, ATracker::StaticClass, TEXT("ATracker"), &Z_Registration_Info_UClass_ATracker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATracker), 2976866845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Tracker_h_602842058(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Tracker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Tracker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
