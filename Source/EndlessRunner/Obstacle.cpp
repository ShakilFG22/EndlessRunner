// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"

#include "RunnerCharacter.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	isInvisible = false;
	
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->InitSphereRadius(SizeRadius);
	SphereComponent->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	RootComponent = SphereComponent;

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AObstacle::OnSphereOverlapBegin);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AObstacle::OnSphereOverlapEnd);
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstacle::OnSphereOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// isInvisible = false;
}

void AObstacle::OnSphereOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	float RandomChance = FMath::FRandRange(0.0f, 1.0f);

	if (OtherActor->IsA(ARunnerCharacter::StaticClass()) && isInvisible == true) //Makes it not invisible
	{
		isInvisible = false;
		SetActorHiddenInGame(isInvisible);
	}
	else if (OtherActor->IsA(ARunnerCharacter::StaticClass()) && isInvisible == false) //Makes it invisible
	{
		if (RandomChance <= 0.25f)
		{
			isInvisible = true;
			SetActorHiddenInGame(isInvisible);
		}
	}
}

