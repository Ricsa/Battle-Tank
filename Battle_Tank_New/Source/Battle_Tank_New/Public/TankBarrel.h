// Copyright of András Deme

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent)) // hidecategories = ("Collision"))  Hides categories in BP.
class BATTLE_TANK_NEW_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float MaxDegreesPerSecond = 10.0;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float MaximumElevationDegrees = 40.0;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float MinimumELevationDegrees = 0.0;
};
