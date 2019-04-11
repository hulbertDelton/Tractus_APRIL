// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoPlanet.h"


// Sets default values
ADemoPlanet::ADemoPlanet()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	base_locale = CreateDefaultSubobject<USceneComponent>(TEXT("Demo Planet"));
	RootComponent = base_locale;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("ActualCamera"));
	Camera->SetupAttachment(RootComponent);
	Camera->SetRelativeLocation(FVector(0.0f, 0.0f, 2000.0f));
	Camera->SetRelativeRotation(FQuat(0.0f, 1.0f, 0.0f, 90.0f));
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ADemoPlanet::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Error, TEXT("Begin Play"));
}

// Called every frame
void ADemoPlanet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
}

void ADemoPlanet::resetCamera()
{
	UE_LOG(LogTemp, Warning, TEXT("ResetCamera"));
	Camera->SetRelativeLocation(FVector(0.0f, 0.0f, 2000.0f));
}


// Called to bind functionality to input
void ADemoPlanet::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UE_LOG(LogTemp, Warning, TEXT("Ah OK Bind"));

	PlayerInputComponent->BindAction("resetCamera", IE_Pressed, this, &ADemoPlanet::resetCamera);
	PlayerInputComponent->BindAction("addTurret", IE_Pressed, this, &ADemoPlanet::addTurret);
	PlayerInputComponent->BindAxis("PanX", this, &ADemoPlanet::MoveCameraX);
	PlayerInputComponent->BindAxis("PanY", this, &ADemoPlanet::MoveCameraY);
	PlayerInputComponent->BindAxis("ZoomZ", this, &ADemoPlanet::MoveCameraZ);
}


void ADemoPlanet::MoveCameraX(float axis) 
{
	Camera->AddLocalOffset(FVector(0.0f, axis * cameraSpeedMultiplier, 0.0f));
}

void ADemoPlanet::MoveCameraY(float axis)
{
	Camera->AddLocalOffset(FVector(0.0f, 0.0f, axis * cameraSpeedMultiplier));
}

void ADemoPlanet::MoveCameraZ(float axis)
{
	Camera->AddLocalOffset(FVector(axis * cameraSpeedMultiplier, 0.0f, 0.0f));
}

void ADemoPlanet::addTurret()
{
	myRing->addTurret();
}