// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterVehicle.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"

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
	//TopLink_FL->SetRelativeRotation(FRotator{.0f,180.0f,.0f});

	TopLink_FR = CreateDefaultSubobject<USceneComponent>(TEXT("Toplink FR"));
	TopLink_FR->SetupAttachment(VehicleHullMesh, TEXT("FRWheel_Socket"));

	TopLink_RL = CreateDefaultSubobject<USceneComponent>(TEXT("Toplink RL"));
	TopLink_RL->SetupAttachment(VehicleHullMesh, TEXT("RLWheel_Socket"));
	//TopLink_RL->SetRelativeRotation(FRotator{.0f,180.0f,.0f});

	TopLink_RR = CreateDefaultSubobject<USceneComponent>(TEXT("Toplink RR"));
	TopLink_RR->SetupAttachment(VehicleHullMesh, TEXT("RRWheel_Socket"));

	Wheel_FL = CreateDefaultSubobject<USceneComponent>(TEXT("FL_Wheel"));
	Wheel_FL->SetupAttachment(TopLink_FL);
	Wheel_FL->SetRelativeRotation(FRotator(0,180,0));
	
	Wheel_FR = CreateDefaultSubobject<USceneComponent>(TEXT("FR_Wheel"));
	Wheel_FR->SetupAttachment(TopLink_FR);

	Wheel_RL = CreateDefaultSubobject<USceneComponent>(TEXT("RL_Wheel"));
	Wheel_RL->SetupAttachment(TopLink_RL);
	Wheel_RL->SetRelativeRotation(FRotator(0,180,0));
	
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

#pragma region Camera Setup
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(VehicleHullMesh);
	SpringArm->SetRelativeLocation(FVector(0,0,140));
	SpringArm->SetRelativeRotation(FRotator(-10,0,0));
	SpringArm->TargetArmLength = 400;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Main Camera"));
	Camera->AttachToComponent(SpringArm,FAttachmentTransformRules::KeepWorldTransform);
#pragma endregion Camera Setup

#pragma region Engine Struct
	ConstructorHelpers::FObjectFinder<UObject> EngineTorqueSearch(TEXT("/Game/Curves/EngineTorqueCurve"));
	if (EngineTorqueSearch.Succeeded()) EngineStruct.torque_curve = Cast<UCurveFloat>(EngineTorqueSearch.Object);

	EngineStruct.idle_rpm = 700.0f;
	EngineStruct.max_rpm = 7000.0f;
	EngineStruct.inertia = .3f;
	EngineStruct.back_torque = -100.0f;
#pragma endregion Engine Struct

	//VehicleHullMesh->SetCenterOfMass(FVector(35,0,-35));
}

// Called when the game starts or when spawned
void AMasterVehicle::BeginPlay()
{
	Super::BeginPlay();
	VThrottleFilter =true;
#pragma region Wheels
	TopLinksArray.Add(TopLink_FL);
	TopLinksArray.Add(TopLink_FR);
	TopLinksArray.Add(TopLink_RL);
	TopLinksArray.Add(TopLink_RR);
	WheelMeshs.Add(Wheel_FL);
	WheelMeshs.Add(Wheel_FR);
	WheelMeshs.Add(Wheel_RL);
	WheelMeshs.Add(Wheel_RR);
#pragma endregion Wheels
	
	SteerAngleMax = 45.0f;
	AccelValue = 0.02f;
	DecelValue = 0.05f;

	WheelContact.SetNum(4);
	HitResults.SetNum(4);
	SusLengths.SetNum(4);
	Fx.SetNum(4);
	Fy.SetNum(4);
	Fz.SetNum(4);
	WheelInertia.SetNum(4);
	WheelAngularVelocity.SetNum(4);

	Gear = 1;
	GearRatio.Append(GearInit, ARRAY_COUNT(GearInit));
	MainGear = 3.82f;
	Efficiency = .8f;
	GearChangeTime = .5f;

	RPM_to_RadPS = (PI * 2)/ 60;

	RadPS_to_RPM = 1 / RPM_to_RadPS;

	WheelLinearVelocityLocal.SetNum(4);
	DriveType = EDriveType_Enum::RWD;

	DriveTorque.SetNum(4);
	TorqueRatio.Add(.5f);
	TorqueRatio.Add(.5f);
	
	RaycastInit();
	SuspensionInit();
	TransmissionInit();
	WheelInit();


	
}

// Called every frame
void AMasterVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	deltaTime = DeltaTime;
	GetDriveTorque();
	WheelAcceleration();
	RayCast(DeltaTime);
	UpdateSuspension();
	GetSuspensionForce(DeltaTime);
	ApplySuspensionForce();
	GetWheelLinearVelocity();
	GetTyreForce();
	ApplyTyreForce();
	WheelRotation();


