// Fill out your copyright notice in the Description page of Project Settings.


#include "HoloPlayerState.h"

#include "AbilitySystemComponent.h"
#include "HoloDefenders/AbilitySystem/HoloAbilitySystemComponent.h"

AHoloPlayerState::AHoloPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UHoloAbilitySystemComponent>(TEXT("Custom Ability System Component"));
	AbilitySystemComponent->SetIsReplicated(true);

	NetUpdateFrequency = 100.f;
}

UAbilitySystemComponent* AHoloPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
