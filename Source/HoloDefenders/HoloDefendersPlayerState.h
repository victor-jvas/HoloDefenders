// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "HoloDefendersPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class HOLODEFENDERS_API AHoloDefendersPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

	AHoloDefendersPlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	
	UAbilitySystemComponent* AbilitySystemComponent;
};
