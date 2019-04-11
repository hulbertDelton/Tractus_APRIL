// Fill out your copyright notice in the Description page of Project Settings.

#include "RingsComponent.h" 


// Sets default values for this component's properties
URingsComponent::URingsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	num_turrets = 0;
	myRingVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TheRing"));
	myRingVisual->SetRelativeScale3D(FVector(10.0f, 10.0f, 1.0f));
	myRingVisual->SetRelativeLocation(FVector(-1000.0f, 0.0f, 0.0f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> RingVisualAsset(TEXT("/Game/StarterContent/Shapes/planetRingMesh.planetRingMesh"));
	if (RingVisualAsset.Succeeded())
	{
		myRingVisual->SetStaticMesh(RingVisualAsset.Object);
		myRingVisual->SetupAttachment(this);
	}
}


// Called when the game starts
void URingsComponent::BeginPlay()
{
	Super::BeginPlay();
	// ...	
}


// Called every frame
void URingsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	myRingVisual->AddLocalRotation(FRotator(0.0f, 0.05f, 0.0f));
}

void URingsComponent::addTurret()
{
	UE_LOG(LogTemp, Warning, TEXT("AddTurret Called"));


	//UTurret* createdComp = NewObject<UTurret>(this, a);
	if (false)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddTurret passed"));
//		createdComp->SetupAttachment(this->GetOwner()->GetRootComponent());
//		createdComp->RegisterComponent();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AddTurret failed"));
	}
}