// Fill out your copyright notice in the Description page of Project Settings.


#include "Checkpoint.h"

#include "Particles/ParticleSystemComponent.h"


// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

#pragma region Create Defaults

	CPRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(CPRootComponent);

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	ArrowComponent->SetupAttachment(CPRootComponent);

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	ParticleSystem->SetupAttachment(CPRootComponent);
#pragma endregion Create Defaults

}

// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheckpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

