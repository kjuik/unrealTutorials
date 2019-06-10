// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"

// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector DeltaMovement = FVector(FMath::Sin((RunningTime + DeltaTime) * MovementFrequency.X) - FMath::Sin(RunningTime * MovementFrequency.X),
									FMath::Sin((RunningTime + DeltaTime) * MovementFrequency.Y) - FMath::Sin(RunningTime * MovementFrequency.Y),
									FMath::Sin((RunningTime + DeltaTime) * MovementFrequency.Z) - FMath::Sin(RunningTime * MovementFrequency.Z));
	RunningTime += DeltaTime;

	SetActorLocation(GetActorLocation() + DeltaMovement * Amplitude);
}

