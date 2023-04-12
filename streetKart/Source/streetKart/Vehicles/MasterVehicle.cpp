// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterVehicle.h"

#include "StaticMeshAttributes.h"
#include "VectorTypes.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AMasterVehicle::AMasterVehicle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

#pragma region Create Defaults


	
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
	
	VehicleSeatMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Seats"));
	VehicleSeatMesh->SetupAttachment(VehicleHullMesh, TEXT("Seat_Socket"));
	VehicleSeatMesh->bCastDynamicShadow = true;

	VehicleRollCageMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Roll Cage"));
	VehicleRollCageMesh->SetupAttachment(VehicleHullMesh, TEXT("RollCage_Socket"));
	VehicleRollCageMesh->bCastDynamicShadow = true;

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
	//ConstructorHelpers::FObjectFinder<UObject> EngineTorqueSearch(TEXT("/Game/Curves/EngineTorqueCurve"));
	//if (EngineTorqueSearch.Succeeded()) EngineStruct.torque_curve = Cast<UCurveFloat>(EngineTorqueSearch.Object);

	EngineStruct.idle_rpm = FVector2D(700.0f, 1500);
	EngineStruct.max_rpm = 7000.0f;
	EngineStruct.inertia = 0.3f;
	EngineStruct.back_torque = -90.0f;
	EngineStruct.friction_coeff = 0.02f;
	EngineStruct.friction = 50;
	EngineStruct.rev_limiter_duration = 0.02f;
#pragma endregion Engine Struct

	ConstructorHelpers::FObjectFinder<UObject> ForceSearch(TEXT("/Game/Curves/ForceCurve1"));
	if (ForceSearch.Succeeded()) ForceCurve = Cast<UCurveFloat>(ForceSearch.Object);
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
	AccelValue = 0.015f;
	DecelValue = 0.03f;
	BrakeBias = .7f; //Closer to 1 is more frontal, closer to 0 is rear
	//float GearInit[7] = {-3.615f, 0.0f, 3.583f, 2.038f, 1.414f, 1.108f, 0.878f};
	SteeringDamper = 1;

	WheelContact.SetNum(4);
	HitResults.SetNum(4);
	SusLengths.SetNum(4);
	Fx.SetNum(4);
	Fy.SetNum(4);
	Fz.SetNum(4);
	WheelInertia.SetNum(4);
	WheelAngularVelocity.SetNum(4);
	LongSlipVelocity.SetNum(4);
	BrakeTorque.SetNum(4);
	BrakeBiasRatio.SetNum(2);
	BrakeStength = 1500.0f;

	Gear = 1;
	
	
	Efficiency = .8f;
	GearChangeTime = .1f;
	TorqueBias = .3f;

	Combustible = 1.0f;
	RevLimiterTime = -1;

	RPM_to_RadPS = (PI * 2)/ 60;

	RadPS_to_RPM = 1 / RPM_to_RadPS;

	WheelLinearVelocityLocal.SetNum(4);
	//DriveType = EDriveType_Enum::AWD;

	DriveTorque.SetNum(4);
	TorqueRatio.Add(.5f);
	TorqueRatio.Add(.5f);

	
	
	RaycastInit();
	SuspensionInit();
	TransmissionInit();
	WheelInit();
	BrakesINI();
	
}

// Called every frame
void AMasterVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	deltaTime = DeltaTime;
	if(Automatic)
	{
		AutoReverse();
		AutoShift();
	}
	SimpleDownforce();
	GetDriveTorque();
	WheelAcceleration();
	RayCast(DeltaTime);
	UpdateSuspension();
	GetSuspensionForce(DeltaTime);
	ApplySuspensionForce();
	AdjustWheels();
	GetWheelLinearVelocity();
	GetLongSlipVelocity();
	GetCombinedSlipForce();
	ApplyTyreForce();
	GetFrictionTorque();
	ApplyBrakeForce();
	GetTotalDriveVelocity();
	WheelsAccelerateEngine();
	//DrawDebugComponents();
	WheelRotation();//Always Last
	
	


