// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/HoloAbilitySystemComponent.h"
#include "GameFramework/Character.h"
#include "HoloCharacterBase.generated.h"

UCLASS(Abstract)
class HOLODEFENDERS_API AHoloCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	
	AHoloCharacterBase();

protected:
	
	virtual void BeginPlay() override;

	UAbilitySystemComponent* AbilitySystemComponent;
	

};
