// Fill out your copyright notice in the Description page of Project Settings.

#include "PZ.h"
#include <iostream>
#include <string>
#include "EnvironmentComonent.h"

using namespace std;

// Sets default values for this component's properties
UEnvironmentComonent::UEnvironmentComonent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


UEnvironmentComonent::UEnvironmentComonent(float val, float min, float max, FString textToDisplay)
{
	this->CurrentValue = val;
	if (min > max)
		min = max;
	this->MinValue = min;
	this->MaxValue = max;
	this->Text = textToDisplay;
		
}

// Called when the game starts
void UEnvironmentComonent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEnvironmentComonent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


