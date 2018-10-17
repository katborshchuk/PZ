// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvironmentComonent.h"
#include "Environment.generated.h"

UCLASS(Blueprintable, BlueprintType)
class PZ_API AEnvironment : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnvironment();
	AEnvironment(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		UEnvironmentComonent* Temperature = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		UEnvironmentComonent* Oxygen = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		UEnvironmentComonent* Pressure = nullptr;

	
	
};
