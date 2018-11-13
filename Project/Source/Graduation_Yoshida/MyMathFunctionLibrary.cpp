// Fill out your copyright notice in the Description page of Project Settings.

#include "MyMathFunctionLibrary.h"


int UMyMathFunctionLibrary::AddAssign(int& value, int add)
{
	value += add;
	return value;
}

int UMyMathFunctionLibrary::SubAssign(int& value, int sub)
{
	value -= sub;
	return value;
}

int UMyMathFunctionLibrary::ClampAssign(int& value, int min, int max)
{
	value = FMath::Clamp(value, min, max);
	return value;
}