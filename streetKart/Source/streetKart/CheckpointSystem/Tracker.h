// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Checkpoint.h"
#include "GameFramework/Actor.h"
#include "Tracker.generated.h"

UCLASS()
class STREETKART_API ATracker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATracker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#pragma region Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite)int MaxLaps = 2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float GoldTime = 60;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float SilverTime = 120;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float BronzeTime = 180;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float DefaultBestLap = 60;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)float DefaultBestTime = 120;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FText NameOfMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FString SaveName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)int TotalCheckpoints;
#pragma endregion Variables

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
