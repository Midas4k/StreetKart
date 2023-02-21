// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MasterVehicle.generated.h"
USTRUCT(BlueprintType)
struct FSuspensionStruct
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float RestLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Travel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Stiffness;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Damper;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float ForceMin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float ForceMax;
	
};

USTRUCT(BlueprintType)
struct FWheelStruct
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Mass;
	
};
UCLASS()
class STREETKART_API AMasterVehicle : public APawn
{
	GENERATED_BODY()
	
public:
	// Sets default values for this pawn's properties
	AMasterVehicle();
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FSuspensionStruct SuspensionStruct;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FWheelStruct WheelStruct;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void RaycastInit();
	virtual void SuspensionInit();
	virtual void RayCast(float dt);
	virtual void UpdateSuspension();
	virtual void GetSuspensionForce(float dt);
	virtual void ApplySuspensionForce();
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
  
    //USceneComponent* TopLinkArray[4];
	//TArray<USceneComponent*> TopLinksArray;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)TArray<USceneComponent*>TopLinksArray;
	TArray<bool> WheelContact;
	TArray<FHitResult> HitResults;
	float RayLengths[4];
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)TArray<float>SusLengths;
	TArray<float>Fz;
	float LastSusLengths[4];
	
	
	UPROPERTY(EditAnywhere, Category="Collision")
	TEnumAsByte<ECollisionChannel> TraceChannelProperty = ECC_Pawn;

public:
	//Variables (public)
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	//Variables(private)
};
