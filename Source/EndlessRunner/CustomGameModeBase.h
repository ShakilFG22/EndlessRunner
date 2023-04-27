// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CustomGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ENDLESSRUNNER_API ACustomGameModeBase : public AGameModeBase
{

	GENERATED_BODY()
public:
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	virtual APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot) override;
	

	UPROPERTY(EditDefaultsOnly, Category="Spawning")
	TSubclassOf<ACharacter> Player1ToSpawn;

	UPROPERTY(EditDefaultsOnly, Category="Spawning")
	TSubclassOf<ACharacter> Player2ToSpawn;
};
