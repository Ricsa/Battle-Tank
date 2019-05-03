// Copyright of András Deme

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class UTankAimingComponent;

/**
 * Responsible for helping the player aim.
 */
UCLASS()
class BATTLE_TANK_NEW_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
	void FoundAimingComponent(UTankAimingComponent* AimingCompRef);

	UFUNCTION()
	void OnPossessedTankDeath();

private:
	void BeginPlay() override;

	virtual void SetPawn(APawn* InPawn) override;

	void Tick(float DeltaTime) override;

	// Start the tank moving the barrel so that a shot would hit where the crosshair intersects the world.
	void AimTowardsCrosshair();

	bool GetSightRayHitLocation(FVector & HitLocation) const;

	bool GetLookDirection(FVector2D ScreenLocation, FVector & LookDirection) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector & HitLocation) const;

	UPROPERTY(EditDefaultsOnly)
	float CrossHairXLocation = 0.5;

	UPROPERTY(EditDefaultsOnly)
	float CrossHairYLocation = 0.33333;

	UPROPERTY(EditDefaultsOnly)
	float LineTraceRange = 1000000.0;
};
