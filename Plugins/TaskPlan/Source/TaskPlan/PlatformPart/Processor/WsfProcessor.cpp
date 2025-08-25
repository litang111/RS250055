// Fill out your copyright notice in the Description page of Project Settings.


#include "WsfProcessor.h"

// Sets default values for this component's properties
UWsfProcessor::UWsfProcessor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWsfProcessor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UWsfProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
//自定义
void UWsfProcessor::bluePrintPrase()
{
	UWorld* World = nullptr;
	if (GEngine)
	{
		for (const FWorldContext& Context : GEngine->GetWorldContexts())
		{
			if (Context.WorldType == EWorldType::Editor || Context.WorldType == EWorldType::PIE)
			{
				World = Context.World();
				break;
			}
		}
	}

	if (World)
	{
		// UBlueprintParser* Parser = NewObject<UBlueprintParser>(World);

		// �Զ�����·����ʽ
		FString BlueprintPath = "";
		if (BlueprintPath.EndsWith(".uasset"))
		{
			BlueprintPath = FPaths::GetBaseFilename(BlueprintPath, false);
		}

		UE_LOG(LogTemp, Display, TEXT("Start parsing Blueprints: %s"), *BlueprintPath);
		//Parser->ParseBlueprint(BlueprintPath);
	}
}


FString UWsfProcessor::SetString(FString str)
{
	if (afsimProcessorTxt.Find("script_variables") == 0)
	{
		afsimProcessorTxt += "script_variables";
	}

	afsimProcessorTxt += "end_script_variables";
	if (afsimProcessorTxt.Find("processor") == 0)
	{
		afsimProcessorTxt += "end_processor";
	}


	return afsimProcessorTxt;
}

FString UWsfProcessor::SetName(FString type,FString name)
{
	afsimProcessorTxt += "processor "+name+type+"\n";
	return afsimProcessorTxt;
}

FString UWsfProcessor::SetScriptVariables(FString name, FString value)
{
	if (afsimProcessorTxt.Find("script_variables") == 0)
	{
		afsimProcessorTxt += "script_variables";
	}

	afsimProcessorTxt +=  name + "= \""+ value +"\"\n";
	return afsimProcessorTxt;
}

FString UWsfProcessor::SetIncludeFile(FString fileName)
{
	afsimProcessorTxt += "include_once processors/" + fileName + "\n";
	return afsimProcessorTxt;
}

//afsim官方函数
// Called every frame
// void AWsfProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
// {
// 	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//
// 	// ...
// }

//Turn the processor off and returns true if successful.
bool UWsfProcessor::TurnOff()
{
	return 0;
}

//Turn the processor on and returns true if successful.
bool UWsfProcessor::TurnOn()
{
	return 0;
}

