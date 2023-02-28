// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShaderTest : ModuleRules
{
	public ShaderTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
