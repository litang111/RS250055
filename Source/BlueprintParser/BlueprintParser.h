#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlueprintParser.generated.h"

// 声明日志类别
DECLARE_LOG_CATEGORY_EXTERN(LogBlueprintParser, Log, All);
/**
 * 
 */
UCLASS()
class RS250055_API UBlueprintParser : public UObject
{
    GENERATED_BODY()

public:
    // 主解析函数（蓝图可调用）
    UFUNCTION(BlueprintCallable, Category = "Blueprint Parser")
    void ParseBlueprint(const FString& BlueprintPath);

    // 获取解析结果（变量）
    UFUNCTION(BlueprintPure, Category = "Blueprint Parser")
    TMap<FString, FString> GetVariables() const { return Variables; }

    // 获取解析结果（函数）
    UFUNCTION(BlueprintPure, Category = "Blueprint Parser")
    TArray<FString> GetFunctions() const { return Functions; }

    UFUNCTION(BlueprintPure, Category = "Blueprint Parser")
    const TArray<FString>& GetNodeConnections() const { return NodeConnections; }

private:
    // 加载蓝图资产
    UBlueprint* LoadBlueprint(const FString& Path);

    // 解析变量
    void ParseVariables(UBlueprint* Blueprint);

    // 解析函数
    void ParseFunctions(UBlueprint* Blueprint);

    // 解析事件图
    void ParseEventGraph(UBlueprint* Blueprint);

    void AppendToLog(const FString& Message); // 统一日志收集
    void WriteLogToFile(const FString& FilePath);//将解析结果写入txt文件
    // 存储解析结果
    TMap<FString, FString> Variables; // 变量名 -> 类型
    TArray<FString> Functions;        // 函数名列表
    TArray<FString> NodeConnections;  // 节点连接关系

    // 日志内容缓存
    FString LogContent;
};