// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataSingleton.h"
#include "DataSingletonLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PZ_API UDataSingletonLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UDataSingletonLibrary(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintPure, Category = "Solus Data Singleton")
		static UDataSingleton* GetData(bool& IsValid);
	
};