#pragma region GearDebug

	if(Gear == 0)GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Purple, FString::Printf(TEXT("Gear: %hs Total Gear Ratio: %f"),"R", TotalGearRatio));
	else if(Gear == 1)GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Purple, FString::Printf(TEXT("Gear: %hs Total Gear Ratio: %f"),"N", TotalGearRatio));
	else GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Purple, FString::Printf(TEXT("Gear: %i Total Gear Ratio: %f"),Gear -1, TotalGearRatio));
	
#pragma endregion GearDebug
	GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Yellow, FString::Printf(TEXT("Drive Type: %i"),DriveType));
	GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Yellow, FString::Printf(TEXT("RPM: %f Torque: %f"),EngineRPM, EngineTorque));
	GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Yellow, FString::Printf(TEXT("Brake Bias: F: %i, R: %i"),FMath::RoundToInt(BrakeBiasRatio[0]*100), FMath::RoundToInt(BrakeBiasRatio[1]*100)));

	
	//CarSpeed = VehicleHullMesh->GetPhysicsLinearVelocity().Size() * 0.0223694f;
	//KPH
	//CarSpeed = FVector::DotProduct(VehicleHullMesh->GetForwardVector(), VehicleHullMesh->GetPhysicsLinearVelocity()) * 0.036f;
	//MPH
	CarSpeed = FVector::DotProduct(VehicleHullMesh->GetForwardVector(), VehicleHullMesh->GetPhysicsLinearVelocity()) * 0.0223694f;
	
	GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Yellow, FString::Printf(TEXT("Car Speed: %f"),CarSpeed));
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

void AMasterVehicle::BrakesINI()
{
	
	//FMath::Clamp(BrakeBias, 0,1);
	BrakeBiasRatio[0] = FMath::Clamp(BrakeBias, 0,1);
	BrakeBiasRatio[1] = 1- FMath::Clamp(BrakeBias, 0,1);
}

void AMasterVehicle::WheelInit()
{
	for(int i=0;i <4;i++)
	{
		
		WheelInertia[i] = (FMath::Pow(WheelStruct.Radius / 100,2) * WheelStruct.Mass) * .5f;
	}
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

		DrawDebugLine(GetWorld(), RayStart, RayEnd, Hit.bBlockingHit ? FColor::Green : FColor::Red, false, dt*1.01f, 0, 5.0f);

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
			FVector length = TopLinksArray[i]->GetUpVector() * WheelStruct.Radius;
			FVector difference = HitResults[i].Location + length;

			float VLength =FMath::Clamp( (difference - TopLinksArray[i]->GetComponentLocation()).Length(),
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

		if(WheelContact[i])
		{
			Fz[i] = FMath::Clamp(damperForce + springForce,
				SuspensionStruct.ForceMin,
				SuspensionStruct.ForceMax);
		}else
		{
			Fz[i] = -100;
		}

		LastSusLengths[i] = SusLengths[i];

		//GEngine->AddOnScreenDebugMessage(-1, dt, FColor::Yellow, FString::Printf(TEXT("Fz %i : Force %f"),i,Fz[i]));
	}
}

void AMasterVehicle::ApplySuspensionForce()
{
	for(int i =0; i<4; i++)
	{
		FVector force = TopLinksArray[i]->GetUpVector() * (Fz[i] * 200);
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
		SteeringAngle =FMath::Clamp(SteeringAngle + (iValue *SteeringDamper), -SteerAngleMax,SteerAngleMax);
	}else
	{
		SteeringAngle *= .7f;
	}
	//GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Blue, FString::Printf(TEXT("Steering angle: %f"),SteeringAngle));

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
		//GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Cyan, FString::Printf(TEXT("Linear Velocity:X: %f Y: %f Z: %f"),
		//	WheelLinearVelocityLocal[i].X,
		//	WheelLinearVelocityLocal[i].Y,
		//	WheelLinearVelocityLocal[i].Z));
	}
}

