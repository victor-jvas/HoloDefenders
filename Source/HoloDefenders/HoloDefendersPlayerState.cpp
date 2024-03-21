// Fill out your copyright notice in the Description page of Project Settings.


#include "HoloDefendersPlayerState.h"

#include "AbilitySystemComponent.h"

AHoloDefendersPlayerState::AHoloDefendersPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("Custom Ability System Component"));
	AbilitySystemComponent->SetIsReplicated(true);

	NetUpdateFrequency = 100.f;
}

UAbilitySystemComponent* AHoloDefendersPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
