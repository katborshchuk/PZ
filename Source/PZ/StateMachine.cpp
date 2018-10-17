// Fill out your copyright notice in the Description page of Project Settings.

#include "PZ.h"
#include "VRCharacter.h"
#include "BaseCharacterState.h"
#include "GripMotionControllerComponent.h"
#include "InputCoreTypes.h"
#include "StateMachine.h"


// Sets default values for this component's properties
UStateMachine::UStateMachine()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStateMachine::BeginPlay()
{
	Super::BeginPlay();
	this->Owner = Cast<AVRCharacter>(this->GetOwner());
	// ...
	
}


// Called every frame
void UStateMachine::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	//if (MainState)
	//{
	//	MainState->OnUpdate(Owner);
	//}
	//if (AdditionalState)
	//{
	//	AdditionalState->OnUpdate(Owner);
	//}
	// ...
}

void UStateMachine::HandleKeyInput_Implementation(FKey key, float inputValue, bool pressed, UGripMotionControllerComponent* motionController)
{

		
}

void UStateMachine::InitStates_Implementation(UBaseCharacterState * main, UBaseCharacterState * additional)
{
	MainState = main;
	AdditionalState = additional;
}



