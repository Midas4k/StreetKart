// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "streetKart/Gamemodes/RacingGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRacingGameModeBase() {}
// Cross Module References
	STREETKART_API UClass* Z_Construct_UClass_ARacingGameModeBase_NoRegister();
	STREETKART_API UClass* Z_Construct_UClass_ARacingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_streetKart();
// End Cross Module References
	void ARacingGameModeBase::StaticRegisterNativesARacingGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARacingGameModeBase);
	UClass* Z_Construct_UClass_ARacingGameModeBase_NoRegister()
	{
		return ARacingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARacingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARacingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARacingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemodes/RacingGameModeBase.h" },
		{ "ModuleRelativePath", "Gamemodes/RacingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARacingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARacingGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARacingGameModeBase_Statics::ClassParams = {
		&ARacingGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARacingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARacingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARacingGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARacingGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARacingGameModeBase.OuterSingleton, Z_Construct_UClass_ARacingGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARacingGameModeBase.OuterSingleton;
	}
	template<> STREETKART_API UClass* StaticClass<ARacingGameModeBase>()
	{
		return ARacingGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARacingGameModeBase);
	struct Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Gamemodes_RacingGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Gamemodes_RacingGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARacingGameModeBase, ARacingGameModeBase::StaticClass, TEXT("ARacingGameModeBase"), &Z_Registration_Info_UClass_ARacingGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARacingGameModeBase), 2976512227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Gamemodes_RacingGameModeBase_h_3255019860(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Gamemodes_RacingGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Gamemodes_RacingGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
