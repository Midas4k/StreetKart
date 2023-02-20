// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MasterVehicle.h"
#include "MasterSportsVehicle.generated.h"

/**
 * 
 */
UCLASS()
class STREETKART_API AMasterSportsVehicle : public AMasterVehicle
{
	GENERATED_BODY()
public:
	AMasterSportsVehicle();
protected:
	
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleSpoilerMesh;
	
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleIntercoolerMesh;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleRoofScoopMesh;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleWindowDecalMesh;
};
