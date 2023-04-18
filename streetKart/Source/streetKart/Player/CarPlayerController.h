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

protected:

#pragma region ValueVariables
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)int ActualLap = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)int MaxLaps = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float ActualRaceTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float ActualLapTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float GoldTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float SilverTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float BronzeTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float BestLapTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float BestRaceTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float DefaultBestLapTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float DefaultBestRaceTime;

#pragma endregion ValueVariables

#pragma region TextVariables

	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText RaceTimeText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText CurrentLapText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText MaxLapText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText GoldTimeText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText SilverTimeText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText BronzeTimeText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText BestTimeText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText BestLapText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText NameOfMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText ReadyText;
	

#pragma endregion TextVariables

	UPROPERTY(EditAnywhere, BlueprintReadWrite)bool RaceComplete;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)bool RaceStart;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FTransform RespawnLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FString SaveSlot;


	
public:
	ACarPlayerController();
	virtual ~ACarPlayerController() = default;

	virtual void SetupInputComponent();
	
	
	
};
