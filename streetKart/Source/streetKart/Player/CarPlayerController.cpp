// Fill out your copyright notice in the Description page of Project Settings.


#include "CarPlayerController.h"

#include "streetKart/Vehicles/MasterVehicle.h"

ACarPlayerController::ACarPlayerController()
{
	
}

void ACarPlayerController::MoveForward(const float Value)
{
	Cast<AMasterVehicle>(GetPawn())->MoveForward(Value);
}

void ACarPlayerController::MoveRight(const float Value)
{
	Cast<AMasterVehicle>(GetPawn())->MoveRight(Value);
}

void ACarPlayerController::MouseX(const float Value)
{
	Cast<AMasterVehicle>(GetPawn())->CameraOrbit(Value);
}

void ACarPlayerController::MouseY(const float Value)
{
	Cast<AMasterVehicle>(GetPawn())->CameraPitch(Value);
}

void ACarPlayerController::Throttle(const float Value)
{
	Cast<AMasterVehicle>(GetPawn())->Throttle(Value);
}

void ACarPlayerController::ShiftUp()
{
	Cast<AMasterVehicle>(GetPawn())->ShiftUp();
}
void ACarPlayerController::ShiftDown()
{
	Cast<AMasterVehicle>(GetPawn())->ShiftDown();
}

void ACarPlayerController::Braking(const float Value)
{
	Cast<AMasterVehicle>(GetPawn())->Braking(Value);
}




void ACarPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("Throttle",this, &ACarPlayerController::Throttle);
	InputComponent->BindAxis("Braking", this, &ACarPlayerController::Braking);
	InputComponent->BindAxis("mouseX", this, &ACarPlayerController::MouseX);
	InputComponent->BindAxis("mouseY",this,&ACarPlayerController::MouseY);
	InputComponent->BindAxis("Forward", this, &ACarPlayerController::MoveForward);
	InputComponent->BindAxis("Right",this,&ACarPlayerController::MoveRight);
	InputComponent->BindAction("ShiftUp", IE_Pressed, this, &ACarPlayerController::ShiftUp);
	InputComponent->BindAction("ShiftDown", IE_Pressed, this, &ACarPlayerController::ShiftDown);
}

