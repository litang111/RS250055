// Fill out your copyright notice in the Description page of Project Settings.
/*****************************************************************//**
 * \file   WsfWeapon.h
 * \brief  
 * \note   
 * TODO：
 *  - 1、 To be improved
 *  - 2、
 * \author li.tang 
 * \date   2025.07.21
 *********************************************************************/

#pragma once
#include "WsfArticulatedPart.h"
#include "../Track/WsfTrack.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WsfWeapon.generated.h"
USTRUCT(BlueprintType)
struct FLaunchComputer
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon|launchComputer");
	FString surface_to_surface_table="weapons/ssm/red_mrbm_2_launch_data.txt";
};
USTRUCT(BlueprintType)
struct FFWeapon
{
	GENERATED_BODY()
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// FFPlatformPart PlatformPart;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// FFArticulatedPart ArticulatedPart;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int on_off;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int update_interval;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// FLaunchComputer launch_computer ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	int quantity ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int maximum_quantity ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int firing_delay ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int firing_interval ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int salvo_interval ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int maximum_request_count ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int automatic_target_cueing ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int cue_to_predicted_intercept ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int unknown_target_range ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int unknown_target_altitude ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int reload_increment ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int reload_inventory ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int reload_threshold ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int reload_time ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int inhibit_while_reloading ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// int weapon_effects ;
};
UENUM(BlueprintType)
enum class EWeapon :uint8
{
	RED_MRBM_2,
	RED_SRBM_1,
	RED_SRBM_2,
	RED_SRBM_3,
	RED_SRBM_4
};
UCLASS(Blueprintable)
class TASKPLAN_API UWsfWeapon : public UWsfArticulatedPart
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UWsfWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	EWeapon m_weapon;
	FString m_name;

	//自定义函数
	// UFUNCTION(BlueprintCallable, Category = "WsfWeapon")
	// bool IsValid() override;

	UFUNCTION(BlueprintCallable, Category = "WsfWeapon")
	FString SetWeapon(EWeapon aWeapon, FString name);

	UFUNCTION(BlueprintCallable, Category = "WsfWeapon")
	FString SetString();

	UFUNCTION(BlueprintCallable, Category = "WsfWeapon")
	FString SetIncludeFile(FString FileName);
	
