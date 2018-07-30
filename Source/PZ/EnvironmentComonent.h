// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HelpComponent.h"
#include <iostream>
#include <string>
#include "EnvironmentComonent.generated.h"

using namespace std;


UENUM(BlueprintType)		
enum class EEnvironmentTypeEnum : uint8
{
	VE_Temperature 	UMETA(DisplayName = "Temperature"),
	VE_Oxygen 	UMETA(DisplayName = "Oxygen"),
	VE_Pressure	UMETA(DisplayName = "Pressure"),
};


UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PZ_API UEnvironmentComonent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnvironmentComonent();
	UEnvironmentComonent(float val, float min, float max, FString textToDisplay);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float CurrentValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float MaxValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float MinValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float TimeToRestore = 100;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		FString  Text;

	
};
