// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"
#include "CustomGameStateBase.h"
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
	ACustomGameStateBase* CustomGameStateBase = Cast<ACustomGameStateBase>(GetWorld()->GetGameState<ACustomGameStateBase>());

	if (CustomGameStateBase)
	{
		isInvisible = CustomGameStateBase->bObstacleisHidden;
		if (OtherActor->IsA(ARunnerCharacter::StaticClass()) && isInvisible == true) //Makes it not invisible
		{
			isInvisible = false;
			// CustomGameStateBase->bObstacleisHidden = false;
			SetActorHiddenInGame(isInvisible);
		}
		else if (OtherActor->IsA(ARunnerCharacter::StaticClass()) && isInvisible == false) //Has a chance to make it invisible
		{
			float RandomChance = FMath::FRandRange(0.0f, 1.0f);

			if (RandomChance <= 0.25f)
			{
				// CustomGameStateBase->bObstacleisHidden = !CustomGameStateBase->bObstacleisHidden;
				isInvisible = true;
				SetActorHiddenInGame(isInvisible);
			}
		}
	}
}

