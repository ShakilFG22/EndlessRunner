// Fill out your copyright notice in the Description page of Project Settings.

#include "RunnerController.h"

#include <Windows.Data.Text.h>
#include "RunnerCharacter.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"


ARunnerController::ARunnerController()
{
	// PlayerIndex = -1;
}

void ARunnerController::BeginPlay()
{
	Super::BeginPlay();

	Player1 = Cast<ARunnerCharacter>(GetPawn());
	// Player2 = Cast<ARunnerCharacter>(GetPawn());

	

	// TSubclassOf<APawn> PawnToSpawn = GetWorld()->GetAuthGameMode()->DefaultPawnClass;

	// if (!Player1)
	// {
	// 	Player1 = GetWorld()->SpawnActor<ARunnerCharacter>(FVector(-119,-1276,155), FRotator(0,0,0));
	// }
	// if (!Player2)
	// {
	// 	Player2 = GetWorld()->SpawnActor<ARunnerCharacter>(PawnToSpawn, FVector(80,-1276,155), FRotator(0,0,0));
	// 	UE_LOG(LogTemp, Warning, TEXT("Spawning Player2"));
	// 	
	// }
	
}

void ARunnerController::MovePlayer2()
{

	if(!Player2)
	{
		Player2 = Cast<ARunnerCharacter>(UGameplayStatics::GetPlayerController(GetWorld(),1)->GetCharacter());
	}

}

void ARunnerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	InputComponent->BindAction("Jump", IE_Pressed, this, &ARunnerController::PlayerAction1);
	InputComponent->BindAction("Jump2", IE_Pressed, this, &ARunnerController::PlayerAction2);
	
	/*/ if (GetLocalPlayer()->GetControllerId() == 0) // Player 1
	// {
	// 	// InputComponent->BindAction("Jump", IE_Pressed, this, &ARunnerController::Jump);
	// 	InputComponent->BindAction("Jump", IE_Pressed, this, &ARunnerController::PlayerAction1);
	// }
	// if (GetLocalPlayer()->GetControllerId() == 1) // Player 2
	// {
	// 	// InputComponent->BindAction("Jump2", IE_Pressed, this, &ARunnerController::Jump2);
	// 	InputComponent->BindAction("Jump2", IE_Pressed, this, &ARunnerController::PlayerAction2);
	// }
	
	// if (GetLocalPlayer()->GetControllerId() == 0)
	// {
	//		Set up Player1 input
	//		InputComponent->BindAction("Jump", IE_Pressed, this, &ARunnerController::Jump);
	// }
	// if (GetLocalPlayer()->GetControllerId() == 1)
	// {
	// 	// Set up Player2 input
	// 	InputComponent->BindAction("Jump2", IE_Pressed, this, &ARunnerController::Jump);
	//
	// }*/
}

void ARunnerController::PlayerAction1()
{
	
	if (Player1)
	{
		Player1->Jump();
	}
}
void ARunnerController::PlayerAction2()
{
	if(!Player2)
	{
		Player2 = Cast<ARunnerCharacter>(UGameplayStatics::GetPlayerController(GetWorld(),1)->GetCharacter());
		
	}
	
	if (Player2)
	{
		Player2->Jump();
	}
}