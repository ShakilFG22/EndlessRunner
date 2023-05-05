// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RunnerCharacter.h"
#include "GameFramework/PlayerController.h"
#include "CustomGameModeBase.h"
#include "RunnerController.generated.h"

/**
 * 
 */
UCLASS()
class ENDLESSRUNNER_API ARunnerController : public APlayerController
{
	GENERATED_BODY()
public:
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RunnerController")
	// int PlayerIndex;
	ARunnerController();
	virtual void BeginPlay() override;
	// void SetControllerPawns(APawn* NewPawn);
	void MovePlayer2();
protected:
	virtual void SetupInputComponent() override;

	UPROPERTY(VisibleAnywhere)
	ARunnerCharacter* Player1;
	UPROPERTY(VisibleAnywhere)
	ARunnerCharacter* Player2;
	
	void PlayerAction1();
	void PlayerAction2();

	UPROPERTY()
	UMaterialInstanceDynamic* MaterialInstance;

	void SetMaterialColour(FLinearColor Colour);
private:
	
	// void Jump();
 //    void Jump2();

};
