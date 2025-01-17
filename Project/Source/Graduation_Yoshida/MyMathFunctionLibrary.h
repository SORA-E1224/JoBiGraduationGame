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
#pragma region Byte

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "byte +=", CompactNodeTitle = "+="), Category = "MyMath|Byte")
		static  uint8 AddAssign_Byte(UPARAM(ref)uint8& value, uint8 add);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "byte -=", CompactNodeTitle = "-="), Category = "MyMath|Byte")
		static uint8 SubAssign_Byte(UPARAM(ref)uint8& value, uint8 sub);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "MinAssign(byte)", CompactNodeTitle = "MIN"), Category = "MyMath|Byte")
		static uint8 MinAssign_Byte(UPARAM(ref)uint8& value, uint8 min);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "MaxAssign(byte)", CompactNodeTitle = "MAX"), Category = "MyMath|Byte")
		static uint8 MaxAssign_Byte(UPARAM(ref)uint8& value, uint8 max);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ClampAssign(byte)", CompactNodeTitle = "CLAMP"), Category = "MyMath|Byte")
		static uint8 ClampAssign_Byte(UPARAM(ref)uint8& value, uint8 min, uint8 max);

#pragma endregion

#pragma region Integer

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "integer +=", CompactNodeTitle = "+="), Category = "MyMath|Integer")
		static int AddAssign_Int(UPARAM(ref)int& value, int add);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "integer -=", CompactNodeTitle = "-="), Category = "MyMath|Integer")
		static int SubAssign_Int(UPARAM(ref)int& value, int sub);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "MinAssign(integer)", CompactNodeTitle = "MIN"), Category = "MyMath|Integer")
		static int MinAssign_Int(UPARAM(ref)int& value, int min);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "MaxAssign(integer)", CompactNodeTitle = "MAX"), Category = "MyMath|Integer")
		static int MaxAssign_Int(UPARAM(ref)int& value, int max);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ClampAssign(integer)", CompactNodeTitle = "CLAMP"), Category = "MyMath|Integer")
		static int ClampAssign_Int(UPARAM(ref)int& value, int min, int max);

#pragma endregion

#pragma region Float

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "float +=", CompactNodeTitle = "+="), Category = "MyMath|Float")
		static float AddAssign_Float(UPARAM(ref)float& value, float add);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "float -=", CompactNodeTitle = "-="), Category = "MyMath|Float")
		static float SubAssign_Float(UPARAM(ref)float& value, float sub);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "MinAssign(float)", CompactNodeTitle = "MIN"), Category = "MyMath|Float")
		static float MinAssign_Float(UPARAM(ref)float& value, float min);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "MaxAssign(float)", CompactNodeTitle = "MAX"), Category = "MyMath|Float")
		static float MaxAssign_Float(UPARAM(ref)float& value, float max);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ClampAssign(float)", CompactNodeTitle = "CLAMP"), Category = "MyMath|Float")
		static float ClampAssign_Float(UPARAM(ref)float& value, float min, float max);

#pragma endregion

#pragma region Vector

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "vector +=", CompactNodeTitle = "+="), Category = "MyMath|Vector")
		static FVector AddAssign_Vector(UPARAM(ref)FVector& value, FVector add);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "vector -=", CompactNodeTitle = "-="), Category = "MyMath|Vector")
		static FVector SubAssign_Vector(UPARAM(ref)FVector& value, FVector sub);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Distance", CompactNodeTitle = "DISTANCE"), Category = "MyMath|Vector")
		static float Distance_Vector(const FVector begin, const FVector end);

#pragma endregion

};
