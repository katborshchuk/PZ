// Fill out your copyright notice in the Description page of Project Settings.

#include "PZ.h"
#include "GlobalEventHandler.h"
#include "DataSingleton.h"


UDataSingleton::UDataSingleton(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	this->GlobalEventHandler = CreateDefaultSubobject<UGlobalEventHandler>(TEXT("GlobalEventHandler"));
}
