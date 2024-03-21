// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HoloCharacterBase.generated.h"

UCLASS(Abstract)
class HOLODEFENDERS_API AHoloCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHoloCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

};
