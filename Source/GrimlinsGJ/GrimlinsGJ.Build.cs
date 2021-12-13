// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GrimlinsGJ : ModuleRules
{
	public GrimlinsGJ(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
