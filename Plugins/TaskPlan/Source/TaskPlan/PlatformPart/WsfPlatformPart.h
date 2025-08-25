// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "../WsfObject.h"
#include "WsfPlatformPart.generated.h"
USTRUCT(BlueprintType)
 struct FFAuaData
 {
 	GENERATED_BODY()
 	//file:///E:/Project/RS250055/Refproject/AFSim/am-2.9.0-win64/documentation/html/docs/aux_data.html#_.aux_data
 };
 USTRUCT(BlueprintType)
 struct FFPlatformPart
 {
 	GENERATED_BODY()
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int automatic_recovery_time;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	FFAuaData aux_data ;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int category;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int clear_categories;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int critical;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int non_critical;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int damage_factor;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int clear_internal_links;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int internal_link;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int processor;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int debug;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int no_debug;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int debug_level;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int group_join;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int group_leave;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int is_a_type_of;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int broken;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int off;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int on;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int operational;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int non_operational;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int restorable;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfPlatformPart");
 	int non_restorable;
 };
/**
 * 
 */
UCLASS()
class TASKPLAN_API UWsfPlatformPart : public UWsfObject
{
	GENERATED_BODY()
public:
// 	AWsfPlatformPart();
// //General Methods
// 	// Returns the owning platform of the part.
// 	WsfPlatform Platform();
// 	
// 	// Returns true if the part is marked as non-operational. Any request to turn a non-operational part on will be rejected.
// 	bool IsNonOperational();
//
// 	// Returns true if the part is marked as operational. An operational part can be turned on and off as desired.
// 	bool IsOperational();
//
// 	// Sets the operational state of the object. If the argument is true, the object will be defined to be ‘operational,’
// 	// which means it can be turned on and off as desired. If the argument is false, the object will be defined to be ‘non-operational,’
// 	// which means any attempt to turn the object on will be rejected.
// 	// The return value is true if the change was successful, or false if not.
// 	bool SetOperational(bool aOperational);
//
// 	
// 	// Returns true if the part is turned off.
// 	bool IsTurnedOff();
// 	
// 	// Returns true if the part is turned on.
// 	bool IsTurnedOn();
// 	
// 	// Returns true if the part is turned on when initially added to the simulation.
// 	bool InitiallyTurnedOn();
// 	
// 	// Returns the number of seconds since the part was last turned off or on.
// 	double TimeSinceLastStatusChange();
// 	
// 	// Sends the message to all linked objects.
// 	void SendMessage(WsfMessage aMessage);
// 	
// 	// Sends the message to the platform part with the specified name on the current platform.
// 	// Note This probably only makes sense for sending messages from one processor to another.
// 	// In the future it may be possible to send messages to sensors, etc.
// 	void SendMessage(WsfMessage aMessage, string aPartName);
//
// 	// Returns the value of the ‘debug’ attribute for the part.
// 	bool DebugEnabled();
// 	
// 	// Sets the “debug’ attribute of the part to the indicated value. Many parts use this attribute to control the display of debugging output.
// 	void SetDebugEnabled(bool aValue);
// 	
// 	// Returns the current value of the ‘damage factor’ attribute for the part. See details below on ‘damage factor’ attribute.
// 	double DamageFactor();
// 	
// 	// Sets the “damage factor’ attribute of the part to the indicated value.
// 	// Each platform part may now be damaged separately from the platform as a whole.
// 	// Zero is no damage, One is totally destroyed, and values supplied outside this range are constrained to the closed interval.
// 	void SetDamageFactor(double aValue);
// 	
// 	// Returns true if the platform is a member of the specified category.
// 	bool CategoryMemberOf(string aCategoryName);
// 	
//  //Group Methods
// 	// Returns true if the platform part is a member of the specified group.
// 	bool GroupMemberOf(string aGroupName);
// 	bool GroupMemberOf(WsfGroup aGroupPtr);
// 	
// 	// Returns a list of all groups this platform part is a member of.
// 	TArray<WsfGroup> Groups();
// 	// Returns a list of names of all groups this platform part is a member of.
// 	TArray<string> GroupsByName();
// 	
// 	// Joins the given group if it exists in the simulation.
// 	void GroupJoin(string aGroupName);
// 	// Leaves the given group if this platform part is a member.
// 	void GroupLeave(string aGroupName);
//
// // Auxiliary Data Methods
// 	// Auxiliary Data is a collection of optional named user data attributes that can be stored with the object. The framework will maintain the attributes but in no other way attempts to use the data contained within. The definition and use of any attribute is defined purely by the user.
//
// 	// Retrieve the value of the auxiliary data attribute with the indicated name.
// 	// If the attribute does not exist then a default value will be returned (false for bool, 0 for int and 0.0 for double).
// 	bool AuxDataBool(string aName);
// 	int AuxDataInt(string aName);
// 	double AuxDataDouble(string aName);
// 	FString AuxDataString(string aName);
// 	Object AuxDataObject(string aName);
//
// 	// Returns true if an auxiliary data member exists with the specified name.
// 	bool AuxDataExists(string aName);
// 	bool CheckAuxData(string aName);
// 	
// 	// Returns true if the object has auxiliary data.
// 	bool HasAuxData();
// 	
// 	// Delete the auxiliary data attribute with the indicated name. Returns true if the attribute exists and was deleted, or false if the attribute did not exist.
// 	bool DeleteAuxData(string aName);
//
// 	// Set the value of the auxiliary data attribute with the indicated name. The last form of SetAuxData(); can store any script object type.
// 	void SetAuxData(string aName, bool aValue);
// 	void SetAuxData(string aName, int aValue);
// 	void SetAuxData(string aName, double aValue);
// 	void SetAuxData(string aName, string aValue);
// 	void SetAuxData(string aName, Object aValue);
// 	
// 	// Return the names and types of all auxiliary data attributes in the form of a Map<string,string>. Map keys are valid names of auxiliary data attributes.
// 	// Map values are type names corresponding to valid auxiliary data attribute names.
// 	TMap<FString, FString> GetAllAuxDataTypes();

};
