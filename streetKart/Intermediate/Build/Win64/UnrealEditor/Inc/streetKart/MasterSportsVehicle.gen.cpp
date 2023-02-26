// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "streetKart/Vehicles/MasterSportsVehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterSportsVehicle() {}
// Cross Module References
	STREETKART_API UClass* Z_Construct_UClass_AMasterSportsVehicle_NoRegister();
	STREETKART_API UClass* Z_Construct_UClass_AMasterSportsVehicle();
	STREETKART_API UClass* Z_Construct_UClass_AMasterVehicle();
	UPackage* Z_Construct_UPackage__Script_streetKart();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AMasterSportsVehicle::StaticRegisterNativesAMasterSportsVehicle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterSportsVehicle);
	UClass* Z_Construct_UClass_AMasterSportsVehicle_NoRegister()
	{
		return AMasterSportsVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AMasterSportsVehicle_Statics
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
	UObject* (*const Z_Construct_UClass_AMasterSportsVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMasterVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterSportsVehicle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/MasterSportsVehicle.h" },
		{ "ModuleRelativePath", "Vehicles/MasterSportsVehicle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleSpoilerMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterSportsVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleSpoilerMesh = { "VehicleSpoilerMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterSportsVehicle, VehicleSpoilerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleSpoilerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleSpoilerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleIntercoolerMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterSportsVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleIntercoolerMesh = { "VehicleIntercoolerMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterSportsVehicle, VehicleIntercoolerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleIntercoolerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleIntercoolerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleRoofScoopMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterSportsVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleRoofScoopMesh = { "VehicleRoofScoopMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterSportsVehicle, VehicleRoofScoopMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleRoofScoopMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleRoofScoopMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleWindowDecalMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterSportsVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleWindowDecalMesh = { "VehicleWindowDecalMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterSportsVehicle, VehicleWindowDecalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleWindowDecalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleWindowDecalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterSportsVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleSpoilerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleIntercoolerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleRoofScoopMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterSportsVehicle_Statics::NewProp_VehicleWindowDecalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterSportsVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterSportsVehicle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterSportsVehicle_Statics::ClassParams = {
		&AMasterSportsVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMasterSportsVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSportsVehicle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterSportsVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterSportsVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterSportsVehicle()
	{
		if (!Z_Registration_Info_UClass_AMasterSportsVehicle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterSportsVehicle.OuterSingleton, Z_Construct_UClass_AMasterSportsVehicle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterSportsVehicle.OuterSingleton;
	}
	template<> STREETKART_API UClass* StaticClass<AMasterSportsVehicle>()
	{
		return AMasterSportsVehicle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterSportsVehicle);
	struct Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterSportsVehicle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterSportsVehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterSportsVehicle, AMasterSportsVehicle::StaticClass, TEXT("AMasterSportsVehicle"), &Z_Registration_Info_UClass_AMasterSportsVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterSportsVehicle), 4149736299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterSportsVehicle_h_1160404208(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterSportsVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterSportsVehicle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
