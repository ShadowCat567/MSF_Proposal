// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MSF_Proposal : ModuleRules
{
	public MSF_Proposal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
