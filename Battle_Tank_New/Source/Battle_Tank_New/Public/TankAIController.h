// Copyright of András Deme

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLE_TANK_NEW_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	// How close can AI tank get to Player
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float AcceptanceRadius = 8000.0;

private:
	void BeginPlay() override;

	void Tick(float DeltaTime) override;

};
