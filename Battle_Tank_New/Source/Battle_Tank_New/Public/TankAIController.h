// Copyright of András Deme

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;

/**
 * 
 */
UCLASS()
class BATTLE_TANK_NEW_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;

	void Tick(float DeltaTime) override;

	// How close can AI tank get to Player
	float AcceptanceRadius = 3000.0;
};
