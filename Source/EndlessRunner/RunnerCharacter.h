// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../../../../../../../Program Files/Epic Games/UE_5.1/Engine/Plugins/VirtualProduction/LiveLinkVRPN/ThirdParty/VRPN/Include/VRPN/vrpn_Thread.h"
#include "GameFramework/Character.h"
#include "RunnerCharacter.generated.h"

UCLASS()
class ENDLESSRUNNER_API ARunnerCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* SideViewCamera;

	
public:
	// Sets default values for this character's properties
	ARunnerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	void MoveRight(float value);
	void AutoMoveRight();
public:
	class UCameraComponent* GetSideViewCameraComponent() const
	{
		return SideViewCamera;
	}
	void someFunction();
	void RestartLevel();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gameplay")
	float Score;
	
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

private:
	int characterHealth;
	float accelerateSpeed = 0.1f;
	float zPosition;
	FVector tempPos = FVector();
	FVector currentLocation;
	bool CanMove;
	
	
};
