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

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ClampAssign(byte)"), Category = "MyMath|Byte")
		static uint8 ClampAssign_Byte(UPARAM(ref)uint8& value, uint8 min, uint8 max);

#pragma endregion

#pragma region Integer

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "integer +=", CompactNodeTitle = "+="), Category = "MyMath|Integer")
		static int AddAssign_Int(UPARAM(ref)int& value, int add);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "integer -=", CompactNodeTitle = "-="), Category = "MyMath|Integer")
		static int SubAssign_Int(UPARAM(ref)int& value, int sub);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ClampAssign(integer)"), Category = "MyMath|Integer")
		static int ClampAssign_Int(UPARAM(ref)int& value, int min, int max);

#pragma endregion

#pragma region Float

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "float +=", CompactNodeTitle = "+="), Category = "MyMath|Float")
		static float AddAssign_Float(UPARAM(ref)float& value, float add);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "float -=", CompactNodeTitle = "-="), Category = "MyMath|Float")
		static float SubAssign_Float(UPARAM(ref)float& value, float sub);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ClampAssign(float)"), Category = "MyMath|Float")
		static float ClampAssign_Float(UPARAM(ref)float& value, float min, float max);

#pragma endregion

#pragma region Vector

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "vector +=", CompactNodeTitle = "+="), Category = "MyMath|Vector")
		static FVector AddAssign_Vector(UPARAM(ref)FVector& value, FVector add);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "vector -=", CompactNodeTitle = "-="), Category = "MyMath|Vector")
		static FVector SubAssign_Vector(UPARAM(ref)FVector& value, FVector sub);

#pragma endregion

};
