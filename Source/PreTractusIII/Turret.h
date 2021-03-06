// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Turret.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PRETRACTUSIII_API UTurret : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTurret();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY(VisibleDefaultsOnly, Category = "Components", Meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* myMesh;


};