void AMasterVehicle::ApplyTyreForce()
{
	for(int i=0; i<4;i++)
	{
		if(WheelContact[i])
		{
			FVector ForwardF = TopLinksArray[i]->GetForwardVector() * Fx[i] ;
			FVector RightF =  TopLinksArray[i]->GetRightVector() * Fy[i] ;
			FVector TotalF = (ForwardF + RightF)*100;
			VehicleHullMesh->AddForceAtLocation(TotalF,HitResults[i].Location);
			
			//VehicleHullMesh->AddForceAtLocation(TotalF,WheelMeshs[i]->GetComponentLocation());
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, deltaTime, FColor::Orange, FString::Printf(TEXT("SteerDamp: %f"),SteeringDamper));
}

void AMasterVehicle::Throttle(float iValue)
{
	
	if(SwapThrottleBrake)
	{
		GetBrakingValue(iValue);
		GetBrakeTorque();
	}else
	{
		GetThrottleValue(iValue);
		EngineAccelerating();
	}
	
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
	//GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Green, FString::Printf(TEXT("Throttle Value: %f"),ThrottleValue));
	
}

void AMasterVehicle::GetEngineTorque()
{
	EngineRPM += deltaTime * FMath::Lerp(-3000, 5000, ThrottleValue);
	EngineRPM = FMath::Clamp(EngineRPM, EngineStruct.idle_rpm.X, EngineStruct.max_rpm);
	float T =0;
	T = EngineStruct.torque_curve->GetFloatValue(EngineRPM) * ThrottleValue;
	EngineTorque = FMath::Lerp(EngineStruct.back_torque, T, ThrottleValue);
	//EngineTorque = FMath::Lerp(EngineStruct.back_torque,EngineStruct.torque_curve->GetFloatValue(EngineRPM)*ThrottleValue, ThrottleValue);

	//Angular Acceleration = Torque/Inertia
	float AngularAccel = EngineTorque / EngineStruct.inertia;
	const float MinVal = RPM_to_RadPS * EngineStruct.idle_rpm.X;
	const float MaxVal = RPM_to_RadPS * EngineStruct.max_rpm;

	
	EngineAngularVelocity = FMath::Clamp(EngineAngularVelocity + AngularAccel * deltaTime, MinVal ,MaxVal );
	EngineRPM = EngineAngularVelocity * RadPS_to_RPM;
	//GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Green, FString::Printf(TEXT("RPM: %f Torque: %f"),EngineRPM, EngineTorque));

	//GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Blue, FString::Printf(TEXT("engineRPM %f"), EngineRPM));
	//GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Blue, FString::Printf(TEXT("engineTorque %f"), EngineTorque));
	//GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Blue, FString::Printf(TEXT("torque %f"), T));

}

void AMasterVehicle::ShiftUp()
{

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
	{
		Gear = FMath::Min(Gear + 1,GearRatio.Num()-1);
		TotalGearRatio = GearRatio[Gear] * MainGear;
		
	}, GearChangeTime, false);
	SteeringDamper = 1 - (Gear* .1f);
	
	
	
}

void AMasterVehicle::ShiftDown()
{
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
	{
		Gear = FMath::Max(Gear -1,0);
		TotalGearRatio = GearRatio[Gear] * MainGear;
	}, GearChangeTime, false);
	SteeringDamper = 1 - (Gear* .1f);
}

void AMasterVehicle::GetDriveTorque()
{
	for(int i=0;i<4;i++)
	{
		float Value  = FMath::Max(0, EngineTorque)* TotalGearRatio;
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
	}
}

