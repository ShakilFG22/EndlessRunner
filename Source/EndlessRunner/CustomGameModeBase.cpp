// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameModeBase.h"

#include "GameFramework/Character.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"

AActor* ACustomGameModeBase::ChoosePlayerStart_Implementation(AController* Player)
{
	TArray<AActor*> PlayerStarts;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), PlayerStarts);

	if (PlayerStarts.Num() >= 2)
	{
		static int32 SpawnCounter = 0;
		int32 SelectedPlayerStartIndex = SpawnCounter % 2;
		SpawnCounter++;

		return PlayerStarts[SelectedPlayerStartIndex];
	}

	
	return Super::ChoosePlayerStart_Implementation(Player);
}

APawn* ACustomGameModeBase::SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot)
{
	// Determine which character to spawn based on the StartSpot
	TSubclassOf<ACharacter> PlayerToSpawn;
	if (StartSpot == GetWorld()->GetAuthGameMode()->ChoosePlayerStart(NewPlayer))
	{
		PlayerToSpawn = Player1ToSpawn;
	}
	else
	{
		PlayerToSpawn = Player2ToSpawn;
	}

	if (PlayerToSpawn != nullptr)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		SpawnParams.Owner = NewPlayer;
		SpawnParams.Instigator = nullptr;
		SpawnParams.ObjectFlags |= RF_Transient; // We never want to save default player pawns into a map
		APawn* NewCharacter = GetWorld()->SpawnActor<APawn>(PlayerToSpawn, StartSpot->GetActorTransform(), SpawnParams);
		return NewCharacter;
	}

	return Super::SpawnDefaultPawnFor_Implementation(NewPlayer, StartSpot);
}

