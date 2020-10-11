// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VehicleWheel.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TireLib.generated.h"


USTRUCT(BlueprintType)
struct FWheelSetupBP
{
    GENERATED_BODY()

        // The wheel class to use
     UPROPERTY(BlueprintReadWrite, Category = WheelSetup)
        TSubclassOf<UVehicleWheel> WheelClass;

    // Bone name on mesh to create wheel at
    UPROPERTY(BlueprintReadWrite, Category = WheelSetup)
        FName BoneName;

    // Additional offset to give the wheels for this axle.
    UPROPERTY(BlueprintReadWrite, Category = WheelSetup)
        FVector AdditionalOffset;

    // Disables steering regardless of the wheel data
    UPROPERTY(BlueprintReadWrite, Category = WheelSetup)
        bool bDisableSteering;
};


/**
 *
 */
UCLASS()
class DRIVE_API UTireLib : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
        UFUNCTION(BlueprintCallable)
        static void modifyTyreConfig(UWheeledVehicleMovementComponent* Component, TArray<FWheelSetupBP> Tyres);
};