void AMasterVehicle::WheelAcceleration()
{
	
	if(Gear != 1)
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
		//float AngularVelocity = (AngularAccel * deltaTime);
		
		

		WheelAngularVelocity[i] = FMath::Min(FMath::Abs(AngularVelocity),FMath::Abs(MaxWheelSpeed)) * FMath::Sign(MaxWheelSpeed);
		
		//Clamp Max Wheel Speed
		//WheelAngularVelocity[i] = FMath::Min(FMath::Abs(AngularVelocity),MaxWheelSpeed * FMath::Sign(MaxWheelSpeed));
		
		
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

void AMasterVehicle::GetLongSlipVelocity()
{
	for(int i =0;i < 4;i++)
	{
		//Slip Velocity = Wheel Speed - Car Speed
		//Slip Ratio = (Wheel Speed - Car Speed) / max(abs(Wheel Speed), abs(Car Speed))
		//Wheel Speed = Wheel Angular Velocity * R
		//Car Speed = Wheel Local Velocity.x
		const float WheelSpeed = WheelAngularVelocity[i]*(WheelStruct.Radius / 100);

		float SlipVelocity = WheelSpeed - WheelLinearVelocityLocal[i].X;
		
		//if(Gear >1) SlipVelocity = WheelLinearVelocityLocal[i].X - WheelSpeed;
		//else SlipVelocity = WheelLinearVelocityLocal[i].X + WheelSpeed;
		
		LongSlipVelocity[i] = SlipVelocity;
		//GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Orange, FString::Printf(TEXT("WLVL %i: %f"),i,LongSlipVelocity[i]));
	}
}

void AMasterVehicle::GetCombinedSlipForce()
{
	for(int i=0;i<4;i++)
	{
		//Total Tire Forces <= Max Friction
		//Friction Coefficient = Max Friction / Weight
		//Max Friction = Friction Coefficient * Weight
		//Tire Force Normalized = Tire Force/ Max Friction

		//1) Get Slip Vector and compute combined slip (length of slip vector)
		//Vec = (LongSlip, LateralSlip)
		//CombinedSlip = sqrt(LongSlip^2 + LateralSlip^2)
		//=Vec.Length

		//2)Get Force Scale (force vs slip/slide)
		//ForceScale = ForceCurve.getFloat(CombinedSlip)

		//3)Normalize Force Vector and Multiply by ForceScale
		//Vec = ForceScale*Vec.normalize;

		//4)Get Final Tire Force
		//TireForce = Vec*MaxFriction

		if(WheelContact[i])
		{
			const float CornerStiffness = FMath::Clamp(WheelLinearVelocityLocal[i].Y * -WheelStruct.Cornering_Stiffness, -1,1);
			LateralSlipNormalized = CornerStiffness;

			//if(CarSpeed*SlipSpeed >0)Traction; Else friction;
			//FMath::Abs(WheelLinearVelocityLocal[i].X)
			if(WheelLinearVelocityLocal[i].X  *LongSlipVelocity[i] > 0)
			{
				//Traction = DriveTorque / R
				float R = (WheelStruct.Radius / 100);
				const float Traction = DriveTorque[i] / R ; //Wheel Radius M
				LongSlipNormalized =FMath::Clamp(Traction / FMath::Max(Fz[i], 0.000001f),-1 ,2); // LongSlipNormalized = Traction/maxFriction
				GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Orange, FString::Printf(TEXT("T %i , %f"),i,LongSlipVelocity[i]));
			} else
			{
				LongSlipNormalized =  FMath::Clamp(LongSlipVelocity[i] * WheelStruct.Long_Stiffness,-2,1);
				
				GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Orange, FString::Printf(TEXT("F %i, %f"),i,LongSlipVelocity[i]));
			}
			
			//Combined Slip
			FVector2D SlipVec = FVector2D(LongSlipNormalized,LateralSlipNormalized);
			float combinedSlip = SlipVec.Size();
			combinedSlip = FMath::Clamp(combinedSlip, 0.5f, 3.0f);
			GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Orange, FString::Printf(TEXT("cS %i %f"),i,combinedSlip));
			SlipVec.Normalize();
			auto tireForceNormalized = ForceCurve->GetFloatValue(combinedSlip) *SlipVec;
			auto tireForce = FMath::Max(Fz[i], 0.1f) * tireForceNormalized;
			
			Fx[i] = tireForce.X;
			Fy[i] = tireForce.Y;

			GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Yellow, FString::Printf(TEXT("Fx %i %f"),i, Fx[i]));
			
		}else
		{
			Fx[i] = 0;
			Fy[i] = 0;
		}
	}
}

void AMasterVehicle::DebugDrawing(float dt)
{

}

