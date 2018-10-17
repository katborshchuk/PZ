// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseCharacterState.h"
#include "GripMotionControllerComponent.h"
#include "InputCoreTypes.h"
#include "StateMachine.generated.h"


UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PZ_API UStateMachine : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStateMachine();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	 
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Core")
		void HandleKeyInput(FKey key, float inputValue, bool pressed, UGripMotionControllerComponent* motionController);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Core")
		void InitStates(UBaseCharacterState* main, UBaseCharacterState* additional);

	virtual void HandleKeyInput_Implementation(FKey key, float inputValue, bool pressed, UGripMotionControllerComponent* motionController);
	virtual void InitStates_Implementation(UBaseCharacterState* main, UBaseCharacterState* additional);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Core")
	UBaseCharacterState* MainState = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Core")
	UBaseCharacterState* AdditionalState = nullptr;
	AVRCharacter* Owner = nullptr;


	
};
