// Fill out your copyright notice in the Description page of Project Settings.


#include "RunnerCharacter.h"

#include "Spikes.h"
#include "WallSpike.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Spikes.h"
#include "WallSpike.h"
#include "Engine.h"
#include "TimerManager.h"

// Sets default values
ARunnerCharacter::ARunnerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	SideViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Side View Camera"));
	SideViewCamera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f,720.0f, 0.0f);
	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.8f;
	GetCharacterMovement()->JumpZVelocity = 1000.0f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxFlySpeed = 600.0f;

	tempPos = GetActorLocation();
	zPosition = tempPos.Z + 300.0f;

	characterHealth = 3;
}

// Called when the game starts or when spawned
void ARunnerCharacter::BeginPlay()
{
	Super::BeginPlay();

	
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ARunnerCharacter::OnOverlapBegin);
	
	CanMove = true;
}



// Called every frame
void ARunnerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Score += DeltaTime;
	
	accelerateSpeed += (DeltaTime * 1.0f);
	
	tempPos = GetActorLocation();
	tempPos.X -= 850.0f;
	tempPos.Z = zPosition;
	SideViewCamera->SetWorldLocation(tempPos);

	AutoMoveRight();
}
void ARunnerCharacter::AutoMoveRight()
{
	
	FVector CurrentLocation = GetActorLocation();
	if (CanMove)
		currentLocation = CurrentLocation + FVector(0.0f,accelerateSpeed, 0.0f );
	SetActorLocation(currentLocation);
}

// Called to bind functionality to input
void ARunnerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
}

void ARunnerCharacter::someFunction()
{
	int variable = 1;
	variable++;
}

void ARunnerCharacter::RestartLevel()
{
	characterHealth = 3;
	UE_LOG(LogTemp, Warning, TEXT("Character health: %d"), characterHealth)
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()));
}



void ARunnerCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr)
	{
		ASpikes* WallSpike = Cast<AWallSpike>(OtherActor);
		ASpikes* Spike = Cast<ASpikes>(OtherActor);

		if (WallSpike || Spike)
		{
			characterHealth -= 1;

			UE_LOG(LogTemp, Warning, TEXT("Character health: %d"), characterHealth)
			
			if (characterHealth <= 0)
			{
				GetMesh()->Deactivate();
				GetMesh()->SetVisibility(false);

				CanMove = false;
				currentLocation = FVector(0.0f,0.0f,0.0f);

				FTimerHandle UnusedHandle;
				GetWorldTimerManager().SetTimer(UnusedHandle, this, &ARunnerCharacter::RestartLevel, 0.1f, false);
			}
		}
	}
}



