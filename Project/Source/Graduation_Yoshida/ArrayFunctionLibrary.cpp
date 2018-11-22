// Fill out your copyright notice in the Description page of Project Settings.

#include "ArrayFunctionLibrary.h"


bool UArrayFunctionLibrary::IsEmptyBoolean(const TArray<int32>& Array)
{
	if (Array.Num() == 0)
	{
		return true;
	}
	return false;
}


void UArrayFunctionLibrary::IsEmptyExec(const TArray<int32>& Array, EmptyCode& code)
{
	if (Array.Num() == 0)
	{
		code = EmptyCode::Empty;
		return;
	}
	code = EmptyCode::NotEmpty;
	return;
}
