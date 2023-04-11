// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "streetKart/Vehicles/MasterSedanVehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterSedanVehicle() {}
// Cross Module References
	STREETKART_API UClass* Z_Construct_UClass_AMasterSedanVehicle_NoRegister();
	STREETKART_API UClass* Z_Construct_UClass_AMasterSedanVehicle();
	STREETKART_API UClass* Z_Construct_UClass_AMasterVehicle();
	UPackage* Z_Construct_UPackage__Script_streetKart();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AMasterSedanVehicle::StaticRegisterNativesAMasterSedanVehicle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterSedanVehicle);
	UClass* Z_Construct_UClass_AMasterSedanVehicle_NoRegister()
	{
		return AMasterSedanVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AMasterSedanVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleSpoilerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleSpoilerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleIntercoolerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleIntercoolerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleRoofScoopMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleRoofScoopMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleWindowDecalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleWindowDecalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterSedanVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMasterVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterSedanVehicle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/MasterSedanVehicle.h" },
		{ "ModuleRelativePath", "Vehicles/MasterSedanVehicle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleSpoilerMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterSedanVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleSpoilerMesh = { "VehicleSpoilerMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterSedanVehicle, VehicleSpoilerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleSpoilerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleSpoilerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleIntercoolerMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterSedanVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleIntercoolerMesh = { "VehicleIntercoolerMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterSedanVehicle, VehicleIntercoolerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleIntercoolerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleIntercoolerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleRoofScoopMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterSedanVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleRoofScoopMesh = { "VehicleRoofScoopMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterSedanVehicle, VehicleRoofScoopMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleRoofScoopMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleRoofScoopMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleWindowDecalMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterSedanVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleWindowDecalMesh = { "VehicleWindowDecalMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterSedanVehicle, VehicleWindowDecalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleWindowDecalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleWindowDecalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterSedanVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleSpoilerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleIntercoolerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleRoofScoopMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterSedanVehicle_Statics::NewProp_VehicleWindowDecalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterSedanVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterSedanVehicle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterSedanVehicle_Statics::ClassParams = {
		&AMasterSedanVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMasterSedanVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSedanVehicle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterSedanVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSedanVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterSedanVehicle()
	{
		if (!Z_Registration_Info_UClass_AMasterSedanVehicle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterSedanVehicle.OuterSingleton, Z_Construct_UClass_AMasterSedanVehicle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterSedanVehicle.OuterSingleton;
	}
	template<> STREETKART_API UClass* StaticClass<AMasterSedanVehicle>()
	{
		return AMasterSedanVehicle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterSedanVehicle);
	struct Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterSedanVehicle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterSedanVehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterSedanVehicle, AMasterSedanVehicle::StaticClass, TEXT("AMasterSedanVehicle"), &Z_Registration_Info_UClass_AMasterSedanVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterSedanVehicle), 2094581061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterSedanVehicle_h_3366951198(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterSedanVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterSedanVehicle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
