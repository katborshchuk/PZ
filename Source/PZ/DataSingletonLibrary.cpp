// Fill out your copyright notice in the Description page of Project Settings.

#include "PZ.h"
#include "DataSingleton.h"
#include "DataSingletonLibrary.h"



UDataSingletonLibrary::UDataSingletonLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UDataSingleton* UDataSingletonLibrary::GetData(bool& IsValid)
{
	IsValid = false;
	UDataSingleton* DataInstance = Cast<UDataSingleton>(GEngine->GameSingleton);

	if (!DataInstance) return NULL;
	if (!DataInstance->IsValidLowLevel()) return NULL;

	IsValid = true;
	return DataInstance;
}

