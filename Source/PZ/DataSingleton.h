// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "HelpComponent.h"
#include "EnvironmentComonent.h"
#include "DataSingleton.generated.h"
//

UCLASS(Blueprintable, BlueprintType)
class PZ_API  UDataSingleton : public UObject
{
	GENERATED_BODY()
public:
	UDataSingleton(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Level Events")
		FCharacterEventDelegate_OnStartAcumulatorCharging OnStartAcumulatorCharging;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Level Events")
		FCharacterEventDelegate_OnStartAcumulatorCharging OnAccumulatorGriped;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Level Events")
		FCharacterEventDelegate_OnEndAcumulatorCharging OnEndAcumulatorCharging;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Level Events")
		FCharacterEventDelegate_OnStartAcumulatorCharging OnStartGasCharging;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Level Events")
		FCharacterEventDelegate_OnEndAcumulatorCharging OnEndGasCharging;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Level Events")
		FCharacterEventDelegate_EnvironmentComponentChanged OnValueCriticalChanged;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Level Events")
		FCharacterEventDelegate_OpenCloseDoor OnOpenCloseDoor;

};