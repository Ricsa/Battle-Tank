// Copyright of András Deme

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * TankTrack is used to set maximum driving force, and to apply forces to the tank.
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLE_TANK_NEW_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// Sets a throttle between -1 and +1.
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetThrottle(float Throttle);

	// Max force perc track, in Newtons.
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	float TrackMaxDrivingForce = 40000000.0f; // Assume 40 tonne tank, and 1g acceleration.
};
