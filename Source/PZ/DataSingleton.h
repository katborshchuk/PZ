// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "GlobalEventHandler.h"
#include "DataSingleton.generated.h"

UCLASS(Blueprintable, BlueprintType)
class UDataSingleton : public UObject
{
	GENERATED_BODY()
public:
	UDataSingleton(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Solus Data Singleton")
	UGlobalEventHandler* GlobalEventHandler;
};