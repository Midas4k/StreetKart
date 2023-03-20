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
	STREETKART_API UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStruct();
	UPackage* Z_Construct_UPackage__Script_streetKart();
	STREETKART_API UScriptStruct* Z_Construct_UScriptStruct_FWheelStruct();
	STREETKART_API UScriptStruct* Z_Construct_UScriptStruct_FEngineStruct();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	STREETKART_API UEnum* Z_Construct_UEnum_streetKart_EDriveType_Enum();
	STREETKART_API UClass* Z_Construct_UClass_AMasterVehicle_NoRegister();
	STREETKART_API UClass* Z_Construct_UClass_AMasterVehicle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SuspensionStruct;
class UScriptStruct* FSuspensionStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SuspensionStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SuspensionStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSuspensionStruct, Z_Construct_UPackage__Script_streetKart(), TEXT("SuspensionStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SuspensionStruct.OuterSingleton;
}
template<> STREETKART_API UScriptStruct* StaticStruct<FSuspensionStruct>()
{
	return FSuspensionStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSuspensionStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Travel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Travel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damper_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSuspensionStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_RestLength_MetaData[] = {
		{ "Category", "SuspensionStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_RestLength = { "RestLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStruct, RestLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_RestLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_RestLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Travel_MetaData[] = {
		{ "Category", "SuspensionStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Travel = { "Travel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStruct, Travel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Travel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Travel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "SuspensionStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStruct, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Damper_MetaData[] = {
		{ "Category", "SuspensionStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Damper = { "Damper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStruct, Damper), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Damper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Damper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_ForceMin_MetaData[] = {
		{ "Category", "SuspensionStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_ForceMin = { "ForceMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStruct, ForceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_ForceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_ForceMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_ForceMax_MetaData[] = {
		{ "Category", "SuspensionStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_ForceMax = { "ForceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStruct, ForceMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_ForceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_ForceMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSuspensionStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_RestLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Travel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_Damper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_ForceMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_ForceMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
		nullptr,
		&NewStructOps,
		"SuspensionStruct",
		sizeof(FSuspensionStruct),
		alignof(FSuspensionStruct),
		Z_Construct_UScriptStruct_FSuspensionStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SuspensionStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SuspensionStruct.InnerSingleton, Z_Construct_UScriptStruct_FSuspensionStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SuspensionStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WheelStruct;
class UScriptStruct* FWheelStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WheelStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WheelStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelStruct, Z_Construct_UPackage__Script_streetKart(), TEXT("WheelStruct"));
	}
	return Z_Registration_Info_UScriptStruct_WheelStruct.OuterSingleton;
}
template<> STREETKART_API UScriptStruct* StaticStruct<FWheelStruct>()
{
	return FWheelStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWheelStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cornering_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cornering_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Long_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Long_Stiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheelStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "WheelStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelStruct, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "WheelStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelStruct, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Cornering_Stiffness_MetaData[] = {
		{ "Category", "WheelStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Cornering_Stiffness = { "Cornering_Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelStruct, Cornering_Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Cornering_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Cornering_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Long_Stiffness_MetaData[] = {
		{ "Category", "WheelStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Long_Stiffness = { "Long_Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelStruct, Long_Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Long_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Long_Stiffness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheelStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Cornering_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_Long_Stiffness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
		nullptr,
		&NewStructOps,
		"WheelStruct",
		sizeof(FWheelStruct),
		alignof(FWheelStruct),
		Z_Construct_UScriptStruct_FWheelStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheelStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_WheelStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WheelStruct.InnerSingleton, Z_Construct_UScriptStruct_FWheelStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WheelStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineStruct;
class UScriptStruct* FEngineStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineStruct, Z_Construct_UPackage__Script_streetKart(), TEXT("EngineStruct"));
	}
	return Z_Registration_Info_UScriptStruct_EngineStruct.OuterSingleton;
}
template<> STREETKART_API UScriptStruct* StaticStruct<FEngineStruct>()
{
	return FEngineStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEngineStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_torque_curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_torque_curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_idle_rpm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_idle_rpm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_rpm_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_max_rpm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inertia_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inertia;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_back_torque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_back_torque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_friction_coeff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_friction_coeff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_friction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_friction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rev_limiter_duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rev_limiter_duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque_curve_MetaData[] = {
		{ "Category", "EngineStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque_curve = { "torque_curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineStruct, torque_curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque_curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque_curve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idle_rpm_MetaData[] = {
		{ "Category", "EngineStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idle_rpm = { "idle_rpm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineStruct, idle_rpm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idle_rpm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idle_rpm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_max_rpm_MetaData[] = {
		{ "Category", "EngineStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_max_rpm = { "max_rpm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineStruct, max_rpm), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_max_rpm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_max_rpm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia_MetaData[] = {
		{ "Category", "EngineStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia = { "inertia", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineStruct, inertia), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_back_torque_MetaData[] = {
		{ "Category", "EngineStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_back_torque = { "back_torque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineStruct, back_torque), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_back_torque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_back_torque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_friction_coeff_MetaData[] = {
		{ "Category", "EngineStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_friction_coeff = { "friction_coeff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineStruct, friction_coeff), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_friction_coeff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_friction_coeff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_friction_MetaData[] = {
		{ "Category", "EngineStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_friction = { "friction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineStruct, friction), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_friction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rev_limiter_duration_MetaData[] = {
		{ "Category", "EngineStruct" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rev_limiter_duration = { "rev_limiter_duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineStruct, rev_limiter_duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rev_limiter_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rev_limiter_duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque_curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idle_rpm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_max_rpm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_back_torque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_friction_coeff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_friction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rev_limiter_duration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
		nullptr,
		&NewStructOps,
		"EngineStruct",
		sizeof(FEngineStruct),
		alignof(FEngineStruct),
		Z_Construct_UScriptStruct_FEngineStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineStruct.InnerSingleton, Z_Construct_UScriptStruct_FEngineStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineStruct.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDriveType_Enum;
	static UEnum* EDriveType_Enum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDriveType_Enum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDriveType_Enum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_streetKart_EDriveType_Enum, Z_Construct_UPackage__Script_streetKart(), TEXT("EDriveType_Enum"));
		}
		return Z_Registration_Info_UEnum_EDriveType_Enum.OuterSingleton;
	}
	template<> STREETKART_API UEnum* StaticEnum<EDriveType_Enum>()
	{
		return EDriveType_Enum_StaticEnum();
	}
	struct Z_Construct_UEnum_streetKart_EDriveType_Enum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_streetKart_EDriveType_Enum_Statics::Enumerators[] = {
		{ "FWD", (int64)FWD },
		{ "RWD", (int64)RWD },
		{ "AWD", (int64)AWD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_streetKart_EDriveType_Enum_Statics::Enum_MetaDataParams[] = {
		{ "AWD.Name", "AWD" },
		{ "FWD.Name", "FWD" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
		{ "RWD.Name", "RWD" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_streetKart_EDriveType_Enum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_streetKart,
		nullptr,
		"EDriveType_Enum",
		"EDriveType_Enum",
		Z_Construct_UEnum_streetKart_EDriveType_Enum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_streetKart_EDriveType_Enum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_streetKart_EDriveType_Enum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_streetKart_EDriveType_Enum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_streetKart_EDriveType_Enum()
	{
		if (!Z_Registration_Info_UEnum_EDriveType_Enum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDriveType_Enum.InnerSingleton, Z_Construct_UEnum_streetKart_EDriveType_Enum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDriveType_Enum.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuspensionStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WheelStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineStruct;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopLinksArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopLinksArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TopLinksArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SusLengths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SusLengths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SusLengths;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WheelMeshs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelMeshs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelMeshs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannelProperty_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannelProperty;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SuspensionStruct_MetaData[] = {
		{ "Category", "MasterVehicle" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SuspensionStruct = { "SuspensionStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, SuspensionStruct), Z_Construct_UScriptStruct_FSuspensionStruct, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SuspensionStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SuspensionStruct_MetaData)) }; // 9971416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelStruct_MetaData[] = {
		{ "Category", "MasterVehicle" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelStruct = { "WheelStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, WheelStruct), Z_Construct_UScriptStruct_FWheelStruct, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelStruct_MetaData)) }; // 1848687279
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_EngineStruct_MetaData[] = {
		{ "Category", "MasterVehicle" },
		{ "Comment", "//Potentially make an Array for more customisation\n" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
		{ "ToolTip", "Potentially make an Array for more customisation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_EngineStruct = { "EngineStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, EngineStruct), Z_Construct_UScriptStruct_FEngineStruct, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_EngineStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_EngineStruct_MetaData)) }; // 3934607330
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "MasterVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "MasterVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Camera_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLinksArray_Inner = { "TopLinksArray", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLinksArray_MetaData[] = {
		{ "Category", "MasterVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLinksArray = { "TopLinksArray", nullptr, (EPropertyFlags)0x002008800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, TopLinksArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLinksArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLinksArray_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SusLengths_Inner = { "SusLengths", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SusLengths_MetaData[] = {
		{ "Category", "MasterVehicle" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SusLengths = { "SusLengths", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, SusLengths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SusLengths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SusLengths_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelMeshs_Inner = { "WheelMeshs", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelMeshs_MetaData[] = {
		{ "Category", "MasterVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelMeshs = { "WheelMeshs", nullptr, (EPropertyFlags)0x002008800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, WheelMeshs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelMeshs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelMeshs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_ForceCurve_MetaData[] = {
		{ "Category", "MasterVehicle" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_ForceCurve = { "ForceCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, ForceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_ForceCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_ForceCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TraceChannelProperty_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Vehicles/MasterVehicle.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TraceChannelProperty = { "TraceChannelProperty", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterVehicle, TraceChannelProperty), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TraceChannelProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TraceChannelProperty_MetaData)) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SuspensionStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_EngineStruct,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLinksArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TopLinksArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SusLengths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_SusLengths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelMeshs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_WheelMeshs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_ForceCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterVehicle_Statics::NewProp_TraceChannelProperty,
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::EnumInfo[] = {
		{ EDriveType_Enum_StaticEnum, TEXT("EDriveType_Enum"), &Z_Registration_Info_UEnum_EDriveType_Enum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1893946961U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::ScriptStructInfo[] = {
		{ FSuspensionStruct::StaticStruct, Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewStructOps, TEXT("SuspensionStruct"), &Z_Registration_Info_UScriptStruct_SuspensionStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSuspensionStruct), 9971416U) },
		{ FWheelStruct::StaticStruct, Z_Construct_UScriptStruct_FWheelStruct_Statics::NewStructOps, TEXT("WheelStruct"), &Z_Registration_Info_UScriptStruct_WheelStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWheelStruct), 1848687279U) },
		{ FEngineStruct::StaticStruct, Z_Construct_UScriptStruct_FEngineStruct_Statics::NewStructOps, TEXT("EngineStruct"), &Z_Registration_Info_UScriptStruct_EngineStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineStruct), 3934607330U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterVehicle, AMasterVehicle::StaticClass, TEXT("AMasterVehicle"), &Z_Registration_Info_UClass_AMasterVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterVehicle), 2469433103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_2034982284(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
