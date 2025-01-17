// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIModule/Classes/GenericTeamAgentInterface.h"
#include "MyPlayerCharacter.generated.h"

UCLASS()
class GRADUATION_YOSHIDA_API AMyPlayerCharacter : public ACharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category = "Team")
		FGenericTeamId TeamID;

	virtual FGenericTeamId GetGenericTeamId() const override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "AttackAction"), Category = "MyEvents|Battle")
		void AttackActionEvent();

};
