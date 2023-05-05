// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RunnerController.h"
#include "GameFramework/GameStateBase.h"
#include "CustomGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class ENDLESSRUNNER_API ACustomGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	ACustomGameStateBase();

	virtual void GetPlayerRespawnDelay(ARunnerController* RunnerController) const;

	UPROPERTY(VIsibleAnywhere, BlueprintReadOnly, Category="Obstacle")
	bool bObstacleisHidden;


};
