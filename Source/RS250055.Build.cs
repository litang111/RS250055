// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class RS250055 : ModuleRules
{
	public RS250055(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        // �����ͼ���������ģ��
        PrivateDependencyModuleNames.AddRange(new string[] {
            "UnrealEd",        // �༭������
            "Kismet",          // ��ͼϵͳ
            "BlueprintGraph",  // ��ͼ�ڵ�ͼ
            "AssetRegistry",   // �ʲ�ע���
            "Slate",           // UI���
            "SlateCore",        // UI����
            "AssetTools",       // �ʲ�����
            "KismetCompiler",    // Kismet����
            "EditorStyle"       // �༭����ʽ
        });

        // ���ڱ༭��ģʽ�±�����Щģ��
        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[] {
                "EditorStyle",  // �༭����ʽ
                "GraphEditor" // ͼ�α༭��
            });
        }
        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
