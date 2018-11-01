// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyPlayerCharacter.generated.h"

DECLARE_DYNAMIC_DELEGATE(FAttackEvent);
DECLARE_DYNAMIC_DELEGATE(FGuardEvent);

UCLASS()
class GRADUATION_YOSHIDA_API AMyPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite, Category = "Events")
		FAttackEvent AttackEvent;

	UFUNCTION(BlueprintCallable, Category = "Events")
		void CallAttackEvent() { AttackEvent.Execute(); }

	UPROPERTY(BlueprintReadWrite, Category = "Events")
		FGuardEvent GuardEvent;

	UFUNCTION(BlueprintCallable, Category = "Events")
		void CallGuardEvent() { GuardEvent.Execute(); }

};
