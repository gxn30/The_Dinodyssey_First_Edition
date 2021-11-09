using UnrealBuildTool;

public class Dino_Project_V1Target : TargetRules
{
	public Dino_Project_V1Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Dino_Project_V1");
	}
}
