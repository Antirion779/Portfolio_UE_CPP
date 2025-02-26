// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "Components/ActorComponent.h"
#include "AttackSystem.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PORTFOLIO_UE_CPP_API UAttackSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttackSystem();

	virtual void BeginPlay() override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
	bool CanAttack = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	bool isAttacking = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	bool SaveAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	int AttackIndex;


public:

	UFUNCTION()
	void Attack();
	UFUNCTION()
	void SwordAttack();
	UFUNCTION(BlueprintCallable, Category = "Attack")
	void SwordAttackCombo();
	UFUNCTION()
	void SwitchSwordAttack();
	UFUNCTION(BlueprintCallable, Category = "Attack")
	void StopCombo();
};
