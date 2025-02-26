// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttackSystem.h"
#include "Portfolio_UE_CPPCharacter.h"
#include "Paladin_Character.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO_UE_CPP_API APaladin_Character : public APortfolio_UE_CPPCharacter
{
	GENERATED_BODY()

	APaladin_Character();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* AttackAction;


protected:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


public:
	void Attack(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	UAttackSystem* AttackSystem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TArray<UAnimMontage*> AttackCombo;
};
