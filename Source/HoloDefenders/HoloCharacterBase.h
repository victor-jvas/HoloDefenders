// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/HoloAbilitySystemComponent.h"
#include "GameFramework/Character.h"
#include "HoloCharacterBase.generated.h"

UCLASS(Abstract)
class HOLODEFENDERS_API AHoloCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	
	AHoloCharacterBase();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	
	virtual void BeginPlay() override;

	UAbilitySystemComponent* AbilitySystemComponent;
	

};
