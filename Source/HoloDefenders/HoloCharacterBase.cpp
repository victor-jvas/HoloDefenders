// Fill out your copyright notice in the Description page of Project Settings.


#include "HoloCharacterBase.h"

// Sets default values
AHoloCharacterBase::AHoloCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

UAbilitySystemComponent* AHoloCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void AHoloCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