#pragma region GearDebug
	switch (Gear){
	case 0:
		GearOut = "R";
		break;
	case 1:
		GearOut = "N";
		break;
	case 2:
		GearOut = "1";
		break;
	case 3:
		GearOut = "2";
		break;
	case 4:
		GearOut = "3";
		break;
	case 5:
		GearOut = "4";
		break;
	case 6:
		GearOut = "5";
		break;
	default:
		break;
	}
	GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Purple, FString::Printf(TEXT("Gear: %s Total Gear Ratio: %f"),*GearOut, TotalGearRatio));
#pragma endregion GearDebug
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

void AMasterVehicle::AdjustWheels()
{
	for(int i=0;i<4;i++)
	{
		WheelMeshs[i]->SetRelativeLocation(FVector(0,0,SusLengths[i]*-1));
	}
}

void AMasterVehicle::CameraOrbit(float mouseX)
{
	FRotator currRot = SpringArm->GetRelativeRotation();
	SpringArm->SetRelativeRotation(FRotator(currRot.Pitch,currRot.Yaw + mouseX,currRot.Roll ));
}

void AMasterVehicle::CameraPitch(float mouseY)
{
	FRotator currRot = SpringArm->GetRelativeRotation();
	SpringArm->SetRelativeRotation(FRotator( FMath::Clamp(currRot.Pitch + mouseY, -70, 10), currRot.Yaw, currRot.Roll));
}

void AMasterVehicle::MoveRight(float iValue)
{
	if(iValue !=0)
	{
		SteeringAngle =FMath::Clamp(SteeringAngle + (iValue *2), -SteerAngleMax,SteerAngleMax);
	}else
	{
		SteeringAngle *= .7f;
	}
	GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Blue, FString::Printf(TEXT("Steering angle: %f"),SteeringAngle));

	TopLink_FL->SetRelativeRotation(FRotator(0,SteeringAngle,0));
	TopLink_FR->SetRelativeRotation(FRotator(0,SteeringAngle,0));
}

void AMasterVehicle::MoveForward(float iValue)
{
	
}

void AMasterVehicle::GetWheelLinearVelocity()
{
	for(int i=0; i< 4; i++)
	{
		FVector VelocityPoint = WheelMeshs[i]->GetComponentLocation() - (TopLinksArray[i]->GetUpVector() * WheelStruct.Radius);
		FVector DirectionVector = VehicleHullMesh->GetPhysicsLinearVelocityAtPoint(VelocityPoint);
		
		FTransform InvertedTrans = UKismetMathLibrary::InvertTransform(TopLinksArray[i]->GetComponentTransform());
		
		WheelLinearVelocityLocal[i] = UKismetMathLibrary::TransformDirection(InvertedTrans, DirectionVector/100);
		GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Cyan, FString::Printf(TEXT("Linear Velocity:X: %f Y: %f Z: %f"),
			WheelLinearVelocityLocal[i].X,
			WheelLinearVelocityLocal[i].Y,
			WheelLinearVelocityLocal[i].Z));
	}
}

void AMasterVehicle::GetTyreForce()
{
	for(int i=0; i <4;i++)
	{
		if(WheelContact[i])
		{
			Fy[i] = FMath::Clamp(Fz[i] * WheelLinearVelocityLocal[i].Y * -1,-Fz[i] , Fz[i]);
		
			//Fx[i] = (GetActorForwardVector() * Fz[i] * .5f).Length();
			Fx[i] = (0 * Fz[i] * .5f);
		}else
		{
			Fx[i] = 0;
			Fy[i] = 0;
		}

		GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Orange, FString::Printf(TEXT("Fx: %f"),Fx[i]));
	}
}

void AMasterVehicle::ApplyTyreForce()
{
	for(int i=0; i<4;i++)
	{
		if(WheelContact[i])
		{
			FVector ForwardF = TopLinksArray[i]->GetForwardVector() * Fx[i];
			FVector RightF =  TopLinksArray[i]->GetRightVector() * Fy[i];
			FVector TotalF = (ForwardF + RightF)*100;
			VehicleHullMesh->AddForceAtLocation(TotalF,HitResults[i].Location);
			//VehicleHullMesh->AddForceAtLocation(TotalF,WheelMeshs[i]->GetComponentLocation());
		}
	}
}

void AMasterVehicle::Throttle(float iValue)
{
	GetThrottleValue(iValue);
	GetEngineTorque();
	
}

