// Fill out your copyright notice in the Description page of Project Settings.

#include "FloatyPawn.h"


// Sets default values
AFloatyPawn::AFloatyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFloatyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector myLocation = GetActorLocation();
	myLocation.Z = myLocation.Z + 10 * sin(GetGameTimeSinceCreation());
	SetActorLocation(myLocation);
}

// Called to bind functionality to input
void AFloatyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

