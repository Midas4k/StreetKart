// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RacingGameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class STREETKART_API ARacingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ARacingGameModeBase();
	virtual ~ARacingGameModeBase() = default;
	
};
