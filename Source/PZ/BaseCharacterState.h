// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VRCharacter.h"
#include "GripMotionControllerComponent.h"
#include "BaseCharacterState.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EStateEnum : uint8
{
	VE_Move 	UMETA(DisplayName = "Move"),
	VE_Stay 	UMETA(DisplayName = "Stay"),
	VE_Climb	UMETA(DisplayName = "Climb"),
	VE_Rotate	UMETA(DisplayName = "Rotate"),
	VE_InventoryUI	UMETA(DisplayName = "InventoryUI"),
	VE_Griping	UMETA(DisplayName = "Griping"),
	VE_FreeHands	UMETA(DisplayName = "FreeHands")
};


// This class does not need to be modified.
UCLASS(Blueprintable, BlueprintType)
class PZ_API UBaseCharacterState : public UObject
{
	GENERATED_BODY()

public:
	UBaseCharacterState(const FObjectInitializer& ObjectInitializer);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Core")
		void OnEnter(AVRCharacter* character, UGripMotionControllerComponent* motionController);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Core")
		void OnExit(AVRCharacter* character);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Core")
		void OnUpdate(AVRCharacter* character, UGripMotionControllerComponent* motionController);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Core")
		void OnCreate();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Core")
		EStateEnum StateType;
	virtual void OnEnter_Implementation(AVRCharacter* character, UGripMotionControllerComponent* motionController);
	virtual void OnExit_Implementation(AVRCharacter* character);
	virtual void OnUpdate_Implementation(AVRCharacter* character, UGripMotionControllerComponent* motionController);
	virtual void OnCreate_Implementation();

};


