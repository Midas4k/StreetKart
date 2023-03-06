// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CarPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class STREETKART_API ACarPlayerController : public APlayerController
{
	GENERATED_BODY()

	virtual void MouseX(const float Value);
	virtual void MouseY(const float Value);
	virtual void MoveRight(const float Value);
	virtual void MoveForward(const float Value);
	virtual void Throttle(const float Value);
	virtual void Braking(const float Value);
	virtual void ShiftUp();
	virtual void ShiftDown();

public:
	ACarPlayerController();
	virtual ~ACarPlayerController() = default;

	virtual void SetupInputComponent();
	
};
