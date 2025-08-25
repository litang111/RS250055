// Fill out your copyright notice in the Description page of Project Settings.
/*****************************************************************//**
 * \file   WsfScriptProcessor.h
 * \brief  
 * \note  
 * TODO：
 *  - 1、 To be improved
 *  - 2、
 * \author ping.fang 
 * \date   2025.08.08
 *********************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "WsfProcessor.h"
#include "WsfScriptProcessor.generated.h"
USTRUCT(BlueprintType)
struct FExternalLink
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType)
struct FFWsfScriptProcessor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_SCRIPT_PROCESSOR");
	FFWsfProcessor WsfProcessorCommands;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_SCRIPT_PROCESSOR");
	FFPlatformPart PlatformPartCommands;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_SCRIPT_PROCESSOR");
	FExternalLink ExternalLinkCommands;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_SCRIPT_PROCESSOR");
	int behavior_tree ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_SCRIPT_PROCESSOR");
	int  FiniteStateMachineCommands;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_SCRIPT_PROCESSOR");
	int update_interval;
};
UCLASS(Blueprintable)
class TASKPLAN_API UWsfScriptProcessor : public UWsfProcessor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWsfScriptProcessor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


public:
	//afsim官方函数

	//---------------WSF_SCRIPT_PROCESSOR----------------//
	// BlueprintImplementableEvent:纯蓝图实现（C++ 不提供逻辑）
	UFUNCTION(BlueprintImplementableEvent, Category = "WSF_SCRIPT_PROCESSOR")
	void on_initialize();

	UFUNCTION(BlueprintImplementableEvent, Category = "WSF_SCRIPT_PROCESSOR")
	void on_initialize2();

	UFUNCTION(BlueprintImplementableEvent, Category = "WSF_SCRIPT_PROCESSOR")
	void update_interval(double& time);//默认参数从C++传递到蓝图,UPARAM(ref)允许蓝图修改参数并传回C++

	UFUNCTION(BlueprintImplementableEvent, Category = "WSF_SCRIPT_PROCESSOR")
	void on_update();

	UFUNCTION(BlueprintImplementableEvent, Category = "WSF_SCRIPT_PROCESSOR")
	void on_message();
	// UFUNCTION(BlueprintImplementableEvent, Category = "WSF_SCRIPT_PROCESSOR")
	// void on_message_create(WsfMessage aMessage);
}; 

// 	processor <name> WSF_SCRIPT_PROCESSOR
//    ... processor Commands ...
//    ... Platform Part Commands ...
//    ... External Link Commands ...
//
//    behavior_tree ...
//
//    ... Finite State Machine Commands ...
//
//    update_interval <time-value>
//
//    on_initialize
// 	  ...script definition...
//    end_on_initialize
//
//    on_initialize2
// 	  ...script definition...
//    end_on_initialize2
//
//    on_update
// 	  ...script definition...
//    end_on_update
//
//    on_message
// 	  ...script definition...
//    end_on_message
//
//    script void on_message_create(WsfMessage aMessage)
// 	  ...script definition...
//    end_script
//
// end_processor

