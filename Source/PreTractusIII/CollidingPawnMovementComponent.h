// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PawnMovementComponent.h"
#include "CollidingPawnMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class PRETRACTUSIII_API UCollidingPawnMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()
		virtual void TickComponent(float deltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};