public:
	//afsim官方函数
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfWeapon");
	// FWeapon WeaponParams;
	// Static Methods
	// static bool IsA_TypeOf(string aDerivedType, string aBaseType)
	// Returns true if the weapon type specified by aDerivedType inherits from the weapon type specified by aBaseType (compare to WsfObject.IsA_TypeOf(aBaseType), which determines if a specific object inherits from aBaseType).
	//
	// Methods
	// bool TurnOff()
	// Turns the weapon off and returns true if successful.
	//
	// bool TurnOn()
	// Turns the weapon on and returns true if successful.
	//
	//Cues the weapon to the track.
	UFUNCTION(BlueprintCallable, Category = "WsfWeapon")
	void CueToTarget(UWsfTrack *aTrack);
	//
	//Fires the weapon with or without a current track.蓝图的视觉脚本系统无法仅通过参数类型区分函数
	UFUNCTION(BlueprintCallable, Category = "WsfWeapon", meta = (DisplayName = "FireByPercent"))
	bool Fire(UWsfTrack *aTrack);
	
	// bool Fire(WsfTrack aTrack)
	// Fires the weapon with or without a current track. This method returns ‘true’ if a launch has been successfully scheduled. Some weapons may have a delay between the time when a fire command is issued and the actual time of launch. A successful weapon launch will trigger a WEAPON_FIRED event. This method returns ‘false’ if a launch cannot be scheduled due to several reasons, such as, the weapon quantity is 0, the launch interval has not elapsed, the weapon is reloading and it cannot shoot while reloading, or the weapon is damaged. Additional checks at the time of launch may still result in a launch failure triggering a WEAPON_FIRE_ABORTED event.
	//
	// bool FireAtLocation(WsfGeoPoint aLocation)
	// Generates a track based on the location provided and then fires the weapon on the generated track. The track is stored in the master track list on the platform that owns the weapon. This method returns ‘true’ if a launch has been successfully scheduled. Some weapons may have a delay between the time when a fire command is issued and the actual time of launch. A successful weapon launch will trigger a WEAPON_FIRED event. This method returns ‘false’ if a launch cannot be scheduled due to several reasons, such as, the weapon quantity is 0, the launch interval has not elapsed, the weapon is reloading and it cannot shoot while reloading, or the weapon is damaged. Additional checks at the time of launch may still result in a launch failure triggering a WEAPON_FIRE_ABORTED event.
	//
	// bool FireSalvo(WsfTrack aTrack, int aNumRounds)
	// Fires the weapon at the current track using the requested number of rounds. This method returns ‘true’ if salvo request was successfully initiated. A successful salvo request triggers a WEAPON_FIRE_REQUESTED event. This method returns ‘false’ if the number of requested rounds is 0, the maximum number of salvos requests are currently active, or the weapon is reloading and it cannot shoot while reloading.
	//
	// Note A WEAPON_FIRED event will not trigger for Fire and FireSalvo unless a weapon_effects is defined either on the weapon or on the launched_platform_type.
	// void AbortSalvo(WsfTrackId aTrackId)
	// Abandons the launch of any rounds of a salvo request that have yet to be released. If aTrackId is a ‘null’ track (i.e., aTrackId.IsNull()) then the request will apply to all pending rounds; otherwise, it will apply only to salvo requests against the specified track.
	//
	// Note This does not affect rounds that have already been released.
	// void CeaseFire()
	// Stops all active fire requests including salvo requests. This is like ‘AbortSalvo(WsfTrackId())’.
	//
	// int ActiveRequestCount()
	// Returns the number of fire/jam requests that are currently in process.
	//
	// int MaximumRequestCount()
	// Returns the maximum number of fire/jam requests than may be in process simultaneously.
	
	UFUNCTION(BlueprintCallable, Category = "WsfWeapon")
	FString quantity(int num);
	
	//Returns the number of weapons / jam requests remaining as a double precision value, so percentages can be used if desired.
	UFUNCTION(BlueprintCallable, Category = "WsfWeapon")
	double QuantityRemaining();
		
	//Sets the number of weapons remaining to the specified quantity.
	UFUNCTION(BlueprintCallable, Category = "WsfWeapon")
	void SetQuantityRemaining(double aQuantity);
	//
	// double TotalQuantityUsed()
	// Returns the total amount of the weapon that has been used.
	//
	// double ReloadInventory()
	// Returns the number of weapons/jam requests remaining in the reload inventory as a double precision value, so percentages can be used if desired.
	//
	// double TimeLastFired()
	// Returns the simulation time when the weapon completed its last firing request.
	//
	// double TimeSinceLastFired()
	// Returns the elapsed time since the weapon completed its last firing request.
	//
	// double FiringInterval()
	// Returns the time that must elapse between the completion of one firing request and the start of the next request.
	//
	// bool IsReloading()
	// Returns true if the weapon is in the process of reloading.
	//
	// Status Methods
	// Special Note: If you pass in an empty WsfTrackId as an argument to any of these methods, they will process the query for all possible target tracks. For example, calling ‘WeaponsActiveFor(WsfTrackId())’ will return the count of all active weapons fired on ANY track.
	//
	// double TimeSinceWeaponLastFiredFor(WsfTrackId aTrackId)
	// Return the amount of time that has elapsed since a weapon fire was last requested against the track with the indicated track ID. NOTE: a weapon may or may not have actually been fired, this time is in reference to the last fire request. If no weapon fire has been requested, the return value will be less than zero.
	//
	// double TimeSinceWeaponLastTerminatedFor(WsfTrackId aTrackId)
	// Return the amount of time that has elapsed since a weapon platform fired from this weapon last terminated against the track with the indicated track ID. If no weapon has terminated, the return value will be less than zero.
	//
	// int WeaponsPendingFor(WsfTrackId aTrackId)
	// Return the number of weapon rounds that are in the process of being fired but not yet in-flight against track with the indicated track ID. The reason the weapon is pending is likely because of a firing delay, firing interval, or salvo interval.
	//
	// int WeaponsActiveFor(WsfTrackId aTrackId)
	// Return the number of weapon rounds that are currently active (in-flight, weapon platforms created) against track with the indicated track ID.
	//
	// int RoundsCompleteFor(WsfTrackId aTrackId)
	// Return the number of terminated weapon platforms that were fired against track with the indicated track ID.
	//
	// int RoundsFiredAt(WsfTrackId aTrackId)
	// This is equivalent to “WeaponsActiveFor() + RoundsCompleteFor()”. This returns the number of weapon rounds that have been fired against the track with the indicated ID. This includes rounds that are in-flight.
	//
	// int SalvosFiredAt(WsfTrackId aTrackId)
	// Return the number of salvos fire requests that have been asked for against the track with the indicated ID. This includes salvos that are in-flight, and salvos that were requested even when no weapons were left.
	//
	// WsfPlatformList ActiveWeaponPlatformsFor(WsfTrackId aTrackId)
	// Return the weapon platforms (currently active & in-flight) fired from this weapon against the track with the indicated ID.
	//
	// Launch Computer Methods
	// The CanIntercept and TimeToIntercept methods provide a simple interface for determining if a round fired from this weapon could intercept a given target. If one wants to perform more complex management of weapons, use the LaunchComputer method to retrieve the launch computer object and call the methods on that object.
	//
	// WsfLaunchComputer LaunchComputer()
	// Returns a reference to the launch computer object associated with this weapon.
	//
	// Note The use of launch computers on a weapon is optional. Therefore, the return value may not be a valid reference to a launch computer. If there is a possibility you are working with a weapon that may or may not have a launch computer, the return value should be tested by using <return-value>.IsValid()
	// bool CanIntercept(WsfTrack aTrack)
	// bool CanIntercept(WsfTrack aTrack, double aLaunchDelayTime)
	// Returns true if the weapon can potentially intercept the specified track.
	//
	// double TimeToIntercept(WsfTrack aTrack)
	// double TimeToIntercept(WsfTrack aTrack, double aLaunchDelayTime)
	// Returns the approximate time to intercept the specified track. If unable to intercept, a large number (1.e8) is returned.
	//
	// Note For a weapon using an WSF_AIR_TO_AIR_LAUNCH_COMPUTER, the time returned is the time of flight at RMax plus any launch delay.
	// RF Weapon & Electronic Warfare Commands
	// int ModeCount()
	// Returns the number of modes.
	//
	// string ModeName(int aModeIndex)
	// Returns the name of the mode located at the provided index.
	//
	// string CurrentMode()
	// Returns the name of the current mode.
	//
	// void SelectMode(string aModeName)
	// Selects the specified mode and makes it the current mode.
	//
	// bool CanJam(double aFrequency)
	// bool CanJam(double aFrequency, string aTechniqueName)
	// Returns true if the number of active spots is less than the maximum number available or the jammer is a barrage jammer (i.e., MaximumRequestCount returns 1) and the specified frequency is within the input-supplied bandwidth. It also checks to see if the supplied technique name is available if supplied.
	//
	// int ActiveBeams()
	// Returns the number of active beams on the jammer. Assumes current mode.
	//
	// int MaximumBeams()
	// Returns the maximum number of beams for this jammer. Assumes current mode.
	//
	// int ActiveSpots(int aBeamNumber)
	// Returns the number of active spots on the specified beam with aBeamNumber in range of [1, MaximumBeams] for this jammer. Assumes current mode.
	//
	// int MaximumSpots(int aBeamNumber)
	// Returns the maximum number of spots on the specified beam with aBeamNumber in range of [1, MaximumBeams] for this jammer. Assumes current mode.
	//
	// double MinimumFrequency()
	// Returns the minimum frequency of the jammer. Assumes current mode.
	//
	// double MaximumFrequency()
	// Returns the maximum frequency of the jammer. Assumes current mode.
	//
	// bool WithinFrequencyBand(double aFrequency)
	// Returns true if the specified frequency is within the input-supplied bandwidth.
	//
	// bool StartJamming(double aFrequency, double aBandwidth)
	// bool StartJamming(double aFrequency, double aBandwidth, WsfTrack aTrack)
	// bool StartJamming(double aFrequency, double aBandwidth, string aTechniqueName)
	// bool StartJamming(double aFrequency, double aBandwidth, string aTechniqueName, WsfTrack aTrack)
	// bool StartJamming(double aFrequency, double aBandwidth, int aBeamNumber)
	// bool StartJamming(double aFrequency, double aBandwidth, int aBeamNumber, WsfTrack aTrack)
	// bool StartJamming(double aFrequency, double aBandwidth, int aBeamNumber, string aTechniqueName)
	// bool StartJamming(double aFrequency, double aBandwidth, int aBeamNumber, string aTechniqueName, WsfTrack aTrack)
	// bool StartJamming(string aTechniqueName, WsfTrack aTrack)
	// Begins jamming the specified frequency and bandwidth on the specified beam and/or with the specified technique name and/or track if supplied. Returns true if successful.
	//
	// bool StopJamming(double aFrequency, double aBandwidth)
	// bool StopJamming(double aFrequency, double aBandwidth, WsfTrackId aTrackId)
	// bool StopJamming(double aFrequency, double aBandwidth, int aBeamNumber)
	// bool StopJamming(double aFrequency, double aBandwidth, int aBeamNumber, WsfTrackId aTrackId)
	// bool StopJamming(WsfTrackId aTrackId)
	// Stops all jamming activity against the specified frequency and bandwidth on the specified beam and/or Track ID if supplied. Returns true if successful.
	//
	// bool SelectEA_Technique(string aTechniqueName, double aFrequency, double aBandwidth)
	// bool SelectEA_Technique(string aTechniqueName, double aFrequency, double aBandwidth, WsfTrack aTrack)
	// bool SelectEA_Technique(string aTechniqueName, double aFrequency, double aBandwidth, int aBeamNumber)
	// bool SelectEA_Technique(string aTechniqueName, double aFrequency, double aBandwidth, int aBeamNumber, WsfTrack aTrack)
	// Selects the technique with name supplied to use on or add to an existing jamming assignment at the specified frequency and bandwidth on the specified beam and/or with the specified technique name and/or track if supplied. Returns true if successful.
	//
	// Note If the aFrequency and aBandwidth are set to 0.0 then all spots meeting the other criteria (i.e., aTrack) or all spots for the case where only the aFrequency and aBandwidth are entered at these values
	// bool DeselectEA_Technique(string aTechniqueName, double aFrequency, double aBandwidth)
	// bool DeselectEA_Technique(string aTechniqueName, double aFrequency, double aBandwidth, WsfTrack aTrack)
	// bool DeselectEA_Technique(string aTechniqueName, double aFrequency, double aBandwidth, int aBeamNumber)
	// bool DeselectEA_Technique(string aTechniqueName, double aFrequency, double aBandwidth, int aBeamNumber, WsfTrack aTrack)
	// Deselect the technique with name supplied to remove from an existing jamming assignment at the specified frequency and bandwidth on the specified beam and/or with the specified technique name and/or track if supplied. Returns true if successful.
	//
	// bool SetEA_DeltaGainTechnique(string aTechniqueName, bool aDefaultOn, string aEffectName, double aJammingModulation_dB, string aSystemTypeName, string aSystemFunctionName)
	// bool SetEA_DeltaGainTechnique(string aTechniqueName, bool aDefaultOn, string aEffectName, double aJammingModulation_dB, string aSystemTypeName, string aSystemFunctionName, double aFrequency, double aBandwidth)
	// bool SetEA_DeltaGainTechnique(string aTechniqueName, bool aDefaultOn, string aEffectName, double aJammingModulation_dB, string aSystemTypeName, string aSystemFunctionName, double aFrequency, double aBandwidth, WsfTrack aTrack)
	// bool SetEA_DeltaGainTechnique(string aTechniqueName, bool aDefaultOn, string aEffectName, double aJammingModulation_dB, string aSystemTypeName, string aSystemFunctionName, double aFrequency, double aBandwidth, int aBeamNumber)
	// bool SetEA_DeltaGainTechnique(string aTechniqueName, bool aDefaultOn, string aEffectName, double aJammingModulation_dB, string aSystemTypeName, string aSystemFunctionName, double aFrequency, double aBandwidth, int aBeamNumber, WsfTrack aTrack)
	// Creates a new or modifies an existing Electronic Attack delta gain technique with technique and effect name and jamming delta gain value supplied. Can be set to ‘on’ or ‘off’ by default and be made to affect only the system types (radar of jammer type name or all if “” is entered) and system functions, which are limited to “COMM”, “SENSOR”, or “JAMMER,” and is set to “DEFAULT” if left blank (“”) or not found. For existing jamming assignments the technique with the specified frequency and bandwidth on the specified beam and/or with the specified technique name and/or track if supplied will be created or modified. Returns true if successful.
	//
	// Weapon Server Processor Related
	// bool AllocateTheWeapon(WsfTrack aTrack, int aWpnId)
	// Returns true if weapon in Ready State (value of 4). The weapon id being sent in should be a unique value and will need to be assigned to the missile prior to launch. The dis_entity_id_offset value for the WsfExplicitWeapon input will automatically be added to this value by the weapon processor, in order for each weapon suite to have its own range of id numbers. Set the dis_entity_id_offset if input if this behavior is desired.
	//
	// The dis_entity_id_offset blocks needs to be unique for each weapon type and the ranges should not overlap. Also, make sure enough slots are allotted for the total weapon quantities, especially if weapons are to be reloaded. If all communication was successful between WSF and the off-board Weapon Server Application and the weapon is in the READY STATE the weapon server processor will automatically set the assigned weapon track pairing list.
	//
	// int SetState(int aState)
	// Set the state of the weapon being launched. Should match the state returned from the weapon server processor. This should be called immediately before the Fire command.
	//
	// 0 = not initialized
	//
	// 1 = Allocated
	//
	// 2 = Deallocated
	// 3 = NACK 4 = Ready
	//
	// int State()
	// Returns the state of this weapon.
	// 0 = not initialized 1 = Allocated 2 = Deallocated 3 = NACK 4 = Ready
};
