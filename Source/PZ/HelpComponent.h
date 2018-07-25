// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "EngineMinimal.h"
#include "Engine/Engine.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "HelpComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterEventDelegate_OnStartAcumulatorCharging, AActor*, accumulator);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterEventDelegate_OnEndAcumulatorCharging, bool, result);

UCLASS(meta = (BlueprintSpawnableComponent), Category = "Global Events")
class UHelpComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHelpComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
