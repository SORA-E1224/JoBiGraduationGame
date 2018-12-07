// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Graduation_Yoshida_Editor : ModuleRules
{
	public Graduation_Yoshida_Editor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EditorStyle" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "EditorStyle",
                "KismetCompiler",
                "UnrealEd",
                "GraphEditor",
                "Kismet",
                "BlueprintGraph",
            }
        );
        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}