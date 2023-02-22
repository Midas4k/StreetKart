// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "streetKart/Player/CarPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarPlayerController() {}
// Cross Module References
	STREETKART_API UClass* Z_Construct_UClass_ACarPlayerController_NoRegister();
	STREETKART_API UClass* Z_Construct_UClass_ACarPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_streetKart();
// End Cross Module References
	void ACarPlayerController::StaticRegisterNativesACarPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACarPlayerController);
	UClass* Z_Construct_UClass_ACarPlayerController_NoRegister()
	{
		return ACarPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACarPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/CarPlayerController.h" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACarPlayerController_Statics::ClassParams = {
		&ACarPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACarPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACarPlayerController.OuterSingleton, Z_Construct_UClass_ACarPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACarPlayerController.OuterSingleton;
	}
	template<> STREETKART_API UClass* StaticClass<ACarPlayerController>()
	{
		return ACarPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarPlayerController);
	struct Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Player_CarPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Player_CarPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACarPlayerController, ACarPlayerController::StaticClass, TEXT("ACarPlayerController"), &Z_Registration_Info_UClass_ACarPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarPlayerController), 2265878542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Player_CarPlayerController_h_3218082638(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Player_CarPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Player_CarPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
