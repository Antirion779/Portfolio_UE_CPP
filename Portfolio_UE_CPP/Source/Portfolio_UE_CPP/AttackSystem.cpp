// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackSystem.h"

#include "Paladin_Character.h"

// Sets default values for this component's properties
UAttackSystem::UAttackSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UAttackSystem::BeginPlay()
{
	
}

void UAttackSystem::Attack()
{
	if (CanAttack)
	{
		SwordAttack();
	}
}

void UAttackSystem::SwordAttack()
{
	if (isAttacking)
	{
		SaveAttack = true;
	}
	else
	{
		SaveAttack = false;
		SwitchSwordAttack();
	}
}

void UAttackSystem::SwordAttackCombo()
{
	if (SaveAttack)
	{
		SaveAttack = false;
		SwitchSwordAttack();
	}
	else
	{
		StopCombo();
	}
}

void UAttackSystem::SwitchSwordAttack()
{
	isAttacking = true;
	FTimerHandle TimerHandle; //Timer To Prevent Fast DoubleClick ou similar
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateLambda([this]()
	{
		AActor* Owner = GetOwner();
		if (!Owner) return;

		USkeletalMeshComponent* MeshComp = Owner->FindComponentByClass<USkeletalMeshComponent>();
		if (!MeshComp) return;

		APaladin_Character* Character = Cast<APaladin_Character>(Owner);

		UAnimInstance* AnimInstance = MeshComp->GetAnimInstance();
		AnimInstance->Montage_Play(Character->AttackCombo[AttackIndex]);
		

		if (AttackIndex < Character->AttackCombo.Num() - 1)
		{
			AttackIndex = (AttackIndex + 1) % Character->AttackCombo.Num();
		}
	}), .1f, false);
	
}

void UAttackSystem::StopCombo()
{
	CanAttack = false;
	FTimerHandle TimerHandle; //Timer To Prevent Fast DoubleClick ou similar
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateLambda([this]()
	{
		isAttacking = false;
		AttackIndex = 0;
		CanAttack = true;
	}), .5f, false);
}