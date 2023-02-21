// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterVehicle.h"

#include <string>

// Sets default values
AMasterVehicle::AMasterVehicle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

#pragma region Create Defaults
	/*
	VehicleRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Vehicle Root"));
	VehicleRoot->SetMobility(EComponentMobility::Movable);
	SetRootComponent(VehicleRoot);
	*/
	
	VehicleHullMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Body"));
	VehicleHullMesh->AttachToComponent(VehicleRoot,FAttachmentTransformRules::KeepRelativeTransform);
	VehicleHullMesh->bCastDynamicShadow = true;
	//VehicleHullMesh->SetRelativeLocation(FVector{.0f,.0f,.0f});
	//VehicleHullMesh->SetRelativeRotation(FRotator{.0f,.0f,.0f});
	SetRootComponent(VehicleHullMesh);
	//VehicleHullMesh->SetMobility(EComponentMobility::Movable);

	VehicleHoodMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Hood"));
	VehicleHoodMesh->SetupAttachment(VehicleHullMesh, TEXT("Hood_Socket"));
	VehicleHoodMesh->bCastDynamicShadow = true;
	//VehicleHoodMesh->SetMobility(EComponentMobility::Movable);

	VehicleChassisMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Chassis"));
	VehicleChassisMesh->SetupAttachment(VehicleHullMesh, TEXT("Chassis_Socket"));
	VehicleChassisMesh->bCastDynamicShadow = true;
	//VehicleChassisMesh->SetMobility(EComponentMobility::Movable);
	
	VehicleSkirtMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Skirt"));
	VehicleSkirtMesh->SetupAttachment(VehicleHullMesh, TEXT("Skirt_Socket"));
	VehicleSkirtMesh->bCastDynamicShadow = true;
	
	VehicleFBumperMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Front Bumper"));
	VehicleFBumperMesh->SetupAttachment(VehicleHullMesh, TEXT("FBumper_Socket"));
	VehicleFBumperMesh->bCastDynamicShadow = true;

	VehicleRBumperMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Rear Bumper"));
	VehicleRBumperMesh->SetupAttachment(VehicleHullMesh, TEXT("RBumper_Socket"));
	VehicleRBumperMesh->bCastDynamicShadow = true;
	
	VehicleFenderMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Fender"));
	VehicleFenderMesh->SetupAttachment(VehicleHullMesh, TEXT("Fender_Socket"));
	VehicleFenderMesh->bCastDynamicShadow = true;

	//CREATING THE TOP LINKS FOR THE RAYCAST
	TopLink_FL = CreateDefaultSubobject<USceneComponent>(TEXT("Toplink FL"));
	TopLink_FL->SetupAttachment(VehicleHullMesh, TEXT("FLWheel_Socket"));
	TopLink_FL->SetRelativeRotation(FRotator{.0f,180.0f,.0f});

	TopLink_FR = CreateDefaultSubobject<USceneComponent>(TEXT("Toplink FR"));
	TopLink_FR->SetupAttachment(VehicleHullMesh, TEXT("FRWheel_Socket"));

	TopLink_RL = CreateDefaultSubobject<USceneComponent>(TEXT("Toplink RL"));
	TopLink_RL->SetupAttachment(VehicleHullMesh, TEXT("RLWheel_Socket"));
	TopLink_RL->SetRelativeRotation(FRotator{.0f,180.0f,.0f});

	TopLink_RR = CreateDefaultSubobject<USceneComponent>(TEXT("Toplink RR"));
	TopLink_RR->SetupAttachment(VehicleHullMesh, TEXT("RRWheel_Socket"));

	Wheel_FL = CreateDefaultSubobject<USceneComponent>(TEXT("FL_Wheel"));
	Wheel_FL->SetupAttachment(TopLink_FL);
	
	Wheel_FR = CreateDefaultSubobject<USceneComponent>(TEXT("FR_Wheel"));
	Wheel_FR->SetupAttachment(TopLink_FR);

	Wheel_RL = CreateDefaultSubobject<USceneComponent>(TEXT("RL_Wheel"));
	Wheel_RL->SetupAttachment(TopLink_RL);
	
	Wheel_RR = CreateDefaultSubobject<USceneComponent>(TEXT("RR_Wheel"));
	Wheel_RR->SetupAttachment(TopLink_RR);

	
	VehicleFLRimMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FL_Rim_Mesh"));
	VehicleFLRimMesh->SetupAttachment(Wheel_FL);

	VehicleFRRimMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FR_Rim_Mesh"));
	VehicleFRRimMesh->SetupAttachment(Wheel_FR);
	
	VehicleRLRimMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RL_Rim_Mesh"));
	VehicleRLRimMesh->SetupAttachment(Wheel_RL);
	
	VehicleRRRimMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RR_Rim_Mesh"));
	VehicleRRRimMesh->SetupAttachment(Wheel_RR);

	VehicleFLTyreMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FL_Tyre"));
	VehicleFLTyreMesh->SetupAttachment(VehicleFLRimMesh);

	VehicleFRTyreMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FR_Tyre"));
	VehicleFRTyreMesh->SetupAttachment(VehicleFRRimMesh);

	VehicleRLTyreMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RL_Tyre"));
	VehicleRLTyreMesh->SetupAttachment(VehicleRLRimMesh);
	
	VehicleRRTyreMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RR_Tyre"));
	VehicleRRTyreMesh->SetupAttachment(VehicleRRRimMesh);

