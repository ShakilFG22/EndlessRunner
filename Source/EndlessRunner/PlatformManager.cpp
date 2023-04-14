// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformManager.h"

// Sets default values for this component's properties
UPlatformManager::UPlatformManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UPlatformManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UPlatformManager::SpawnPlatform()
{
	// Get the player's location
	FVector playerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	// Calculate the location and rotation for the new platform
	FVector spawnLocation = playerLocation + FVector(0.0f, 100.0f, 0.0f);
	FRotator spawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	// Spawn the new platform
	AActor* newPlatform = GetWorld()->SpawnActor<AActor>(PlatformClass, spawnLocation, spawnRotation);

	// Attach the new platform to the Platform Manager
	if (newPlatform)
	{
		newPlatform->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
	}
}

void UPlatformManager::RemovePlatform()
{
	if (Platforms.Num() > 0)
	{
		AActor* PlatformToRemove = Platforms[0];
		Platforms.RemoveAt(0);

		PlatformToRemove->Destroy();
	}
}

// Called every frame
void UPlatformManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

