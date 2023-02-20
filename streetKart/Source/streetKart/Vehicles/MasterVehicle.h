// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MasterVehicle.generated.h"

UCLASS()
class STREETKART_API AMasterVehicle : public APawn
{
	GENERATED_BODY()
	
public:
	// Sets default values for this pawn's properties
	AMasterVehicle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
#pragma region Mesh Components
	UPROPERTY(VisibleDefaultsOnly, Category=Default)
	USceneComponent* VehicleRoot;
                                      	
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleHullMesh;
                                      	
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
    USkeletalMeshComponent* VehicleHoodMesh;
    
    UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
    USkeletalMeshComponent* VehicleChassisMesh;
	
    UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
    USkeletalMeshComponent* VehicleSkirtMesh;
    
    UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
    USkeletalMeshComponent* VehicleFBumperMesh;
  
    UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
    USkeletalMeshComponent* VehicleRBumperMesh;
	
    UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
    USkeletalMeshComponent* VehicleFenderMesh;

	UPROPERTY(VisibleDefaultsOnly, Category=Default)
	USceneComponent* TopLink_FL;
	UPROPERTY(VisibleDefaultsOnly, Category=Default)
	USceneComponent* TopLink_FR;
	UPROPERTY(VisibleDefaultsOnly, Category=Default)
	USceneComponent* TopLink_RL;
	UPROPERTY(VisibleDefaultsOnly, Category=Default)
	USceneComponent* TopLink_RR;

	UPROPERTY(VisibleDefaultsOnly, Category=Default)
	USceneComponent* Wheel_FL;
	UPROPERTY(VisibleDefaultsOnly, Category=Default)
	USceneComponent* Wheel_FR;
	UPROPERTY(VisibleDefaultsOnly, Category=Default)
	USceneComponent* Wheel_RL;
	UPROPERTY(VisibleDefaultsOnly, Category=Default)
	USceneComponent* Wheel_RR;
	
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleFLRimMesh;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleFRRimMesh;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleRLRimMesh;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleRRRimMesh;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleFLTyreMesh;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleFRTyreMesh;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleRLTyreMesh;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* VehicleRRTyreMesh;
  
#pragma endregion Mesh Components
  
    

public:
	//Variables (public)
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	//Variables(private)
};
