// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Graduation_YoshidaTarget : TargetRules
{
	public Graduation_YoshidaTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.Add("Graduation_Yoshida");
	}
}
