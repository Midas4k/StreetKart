// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "streetKart/Vehicles/MasterVehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterVehicle() {}
// Cross Module References
	STREETKART_API UClass* Z_Construct_UClass_AMasterVehicle_NoRegister();
	STREETKART_API UClass* Z_Construct_UClass_AMasterVehicle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_streetKart();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AMasterVehicle::StaticRegisterNativesAMasterVehicle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterVehicle);
	UClass* Z_Construct_UClass_AMasterVehicle_NoRegister()
	{
		return AMasterVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AMasterVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleHullMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleHullMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleHoodMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleHoodMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleChassisMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleChassisMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleSkirtMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleSkirtMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleFBumperMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleFBumperMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleRBumperMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleRBumperMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleFenderMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleFenderMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopLink_FL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopLink_FL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopLink_FR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopLink_FR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopLink_RL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopLink_RL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopLink_RR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopLink_RR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wheel_FL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wheel_FL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wheel_FR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wheel_FR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wheel_RL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wheel_RL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wheel_RR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wheel_RR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleFLRimMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleFLRimMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleFRRimMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleFRRimMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleRLRimMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleRLRimMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleRRRimMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleRRRimMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleFLTyreMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleFLTyreMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleFRTyreMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleFRTyreMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleRLTyreMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleRLTyreMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleRRTyreMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleRRTyreMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/MasterVehicle.h" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRoot_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRoot = { "VehicleRoot", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleHullMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleHullMesh = { "VehicleHullMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleHullMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleHullMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleHullMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleHoodMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleHoodMesh = { "VehicleHoodMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleHoodMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleHoodMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleHoodMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleChassisMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleChassisMesh = { "VehicleChassisMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleChassisMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleChassisMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleChassisMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleSkirtMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleSkirtMesh = { "VehicleSkirtMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleSkirtMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleSkirtMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleSkirtMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFBumperMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFBumperMesh = { "VehicleFBumperMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleFBumperMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFBumperMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFBumperMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRBumperMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRBumperMesh = { "VehicleRBumperMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleRBumperMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRBumperMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRBumperMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFenderMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFenderMesh = { "VehicleFenderMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleFenderMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFenderMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFenderMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_FL_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_FL = { "TopLink_FL", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, TopLink_FL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_FL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_FL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_FR_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_FR = { "TopLink_FR", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, TopLink_FR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_FR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_FR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_RL_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_RL = { "TopLink_RL", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, TopLink_RL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_RL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_RL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_RR_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_RR = { "TopLink_RR", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, TopLink_RR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_RR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_RR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_FL_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_FL = { "Wheel_FL", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, Wheel_FL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_FL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_FL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_FR_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_FR = { "Wheel_FR", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, Wheel_FR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_FR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_FR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_RL_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_RL = { "Wheel_RL", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, Wheel_RL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_RL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_RL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_RR_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_RR = { "Wheel_RR", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, Wheel_RR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_RR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_RR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFLRimMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFLRimMesh = { "VehicleFLRimMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleFLRimMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFLRimMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFLRimMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFRRimMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFRRimMesh = { "VehicleFRRimMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleFRRimMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFRRimMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFRRimMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRLRimMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRLRimMesh = { "VehicleRLRimMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleRLRimMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRLRimMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRLRimMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRRRimMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRRRimMesh = { "VehicleRRRimMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleRRRimMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRRRimMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRRRimMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFLTyreMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFLTyreMesh = { "VehicleFLTyreMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleFLTyreMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFLTyreMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFLTyreMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFRTyreMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFRTyreMesh = { "VehicleFRTyreMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleFRTyreMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFRTyreMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFRTyreMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRLTyreMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRLTyreMesh = { "VehicleRLTyreMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleRLTyreMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRLTyreMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRLTyreMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRRTyreMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRRTyreMesh = { "VehicleRRTyreMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, VehicleRRTyreMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRRTyreMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRRTyreMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleHullMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleHoodMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleChassisMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleSkirtMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFBumperMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRBumperMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFenderMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_FL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_FR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_RL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLink_RR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_FL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_FR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_RL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Wheel_RR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFLRimMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFRRimMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRLRimMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRRRimMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFLTyreMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleFRTyreMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRLTyreMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_VehicleRRTyreMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterVehicle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterVehicle_Statics::ClassParams = {
		&AMasterVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMasterVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterVehicle()
	{
		if (!Z_Registration_Info_UClass_AMasterVehicle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterVehicle.OuterSingleton, Z_Construct_UClass_AMasterVehicle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterVehicle.OuterSingleton;
	}
	template<> STREETKART_API UClass* StaticClass<AMasterVehicle>()
	{
		return AMasterVehicle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterVehicle);
	struct Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterVehicle, AMasterVehicle::StaticClass, TEXT("AMasterVehicle"), &Z_Registration_Info_UClass_AMasterVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterVehicle), 1989653353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_2719187046(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
