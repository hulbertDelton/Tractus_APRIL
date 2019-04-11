// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "EnemyMovement.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = Movement, meta = (BlueprintSpawnableComponent))
/**
* Acts like a regular floating pawnm movement component but can also take knockback 
* inputs and can be stunned. Knockback takes precedence over regular motion and can 
* happen independent of normal max speed. 
*/
class PRETRACTUSIII_API UEnemyMovement : public UFloatingPawnMovement
{
	GENERATED_BODY()
public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = EnemyMovement)
	float MaxKnockbackSpeed;

	
	
};
