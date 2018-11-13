// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/Controller.h"
#include "BattleFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GRADUATION_YOSHIDA_API UBattleFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "MyGame|Battle")
		static int ApplyDamage(AActor* DamagedActor, int BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass);
	
	
	
};
