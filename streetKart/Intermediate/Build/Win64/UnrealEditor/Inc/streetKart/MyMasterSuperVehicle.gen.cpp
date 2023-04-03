// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "streetKart/Vehicles/MyMasterSuperVehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMasterSuperVehicle() {}
// Cross Module References
	STREETKART_API UClass* Z_Construct_UClass_AMyMasterSuperVehicle_NoRegister();
	STREETKART_API UClass* Z_Construct_UClass_AMyMasterSuperVehicle();
	STREETKART_API UClass* Z_Construct_UClass_AMasterVehicle();
	UPackage* Z_Construct_UPackage__Script_streetKart();
// End Cross Module References
	void AMyMasterSuperVehicle::StaticRegisterNativesAMyMasterSuperVehicle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMasterSuperVehicle);
	UClass* Z_Construct_UClass_AMyMasterSuperVehicle_NoRegister()
	{
		return AMyMasterSuperVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AMyMasterSuperVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMasterSuperVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMasterVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMasterSuperVehicle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/MyMasterSuperVehicle.h" },
		{ "ModuleRelativePath", "Vehicles/MyMasterSuperVehicle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMasterSuperVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMasterSuperVehicle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMasterSuperVehicle_Statics::ClassParams = {
		&AMyMasterSuperVehicle::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyMasterSuperVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMasterSuperVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMasterSuperVehicle()
	{
		if (!Z_Registration_Info_UClass_AMyMasterSuperVehicle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMasterSuperVehicle.OuterSingleton, Z_Construct_UClass_AMyMasterSuperVehicle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyMasterSuperVehicle.OuterSingleton;
	}
	template<> STREETKART_API UClass* StaticClass<AMyMasterSuperVehicle>()
	{
		return AMyMasterSuperVehicle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMasterSuperVehicle);
	struct Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MyMasterSuperVehicle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MyMasterSuperVehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyMasterSuperVehicle, AMyMasterSuperVehicle::StaticClass, TEXT("AMyMasterSuperVehicle"), &Z_Registration_Info_UClass_AMyMasterSuperVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMasterSuperVehicle), 3550825883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MyMasterSuperVehicle_h_2215550902(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MyMasterSuperVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MyMasterSuperVehicle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
