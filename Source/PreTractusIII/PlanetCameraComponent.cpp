// Fill out your copyright notice in the Description page of Project Settings.

#include "PlanetCameraComponent.h"


// Sets default values for this component's properties
UPlanetCameraComponent::UPlanetCameraComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("ActualCamera"));

	
	//Camera->SetupAttachment(RootComponent);
}


// Called when the game starts
void UPlanetCameraComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlanetCameraComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

