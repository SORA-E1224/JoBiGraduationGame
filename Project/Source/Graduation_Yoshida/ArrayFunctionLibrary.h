// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArrayFunctionLibrary.generated.h"

UENUM(BlueprintType)
enum class EmptyCode : uint8
{
	Empty,
	NotEmpty
};

/**
 *
 */
UCLASS()
class GRADUATION_YOSHIDA_API UArrayFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "MyArray", meta = (DisplayName = "IsEmpty", ArrayParm = "Array"))
		static bool IsEmptyBoolean(const TArray<int32>& Array);

	UFUNCTION(BlueprintCallable, Category = "MyArray", meta = (DisplayName = "IsEmpty", ArrayParm = "Array", ExpandEnumAsExecs = "code"))
		static void IsEmptyExec(const TArray<int32>& Array, EmptyCode& code);

};