void AMasterVehicle::GetThrottleValue(float iValue)
{
	if(!VThrottleFilter)
	{
		ThrottleValue = iValue;
	}else
	{
		if(iValue != 0)
		{
			ThrottleValue = FMath::Min(ThrottleValue + AccelValue, 1);
		}else
		{
			ThrottleValue = FMath::Max(ThrottleValue - DecelValue, 0);
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Green, FString::Printf(TEXT("Throttle Value: %f"),ThrottleValue));
	
}

void AMasterVehicle::GetEngineTorque()
{
	EngineTorque = FMath::Lerp(EngineStruct.back_torque,EngineStruct.torque_curve->GetFloatValue(EngineRPM)*ThrottleValue, ThrottleValue);

	//Angular Acceleration = Torque/Inertia
	float AngularAccel = EngineTorque / EngineStruct.inertia;
	float minVal = RPM_to_RadPS * EngineStruct.idle_rpm;
	float maxVal = RPM_to_RadPS * EngineStruct.max_rpm;

	
	EngineAngularVelocity = FMath::Clamp(EngineAngularVelocity + (AngularAccel * deltaTime), minVal ,maxVal );
	EngineRPM = EngineAngularVelocity * RadPS_to_RPM;
	
	GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Green, FString::Printf(TEXT("RPM: %f Torque: %f"),EngineRPM, EngineTorque));
}

void AMasterVehicle::ShiftUp()
{
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
	{
		Gear = FMath::Min(Gear + 1,GearRatio.Num()-1);
		TotalGearRatio = GearRatio[Gear] * MainGear;
	}, GearChangeTime, false);

	
	
}

void AMasterVehicle::ShiftDown()
{
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
	{
		Gear = FMath::Max(Gear - 1,0);
		TotalGearRatio = GearRatio[Gear] * MainGear;
	}, GearChangeTime, false);
}

void AMasterVehicle::TransmissionInit()
{
	switch (DriveType)
	{
	case 0: //FWD
		TorqueRatio[0] = 1.0f;
		TorqueRatio[1] = 0.0f;
		break;
	case 1: //RWD
		TorqueRatio[0] = 0.0f;
		TorqueRatio[1] = 1.0f;
		break;
	case 3://AWD
		TorqueRatio[0] = FMath::Min(TorqueRatio[0], 1);
		TorqueRatio[1] = 1 - TorqueRatio[0];
		break;
	default:
		break;
	}
}

void AMasterVehicle::GetDriveTorque()
{
	for(int i=0;i<4;i++)
	{
		float Value  = FMath::Max(EngineTorque, 0 )* TotalGearRatio;
		switch(i)
		{
		case 0:
			DriveTorque[i] = (Value * TorqueRatio[0]) * .5f;
			break;
		case 1:
			DriveTorque[i] = (Value * TorqueRatio[0]) * .5f;
			break;
		case 2:
			DriveTorque[i] = (Value * TorqueRatio[1]) * .5f;
			break;
		case 3:
			DriveTorque[i] = (Value * TorqueRatio[1]) * .5f;
			break;
		default:
			break;
		}
		GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Cyan, FString::Printf(TEXT("Drive Torque %i : %f"),i,DriveTorque[i]));
	}
}

void AMasterVehicle::WheelInit()
{
	for(int i=0;i <4;i++)
	{
		
		WheelInertia[i] = (FMath::Pow(WheelStruct.Radius / 100,2) * WheelStruct.Mass) * .5f;
	}
}

void AMasterVehicle::WheelAcceleration()
{
	float MaxWheelSpeed;
	if(Gear != 0)
	{
		//max wheel speed on current gear
		MaxWheelSpeed = EngineAngularVelocity / TotalGearRatio;
	}else
	{
		MaxWheelSpeed = 9999.0f;
	}

	
	for(int i =0; i<4;i++)
	{
		//AngularAcceleration = Torque/Inertia
		float AngularAccel = DriveTorque[i] / WheelInertia[i];

		//AngularVelocity += AngularAccel * dt
		 
		float AngularVelocity = WheelAngularVelocity[i] + (AngularAccel * deltaTime);

		//Clamp Max Wheel Speed
		WheelAngularVelocity[i] = FMath::Min(FMath::Abs(AngularVelocity),FMath::Abs(MaxWheelSpeed)) * FMath::Sign(MaxWheelSpeed);
		
		GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Emerald, FString::Printf(TEXT("Wheel %i : RPM: %f"),i,
			FMath::RadiansToDegrees(WheelAngularVelocity[i])));
	}
}

void AMasterVehicle::WheelRotation()
{
	for(int i=0;i<4;i++)
	{
		
		float Value = FMath::RadiansToDegrees(WheelAngularVelocity[i]) * deltaTime;
		
		if(i == 1 || i ==3)
		{
			Value *=-1;
		}
		WheelMeshs[i]->AddLocalRotation(FRotator(Value,0,0));
	}
}