void AMasterVehicle::GetFrictionTorque()
{
	for(int i=0;i<4;i++)
	{
		if(WheelContact[i])
		{
			//Friction Torque = Friction * R
			float test = FMath::Max(Fz[i], 0) * (WheelStruct.Radius / 100);
			float FrictionTorque = test * FMath::Clamp(LongSlipVelocity[i]/ -10, -1, 1);
			//Angular Acceleration = Torque / Inertia
			float AngularAcceleration = FrictionTorque / WheelInertia[i];
			//GEngine->AddOnScreenDebugMessage(-1, deltaTime, FColor::Cyan, FString::Printf(TEXT("T: %f , FT: %f , AA %f"),test,FrictionTorque, AngularAcceleration));

			WheelAngularVelocity[i] = WheelAngularVelocity[i] + (AngularAcceleration * deltaTime);
		}
	}
}

void AMasterVehicle::GetTotalDriveVelocity()
{
	//Wheels Brake/Accelerate the engine
	//Total Drive Axis Velocity = Total Wheel Velocity / # Driving Wheels
	//Clutch Velocity = Total Drive Axis Velocity * Total Gear Ratio
	//Engine Velocity += k*(Clutch Velocity - Engine Velocity)
	//if(Clutch Velocity < Engine Velocity) wheels brake engine
	//if(Clutch Velocity > Engine Velocity) wheels accelerate engine
	switch(DriveType)
	{
	case 0://FWD
		TotalDriveAxisAngularVelocity = (WheelAngularVelocity[0] + WheelAngularVelocity[1]) * .5f;
		break;
	case 1://RWD
		TotalDriveAxisAngularVelocity = (WheelAngularVelocity[2] + WheelAngularVelocity[3]) * .5f;
		break;
	case 2://AWD
		TotalDriveAxisAngularVelocity = (WheelAngularVelocity[0] + WheelAngularVelocity[1] + WheelAngularVelocity[2] + WheelAngularVelocity[3]) * .25f;
		break;
	default:
		break;
	}
}

void AMasterVehicle::WheelsAccelerateEngine()
{
	/*
	ClutchAngularVelocity = TotalDriveAxisAngularVelocity * TotalGearRatio;
	//
	float k = FVector::DotProduct(VehicleHullMesh->GetForwardVector(),UKismetMathLibrary::Normal(VehicleHullMesh->GetPhysicsLinearVelocity()));
	float kAbs = FMath::Abs(k);
	
	float t1 = ClutchAngularVelocity - EngineAngularVelocity;
	float t2 = t1 * FMath::Lerp(0.07f, .5f,kAbs);
	float t3 = t2 * 1;
	
	
	float t4 = FMath::Clamp((EngineAngularVelocity + (t3*2)), MinValue, MaxValue);
	//float t4 = EngineAngularVelocity + t3*2;
	EngineAngularVelocity = t4;
	*/

	ClutchAngularVelocity = TotalDriveAxisAngularVelocity * TotalGearRatio;
	GEngine->AddOnScreenDebugMessage(-1, deltaTime, FColor::Green, FString::Printf(TEXT("CAV: %f , TDAAV %f"),ClutchAngularVelocity, TotalDriveAxisAngularVelocity));

	float MinValue = EngineStruct.idle_rpm.X * RPM_to_RadPS;
	float MaxValue = EngineStruct.max_rpm * RPM_to_RadPS ;

	FVector vec = VehicleHullMesh->GetPhysicsLinearVelocity();
	vec.Normalize();
	
	float Alpha = FMath::Abs(FVector::DotProduct(VehicleHullMesh->GetForwardVector(), vec));

	float k = FMath::Lerp(0.07f, 0.5f, Alpha);
	float a = ClutchAngularVelocity - EngineAngularVelocity;

	float boVal = Gear != 1;
	float av = FMath::Clamp(EngineAngularVelocity + (a * k * boVal), MinValue ,MaxValue);
	EngineAngularVelocity = av;
	//GEngine->AddOnScreenDebugMessage(-1, deltaTime, FColor::Green, FString::Printf(TEXT("EAV: %f , Clutch Value %f , A %f"),EngineAngularVelocity, k,boVal));

}

