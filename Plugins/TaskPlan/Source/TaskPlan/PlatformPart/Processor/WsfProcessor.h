// Fill out your copyright notice in the Description page of Project Settings.
/*****************************************************************//**
 * \file   WsfProcessor.h
 * \brief  
 * \note  
 * TODO：
 *  - 1、 To be improved
 *  - 2、
 * \author li.tang 
 * \date   2025.07.21
 *********************************************************************/

#pragma once
#include "../WsfPlatformPart.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WsfProcessor.generated.h"
USTRUCT(BlueprintType)
struct FFWsfProcessor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfProcessor");
	FFPlatformPart PlatformPartCommands;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfProcessor");
	int update_interval;
};
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TASKPLAN_API UWsfProcessor : public UWsfPlatformPart
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWsfProcessor();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//自定义
	UFUNCTION(BlueprintCallable, Category = "WsfProcessor")
	void bluePrintPrase();

	UFUNCTION(BlueprintCallable, Category = "WsfProcessor")
	FString SetString(FString str);

	FString afsimProcessorTxt;

	UFUNCTION(BlueprintCallable, Category = "WsfProcessor")
	FString SetName(FString type, FString name);

	UFUNCTION(BlueprintCallable, Category = "WsfProcessor")
	FString SetScriptVariables(FString name, FString value);

	UFUNCTION(BlueprintCallable, Category = "WsfProcessor")
	FString SetIncludeFile(FString FileName);
public:
	//afsim官方函数
	//Turn the processor off and returns true if successful.
	UFUNCTION(BlueprintCallable, Category = "WsfProcessor")
	bool TurnOff();
		
	//Turn the processor on and returns true if successful.
	UFUNCTION(BlueprintCallable, Category = "WsfProcessor")
	bool TurnOn();
	// Static Methods
	// static bool IsA_TypeOf(string aDerivedType, string aBaseType)
	// Returns true if the processor type specified by aDerivedType inherits from the processor type specified by aBaseType (compare to WsfObject.IsA_TypeOf(aBaseType), which determines if a specific object inherits from aBaseType).
	//
	// Methods
	// bool TurnOff()
	// Turn the processor off and returns true if successful.
	//
	// Important The behavior of any processor in the off state is implementation dependent. AFSIM does not prevent any user defined script methods from executing or being called when associated with a processor, regardless of state.
	// bool TurnOn()
	// Turn the processor on and returns true if successful.
	//
	// double UpdateInterval()
	// Return the processor’s update interval in seconds.
	//
	// void SetUpdateInterval(double aUpdateInterval)
	// Set the processor’s update interval.
	//
	// bool ScriptExists(string aScript)
	// Returns ‘true’ if a script with the given name exists on the processor.
	//
	// Object Execute(string aScript)
	// Object Execute(string aScript, Array<Object> aArgs)
	// bool ExecuteScript(string aScript)
	// bool ExecuteScriptWithArgs(string aScript, Array<Object> aArgs)
	// Execute the script with the given name and optional argument list. Returns the return value of the executed script.
	//
	// Example:
	//
	// int count = (int)proc.Execute("SensorCount", {"airliner"} );
	// Note The ExecuteScript and ExecuteScriptWithArgs forms are provided for backward compatibility, and return ‘true’ if the script exists.
	// bool ExecuteAtTime(double aTime, string aScript)
	// bool ExecuteAtTime(double aTime, string aScript, Array<Object> aArgs)
	// bool ExecuteScriptAtTime(double aTime, string aScript)
	// Execute the script with the given name and optional argument list at the given simulation time (seconds). Returns whether the scheduled execution was successful: true, if the processor is a WSF_SCRIPT_PROCESSOR and the supplied script exists on the processor; false otherwise.
	//
	// Note ExecuteScriptAtTime is an alias for ExecuteAtTime
	// void SuppressMessage()
	// This method indicates that the current message being handled by an on_message block or script should not have the default routing to internal and external links performed. If this method is not called during the handling of the current message, the message will be routed to the platform parts defined in the internal_link and external_link commands for the processor.
	//
	// Behavior Tree Access Methods
	// WsfBehaviorTreeNode Behavior(string aBehaviorName)
	// WsfBehaviorTreeNode FindBehavior(string aBehaviorName)
	// Finds the first behavior of the given name on the processor’s behavior tree and returns it.
	//
	// int BehaviorCount()
	// Returns the index number of named behavior leaf nodes on a tree. If a behavior is attached to the tree more than once each separate attachment is counted, and each index value is valid for use by the ‘BehaviorEntry(int aIndex)’ method defined below.
	//
	// WsfBehaviorTreeNode BehaviorEntry(int aIndex)
	// Returns the behavior node from the tree of the given index number.
	//
	// WsfBehaviorTreeNode BehaviorTreeRootNode()
	// Returns the root node of behavior tree. Note: at this time the root node is a connector node of the parallel type; when traversing the tree this way you should expect some children nodes to be non-leaf connector nodes that have useless or redundant names. Because behavior nodes are WsfObjects, you can check their names & types.
	//
	// Advanced Behavior Tree Access Methods
	// WsfAdvancedBehaviorTreeNode AdvancedBehavior(string aBehaviorName)
	// WsfAdvancedBehaviorTreeNode FindAdvancedBehavior(string aBehaviorName)
	// Returns the first advanced behavior of the given name on the processor’s advanced behavior tree. The advanced behavior should be tested for validity before use.
	//
	// Array<WsfAdvancedBehaviorTreeNode> AdvancedBehaviorsExecuted()
	// Returns an array of all leaf nodes that executed last tick for the tree.
	//
	// int AdvancedBehaviorCount()
	// Returns the number of named advanced behavior leaf nodes on a tree. If an advanced behavior is attached to the tree more than once, each separate attachment is included in the total count.
	//
	// WsfAdvancedBehaviorTreeNode AdvancedBehaviorEntry(int aIndex)
	// Returns the advanced behavior node from the tree, using the specified index number. The advanced behavior should be tested for validity before use.
	//
	// WsfAdvancedBehaviorTree AdvancedBehaviorTree()
	// Returns the advanced behavior tree. The advanced behavior tree should be tested for validity before use.
	//
	// State Machine Methods
	// string State()
	// Returns the name of the current state.
	//
	// string StateAll()
	// Returns the name of the current state and all subsequent child states (if exist). The state names are delimited in the string by double colons “::”, for example “INGRESS::ATTACK”.
	//
	// void SetState(string aStateName)
	// Sets the current state to the state with the given name.
	//
	// void SetStateAll(string aStateNameAll)
	// Sets the current state and all subsequent child states to the states provided in the string. State names should be delimited by double colons “::”;, for example “EGRESS::EVADE”;
	//
	// Array<string> GetStates()
	// Return an array of strings containing all states of the state machine.
	//
	// WsfAdvancedBehaviorTree GetStateAdvancedBehaviorTree(string aState)
	// Return the advanced behavior tree for a given state of the state machine.
	//
	// Deprecated Methods
	// void TargetAllocated(double aSimTime, WsfPlatform aPlatform, WsfTrack aTarget)
	// Notifies any observers that a target has been allocated.
	//
	// void TargetEngaged(double aSimTime, WsfPlatform aPlatform, WsfTrack aTarget)
	// Notifies any observers that a target has been engaged.
		
};
