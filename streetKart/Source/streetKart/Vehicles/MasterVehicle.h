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

USTRUCT(BlueprintType)
struct FEngineStruct
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* torque_curve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float idle_rpm;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float max_rpm;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float inertia;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float back_torque;
	
	
};
UCLASS()
class STREETKART_API AMasterVehicle : public APawn
{
	GENERATED_BODY()
	
public:
	// Sets default values for this pawn's properties
	AMasterVehicle();

		
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	virtual void MoveRight(float iValue);
	virtual void MoveForward(float iValue);
	virtual void CameraOrbit(float mouseX);
	virtual void CameraPitch(float mouseY);
	virtual void Throttle(float iValue);
	virtual void ShiftUp();
	virtual void ShiftDown();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FSuspensionStruct SuspensionStruct;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FWheelStruct WheelStruct;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FEngineStruct EngineStruct;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void RaycastInit();
	virtual void SuspensionInit();
	virtual void RayCast(float dt);
	virtual void UpdateSuspension();
	virtual void GetSuspensionForce(float dt);
	virtual void ApplySuspensionForce();
	virtual void AdjustWheels();
	virtual void GetWheelLinearVelocity();
	virtual void GetTyreForce();
	virtual void ApplyTyreForce();
	virtual void WheelRotation(float dt);
	virtual void GetThrottleValue(float iValue);
	virtual void GetEngineTorque();
	

	

	
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

	UPROPERTY(VisibleAnywhere) class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere) class UCameraComponent* Camera;

	FTimerHandle TimerHandle;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)TArray<USceneComponent*>TopLinksArray;
	TArray<bool> WheelContact;
	TArray<FHitResult> HitResults;
	float RayLengths[4];
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)TArray<float>SusLengths;
	TArray<float>Fz;
	TArray<float>Fx;
	TArray<float>Fy;
	float LastSusLengths[4];
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)TArray<USceneComponent*>WheelMeshs;

	float deltaTime;
	float SteeringAngle;
	float SteerAngleMax;
	float ThrottleValue;
	float AccelValue;
	float DecelValue;
	bool VThrottleFilter;

	float EngineRPM;
	float EngineTorque;
	float EngineAngularVelocity;
	float RPM_to_RadPS;
	float RadPS_to_RPM;

	float GearInit[7] = {-3.615f, 0.0f, 3.583f, 2.038f, 1.414f, 1.108f, 0.878f};
	TArray<float>GearRatio;
	int Gear;
	float MainGear;
	float Effciency;
	float GearChangeTime;

	float TotalGearRatio;

	

	TArray<FVector> WheelLinearVelocityLocal;
	
	
	UPROPERTY(EditAnywhere, Category="Collision")
	TEnumAsByte<ECollisionChannel> TraceChannelProperty = ECC_Pawn;
	
};
