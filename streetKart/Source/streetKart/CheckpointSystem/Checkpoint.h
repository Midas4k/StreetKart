// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ArrowComponent.h"
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "streetKart/Vehicles/MasterVehicle.h"
#include "Checkpoint.generated.h"


UCLASS()
class STREETKART_API ACheckpoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACheckpoint();

	UPROPERTY(EditAnywhere, BlueprintReadWrite) int CheckpointNumber;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#pragma region component
	UPROPERTY(VisibleDefaultsOnly, Category=Default)
	USceneComponent* CPRootComponent;

	UPROPERTY(BlueprintReadWrite, Category=Default)
	UArrowComponent* ArrowComponent;

	UPROPERTY(BlueprintReadWrite, Category=Default)
	UParticleSystemComponent* ParticleSystem;

#pragma endregion component
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
