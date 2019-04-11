// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RingsComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "DemoPlanet.generated.h"

UCLASS()
class PRETRACTUSIII_API ADemoPlanet : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADemoPlanet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float cameraSpeedMultiplier = 10.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void resetCamera();
	UPROPERTY(EditAnywhere, Category = "PlanetConfig")
		USceneComponent* base_locale;

	UPROPERTY(EditAnywhere, Category = "PlanetConfig")
		URingsComponent* myRing;

	UFUNCTION(BlueprintCallable, Category = "PlanetConfig")
		void addTurret();
	UPROPERTY(EditAnywhere, Category = "Camera")
	UCameraComponent* Camera;
	void MoveCameraX(float axis);
	void MoveCameraY(float axis);
	void MoveCameraZ(float axis);


};

