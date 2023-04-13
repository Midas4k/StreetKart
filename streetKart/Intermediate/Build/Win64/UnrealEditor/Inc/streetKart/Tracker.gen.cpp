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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATracker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATracker_Statics::ClassParams = {
		&ATracker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ Z_Construct_UClass_ATracker, ATracker::StaticClass, TEXT("ATracker"), &Z_Registration_Info_UClass_ATracker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATracker), 3420147902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Tracker_h_560103141(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Tracker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Tracker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
