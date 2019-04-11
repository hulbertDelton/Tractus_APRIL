// Fill out your copyright notice in the Description page of Project Settings.

#include "Turret.h"


// Sets default values for this component's properties
UTurret::UTurret()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
	myMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Trrret"));
	myMesh->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));


	static ConstructorHelpers::FObjectFinder<UStaticMesh> TurretVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone"));
	if (TurretVisualAsset.Succeeded())
	{
		myMesh->SetStaticMesh(TurretVisualAsset.Object);
		myMesh->SetupAttachment(this);
	}
}


// Called when the game starts
void UTurret::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTurret::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

