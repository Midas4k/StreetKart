// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterSuperVehicle.h"

AMasterSuperVehicle::AMasterSuperVehicle()
{
#pragma region  Setting Meshes
	//SETTING DEFAULT HULL MESH
	ConstructorHelpers::FObjectFinder<USkeletalMesh> DefaultMeshSearch(TEXT("/Game/PolygonStreetRacer/Meshes/Vehicles_Rigged/Parts/SK_Veh_Exotic_01"));
	if (DefaultMeshSearch.Succeeded()) VehicleHullMesh->SetSkeletalMesh(DefaultMeshSearch.Object);

	ConstructorHelpers::FObjectFinder<USkeletalMesh> FBumperMeshSearch(TEXT("/Game/PolygonStreetRacer/Meshes/Vehicles_Rigged/Parts/SK_Veh_Exotic_01_Front_Bumper_01"));
	if (FBumperMeshSearch.Succeeded()) VehicleFBumperMesh->SetSkeletalMesh(FBumperMeshSearch.Object);
	
	ConstructorHelpers::FObjectFinder<USkeletalMesh> RBumperMeshSearch(TEXT("/Game/PolygonStreetRacer/Meshes/Vehicles_Rigged/Parts/SK_Veh_Exotic_01_Rear_Bumper_01"));
	if (RBumperMeshSearch.Succeeded()) VehicleRBumperMesh->SetSkeletalMesh(RBumperMeshSearch.Object);

	ConstructorHelpers::FObjectFinder<USkeletalMesh> HoodMeshSearch(TEXT("/Game/PolygonStreetRacer/Meshes/Vehicles_Rigged/Parts/SK_Veh_Exotic_01_Bonnet_01"));
	if (HoodMeshSearch.Succeeded()) VehicleHoodMesh->SetSkeletalMesh(HoodMeshSearch.Object);

	ConstructorHelpers::FObjectFinder<USkeletalMesh> ChassisMeshSearch(TEXT("/Game/PolygonStreetRacer/Meshes/Vehicles_Rigged/Parts/SK_Veh_Exotic_01_Undercarriage_01"));
	if (ChassisMeshSearch.Succeeded()) VehicleChassisMesh->SetSkeletalMesh(ChassisMeshSearch.Object);
	
	VehicleSpoilerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Spoiler"));
	VehicleSpoilerMesh->SetupAttachment(VehicleHullMesh, TEXT("Spoiler_Socket"));
	VehicleSpoilerMesh->bCastDynamicShadow = true;
	ConstructorHelpers::FObjectFinder<USkeletalMesh> SpoilerMeshSearch(TEXT("/Game/PolygonStreetRacer/Meshes/Vehicles_Rigged/Parts/SK_Veh_Exotic_01_Spoiler_02"));
	if (SpoilerMeshSearch.Succeeded()) VehicleSpoilerMesh->SetSkeletalMesh(SpoilerMeshSearch.Object);
	
	VehicleWindowDecalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Window Decal"));
	VehicleWindowDecalMesh->SetupAttachment(VehicleHullMesh, TEXT("WindowDecal_Socket"));
	VehicleWindowDecalMesh->bCastDynamicShadow = true;

	VehicleRoofScoopMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Roof Scoop"));
	VehicleRoofScoopMesh->SetupAttachment(VehicleHullMesh, TEXT("RoofScoop_Socket"));
	VehicleRoofScoopMesh->bCastDynamicShadow = true;
	ConstructorHelpers::FObjectFinder<USkeletalMesh> ScoopMeshSearch(TEXT("/Game/PolygonStreetRacer/Meshes/Vehicles_Rigged/Parts/SK_Veh_Sports_01_Roof_Scoop_01"));
	if (ScoopMeshSearch.Succeeded()) VehicleRoofScoopMesh->SetSkeletalMesh(ScoopMeshSearch.Object);

	Wheel_FL->SetRelativeLocation(FVector{.0f,.0f,-45.0f});
	Wheel_FR->SetRelativeLocation(FVector{.0f,.0f,-45.0f});
	Wheel_RL->SetRelativeLocation(FVector{.0f,.0f,-45.0f});
	Wheel_RR->SetRelativeLocation(FVector{.0f,.0f,-45.0f});

	ConstructorHelpers::FObjectFinder<USkeletalMesh> RimMeshSearch(TEXT("/Game/PolygonStreetRacer/Meshes/Vehicles_Rigged/Parts/SK_Veh_Attach_Wheel_01"));
	if (RimMeshSearch.Succeeded())
	{
		VehicleFLRimMesh->SetSkeletalMesh(RimMeshSearch.Object);
		VehicleFRRimMesh->SetSkeletalMesh(RimMeshSearch.Object);
		VehicleRLRimMesh->SetSkeletalMesh(RimMeshSearch.Object);
		VehicleRRRimMesh->SetSkeletalMesh(RimMeshSearch.Object);
	}

	ConstructorHelpers::FObjectFinder<USkeletalMesh> TyreMeshSearch(TEXT("/Game/PolygonStreetRacer/Meshes/Vehicles_Rigged/Parts/SK_Veh_Attach_Tyre_01"));
	if (TyreMeshSearch.Succeeded())
	{
		VehicleFLTyreMesh->SetSkeletalMesh(TyreMeshSearch.Object);
		VehicleFRTyreMesh->SetSkeletalMesh(TyreMeshSearch.Object);
		VehicleRLTyreMesh->SetSkeletalMesh(TyreMeshSearch.Object);
		VehicleRRTyreMesh->SetSkeletalMesh(TyreMeshSearch.Object);
	}
#pragma endregion  Setting Meshes

#pragma region Struct Values
	SuspensionStruct.RestLength = 45.0f;
	SuspensionStruct.Travel= 10.0f;
	SuspensionStruct.Stiffness = 600.0f;
	SuspensionStruct.Damper = 10.0f;
	SuspensionStruct.ForceMin = -2000.0f;
	SuspensionStruct.ForceMax = 6000.0f;

	WheelStruct.Radius = 40.0f;
	WheelStruct.Mass = 15.0f;
	WheelStruct.Cornering_Stiffness = 1.0f;
	WheelStruct.Long_Stiffness = 1.0f;

	ConstructorHelpers::FObjectFinder<UObject> EngineTorqueSearch(TEXT("/Game/Curves/R32TorqueCurve"));
	if (EngineTorqueSearch.Succeeded()) EngineStruct.torque_curve = Cast<UCurveFloat>(EngineTorqueSearch.Object);
	
#pragma endregion Struct Values

	
	float GearInit[8] = {-2.81f, 0.0f,3.31f, 2.05f, 1.46f, 1.14f, .94f, .78f};
	MainGear = 3.08f;
	GearRatio.Append(GearInit, UE_ARRAY_COUNT(GearInit));
	
}