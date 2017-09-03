// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTorret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))//, hidecategories = ("Collision"))
class BATTLETANK_API UTankTorret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
		// -1 is max downward, and +1 is max up movement
		void Rotate(float RelativeSpeed);

	UPROPERTY(EditAnywhere, Category = Setup)
		float MaxDegreePerSecond = 20;

	UPROPERTY(EditAnywhere, Category = Setup)
		float MaxRotationDegrees = 40;

	UPROPERTY(EditAnywhere, Category = Setup)
		float MinRotationDegrees = 0;
	
	
};
