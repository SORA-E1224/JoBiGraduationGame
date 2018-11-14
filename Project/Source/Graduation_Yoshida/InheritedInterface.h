// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InheritedInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInheritedInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class GRADUATION_YOSHIDA_API IInheritedInterface
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "AnyDamage"), Category = "MyGame|Battle")
		void ReceiveDamage(int Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

};
