// Fill out your copyright notice in the Description page of Project Settings.
/*****************************************************************//**
 * \file   XXXheader.h
 * \brief  文件功能简要描述
 * \note  开发调用注意事项 
 * TODO：
 *  - 1、 和开发实时更新
 *  - 2、
 * \author 开发维护人员 
 * \date   最新更新时间
 *********************************************************************/

#pragma once
#include <iostream>
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WsfObject.generated.h"

UCLASS(BlueprintType,Blueprintable)
class TASKPLAN_API UWsfObject : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UWsfObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    FString  OutFileTXT;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Returns the object’s name as a string.
	UFUNCTION(BlueprintCallable,Category="WsfObject")
	FString Name();
		
	//Returns the object’s type as a string.
	UFUNCTION(BlueprintCallable,Category="WsfObject")
	FString Type();
		
	//Returns the object’s base type as a string.
	//The base type of an object is the type from which the object derives.
	UFUNCTION(BlueprintCallable,Category="WsfObject")
	FString BaseType();
		
	//Returns true if aType is an ancestor of the object.
	UFUNCTION(BlueprintCallable,Category="WsfObject")
	bool IsA_TypeOf(FString aType);
		
	//Returns true if the object reference does indeed refer to a valid object.
	//Many methods may return “null’ references if the requested object does not exist
	//(e.g., PLATFORM.Sensor(‘radar-1’) will return a “null reference’ if the platform does not have a sensor with the name ‘radar-1’).
	//This method allows you to test a reference to make sure it is “valid’ (not “null’) before attempting to use it.
	UFUNCTION(BlueprintCallable,Category="WsfObject")
	bool IsValid();
		
	//Call ProcessInput on the current object passing the current command(s). Returns true if the command(s) were handled properly.
	//Warning This method may not work with all commands, especially post-initialization.
	UFUNCTION(BlueprintCallable,Category="WsfObject")
	bool ProcessInput(FString aCommands);
	
};

