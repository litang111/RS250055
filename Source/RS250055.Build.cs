// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class RS250055 : ModuleRules
{
	public RS250055(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        // 添加蓝图解析所需的模块
        PrivateDependencyModuleNames.AddRange(new string[] {
            "UnrealEd",        // 编辑器功能
            "Kismet",          // 蓝图系统
            "BlueprintGraph",  // 蓝图节点图
            "AssetRegistry",   // 资产注册表
            "Slate",           // UI框架
            "SlateCore",        // UI核心
            "AssetTools",       // 资产工具
            "KismetCompiler",    // Kismet编译
            "EditorStyle"       // 编辑器样式
        });

        // 仅在编辑器模式下编译这些模块
        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[] {
                "EditorStyle",  // 编辑器样式
                "GraphEditor" // 图形编辑器
            });
        }
        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
