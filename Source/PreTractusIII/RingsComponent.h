// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Turret.h"
#include "RingsComponent.generated.h"

 

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PRETRACTUSIII_API URingsComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URingsComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	int num_turrets;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(Exec)
	void addTurret();
	UPROPERTY()
	float orbit_height = 500.0f;
	URingsComponent* myTurret;
	//UTurret* myTurret;

	UPROPERTY(EditAnywhere, Category = "Turret", Meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* myRingVisual;

};