void AMasterVehicle::Braking(float iValue)
{
	
	if(SwapThrottleBrake)
	{
		GetThrottleValue(iValue);
		EngineAccelerating();
	}else
	{
		GetBrakingValue(iValue);
		GetBrakeTorque();
	}
}

void AMasterVehicle::GetBrakingValue(float iValue)
{
	if(!VBrakeFilter)
	{
		BrakeValue = iValue;
	}else
	{
		if(iValue != 0)
		{
			BrakeValue = FMath::Min(BrakeValue + AccelValue, 1);
		}else
		{
			BrakeValue = FMath::Max(BrakeValue - DecelValue, 0);
		}
	}
	
	
}

void AMasterVehicle::GetBrakeTorque()
{
	for(int i =0; i<4;i++)
	{
		switch (i)
		{
		case 0:
			BrakeTorque[i] = BrakeBiasRatio[0] * BrakeStength * BrakeValue;
			break;
		case 1:
			BrakeTorque[i] = BrakeBiasRatio[0] * BrakeStength * BrakeValue;
			break;
		case 2:
			BrakeTorque[i] = BrakeBiasRatio[1] * BrakeStength * BrakeValue;
			break;
		case 3:
			BrakeTorque[i] = BrakeBiasRatio[1] * BrakeStength * BrakeValue;
			break;
		default:
			break;
		}
	}
}

void AMasterVehicle::ApplyBrakeForce()
{
	for(int i=0;i<4;i++)
	{
		
		float Check = BrakeTorque[i] * (FMath::Sign(WheelAngularVelocity[i]) * -1);
		//if(WheelAngularVelocity[i] < 15 && AccelValue ==0) WheelAngularVelocity[i] = FMath::Lerp(WheelAngularVelocity[i], 0, BrakeValue);
		WheelAngularVelocity[i] += (Check / WheelInertia[i]) ;//* deltaTime
		GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Yellow, FString::Printf(TEXT("WAV:%i %f kg"), i ,WheelAngularVelocity[i]));
		
		//if(Gear > 0) Fx[i] = WheelAngularVelocity[i] - (Check / WheelInertia[i]);
		//else Fx[i] = WheelAngularVelocity[i];
		//float Check = BrakeTorque[i] * (FMath::Sign(WheelLinearVelocityLocal[i].X * -1));
		//WheelLinearVelocityLocal[i].X = WheelLinearVelocityLocal[i].X -  (Check / WheelInertia[i])*deltaTime;
	}
}


void AMasterVehicle::EngineAccelerating()
{
	if(EngineRPM < EngineStruct.max_rpm)
	{
		RevLimiterTime -= UKismetSystemLibrary::GetGameTimeInSeconds(GetWorld());
		Combustible = RevLimiterTime < EngineStruct.rev_limiter_duration;
	}else
	{
		RevLimiterTime = UKismetSystemLibrary::GetGameTimeInSeconds(GetWorld());
		Combustible = 0;

	}
		
	const float Idle_Fade = FMath::GetMappedRangeValueClamped(EngineStruct.idle_rpm,FVector2D(1,0) , EngineRPM);
	
	//MaxEffectiveTorque = Torque at Engine RPM
	const float MaxEffectiveTorque = EngineStruct.torque_curve->GetFloatValue(EngineRPM);
	//Engine Friction = Friction + (RPM * Friction Coefficient)
	const float EngineFriction = EngineStruct.friction + EngineRPM * EngineStruct.friction_coeff;
	const float MaxInitialTorque = MaxEffectiveTorque + EngineFriction;
	//Torque = Friction
	const float Torque = EngineFriction / MaxInitialTorque;

	const float ExtraEngineSupply = Idle_Fade * Torque;
	const float Power = (ThrottleValue + ExtraEngineSupply) * Combustible;
	const float RealInitialTorque = MaxInitialTorque * Power;
	const float RealEffectiveTorque = RealInitialTorque - EngineFriction;
	
	EngineTorque = RealEffectiveTorque;
	



	//angularAceleration = Torque / Inertia
	const float AngularAccel = EngineTorque / EngineStruct.inertia;
	const float MinVal = RPM_to_RadPS * EngineStruct.idle_rpm.X;
	const float MaxVal = RPM_to_RadPS * EngineStruct.max_rpm;


	EngineAngularVelocity = FMath::Clamp(EngineAngularVelocity + AngularAccel * deltaTime, MinVal ,MaxVal );
	EngineRPM = EngineAngularVelocity * RadPS_to_RPM;

}

