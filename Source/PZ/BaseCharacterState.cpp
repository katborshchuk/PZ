// Fill out your copyright notice in the Description page of Project Settings.

#include "PZ.h"
#include "BaseCharacterState.h"


// Add default functionality here for any IBaseCharacterState functions that are not pure virtual.

UBaseCharacterState::UBaseCharacterState(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	OnCreate();
}

void UBaseCharacterState::OnEnter_Implementation(AVRCharacter* character, UGripMotionControllerComponent* motionController)
{
}

void UBaseCharacterState::OnExit_Implementation(AVRCharacter* character)
{   
}

void UBaseCharacterState::OnUpdate_Implementation(AVRCharacter* character, UGripMotionControllerComponent* motionController)
{
}

void UBaseCharacterState::OnCreate_Implementation()
{
}
