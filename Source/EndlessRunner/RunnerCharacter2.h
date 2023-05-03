// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunnerCharacter2.generated.h"

UCLASS()
class ENDLESSRUNNER_API ARunnerCharacter2 : public ACharacter
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* SideViewCamera;
public:
	// Sets default values for this character's properties
	ARunnerCharacter2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	virtual void AutoMoveRight();
public:
	virtual class UCameraComponent* GetSideViewCameraComponent() const
	{
		return SideViewCamera;
	}
	// void RestartLevel();

	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gameplay")
	// float Score;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player")
	// int PlayerIndex;
	
	
	// UFUNCTION()
	// void OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
	// 	AActor* OtherActor, UPrimitiveComponent* OtherComp,
	// 	int32 OtherBodyIndex, bool bFromSweep,
	// 	const FHitResult& SweepResult);

private:
	int characterHealth;
	float accelerateSpeed = 0.1f;
	float zPosition;
	FVector tempPos = FVector();
	FVector currentLocation;
	bool CanMove;
	
};