void AMasterVehicle::SimpleDownforce()
{
	float TotalDownForce = 0;
	for(int i =0; i < 2; i++)
	{
		FVector Location;
		if(i == 0)
		{ // Front Axle location
			Location = (Wheel_FL->GetComponentLocation() + Wheel_FR->GetComponentLocation()) * .5f;
			
		}else
		{ // Rear Axle Location
			Location = (Wheel_RL->GetComponentLocation() + Wheel_RR->GetComponentLocation()) * .5f;
		}
		//cm/s to m/s
		FVector Velocity  = VehicleHullMesh->GetPhysicsLinearVelocityAtPoint(Location) / 100;

		FRotator CarRot = VehicleHullMesh->GetComponentRotation().GetInverse();

		FVector ToLocalSpace = CarRot.RotateVector(Velocity);
		ToLocalSpace.X = FMath::Abs(ToLocalSpace.X);
		ToLocalSpace.Y = FMath::Abs(ToLocalSpace.Y);
		ToLocalSpace.Z = FMath::Abs(ToLocalSpace.Z);
		//V - Airspeed
		float Force = FMath::Max(ToLocalSpace.X, 0.0f);
		//CL * A
		float CLA = 5 / 2;
		float ForceSq = Force * Force;

		float DownForce =0.5 * 1.22 * -1 * CLA * ForceSq;
		DownForce = FMath::Max(DownForce, -12000);
		TotalDownForce += DownForce;
		
		//Downforce * 100 to UE force Units
		FVector ForceAmount = VehicleHullMesh->GetUpVector() * (DownForce * 100);

		VehicleHullMesh->AddForceAtLocation(ForceAmount,Location);
		DrawDebugLine(GetWorld(), Location, ForceAmount, FColor::Blue,false, deltaTime * 1.0f, 0, 5.0f);
	}
	GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Yellow, FString::Printf(TEXT("Downforce: %f kg"),FMath::Abs((TotalDownForce))));
	
	
	
}

void AMasterVehicle::AutoReverse()
{
	if(CarSpeed < 15 && BrakeValue > 0 && Gear > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Yellow, FString::Printf(TEXT("BrakeFlipped")));
		SwapThrottleBrake = true;
		Gear = 0;
		TotalGearRatio = GearRatio[Gear] * MainGear;
	}else if(CarSpeed < 0 && Gear == 0 && BrakeValue >0)
	{
		GEngine->AddOnScreenDebugMessage(-1, .0f, FColor::Yellow, FString::Printf(TEXT("BrakeNormal")));
		SwapThrottleBrake = false;
		Gear = 2;
		TotalGearRatio = GearRatio[Gear] * MainGear;
		
	}

}
void AMasterVehicle::AutoShift()
{
	
	if(UKismetSystemLibrary::GetGameTimeInSeconds(GetWorld()) - lastAutoShiftTime > 2)
	{
		if(!SwapThrottleBrake)
		{
			if(EngineRPM > EngineStruct.ShiftUpRPM)
			{
				Gear = FMath::Min(Gear + 1,GearRatio.Num()-1);
				TotalGearRatio = GearRatio[Gear] * MainGear;
				SteeringDamper = 1 - (Gear* .1f);
			}
			else if(EngineRPM < EngineStruct.ShiftDownRPM)
			{
				Gear = FMath::Max(Gear -1,2);
				TotalGearRatio = GearRatio[Gear] * MainGear;
				SteeringDamper = 1 - (Gear* .1f);
			}
		}
	}
}




