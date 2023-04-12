// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterSportsVehicle.h"

AMasterSportsVehicle::AMasterSportsVehicle()
{
#pragma region  Setting Meshes
	//SETTING DEFAULT HULL MESH
	
	
	VehicleSpoilerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Spoiler"));
	VehicleSpoilerMesh->SetupAttachment(VehicleHullMesh, TEXT("Spoiler_Socket"));
	VehicleSpoilerMesh->bCastDynamicShadow = true;
	

	//SETTING DEFAULT INTERCOOLER MESH
	VehicleIntercoolerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Intercooler"));
	VehicleIntercoolerMesh->SetupAttachment(VehicleHullMesh, TEXT("Intercooler_Socket"));
	VehicleIntercoolerMesh->bCastDynamicShadow = true;


	//SETTING DEFAULT SCOOP MESH
	VehicleRoofScoopMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Roof Scoop"));
	VehicleRoofScoopMesh->SetupAttachment(VehicleHullMesh, TEXT("RoofScoop_Socket"));
	VehicleRoofScoopMesh->bCastDynamicShadow = true;
	

	VehicleWindowDecalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Window Decal"));
	VehicleWindowDecalMesh->SetupAttachment(VehicleHullMesh, TEXT("WindowDecal_Socket"));
	VehicleWindowDecalMesh->bCastDynamicShadow = true;
	
	

	Wheel_FL->SetRelativeLocation(FVector{.0f,.0f,-45.0f});
	Wheel_FR->SetRelativeLocation(FVector{.0f,.0f,-45.0f});
	Wheel_RL->SetRelativeLocation(FVector{.0f,.0f,-45.0f});
	Wheel_RR->SetRelativeLocation(FVector{.0f,.0f,-45.0f});


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

	
#pragma endregion Struct Values

	
	//float GearInit[7] = {-3.214f, 0.0f,3.214f, 1.925f, 1.302f,1.000f, 0.752f};
	//MainGear = 4.111f;
	//GearRatio.Append(GearInit, UE_ARRAY_COUNT(GearInit));
}

void AMasterSportsVehicle::BeginPlay()
{
	DriveType = static_cast<EDriveType_Enum>(DriveInt);
	Super::BeginPlay();
	
}