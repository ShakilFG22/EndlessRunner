// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameModeBase.h"

#include "CustomGameStateBase.h"
#include "RunnerCharacter.h"
#include "RunnerController.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"



ACustomGameModeBase::ACustomGameModeBase()
{
	/*
	// DefaultPawnClass = ACustomGameModeBase::StaticClass(); //No longer needed!!! This one worked best, I think. 
	// PlayerControllerClass = ACustomGameModeBase::StaticClass();
	// DefaultPawnClass = nullptr; // I had some issues with this one.
	// PlayerControllerClass = ARunnerController::StaticClass();
*/
	DefaultPawnClass = ARunnerCharacter::StaticClass();
	PlayerControllerClass = ARunnerController::StaticClass();
	GameStateClass = ACustomGameStateBase::StaticClass();
	
}

void ACustomGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::CreatePlayer(GetWorld(), 0, true);
	UGameplayStatics::CreatePlayer(GetWorld(), 1, true);
	// APlayerController* Player1Controller = UGameplayStatics::CreatePlayer(GetWorld(), 0, true);
	// APlayerController* Player2Controller = UGameplayStatics::CreatePlayer(GetWorld(), 1, true);
	// ARunnerController* RunnerController1 = Cast<ARunnerController>(UGameplayStatics::CreatePlayer(GetWorld(), 0, true));
	// ARunnerController* RunnerController2 = Cast<ARunnerController>(UGameplayStatics::CreatePlayer(GetWorld(), 1, true));

	// RunnerController1->Possess(Pawn1);
	// RunnerController2->Possess(Pawn2);

	// if (Player1Controller && Player2Controller)
	// {
	// 	GetWorld()->GetTimerManager().SetTimerForNextTick([this, Player1Controller, Player2Controller]()
	// 	{
	// 		APawn* Player1Pawn = Player1Controller->GetPawn();
	// 		APawn* Player2Pawn = Player2Controller->GetPawn();
	//
	// 		if (Player1Pawn && Player2Pawn)
	// 		{
	// 			Player1Controller->SetControllerPawns(Player1Pawn);
	// 			Player2Controller->SetControllerPawns(Player2Pawn);
	// 		}
	// 	});
	// }
}



// void ACustomGameModeBase::CreatePlayers()
// {
// 	UGameplayStatics::CreatePlayer(GetWorld(), 0, true);
// 	UGameplayStatics::CreatePlayer(GetWorld(), 1, true);
// }






/*void ACustomGameModeBase::StartPlay()
{
	Super::StartPlay();

	
}


void ACustomGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	
	// Get the number of connected players
	int PlayerCount = 0;
	for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		PlayerCount++;
	}
	
	if (PlayerCount <= 2)
	{
		FVector SpawnLocation;
		FRotator SpawnRotation;

		// Set spawn location and rotation based on PlayerIndex
		if (PlayerCount == 1)
		{
			SpawnLocation = FVector(-87.f, -1393.f, 156.f);
			SpawnRotation = FRotator(0.f, 0.f, 0.f);
		}
		else
		{
			SpawnLocation = FVector(102.f, -1393.f, 156.f);
			SpawnRotation = FRotator(0.f, 0.f, 0.f);
		}

		// Spawn the CharacterActor
		ARunnerCharacter* SpawnedCharacter = GetWorld()->SpawnActor<ARunnerCharacter>(DefaultPawnClass, SpawnLocation, SpawnRotation);

		// Set the PlayerIndex of the spawned CharacterActor
		SpawnedCharacter->PlayerIndex = PlayerCount - 1;

		// Possess the CharacterActor with the PlayerController
		NewPlayer->Possess(SpawnedCharacter);
	}
}



AActor* ACustomGameModeBase::ChoosePlayerStart_Implementation(AController* Player)
{
	TArray<AActor*> PlayerStarts;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), PlayerStarts);

	if (PlayerStarts.Num() >= 1)
	{
		static int SpawnCounter = 0;
		int SelectedPlayerStartIndex = SpawnCounter % 2;
		SpawnCounter++;

		return PlayerStarts[SelectedPlayerStartIndex];
	}

	
	return Super::ChoosePlayerStart_Implementation(Player);
}
//TODO This function is not functioning.
// APawn* ACustomGameModeBase::SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot) 
// {
// 	// Determine which character to spawn based on the StartSpot
// 	TSubclassOf<ACharacter> PlayerToSpawn;
// 	if (StartSpot == GetWorld()->GetAuthGameMode()->ChoosePlayerStart(NewPlayer))
// 	{
// 		PlayerToSpawn = Player1ToSpawn;
// 	}
// 	else
// 	{
// 		PlayerToSpawn = Player2ToSpawn;
// 	}
//
// 	if (PlayerToSpawn != nullptr)
// 	{
// 		FActorSpawnParameters SpawnParams;
// 		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
// 		SpawnParams.Owner = NewPlayer;
// 		SpawnParams.Instigator = nullptr;
// 		SpawnParams.ObjectFlags |= RF_Transient; // We never want to save default player pawns into a map
// 		APawn* NewCharacter = GetWorld()->SpawnActor<APawn>(PlayerToSpawn, StartSpot->GetActorTransform(), SpawnParams);
// 		return NewCharacter;
// 	}
//
// 	return Super::SpawnDefaultPawnFor_Implementation(NewPlayer, StartSpot);
// }


APawn* ACustomGameModeBase::SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot)
{
    TSubclassOf<ACharacter> CharacterToSpawn = nullptr;

    TArray<AActor*> PlayerStarts;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), PlayerStarts);
		
    // if (PlayerStarts.Num() >= 2)
    // {
    //     if (StartSpot == PlayerStarts[0])
    //     {
            CharacterToSpawn = Player1ToSpawn;
        // }
        // else if (StartSpot == PlayerStarts[1])
        // {
            CharacterToSpawn = Player2ToSpawn;
    //     }
    // }

		if (CharacterToSpawn != nullptr)
		{
		    FActorSpawnParameters SpawnParams;
		    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		    SpawnParams.Owner = NewPlayer;
		    SpawnParams.Instigator = nullptr;
		    SpawnParams.ObjectFlags |= RF_Transient; // We never want to save default player pawns into a map
		    APawn* NewCharacter = GetWorld()->SpawnActor<APawn>(CharacterToSpawn, StartSpot->GetActorTransform(), SpawnParams);
		    return NewCharacter;
		}

    return Super::SpawnDefaultPawnFor_Implementation(NewPlayer, StartSpot);
}*/


