// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterMuscleVehicle.h"

AMasterMuscleVehicle::AMasterMuscleVehicle()
{
#pragma region Setting Meshes
	//SETTING DEFAULT HULL MESH
	
	
	VehicleSpoilerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Spoiler"));
	VehicleSpoilerMesh->SetupAttachment(VehicleHullMesh, TEXT("Spoiler_Socket"));
	VehicleSpoilerMesh->bCastDynamicShadow = true;
	
	
	VehicleWindowDecalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Window Decal"));
	VehicleWindowDecalMesh->SetupAttachment(VehicleHullMesh, TEXT("WindowDecal_Socket"));
	VehicleWindowDecalMesh->bCastDynamicShadow = true;

	VehicleRoofScoopMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Roof Scoop"));
	VehicleRoofScoopMesh->SetupAttachment(VehicleHullMesh, TEXT("RoofScoop_Socket"));
	VehicleRoofScoopMesh->bCastDynamicShadow = true;
	

	VehicleIntercoolerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Intercooler"));
	VehicleIntercoolerMesh->SetupAttachment(VehicleHullMesh, TEXT("Intercooler_Socket"));
	VehicleIntercoolerMesh->bCastDynamicShadow = true;

	Wheel_FL->SetRelativeLocation(FVector{.0f,.0f,-45.0f});
	Wheel_FR->SetRelativeLocation(FVector{.0f,.0f,-45.0f});
	Wheel_RL->SetRelativeLocation(FVector{.0f,.0f,-45.0f});
	Wheel_RR->SetRelativeLocation(FVector{.0f,.0f,-45.0f});


#pragma endregion Setting Meshes

#pragma region Struct Value
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
	
#pragma endregion Struct Value

	
	
	
	// = EDriveType_Enum::RWD;
	//float GearInit[6] = {-2.58f, 0.0f,2.66f, 1.91f, 1.39f, 1.00f};
	//MainGear = 3.55f;
	//GearRatio.Append(GearInit, UE_ARRAY_COUNT(GearInit));
		
}

void AMasterMuscleVehicle::BeginPlay()
{
	DriveType = static_cast<EDriveType_Enum>(DriveInt);
	Super::BeginPlay();
	
}
