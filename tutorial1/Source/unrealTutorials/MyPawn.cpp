// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawn.h"
#include "Classes/Components/InputComponent.h"
#include "Classes/Components/StaticMeshComponent.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set this pawn to be controlled by the lowest-numbered player
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Create a dummy root component we can attach things to.
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Create a camera and a visible object
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCamera"));
	Visuals = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OurVisibleComponent"));

	// Attach our camera and visible object to our root component. Offset and rotate the camera.
	Camera->SetupAttachment(RootComponent);
	Camera->SetRelativeLocation(FVector(-250.0f, 0.0f, 250.0f));
	Camera->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));

	Visuals->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Handle growing and shrinking based on our "Grow" action
	{
		float CurrentScale = Visuals->GetComponentScale().X;
		if (bGrowing)
		{
			// Grow to double size over the course of one second
			CurrentScale += DeltaTime;
		}
		else
		{
			// Shrink half as fast as we grow
			CurrentScale -= (DeltaTime * 0.5f);
		}
		// Make sure we never drop below our starting size, or increase past double size.
		CurrentScale = FMath::Clamp(CurrentScale, 1.0f, 20.0f);
		Camera->SetRelativeLocation(FVector(-250.0f, 0.0f, 250.0f) * CurrentScale);

		Visuals->SetWorldScale3D(FVector(CurrentScale));

	}

	// Handle movement based on our "MoveX" and "MoveY" axes
	{
		if (!CurrentVelocity.IsZero())
		{
			FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime);
			SetActorLocation(NewLocation);

			CurrentVelocity *= (1.0f - DeltaTime);
		}
	}
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Respond when our "Grow" key is pressed or released.
	PlayerInputComponent->BindAction("Grow", IE_Pressed, this, &AMyPawn::StartGrowing);
	PlayerInputComponent->BindAction("Grow", IE_Released, this, &AMyPawn::StopGrowing);

	PlayerInputComponent->BindAction("GrowBoost", IE_Pressed, this, &AMyPawn::GrowBoost);

	// Respond every frame to the values of our two movement axes, "MoveX" and "MoveY".
	PlayerInputComponent->BindAxis("MoveX", this, &AMyPawn::Move_XAxis);
	PlayerInputComponent->BindAxis("MoveY", this, &AMyPawn::Move_YAxis);
}

void AMyPawn::Move_XAxis(float AxisValue)
{
	CurrentVelocity.X += AxisValue * 10.0f;
	CurrentVelocity.X = FMath::Clamp(CurrentVelocity.X, -200.0f, 200.0f);
}

void AMyPawn::Move_YAxis(float AxisValue)
{
	CurrentVelocity.Y += AxisValue * 10.0f;
	CurrentVelocity.Y = FMath::Clamp(CurrentVelocity.Y, -200.0f, 200.0f);
}

void AMyPawn::StartGrowing()
{
	bGrowing = true;
}

void AMyPawn::StopGrowing()
{
	bGrowing = false;
}

void AMyPawn::GrowBoost()
{
	if (bGrowing) {
		Visuals->SetWorldScale3D(Visuals->GetComponentScale() * 1.5f);
	}
}

