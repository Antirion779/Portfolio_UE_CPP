// Fill out your copyright notice in the Description page of Project Settings.


#include "Paladin_Character.h"

#include "EnhancedInputComponent.h"

APaladin_Character::APaladin_Character()
{
	// Initialisation du composant AttackSystem
	AttackSystem = CreateDefaultSubobject<UAttackSystem>(TEXT("AttackSystem"));
}


void APaladin_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {

		// Jumping
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &APaladin_Character::Attack);
	}
}


void APaladin_Character::Attack(const FInputActionValue& Value)
{
	if (AttackSystem)
	{
		AttackSystem->Attack();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Pas d'attackSystem !"));

	}
}
