// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameStateBase.h"

ACustomGameStateBase::ACustomGameStateBase()
{
	bObstacleisHidden = false;
}

void ACustomGameStateBase::GetPlayerRespawnDelay(ARunnerController* RunnerController) const
{
	Super::GetPlayerRespawnDelay(RunnerController);
}





