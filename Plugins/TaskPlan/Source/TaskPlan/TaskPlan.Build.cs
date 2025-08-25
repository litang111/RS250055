// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TaskPlan : ModuleRules
{
	public TaskPlan(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Engine", 
				"CoreUObject",
				"Slate",
				"SlateCore",
				"InputCore",
				// ... add other public dependencies that you statically link with here ...
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{   
	
				"EditorFramework",
				"EditorStyle",
				"UnrealEd",
				"LevelEditor",
				"InteractiveToolsFramework",
				"EditorInteractiveToolsFramework",
				"Kismet",          // ��ͼϵͳ
				"BlueprintGraph",  // ��ͼ�ڵ�ͼ
				"AssetRegistry",   // �ʲ�ע���
				"AssetTools",       // �ʲ�����
				"KismetCompiler",    // Kismet����
				// ... add private dependencies that you statically link with here ...	
			}
		);
		
		// ���ڱ༭��ģʽ�±�����Щģ��
		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(new string[] {
				"EditorStyle",  // �༭����ʽ
				"GraphEditor" // ͼ�α༭��
			});
		}
		
		
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
