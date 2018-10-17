// Fill out your copyright notice in the Description page of Project Settings.

#include "PZ.h"
#include "EnvironmentComonent.h"
#include "Environment.h"


// Sets default values
AEnvironment::AEnvironment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

AEnvironment::AEnvironment(const FObjectInitializer & ObjectInitializer)
{
	this->Temperature = ObjectInitializer.CreateDefaultSubobject <UEnvironmentComonent>(this, TEXT("Temperature"));
	this->Temperature->MaxValue = 40;
	this->Temperature->MinValue = -5;
	this->Temperature->CurrentValue = 10;
	this->Temperature->Text = "Temperature";

	this->Oxygen = ObjectInitializer.CreateDefaultSubobject <UEnvironmentComonent>(this, TEXT("Oxygen"));
	this->Oxygen->MaxValue = 30;
	this->Oxygen->MinValue = 6;
	this->Oxygen->CurrentValue = 20;
	this->Oxygen->Text = "Oxygen";

	this->Pressure = ObjectInitializer.CreateDefaultSubobject <UEnvironmentComonent>(this, TEXT("Pressure"));
	this->Pressure->MaxValue = 1.2;
	this->Pressure->MinValue = 0.9;
	this->Pressure->CurrentValue = 1;
	this->Pressure->Text = "Pressure";
}

// Called when the game starts or when spawned
void AEnvironment::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnvironment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

