// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankTorret.h"




void UTankTorret::Rotate(float RelativeSpeed)
{
	//UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() called at speed: %s"), DegreesPerSecond );
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1);
	auto ElevationChange = RelativeSpeed * MaxDegreePerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewRotation = RelativeRotation.Pitch + ElevationChange;
	auto Rotation = FMath::Clamp<float>(RawNewRotation, MinRotationDegrees, MaxRotationDegrees);
	SetRelativeRotation(FRotator(0, Rotation, 0));
}