#pragma endregion Create Defaults

}

// Called when the game starts or when spawned
void AMasterVehicle::BeginPlay()
{
	Super::BeginPlay();
	/*
	TopLinkArray[0] = TopLink_FL;
	TopLinkArray[1] = TopLink_FR;
	TopLinkArray[2] = TopLink_RL;
	TopLinkArray[3] = TopLink_RR;
	*/
	TopLinksArray.Add(TopLink_FL);
	TopLinksArray.Add(TopLink_FR);
	TopLinksArray.Add(TopLink_RL);
	TopLinksArray.Add(TopLink_RR);
	WheelContact.SetNum(4);
	HitResults.SetNum(4);
	SusLengths.SetNum(4);
	Fz.SetNum(4);
	RaycastInit();
	SuspensionInit();
	
}

// Called every frame
void AMasterVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RayCast(DeltaTime);
	UpdateSuspension();
	GetSuspensionForce(DeltaTime);
	ApplySuspensionForce();

}

// Called to bind functionality to input
void AMasterVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMasterVehicle::RaycastInit()
{
	for(int i=0; i<4; i++)
	{
		RayLengths[i] = SuspensionStruct.RestLength + SuspensionStruct.Travel + WheelStruct.Radius;
	}
}

void AMasterVehicle::SuspensionInit()
{
	for(int i=0; i<4; i++)
	{
		SusLengths[i] = SuspensionStruct.RestLength;
		LastSusLengths[i] = SusLengths[i];
	}
}

void AMasterVehicle::RayCast(float dt)
{
	for(int i =0; i <4; i++)
	{
		FHitResult Hit;
		
		FVector RayStart = TopLinksArray[i]->GetComponentLocation();
		FVector RayEnd = RayStart - (TopLinksArray[i]->GetUpVector() * RayLengths[i]);

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this);

		GetWorld()->LineTraceSingleByChannel(Hit, RayStart, RayEnd, TraceChannelProperty, QueryParams);

		DrawDebugLine(GetWorld(), RayStart, RayEnd, Hit.bBlockingHit ? FColor::Green : FColor::Red, false, dt*1.01f, 0, 10.0f);

		if(Hit.bBlockingHit)
		{
			WheelContact[i] = true;
			HitResults[i] = Hit;
		}else
		{
			WheelContact[i] = false;
		}
	}
}
void AMasterVehicle::UpdateSuspension()
{
	for(int i=0; i <4; i++)
	{
		if(WheelContact[i])
		{
			FVector temp = TopLinksArray[i]->GetUpVector() * WheelStruct.Radius;
			FVector temp2 = HitResults[i].Location + temp;

			float VLength =FMath::Clamp( (temp2 - TopLinksArray[i]->GetComponentLocation()).Length(),
				SuspensionStruct.RestLength - SuspensionStruct.Travel,
				SuspensionStruct.RestLength + SuspensionStruct.Travel);

			SusLengths[i] = VLength;
			
		}else
		{
			SusLengths[i] = SuspensionStruct.RestLength + SuspensionStruct.Travel;
		}
	}
}

void AMasterVehicle::GetSuspensionForce(float dt)
{
	for(int i=0; i <4; i++)
	{
		float springForce = SuspensionStruct.Stiffness * (SuspensionStruct.RestLength - SusLengths[i]);
		float damperForce = SuspensionStruct.Damper * ((LastSusLengths[i] - SusLengths[i]) / dt);

		Fz[i] = FMath::Clamp(damperForce + springForce,
			SuspensionStruct.ForceMin,
			SuspensionStruct.ForceMax);

		LastSusLengths[i] = SusLengths[i];

		GEngine->AddOnScreenDebugMessage(-1, dt, FColor::Yellow, FString::Printf(TEXT("Fz %i : Force %f"),i,Fz[i]));
	}
}

void AMasterVehicle::ApplySuspensionForce()
{
	for(int i =0; i<4; i++)
	{
		FVector force = TopLinksArray[i]->GetUpVector() * (Fz[i] * 100);
		VehicleHullMesh->AddForceAtLocation(force,TopLinksArray[i]->GetComponentLocation());
	}
}






