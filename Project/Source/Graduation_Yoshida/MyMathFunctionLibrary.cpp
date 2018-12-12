// Fill out your copyright notice in the Description page of Project Settings.

#include "MyMathFunctionLibrary.h"

#pragma region Byte

FORCEINLINE_DEBUGGABLE
uint8 UMyMathFunctionLibrary::AddAssign_Byte(uint8& value, uint8 add)
{
	value += add;
	return value;
}

FORCEINLINE_DEBUGGABLE
uint8 UMyMathFunctionLibrary::SubAssign_Byte(uint8& value, uint8 sub)
{
	value -= sub;
	return value;
}

FORCEINLINE_DEBUGGABLE
uint8 UMyMathFunctionLibrary::MinAssign_Byte(uint8& value, uint8 min)
{
	value = FMath::Min(value, min);
	return value;
}

FORCEINLINE_DEBUGGABLE
uint8 UMyMathFunctionLibrary::MaxAssign_Byte(uint8& value, uint8 max)
{
	value = FMath::Max(value, max);
	return value;
}

FORCEINLINE_DEBUGGABLE
uint8 UMyMathFunctionLibrary::ClampAssign_Byte(uint8& value, uint8 min, uint8 max)
{
	value = FMath::Clamp(value, min, max);
	return value;
}

#pragma endregion

#pragma region Integer

FORCEINLINE_DEBUGGABLE
int UMyMathFunctionLibrary::AddAssign_Int(int& value, int add)
{
	value += add;
	return value;
}

FORCEINLINE_DEBUGGABLE
int UMyMathFunctionLibrary::SubAssign_Int(int& value, int sub)
{
	value -= sub;
	return value;
}

FORCEINLINE_DEBUGGABLE
int UMyMathFunctionLibrary::MinAssign_Int(int& value, int min)
{
	value = FMath::Min(value, min);
	return value;
}

FORCEINLINE_DEBUGGABLE
int UMyMathFunctionLibrary::MaxAssign_Int(int& value, int max)
{
	value = FMath::Max(value, max);
	return value;
}

FORCEINLINE_DEBUGGABLE
int UMyMathFunctionLibrary::ClampAssign_Int(int& value, int min, int max)
{
	value = FMath::Clamp(value, min, max);
	return value;
}

#pragma endregion

#pragma region Float

FORCEINLINE_DEBUGGABLE
float UMyMathFunctionLibrary::AddAssign_Float(float& value, float add)
{
	value += add;
	return value;
}

FORCEINLINE_DEBUGGABLE
float UMyMathFunctionLibrary::SubAssign_Float(float& value, float sub)
{
	value -= sub;
	return value;
}

FORCEINLINE_DEBUGGABLE
float UMyMathFunctionLibrary::MinAssign_Float(float& value, float min)
{
	value = FMath::Min(value, min);
	return value;
}

FORCEINLINE_DEBUGGABLE
float UMyMathFunctionLibrary::MaxAssign_Float(float& value, float max)
{
	value = FMath::Max(value, max);
	return value;
}

FORCEINLINE_DEBUGGABLE
float UMyMathFunctionLibrary::ClampAssign_Float(float& value, float min, float max)
{
	value = FMath::Clamp(value, min, max);
	return value;
}

#pragma endregion

#pragma region Vector

FORCEINLINE_DEBUGGABLE
FVector UMyMathFunctionLibrary::AddAssign_Vector(FVector& value, FVector add)
{
	value += add;
	return value;
}

FORCEINLINE_DEBUGGABLE
FVector UMyMathFunctionLibrary::SubAssign_Vector(FVector& value, FVector sub)
{
	value -= sub;
	return value;
}

FORCEINLINE_DEBUGGABLE
float UMyMathFunctionLibrary::Distance_Vector(const FVector begin, const FVector end)
{
	return FVector::Distance(begin, end);
}

#pragma endregion
