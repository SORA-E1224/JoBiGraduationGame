// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Graduation_YoshidaEditorTarget : TargetRules
{
	public Graduation_YoshidaEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange(new string[] { "Graduation_Yoshida" });
	}
}
