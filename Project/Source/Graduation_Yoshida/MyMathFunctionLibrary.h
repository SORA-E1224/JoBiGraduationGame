// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyMathFunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class GRADUATION_YOSHIDA_API UMyMathFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "integer +=", CompactNodeTitle = "+="), Category = "MyMath|Integer")
		static int AddAssign(UPARAM(ref)int& value, int add);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "integer -=", CompactNodeTitle = "-="), Category = "MyMath|Integer")
		static int SubAssign(UPARAM(ref)int& value, int sub);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ClampAssign(integer)"), Category = "MyMath|Integer")
		static int ClampAssign(UPARAM(ref)int& value, int min, int max);

};
