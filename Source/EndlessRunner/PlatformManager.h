// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PlatformManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ENDLESSRUNNER_API UPlatformManager : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlatformManager();

	UPROPERTY(EditAnywhere, Category="Platform")
	TSubclassOf<class AActor> PlatformClass;

	UFUNCTION(BlueprintCallable, Category="Platform")
	void SpawnPlatform();

	UFUNCTION(BlueprintCallable, Category="Platform")
	void RemovePlatform();

	UPROPERTY(EditAnywhere, Category="Platform")
	FVector SpawnLocation;
	UPROPERTY(EditAnywhere, Category="Platform")
	FRotator SpawnRotation;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
private:
	TArray<class AActor*> Platforms;	
		
};
