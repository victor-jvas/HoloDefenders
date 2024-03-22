// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "HoloPlayerState.generated.h"

class UAttributeSet;
class UHoloAttributeSetBase;
class UHoloAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class HOLODEFENDERS_API AHoloPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

	AHoloPlayerState();

	

public:
	// Gameplay Ability System
		//Methods
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

private:
	// Gameplay Ability System
		//Variables
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	TObjectPtr<UAttributeSet> AttributeSet;
};
