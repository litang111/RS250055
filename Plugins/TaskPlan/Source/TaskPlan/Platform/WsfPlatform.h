// Fill out your copyright notice in the Description page of Project Settings
/*****************************************************************//**
 * \file   WsfPlatform.h
 * \brief  Refer to the software path and complete the format setting of the wsfplatform, inheriting from the wsfoject
 * \note 
 * TODO：
 *  - 1、 Based on this, complete the platform design of J20
 *  - 2、
 * \author li.tang 
 * \date   2025.07.21
 *********************************************************************/

//file:///E:/Project/RS250055/Refproject/AFSim/am-290-win64/documentation/html/docs/script/wsfplatformhtml#WsfPlatform
//WsfScriptPlatformClass 类及其子类
#pragma once
#include "../PlatformPart/Mover/WsfMover.h"
#include "../PlatformPart/Processor/WsfProcessor.h"
#include "../PlatformPart/Weapons/WsfWeapon.h"
#include "../PlatformPart/Track/WsfLocalTrackList.h"
#include "../EnumFile.h"
#include "CoreMinimal.h"
#include "../WsfObject.h"
#include "WsfPlatform.generated.h"

UENUM(BlueprintType)
enum class EIcon :uint8
{
	Scud_Launcher UMETA(DisplayName = "Scud Launcher"),
	Bullseye UMETA(DisplayName = "Bullseye")
};
UENUM(BlueprintType)
enum class ESide :uint8
{
	red,
	blue
};
USTRUCT(BlueprintType)
struct FFPlatform
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int acoustic_signature ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    altitude;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    aux_data;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    category;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    clear_categories;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    commander;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    command_chain;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    concealment_factor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    creation_time;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int   empty_mass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int   fuel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    fuel_mass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    geo_point;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    group_join;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    group_leave;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    heading;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    height;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	FString    Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	UTexture2D*     Icon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	EIcon        IconName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    indestructible;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    infrared_signature;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    inherent_contrast;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    initial_damage_factor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    length;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    marking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    mgrs_coordinate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    add_mover;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	UWsfMover*    mover;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    navigation_errors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    nutation_update_interval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    on_broken;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    optical_reflectivity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    optical_signature;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    payload_mass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	FVector    position;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    precession_nutation_update_interval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    radar_signature;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    route;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    side;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    spatial_domain;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int   component; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    track;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    track_manager;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    use_zone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    width;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int    zone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int zone_set;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int weapon_effects;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
	int weapon_effects_type;
};




/**
 *   The Base of all PlatformType
 */
UCLASS()
class TASKPLAN_API UWsfPlatform : public UWsfObject
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	UWsfPlatform();;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay()override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_PLATFORM");
    FFPlatform PlaformParams;

	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	void bluePrintPrase();

	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	void getString(FString str);
//Script Interface
	UFUNCTION(BlueprintCallable, Category = "WSF_PLATFORM")
	void on_initialize(); 
	UFUNCTION(BlueprintCallable, Category = "WSF_PLATFORM")
	void on_initialize2(); 
	UFUNCTION(BlueprintCallable, Category = "WSF_PLATFORM")
	void on_update(); 
	UFUNCTION(BlueprintCallable, Category = "WSF_PLATFORM")
	void on_damage_received(); 
	UFUNCTION(BlueprintCallable, Category = "WSF_PLATFORM")
	void on_platform_deleted(); 
	// UFUNCTION(BlueprintCallable, Category = "WSF_PLATFORM")
	// void on_commander_deleted(WsfPlatform aCommander); 
	// UFUNCTION(BlueprintCallable, Category = "WSF_PLATFORM")
	// void on_peer_deleted(WsfPlatform aPeer); 
	// UFUNCTION(BlueprintCallable, Category = "WSF_PLATFORM")
	// void on_subordinate_deleted(WsfPlatform aSubordinate); 
	// UFUNCTION(BlueprintCallable, Category = "WSF_PLATFORM")
	void callback();
public:
	//afsim官方函数
	// Static Methods
	// Returns a clone of the route with the given name The returned value will not be valid if the named route is not found
	// UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	// static WsfRoute CreateRoute(FString aRouteName);

	// Executes the script with the given name within the global context and returns true if successful
	// See WsfSimulationExecute for more methods to execute global scripts
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	static bool ExecuteGlobalScript(FString aScript);

	// Returns true if the platform type specified by aDerivedType inherits from the platform type specified by aBaseType
	// (compare to WsfObjectIsA_TypeOf(aBaseType);, which determines if a specific object inherits from aBaseType);
	static bool IsA_TypeOf(FString aDerivedType, FString aBaseType);

	// General Methods
	// Returns the unique index of the platform within the simulation
	// A platform’s index is constant, and a given index will never be reused during the course of the simulation
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	int Index();

	// Returns the simulation time (in seconds); when the platform was created
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	double CreationTime();

	// Returns the elapsed time in seconds since the platform was created
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	double TimeSinceCreation();

	// Defines the simulation time in seconds when the platform is to be added to the simulation
	// Note: This method is valid only during the execution of the simulation-scope on_platform_injection script
	// when the platform is being added to the simulation
	// Setting a value greater than the current simulation time defers the addition of the platform to the simulation
	// until the specified time The call is ignored if the value is less than the current simulation time
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	void SetCreationTime(double aTime);

	// Sets the platform’s side
	// Note: This method is only valid prior to adding the platform to the simulation
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	void SetSide(ESide aSide);

	// Returns the platform’s side
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	ESide Side();

	 //Sets the platform’s icon
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	 void SetIcon(EIcon aIcon);
	
	 //Returns the platform’s icon
	 UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	 EIcon Icon();
// 	//
// 	// //Returns whether the platform is being controlled externally to the local simulation (as with an external dis_interface entity);
// 	bool IsExternallyControlled();
// 	//
// 	// //Detonates the platform The value of “aResult” must be one of the following or the detonation will be treated as a “dud”:
// 	void Detonate(EResult aResult);
// 	//
// 	// //Schedules the platform for deletion from the simulation Since the deletion will occur after the current script context returns,
// 	// //any remaining commands in the script context will be executed
// 	void DeletePlatform();
// 	//
// 	//
// 	// //Command Chain Methods
// 	// //Returns the platform’s commander in the default command chain (first form);
// 	// //or the specified command chain (second form);
// 	 WsfPlatform Commander();
// 	 WsfPlatform Commander(FString aCommandChainName);
// 	
// 	// //Sets the platform’s commander in the default command chain (first form); or the specified command chain (second form);
// 	// //There is one issue with using this method Any links to a commander that transmit over a comm devices that uses
// 	// //the <local:slave> network_name will not work So if you plan on using this method to change a platform’s commander during run-time,
// 	// //then do NOT use the <local:slave> network_name on the platform’s comm devices
// 	void SetCommander(WsfPlatform aPlatform);
// 	void SetCommander(FString aCommandChainName, WsfPlatform aPlatform);
// 	//
// 	// //Returns the platform’s commander’s name in the default command chain (first form);
// 	// //or the specified command chain (second form);
// 	FString CommanderName();
// 	FString CommanderName(FString aCommandChainName);
// 	//
// 	// //Returns a platform list of peers in the default command chain (first form);
// 	// //or the specified command chain (second form);
// 	WsfPlatformList Peers();
// 	WsfPlatformList Peers(FString aCommandChainName);
// 	//
// 	// //Returns a platform list of subordinates in the default command chain (first form);
// 	// //or the specified command chain (second form);
// 	WsfPlatformList Subordinates();
// 	WsfPlatformList Subordinates(FString aCommandChainName);
// 	// //Returns the command chain with the specified name
// 	WsfCommandChain CommandChain(FString aCommandChainName);
// 	//
// 	// //Returns the number of command chains to which this platform belongs
// 	int CommandChainCount();
// 	//
// 	//
// 	// //Returns the command chain at the specified index
// 	// //This must be in the range [0, CommandChainCount();-1]
// 	WsfCommandChain CommandChainEntry(int aIndex);
//
// 	
// 	//Subsystem Methods
// 	
// 	// //Returns the platform’s mover object
// 	WsfMover Mover();
// 	//
// 	// //Returns the platform’s fuel object
// 	WsfFuel Fuel();
// 	//
// 	// //Retrieves the GPS availability state from the navigation_errors model See navigation_errors for more information
// 	// //Note: The return value is a large positive value if navigation_errors have not been defined
// 	int GPS_Status();
// 	//
// 	// //Sets the current GPS availability state ( navigation_errors for more information);
// 	// //The return value is true if the GPS status was changed
// 	// //The return value is false if the requested state is the same as the current state or if navigation_errors have not been defined
// 	// //Note: This has no effect if navigation_errors have not been defined
// 	bool SetGPS_Status(int aGPS_Status);
// 	//
// 	// //Returns the WsfComm object with the given name
// 	WsfComm Comm(FString aName);
// 	//
// 	// //Returns the number of communication devices
// 	int CommCount();
// 	//
// 	// //Returns the WsfComm object at the given index
// 	// //Note: 0-based indexing applies
// 	WsfComm CommEntry(int aIndex);
// 	//
// 	//
// 	// //Returns the WsfCommRouter object with the given name
// 	WsfCommRouter Router(FString aName);
// 	//
// 	// //Returns the number of router objects
// 	int RouterCount();
// 	//
// 	// //Returns the WsfCommRouter object at the given index
// 	// //Note: 0-based indexing applies
// 	WsfCommRouter RouterEntry(int aIndex);
// 	//
// 	//
// 	// //Returns the WsfProcessor object with the given name
// 	WsfProcessor Processor(FString aName);
// 	//
// 	// //Returns the number of processor devices
// 	int ProcessorCount();
// 	//
// 	// //Returns the WsfProcessor object at the given index
// 	// //Note: 0-based indexing applies
// 	WsfProcessor ProcessorEntry(int aIndex);
// 	//
// 	//
// 	// //Returns the WsfSensor object with the given name
// 	WsfSensor Sensor(FString aName);
// 	// //Returns the number of sensor instances on this platform
// 	int SensorCount();
// 	//
// 	// //Returns the WsfSensor object at the given index
// 	// //Note: 0-based indexing applies
// 	WsfSensor SensorEntry(int aIndex);
// 	//
// 	// //Turns the communication device with the specified name on, returns true if successful
// 	bool TurnCommOn(FString aName);
// 	//
// 	// //Turns the communication device with the specified name off, returns true if successful
// 	bool TurnCommOff(FString aName);
// 	//
// 	// //Turns the processor device with the specified name on, returns true if successful
// 	bool TurnProcessorOn(FString aName);
// 	//
// 	// //Turns the processor device with the specified name off, returns true if successful
// 	bool TurnProcessorOff(FString aName);
// 	//
// 	// //Turns the sensor device with the specified name on, returns true if successful
// 	bool TurnSensorOn(FString aName);
// 	//
// 	// //Turns the sensor device with the specified name off, returns true if successful
// 	bool TurnSensorOff(FString aName);
// 	//
// 	// //Turns the router object with the specified name on, returns true if successful
// 	bool TurnRouterOn(FString aName);
// 	//
// 	// //Turns the router object with the specified name off, returns true if successful
// 	bool TurnRouterOff(FString aName);
// 	//
// 	// //Appearance Methods
// 	// //Returns the length, width and height of the platform (in meters);
// 	// //as defined by the length, {width and height commands
// 	// //The return value will be zero if it was not defined
// 	double Length();
// 	double Width();
// 	double Height();
// 	//
// 	// //Returns the total mass (empty mass + fuel mass + payload mass);
// 	// //of the platform or one of the components (in kilograms);
// 	// //The masses may be defined directly using the empty_mass, fuel_mass and payload_mass,
// 	// //but the masses are sometimes defined in and maintained by the mover
// 	double TotalMass();
// 	double EmptyMass();
// 	double FuelMass();
// 	double PayloadMass();
// 	//
// 	// //Returns the platform’s current 32-bit Appearance data as an integer excluding data for bits 3-4, 21 & 23
// 	// //(See Distributed Interactive Simulation (DIS); Entity Appearance field definitions);
// 	int Appearance();
// 	//
// 	// //Sets the platform’s 32-bit Appearance data excluding data for bits 3-4, 21 & 23
// 	// //(See Distributed Interactive Simulation (DIS); Entity Appearance field definitions);
// 	// //Note: This capability allows for direct manipulation of the Entity State Appearance data being reported
// 	void SetAppearance(int aLeastSignificantBit, int aNumberOfBits, int aValue);
// 	//
// 	// //Returns the platform’s current Concealment Factor
// 	double ConcealmentFactor();
// 	//
// 	// //Sets the platform’s concealment factor to a value within the range of [01], with 0 being visible and 1 being hidden
// 	// //This value is used to determine the Entity State Appearance bit 19 for land domain platforms only
// 	// //The SetAppearance function can also be used to set bit 19 directly
// 	void SetConcealmentFactor(double aConcealmentFactor);
// 	//
// 	// //Returns the platform’s current damage level (factor);
// 	// //The return value is in the range of [01], with 0 being undamaged and 1 being fully damaged or destroyed
// 	double DamageFactor();
// 	//
// 	// //Sets the platform’s damage factor to a value within the range of [01], with 0 being undamaged and 1 being fully damaged or destroyed
// 	void SetDamageFactor(double aDamageFactor);
// 	//
// 	// //Sets the platform’s trailing effect to the given integer value
// 	// //This value is used to set the Entity State Appearance bits 7-8 The SetAppearance function can also be used to set these bits directly
// 	void SetTrailingEffects(int aTrailingEffect);
// 	//
// 	// //Returns ‘true’ if the platform is indestructible
// 	// //A platform may be marked as indestructible in order prevent it from being destroyed
// 	// //When this value is set ‘true’, any applied damage accumulates in a logarithmically decaying fashion, so DamageFactor();
// 	// //, rather than returning an actual damage state, reflects an ever decreasing (but never reaching zero); probability of survival
// 	bool Indestructible();
// 	//
// 	// //Sets the platform’s indestructible attribute
// 	void SetIndestructible(bool aIsIndestructible);
// 	//
// 	// //Sets the platform’s infrared, optical and radar signature state to the given state
// 	void SetSignatureState(FString aState);
// 	//
// 	// //Returns the current infrared signature state of the platform
// 	FString InfraredSigState();
// 	//
// 	// //Sets the platform’s infrared signature state to the given state
// 	void SetInfraredSigState(FString aState);
// 	//
// 	// //Returns the current infrared signature scale factor (as a linear value, not dB);
// 	double InfraredSigScaleFactor();
// 	//
// 	// //Sets the infrared signature scale factor to the given value (as an linear value, not dB);
// 	// //The effective infrared signature of the platform becomes the baseline signature value multiplied by this value
// 	void SetInfraredSigScaleFactor(double aScaleValue);
// 	//
// 	// //Returns the infrared radiant intensity of the platform (in W/sr);
// 	// //when viewed from the location specified by aViewer
// 	// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);
// 	// //A value of less than or equal to zero is equivalent to specifying 10
// 	//
// 	// //aBandName is the infrared band name to be used for the query and must be an empty FString
// 	// //or one of the infrared band names as defined in infrared_signature An empty FString is equivalent to specifying “default”
// 	//
// 	// //Note: This performs the same function as the new method WsfPlatformRadiantIntensity,
// 	// //but only functions for infrared bands The new method is preferred because it is more general in
// 	// //that it also handles the visual band (if the optical signature is one that also provides radiant intensity);
// 	// //This method may be deprecated in some future release
// 	double InfraredRadiantIntensity(WsfGeoPoint aViewer, double aEarthRadiusScale, FString aBandName);
// 	//
// 	// //Returns the current optical signature state of the platform
// 	FString OpticalSigState();
// 	//
// 	// //Sets the platform’s optical signature state to the given state
// 	void SetOpticalSigState(FString aState);
// 	//
// 	// //Returns the current optical signature scale factor (as a linear value, not dB);
// 	double OpticalSigScaleFactor();
// 	//
// 	// //Sets the infrared optical scale factor to the given value (as an linear value, not dB);
// 	// //The effective optical signature of the platform becomes the baseline signature value multiplied by this value
// 	void SetOpticalSigScaleFactor(double aScaleValue);
// 	//
// 	// //Returns the optical cross section of the platform (in m^2);
// 	// //when viewed from the location specified by aViewer
// 	// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);
// 	// //A value of less than or equal to zero is equivalent to specifying 10
// 	// //Note: This performs the same function as the new method WsfPlatformProjectedArea
// 	// //The new method is preferred and this method may be deprecated in some future release
// 	double OpticalCrossSection(WsfGeoPoint aViewer, double aEarthRadiusScale);
// 	//
// 	// //Returns the projected area of the platform (in m^2);
// 	// //when viewed from the location specified by aViewer
// 	// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);
// 	// //A value of less than or equal to zero is equivalent to specifying 10
// 	// //Note: This is equivalent to WsfPlatformOpticalCrossSection and is preferred because it is more representative of what is being returned
// 	double ProjectedArea(WsfGeoPoint aViewer, double aEarthRadiusScale);
// 	//
// 	// //Returns the radiant intensity of the platform (in W/sr); when viewed from the location specified by aViewer
// 	// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);
// 	// //A value of less than or equal to zero is equivalent to specifying 10
// 	// //aBandName is either “visual” or one of the infrared band names as defined in infrared_signature
// 	// //An empty FString is equivalent to specifying “default” “default” should be avoid because it is possibly ambiguous
// 	// //Note: If an infrared band is supplied as aBandName, this is equivalent to WsfPlatformInfraredRadiantIntensity
// 	// //This is the preferred method because it works for both visual and infrared bands
// 	double RadiantIntensity(WsfGeoPoint aViewer, double aEarthRadiusScale, FString aBandName);
// 	//
// 	// //Returns the current radar signature state of the platform
// 	FString RadarSigState();
// 	//
// 	// //Sets the platform’s radar signature state to the given state
// 	void SetRadarSigState(FString aState);
// 	//
// 	// //Returns the current radar signature scale factor (as a linear value, not dB);
// 	double RadarSigScaleFactor();
// 	//
// 	// //Sets the radar signature scale factor to the given value (as an linear value, not dB);
// 	// //The effective radar signature of the platform becomes the baseline signature value multiplied by this value
// 	void SetRadarSigScaleFactor(double aScaleValue);
// 	//
// 	// //Returns the radar cross section of the platform (in m^2); when viewed from the aspect (eg WsfPlatformApparentAspectOf);
// 	// //specified by aRcvrAzimuth and aRcvrElevation (degrees);, or location specified by aViewer In the first and second versions,
// 	// //the transmitter and receiver are assumed to be co-located In the third version, the aspect of
// 	// //the transmitter illuminating the target is specified by aXmtrAzimuth and aXmtrElevation (degrees);
// 	// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 4/3);
// 	// //A value of less than or equal to zero is equivalent to specifying 4/3
// 	// //aPolarization is the polarization to be used for the query and must be an empty FString or
// 	// //one of the polarization names as defined in radar_signature
// 	// //An empty FString is equivalent to specifying “default”
// 	// //aFrequency is the frequency of the signal (in Hertz); to be used for the query
// 	double RadarCrossSection(double aRcvrAzimuth, double aRcvrElevation, FString aPolarization, double aFrequency);
// 	double RadarCrossSection(WsfGeoPoint aViewer, double aEarthRadiusScale, FString aPolarization, double aFrequency);
// 	double RadarCrossSection(double aXmtrAzimuth, double aXmtrElevation, double aRcvrAzimuth, double aRcvrElevation,
// 	                          FString aPolarization, double aFrequency);
// 	//
// 	//
// 	// //Capabilities Methods
// 	// //Returns the platform’s current 16-bit Capabilities data as an integer
// 	// //The integer contains bit-mapped flags that indicate if the platform has the ability to supply payload, fuel, vehicle repair, vehicle recovery,
// 	// //or automated data service - broadcast (ADS_B); services This information is especially of interest to the WSF_EXCHANGE_PROCESSOR
// 	// //(See Distributed Interactive Simulation (DIS); Entity Capabilities field definitions);
// 	int Capabilities();
// 	//
// 	// //Sets the platform’s 16-bit Capabilities data (See |Distributed Interactive Simulation (DIS);
// 	// //Entity Capabilities field definitions);
// 	// //Note: This capability allows for direct manipulation of the Entity State Capability data being reported,
// 	// //and may internally generate a callback that Capabilities have changed
// 	void SetCapability(int aLeastSignificantBit, bool aValue);
// 	//
// 	//
// 	// //Script Invocation Methods
// 	// //Returns ‘true’ if a script with the given name exists on the platform
// 	bool ScriptExists(FString aScript);
// 	//
// 	// //Executes the script with the given name and optional argument list
// 	// //Returns the return value of the executed script
// 	// //Note: The ExecuteScript and ExecuteScriptWithArgs forms are provided for backward compatibility, and return ‘true’ if the script exists
// 	WsfObject WsfExecute(FString aScript);
// 	WsfObject WsfExecute(FString aScript, TArray<WsfObject> aArgs);
// 	bool ExecuteScript(FString aScript);
// 	bool ExecuteScriptWithArgs(FString aScript, TArray<WsfObject> aArgs);
// 	//
// 	// //Executes the script with the given name and optional argument list at the given simulation time
// 	// //Return value indicates whether the supplied script exists on the platform
// 	bool ExecuteAtTime(double aTime, FString aScript);
// 	bool ExecuteAtTime(double aTime, FString aScript, TArray<WsfObject> aArgs);
// 	//
// 	//
// 	// //Perception Methods
// 	// //Returns the platform’s perception processor
// 	// //If none were defined, a default perception processor is added and returned
// 	// //If more than one were defined, it returns the first one
// 	WsfPerceptionProcessor PerceptionProcessor();
// 	//
// 	// //Returns the platform’s perceived assets
// 	TArray<WsfAssetPerception> PerceivedAssets();
// 	//
// 	//
	// //Track Methods
	// //Returns the platform’s master track list
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	UWsfLocalTrackList * MasterTrackList();
// 	//
// 	// //Returns the platform’s master raw track list,
// 	// //or list of raw tracks fused to form the master track list
// 	WsfTrackList MasterRawTrackList();
// 	//
// 	// //Returns the local track list associated with the given track processor
// 	// //If the track processor is a non-master track processor, the returned track list will not be the master track list
// 	// //Note: The track processor, name aTrackProcessorName, must exist on the platform; otherwise, the track list will be invalid
// 	WsfLocalTrackList TrackList(FString aTrackProcessorName);
// 	//
// 	// //Returns the raw track list associated with the given track processor
// 	// //If the track processor is a non-master track processor, the returned track list will not be the master raw track list
// 	// //Note: The track processor, name aTrackProcessorName, must exist on the platform; otherwise, the track list will be invalid
// 	WsfTrackList RawTrackList(FString aTrackProcessorName);
// 	//
// 	// //Returns the “master” track manager (ie, the track manager that owns and maintains the master track list);
// 	WsfTrackManager TrackManager();
// 	//
// 	// //Returns the WsfTrackId of the current target
// 	// //Note: return_valueIsNull(); will be true if there is no current target
// 	WsfTrackId CurrentTarget();
// 	//
// 	//
// 	// //Sets the current target given a track and return the WsfTrackId of the current target track
// 	// //If the argument is a sensor track and already correlated to a local track in the track manager
// 	// //then the current target will be that local track
// 	// //If the argument is a sensor track and NOT already correlated to a local track in the track manager
// 	// //then a new correlated local track is created and the current target will be that new local track
// 	WsfTrackId SetCurrentTarget(WsfTrack aTrack);
// 	//
// 	// //Returns true if the platform has a current target
// 	bool HasCurrentTarget();
// 	//
// 	// //Clears the current target
// 	void ClearCurrentTarget();
// 	//
// 	// //Returns the WsfTrack of the current target
// 	// //Note: Use return_valueIsValid(); to ensure the return value is valid (ie, there is a current target); before using it
// 	WsfTrack CurrentTargetTrack();
// 	//
// 	// //Returns the time to intercept and the intercept bearing An intercept time of -1 indicates that there is no solution
// 	// //The intercept bearing is available in the WsfWaypoint that is passed in by reference
// 	// //All forms of InterceptLocation2D require a track to intercept and return by reference a waypoint with the intercept bearing
// 	double InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint);
// 	//
// 	// //See above This version provides a third argument that outputs debug information about the intercept calculation
// 	double InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint, bool aDebug);
// 	//
// 	// //See above This version provides additional arguments for providing the ownship speed and a delay until that speed is reached
// 	double InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay);
// 	//
// 	// //See above This version provides additional arguments for providing the ownship speed,
// 	// //delay until that speed is reached, and whether to output debug information about the intercept calculation
// 	double InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay,
// 	                            bool aDebug);
// 	//
// 	// //Returns the intercept time, bearing, altitude An intercept time of -1 indicates that there is no solution
// 	// //The intercept bearing and altitude is available in the WsfWaypoint that is passed in by reference
// 	// //All forms of InterceptLocation3D require a track to intercept and return by reference a waypoint with the intercept bearing and altitude
// 	double InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint);
// 	//
// 	// //See above This version provides a third argument that outputs debug information about the intercept calculation
// 	double InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint, bool aDebug);
// 	//
// 	// //See above This version provides additional arguments for providing the ownship speed and a delay until that speed is reached
// 	double InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay);
// 	//
// 	// //See above This version provides additional arguments for providing the ownship speed,
// 	// //delay until that speed is reached,
// 	// //and whether to output debug information about the intercept calculation
// 	double InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay,
// 	                            bool aDebug);
// 	//
// 	// //Returns the time required to travel to the provided track (seconds);
// 	// //Note: This method is valid only for WSF_ROAD_MOVER
// 	// //Location and Navigation Methods
// 	double TravelTime(WsfTrack aTrack);
// 	//
// 	// //Returns the current location of the platform
// 	// //In the second form, only the latitude, longitude and altitude of the waypoint is defined
// 	WsfGeoPoint Location();
// 	WsfWaypoint LocationAsWaypoint();
// 	//
// 	// //Returns the height of the platform above the terrain (meters);
// 	double HeightAboveTerrain();
// 	//
// 	// //Returns the platform’s latitude, longitude (decimal degrees);
// 	// //or altitude (meters above mean sea level);, respectively
// 	// //Note: These commands should be used only if a single position component will be extracted
// 	// //If multiple components will be extracted,
// 	// //it is more efficient to use Location and retrieve the individual components from the returned object
// 	double Latitude();
// 	double Longitude();
// 	double Altitude();
// 	//
// 	// //Returns the ‘x’, ‘y’ or ‘z’ component of the platform’s WCS position (meters);, respectively
// 	// //Note: These commands should be used only if a single position component will be extracted
// 	// //If multiple components will be extracted, it is more efficient to use Location and retrieve the individual components from the returned object
// 	double X();
// 	double Y();
// 	double Z();
// 	//
// 	// //Returns the ‘x’, ‘y’ or ‘z’ component of the platform’s WCS velocity (meters/second);, respectively
// 	double Vx();
// 	double Vy();
// 	double Vz();
// 	//
// 	// //Returns the location of the platform as perceived by itself
// 	// //This location will be different than the value returned by Location only if navigation_errors have been defined for the platform
// 	WsfGeoPoint PerceivedLocation();
// 	//
// 	// //Returns the difference between the perceived platform location as returned by PerceivedLocation and the true platform location by Location
// 	// //The value will be non-zero only if navigation_errors have been defined for the platform
// 	FVector PerceivedLocationErrorNED();
// 	FVector PerceivedLocationErrorWCS();
// 	//
// 	// //Define the difference between the perceived platform location as returned by PerceivedLocation and the true platform location returned by Location
// 	// //This method will have no effect unless navigation_errors have been defined for the platform and the value of GPS_Status
// 	// //(as set by SetGPS_Status or gps_status); is 3 (GPS errors can be set from an external source);
// 	void SetPerceivedLocationErrorWCS(FVector aLocationErrorWCS);
// 	//
// 	// //Returns the anticipated location of the platform at the specified time in the future If the location cannot be determined then the return
// 	// //will be invalid The return value should be tested for validity before attempting to use it
// 	// //This method is currently only valid for WSF_AIR_MOVER, WSF_GROUND_MOVER, WSF_SURFACE_MOVER, WSF_SPACE_MOVER, WSF_NORAD_SPACE_MOVER,
// 	// //and WSF_INTEGRATING_SPACE_MOVER
// 	// //Note: For a platform with a space mover,
// 	// //this method will not return a valid result when the current simulation time is during an orbital maneuver,
// 	// //or if there is the start of a maneuver before the time of the prediction time, aTime
// 	WsfGeoPoint FutureLocation(double aTime);
// 	//
// 	// //Returns the WCS location of the platform in meters
// 	FVector LocationWCS();
// 	//
// 	// //Returns the ECI location of the platform in meters
// 	FVector LocationECI();
// 	//
// 	// //Returns the J2000 location of the platform in meters
// 	FVector LocationJ2000();
// 	//
// 	// //Returns the location of the platform in MGRS (Military Grid Reference System); format
// 	FString LocationMGRS();
// 	//
// 	// //Returns the WCS velocity of the platform in meters/second
// 	FVector VelocityWCS();
// 	//
// 	// //Returns the NED velocity of the platform in meters/second
// 	FVector VelocityNED();
// 	//
// 	// //Returns the ECI velocity of the platform in meters/second
// 	FVector VelocityECI();
// 	//
// 	// //Returns the J2000 velocity of the platform in meters/second
// 	FVector VelocityJ2000();
// 	//
// 	// //Returns the WCS acceleration of the platform in meters/second
// 	FVector AccelerationWCS();
// 	//
// 	// //Returns the NED acceleration of the platform in meters/second
// 	FVector AccelerationNED();
// 	//
// 	// //Returns the ECI acceleration of the platform in meters/second
// 	FVector AccelerationECI();
// 	//
// 	// //Returns the platform’s current speed (meters/second);
// 	double Speed();
// 	//
// 	// //Returns the platform’s current ground speed (meters/second);
// 	double GroundSpeed();
// 	//
// 	// //Returns the target speed of the platform’s mover if it is a WSF_WAYPOINT_MOVER
// 	double TargetSpeed();
// 	//
// 	// //Returns the platform’s current speed as a Mach number
// 	double MachNumber();
// 	//
// 	// //Returns the platform’s heading angle [-180, 180] (degrees);
// 	double Heading();
// 	//
// 	// //Returns the platform’s pitch angle [-90, 90] (degrees);
// 	double Pitch();
// 	//
// 	// //Returns the platform’s roll angle [-90, 90] (degrees);
// 	double Roll();
// 	//
// 	// //Returns the platform’s orientation in NED (yaw, pitch, roll degrees);
// 	FVector OrientationNED();
// 	//
// 	// //Returns the platform’s orientation in WCS (degrees);
// 	FVector OrientationWCS();
// 	//
// 	// //Returns the platform’s orientation in The Earth Centered Inertial System (ECI); (degrees);
// 	FVector OrientationECI();
// 	//
// 	// //Given a position in The Entity Coordinate System (ECS);, returns the position in WCS
// 	FVector ConvertECSToWCS(FVector aPosition);
// 	//
// 	// //Given a position in WCS, returns the position in The Entity Coordinate System (ECS);
// 	FVector ConvertWCSToECS(FVector aPosition);
// 	//
// 	// //Given a position in ECI, returns the position in WCS
// 	FVector ConvertECIToWCS(FVector aPosition);
// 	//
// 	// //Given a position in WCS, returns the position in ECI.
// 	FVector ConvertWCSToECI(FVector aPosition);
// 	//
// 	// //Sets the platform’s desired Heading (body pointing angle); angle [-180, 180] (degrees);
// 	// //The SetOrientationNED(); command is similar Implementation differs from the TurnToHeading command below,
// 	// //which is actually a turn to Course command Note: that most Mover types do not distinguish between heading and course angles,
// 	// //and much infrastructure is in place that assumes a heading command is a desire to move in a certain direction,
// 	// //rather than orient in a particular direction The WSF_ROTORCRAFT_MOVER is a notable exception to this rule,
// 	// //see this documentation for syntax and usage details
// 	// //Note: A platform’s mover can override this setting at any time
// 	void SetHeading(double aHeading);
// 	//
// 	// //Sets the platform’s pitch angle [-90, 90] (degrees);
// 	// //Note: A platform’s mover can override this setting at any time For instance,
// 	// //it cannot be used to set pitch if WSF_AIR_MOVER is providing the current platform’s movement
// 	// //It is recommended to use GoToAltitude();
// 	void SetPitch(double aPitch);
// 	//
// 	// //Sets the platform’s roll angle [-90, 90] (degrees);
// 	// //Note: A platform’s mover can override this setting at any time
// 	void SetRoll(double aRoll);
// 	//
// 	// //Causes the platform to move to the waypoint on its route with the given label Return true if successful
// 	bool GoToLabel(FString aLabel);
// 	//
// 	// //Causes the platform to move to the specified location (degrees, meters); Return true if successful
// 	// //If the parameter is a waypoint, only the position of the waypoint is used
// 	bool GoToLocation(double aLat, double aLon, double aAlt);
// 	bool GoToLocation(double aLat, double aLon);
// 	bool GoToLocation(WsfWaypoint aPoint);
// 	bool GoToLocation(WsfGeoPoint aPoint);
// 	//
// 	// //Causes the platform to move to a previously defined geo_point (by name or WsfGeoPoint);
// 	// //with the option of adding a callback method when the platform reaches the given location
// 	bool GoToPoint(FString aGeoPointName);
// 	bool GoToPoint(WsfGeoPoint aLocation);
// 	bool GoToPoint(FString aGeoPointName, FString aCallbackFunction);
// 	bool GoToPoint(WsfGeoPoint aGeoPoint, FString aCallbackFunction);
// 	//
// 	// //Causes the platform to adjust its altitude to the specified value (meters);
// 	// //In the second form, the second argument is the positive altitude rate-of-change (meters/second);
// 	// //to be used to achieve the desired altitude It will be negated if the target altitude is less than the current altitude
// 	// //By default, the mover will quit following the route and begin extrapolating on the current heading
// 	// //If the third parameter is set to true, the mover will remain on the current route, but change the target altitude
// 	bool GoToAltitude(double aAlt);
// 	bool GoToAltitude(double aAlt, double aAltRateOfChange);
// 	bool GoToAltitude(double aAlt, double aAltRateOfChange, bool aKeepRoute);
// 	//
// 	// //Causes the platform to adjust its speed to the specified value (meters/second);
// 	// //or Mach number, while maintaining its current path
// 	// //In the two argument form, second argument is a positive linear acceleration to be used (meters/second^2);
// 	// //to be used to achieve the desired speed It will be negated if the target speed is less than the current speed
// 	// //By default, the mover will quit following the route and begin extrapolating on the current heading
// 	// //If the third parameter is set to true, the mover will remain on the current route, but change the target speed
// 	bool GoToSpeed(double aSpeed);
// 	bool GoToSpeed(double aSpeed, double aLinearAccel);
// 	bool GoToSpeed(double aSpeed, double aLinearAccel, bool aKeepRoute);
// 	bool GoToMachNumber(double aMachNumber);
// 	bool GoToMachNumber(double aMachNumber, double aLinearAccel);
// 	//
// 	// //Causes the platform to turn to the given absolute Course (inadvertently referred to as Heading);
// 	// //[0, 360] (degrees); Return true if successful
// 	// //In the second form, the second argument is the radial acceleration to be used (meters/second^2);
// 	// //to be used during the turn Realized radial acceleration will be limited by WSF_AIR_MOVER maximum_radial_acceleration
// 	bool TurnToHeading(double aHeading);
// 	bool TurnToHeading(double aHeading, double aRadialAccel);
// 	//
// 	// //Causes the platform to turn to the given relative heading [-180, 180] (degrees); Return true if successful
// 	// //In the second form, the second argument is the radial acceleration to be used (meters/second^2);
// 	// //to be used during the turn Realized radial acceleration will be limited by WSF_AIR_MOVER maximum_radial_acceleration
// 	bool TurnToRelativeHeading(double aHeading);
// 	bool TurnToRelativeHeading(double aHeading, double aRadialAccel);
// 	//
// 	// //Causes the platform to drop its current path and follow the provided route
// 	// //The starting point defaults to the first point in the route if not specified
// 	// //Returns true if successful
// 	// //WsfRoute aRoute indicates a script WsfRoute to follow
// 	// //FString aRouteName indicates a route to follow by either: * The name of a predefined route type defined with a global route command
// 	// //* The FString “DEFAULT_ROUTE” selects the initial route defined for the platform
// 	// //FString aLabel specifies an alternate starting point in the route as either:
// 	// //* The label of a waypoint within the specified route
// 	// //* The FString “CLOSEST_POINT” selects the point that is closest to the current location
// 	// //int aIndex specifies an alternate starting point in the route as an integer where 0 is the first index into route
// 	bool FollowRoute(WsfRoute aRoute);
// 	bool FollowRoute(WsfRoute aRoute, FString aLabel);
// 	bool FollowRoute(WsfRoute aRoute, int aIndex);
// 	bool FollowRoute(FString aRouteName);
// 	bool FollowRoute(FString aRouteName, FString aLabel);
// 	bool FollowRoute(FString aRouteName, int aIndex);
// 	//
// 	// //Causes to the platform to return to its default, or preplanned route following a diversion
// 	// //The platform goes to the target waypoint it had at the time of the diversion Return true if successful
// 	//
// 	// //Important The following SetLocation, SetVelocity, and SetOrientation methods are not guaranteed to be compatible with all mover types
// 	// //Furthermore, they may be unsuccessful if invoked on uninitialized platforms created with WsfSimulationCreatePlatform
// 	// //before being added to the simulation
// 	bool ReturnToRoute();
// 	//
// 	// //Immediately moves the platform to a new location This method may not be compatible with all mover types,
// 	// //or successful if invoked on uninitialized platforms created in script
// 	void SetLocation(double aLat, double aLon, double aAlt);
// 	void SetLocation(WsfGeoPoint aPoint);
// 	//
// 	// //Immediately moves the platform to a new location The first form will place the platform on the ground
// 	// //The second form will place the platform at the specified altitude (AGL); This method may not be compatible with all mover types,
// 	// //or successful if invoked on uninitialized platforms created in script
// 	bool SetLocationMGRS(FString aLocationMGRS);
// 	bool SetLocationMGRS(FString aLocationMGRS, double aAlt);
// 	//
// 	// //Changes the platform’s velocity in The Entity Coordinate System (ECS);
// 	// //This method may not be compatible with all mover types, or successful if invoked on uninitialized platforms created in script
// 	void SetVelocityECS(double aForward, double aRight, double aDown);
// 	//
// 	// //Changes the platform’s velocity in North, East, Down This method may not be compatible with all mover types,
// 	// //or successful if invoked on uninitialized platforms created in script
// 	void SetVelocityNED(double aNorth, double aEast, double aDown);
// 	//
// 	// //Changes the platform’s orientation in heading, pitch, roll (in degrees);
// 	// //This is only useful for platform’s without a mover
// 	void SetOrientationNED(double aHeading, double aPitch, double aRoll);
// 	//
// 	// //Changes the platform’s orientation in WCS (degrees); This is only useful for platform’s without a mover
// 	void SetOrientationWCS(double aPsi, double aTheta, double aPhi);
// 	//
// 	// //Returns a reference to the current route the platform is traveling The returned route may not be modified, use Copy();
// 	// //and FollowRoute to modify the platform’s route
// 	WsfRoute Route();
// 	//
// 	//
// 	// //Returns the index of the waypoint within the route to which the platform is moving towards
// 	// //Note: The return value is valid only if the platform is following a route
// 	int RoutePointIndex();
// 	//
// 	// //Immediately moves the platform to the start and begins following a route Use FollowRoute();
// 	// //if you do not want move immediately to the beginning of the route
// 	// //Returns true if successful
// 	// //WsfRoute aRoute indicates a script WsfRoute to follow
// 	// //FString aRouteName indicates a route to follow by either:
// 	// //* The name of a predefined route type defined with a global route command
// 	// //* The FString “DEFAULT_ROUTE” selects the initial route defined for the platform
// 	bool SetRoute(WsfRoute aRoute);
// 	bool SetRoute(FString aRouteName);
// 	//
// 	// //Stops platform movement until unpaused UnpauseTime is the absolute time the platform is to resume
// 	void Pause(double UnpauseTime);
// 	//
// 	// //Resumes platform movement if it was previously paused
// 	void Unpause();
// 	//
// 	// //Returns the path finder attached to the platform’s mover object
// 	// //Note: The current mover must be a type of route mover or the return value is invalid
// 	WsfPathFinder PathFinder();
// 	//
// 	// //Relative Geometry Methods
// 	// //Returns the azimuth angle ([-180, 180] degrees);
// 	// //of the supplied point with respect to the current orientation of the platform (includes any yaw, pitch or roll angles);
// 	double RelativeAzimuthOf(WsfGeoPoint aPoint);
// 	//
// 	// //Returns the elevation angle ([-90, 90] degrees);
// 	// //of the supplied point with respect to the current orientation of the platform (includes any yaw, pitch or roll angles);
// 	double RelativeElevationOf(WsfGeoPoint aPoint);
// 	//
// 	// //Returns the bearing ([-180, 180] degrees); to the given location The angle is relative to north, with positive values being clockwise
// 	double TrueBearingTo(WsfTrack aTrack);
// 	double TrueBearingTo(WsfPlatform aPlatform);
// 	double TrueBearingTo(double aLat, double aLon, double aAlt);
// 	double TrueBearingTo(WsfGeoPoint aPoint);
// 	//
// 	// //Returns the ‘apparent’ azimuth angle ([-180, 180] degrees); and the elevation angle, in a two element array of type double,
// 	// //of the supplied point with respect to the current orientation of the platform (includes any yaw, pitch or roll angles);
// 	// //The apparent location (ie, the perceived location of an object which accounts for atmospheric refraction);
// 	// //may be needed to properly cue sensors that have very narrow beams
// 	// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);
// 	TArray<double> ApparentAspectOf(WsfGeoPoint aPoint, double aEarthRadiusScale);
// 	//
// 	// //A value of less than or equal to zero is equivalent to specifying 10
// 	//
// 	// //Returns the bearing ([-180, 180] degrees); to the given location
// 	// //The angle is relative to the platforms current heading with positive values being clockwise
// 	double RelativeBearingTo(WsfTrack aTrack);
// 	double RelativeBearingTo(WsfPlatform aPlatform);
// 	double RelativeBearingTo(double aLat, double aLon, double aAlt);
// 	double RelativeBearingTo(WsfGeoPoint aPoint);
// 	//
// 	//
// 	// //Returns the slant range in meters between the platform and the indicated location If aUseSpherical is true,
// 	// //calculate using spherical coordinates; if it is false or left unspecified, calculate using ellipsoidal coordinates
// 	double SlantRangeTo(WsfTrack aTrack);
// 	double SlantRangeTo(WsfTrack aTrack, bool aUseSpherical);
// 	double SlantRangeTo(WsfPlatform aPlatform);
// 	double SlantRangeTo(WsfPlatform aPlatform, bool aUseSpherical);
// 	double SlantRangeTo(double aLat, double aLon, double aAlt);
// 	double SlantRangeTo(double aLat, double aLon, double aAlt, bool aUseSpherical);
// 	double SlantRangeTo(WsfGeoPoint aPoint);
// 	double SlantRangeTo(WsfGeoPoint aPoint, bool aUseSpherical);
// 	double SlantRangeTo(WsfWaypoint aPoint);
// 	double SlantRangeTo(WsfWaypoint aPoint, bool aUseSpherical);
// 	//
// 	// //Returns the approximate ground range in meters between the platform and the indicated location Calculated using spherical coordinates
// 	double GroundRangeTo(WsfTrack aTrack);
// 	double GroundRangeTo(WsfPlatform aPlatform);
// 	double GroundRangeTo(double aLat, double aLon, double aAlt);
// 	double GroundRangeTo(WsfGeoPoint aPoint);
// 	//
// 	//
// 	// //Returns the approximate down range in meters between the platform and the indicated location
// 	// //This is the ground range times the cosine of the relative bearing to the location
// 	// //Positive values indicate the location is in front of the platform while negative values indicate it is behind the platform
// 	// //Calculated using spherical coordinates
// 	double DownRangeTo(WsfTrack aTrack);
// 	double DownRangeTo(WsfPlatform aPlatform);
// 	double DownRangeTo(double aLat, double aLon, double aAlt);
// 	double DownRangeTo(WsfGeoPoint aPoint);
// 	//
// 	//
// 	// //Returns the approximate cross range in meters between the platform and the indicated location
// 	// //This is the ground range times the sine of the relative bearing to the location
// 	// //Positive values indicate the location is to the right of the platform while negative values indicate it is to the left of the platform
// 	// //Calculated using spherical coordinates
// 	double CrossRangeTo(WsfTrack aTrack);
// 	double CrossRangeTo(WsfPlatform aPlatform);
// 	double CrossRangeTo(double aLat, double aLon, double aAlt);
// 	double CrossRangeTo(WsfGeoPoint aPoint);
// 	//
// 	//
// 	// //Returns the approximate point at which the indicated object would pass closest to the platform
// 	// //It is derived by extending the horizontal components of the velocity vector of the indicated object
// 	// //and determining the point at which the line passes closest to the platform If the object is not moving
// 	// //or if it is coincident with the requesting platform, the returned value will be the current position of the object
// 	WsfGeoPoint ClosestApproachOf(WsfTrack aTrack);
// 	WsfGeoPoint ClosestApproachOf(WsfPlatform aPlatform);
// 	//
// 	// //Note: The velocity of the requesting platform is not considered in this calculation (ie, it is not an intercept calculation);
// 	// //Returns the difference in heading in degrees between the platform and the indicated object
// 	// //That is, result = heading of platform - heading of object normalized to the range [-180, 180]
// 	// //The sign of the value indicates the potential direction of the crossing of the objects
// 	// //A positive value indicates the object would cross the platform’s path from left to right
// 	// //while a negative value indicates it would cross from right to left A value of zero indicates the objects are traveling
// 	// //in the same direction while a value of 180 indicates they are traveling in opposite directions
// 	double HeadingDifferenceOf(WsfTrack aTrack);
// 	double HeadingDifferenceOf(WsfPlatform aPlatform);
// 	//
// 	//
// 	// //Returns the closing speed in meters per second between the platform and the indicated object
// 	// //This value is the component of the total velocity in the direction of the vector between the two objects
// 	// //Positive values mean the objects are closing and negative values mean the objects are separating
// 	double ClosingSpeedOf(WsfTrack aTrack);
// 	double ClosingSpeedOf(WsfPlatform aPlatform);
// 	double ClosingSpeedOf(WsfTrack aTrack, double aMySpeed);
// 	double ClosingSpeedOf(WsfPlatform aPlatform, double aMySpeed);
// 	//
// 	// //Is the given track or platform within the field of view of this platform’s sensor?
// 	bool WithinFieldOfView(WsfTrack aTrack, FString aMySensorName);
// 	bool WithinFieldOfView(WsfPlatform aPlatform, FString aMySensorName);
// 	//
// 	//
// 	// //Returns true if the line of sight between the platform and the supplied point is masked (obscured); by the terrain
// 	// //aVerticalOffset is the amount added to the platform altitude to simulate the height of the observer (eg, antenna); above the platform
// 	// //aRadiusScaleFactor is the scale factor to be applied to Earths radius to simulate atmospheric refraction
// 	// //This value is typically 13333 (4 / 3); for radio frequencies
// 	bool MaskedByTerrain(WsfGeoPoint aPoint, double aVerticalOffset, double aRadiusScaleFactor);
// 	//
// 	// //Return the apparent mean solar time at the position of this platform in hours since midnight
// 	double ApparentTime();
// 	//
// 	//
// //Compatibility Methods
// 	// //Returns the signed difference between the specified track and the requesting platform
// 	// //A positive value means the altitude of the track is above the requesting platform
// 	double RelativeAltitudeOf(WsfTrack aTrack);
// 	//
// 	// //This returns the absolute value of the angle between the line-of-sight vector from the target (represented by the supplied track);
// 	// //to the requesting platform and the heading vector of the target
// 	// //Note: The track must have a valid non-zero velocity, or a large value (10E+10); will be returned
// 	double RelativeHeadingOf(WsfTrack aTrack);
// 	//
// 	// //This returns the approximate ground range (in meters); to the point of closest approach of the target represented by the specified track
// 	// //Note: The track must have a valid non-zero velocity, or a large value (10E+10); will be returned
// 	double RelativeOffsetOf(WsfTrack aTrack);
// 	//
// 	// //Zone Methods
// 	// //Returns the WsfZone script object matching the given zone name
// 	WsfZone Zone(FString aZoneName);
// 	//
// 	// //Returns ‘true’ if the platform is within the specified zone defined on the platform
// 	// //The zone can be created on the platform using the zone … end_zone block or the use_zone command See platform
// 	bool WithinZone(FString aZoneName);
// 	//
// 	// //Returns ‘true’ if the platform is within the specified zone defined on the specified platform
// 	// //The zone can be created on the platform using the zone … end_zone block or the use_zone command See platform
// 	bool WithinZoneOf(WsfPlatform aPlatform, FString aZoneName);
// 	//
// 	// //Returns an array of the names for all zones that were defined on the platform
// 	TArray<FString> ZoneNames();
// 	//
// 	// //Returns an array of WsfZone objects that were defined on the platform
// 	TArray<WsfZone> Zones();
// 	//
// 	//
// 	// //Auxiliary Data Methods
// 	// //Auxiliary Data is a collection of optional named user data attributes that can be stored with the object
// 	// //The framework will maintain the attributes but in no other way attempts to use the data contained within
// 	// //The definition and use of any attribute is defined purely by the user
// 	// //Retrieve the value of the auxiliary data attribute with the indicated name
// 	// //If the attribute does not exist then a default value will be returned (false for bool, 0 for int and 00 for double);
// 	bool AuxDataBool(FString aName);
// 	int AuxDataInt(FString aName);
// 	double AuxDataDouble(FString aName);
// 	FString AuxDataFString(FString aName);
// 	WsfObject AuxDataObject(FString aName);
// 	//
// 	// //Returns true if an auxiliary data member exists with the specified name
// 	bool AuxDataExists(FString aName);
// 	bool CheckAuxData(FString aName);
// 	//
// 	// //Returns true if the object has auxiliary data
// 	bool HasAuxData();
// 	//
// 	// //Delete the auxiliary data attribute with the indicated name
// 	// //Returns true if the attribute exists and was deleted, or false if the attribute did not exist
// 	bool DeleteAuxData(FString aName);
// 	//
// 	//
// 	// //Set the value of the auxiliary data attribute with the indicated name
// 	// //The last form of SetAuxData(); can store any script object type
// 	void SetAuxData(FString aName, bool aValue);
// 	void SetAuxData(FString aName, int aValue);
// 	void SetAuxData(FString aName, double aValue);
// 	void SetAuxData(FString aName, FString aValue);
// 	// //void SetAuxData(FString aName, WsfObject aValue);
// 	//
// 	//
// 	// //Return the names and types of all auxiliary data attributes in the form of a Map<FString,FString>
// 	// //Map keys are valid names of auxiliary data attributes
// 	// //Map values are type names corresponding to valid auxiliary data attribute names
// 	TMap<FString, FString> GetAllAuxDataTypes();
// 	//
// 	//
// 	// //Group Methods
// 	// //Returns true if the platform is a member of the specified group (by name, id or object);
// 	bool GroupMemberOf(FString aGroupName);
// 	bool GroupMemberOf(WsfGroup aGroupPtr);
// 	//
// 	// //Returns a list of all groups this platform is a member of
// 	TArray<WsfGroup> Groups();
// 	//
// 	// //Returns a list of the names of all groups this platform is a member of
// 	TArray<FString> GroupsByName();
// 	//
// 	// //Joins the given group if it exists in the simulation
// 	void GroupJoin(FString aGroupName);
// 	//
// 	// //Leaves the given group if this platform is a member
// 	void GroupLeave(FString aGroupName);
// 	//
// 	//
// 	// //Other Methods
// 	// //Adds the category to the platform’s category list
// 	void AddCategory(FString aCategoryName);
// 	//
// 	// //Returns true if the platform is a member of the specified category
// 	bool CategoryMemberOf(FString aCategoryName);
// 	//
// 	// //Sends a time-stamped comment entry for the platform to the simulation observers
// 	// //(such as event_output, dis_interface); This is typically used to insert application-specific data into
// 	// //the event logs or simulation output stream In event_output, the supplied FString will be written as a COMMENT entry
// 	// //For the dis_interface, a Comment PDU will be written which can be interpreted by many visualization tools as a ‘thought bubble’
// 	//
// 	// //The first form uses the current simulation time as the time of the comment
// 	// //The second form uses the supplied time as the time of the comment and should be used very carefully
// 	// //as time should only increase in some output streams
// 	void Comment(FString aComment);
// 	void Comment(double aTime, FString aComment);
// 	//
// 	// //Returns the point with the given name
// 	WsfGeoPoint GeoPoint(FString aGeoPointName);
// 	//
// 	// //Returns a track that represents the current state of the platform
// 	WsfTrack MakeTrack();
// 	//
// 	// //Changes the Platform’s mover The platform actually starts using a copy of the specified mover
// 	// //Use WsfPlatformMover to access the mover after SwapMover is called
// 	// //If aMover is null, the platform will no longer have a mover Returns the mover the platform was using prior to the swap
// 	WsfMover SwapMover(WsfMover aMover);
// 	//
// 	//
// 	// //Changes the Platform’s mover to a new mover of the given type
// 	// //Use WsfPlatformMover to access the mover after SwapMover is called If aMoverType is known,
// 	// //returns the mover the platform was using prior to the swap If aMoverType is unknown, this does nothing and will return a null object
// 	WsfMover SwapMover(FString aMoverType);
// 	//
// 	// //Enables (‘true’); or disable (‘false’); the debug mode of the mover attached to the platform
// 	void SetMoverDebugEnabled(bool aBoolean);
// 	//
// 	// //Calculates and returns the centroid of the platform’s subordinates
// 	WsfGeoPoint SubordinatesCentroid();
// 	//
// 	// //Returns the EntityType if it exists in the entity_type mapping command
// 	// EntityType EntityType();
// 	//
// 	// //Prints a list of the names and types of components attached to the platform, along with a descriptive header
// 	void PrintComponentInfo();
// 	//
// 	// //Returns a FString containing the names and types of components attached to the platform
// 	FString GetComponentInfo();
// 	//
// //Cyber Methods
// //Attack Methods
// 	// //Initiates a cyber attack against the target platform ‘aTarget’ using the attack type ‘aAttackType’
// 	// //‘aAttackType’ must be a valid cyber_attack type
// 	// //Returns true if the command was successful or false if one of the arguments was incorrect
// 	// //This method will also return false is the attack contains an effect that requires the user to supply additional data,
// 	// //as the alternate CyberAttack method must be utilized
// 	bool CyberAttack(WsfPlatform aTarget, FString aAttackType);
// 	//
// 	// //Initiates a cyber attack against the target platform ‘aTarget’ using the attack type ‘aAttackType’
// 	// //Certain effects require additional user supplied data at the time an attack is initiated,
// 	// //which is supplied via the ‘aParameters’ object
// 	// //Returns true if the command was successful or false if one of the arguments was invalid
// 	// //If none of the effects associated with an attack require additional user data, this method will also return false and terminate execution
// 	bool CyberAttack(WsfPlatform aTarget, FString aAttackType, WsfCyberAttackParameters aParameters);
// 	//
// 	// //Determines the perceived status of the most recent cyber attack against the target platform ‘aTarget’ using the the attack type ‘aAttackType’
// 	// //Returns:
// 	// //< 0 if the status is unknown (the delivery_delay_time has not expired or the victim has blocked the attack and prevented a status report);
// 	// //= 0 if the status is failed
// 	// //> 0 if the attack succeeded
// 	bool CyberAttackStatus(WsfPlatform aTarget, FString aAttackType);
// 	//
// 	// //Returns the time when the last cyber attack was initiated against the target platform ‘aTarget’ using the attack type ‘aAttackType’
// 	// //‘aAttackType’ must be a valid cyber_attack type This will be a large positive value if an attack has never been attempted
// 	double LastCyberAttackTime(WsfPlatform aTarget, FString aAttackType);
// 	//
// 	//
// //Cancel Methods
// 	// //To cancel a pending scan/attack see WsfSimulationCyberScanCancel
// 	//
// 	// //Constraint Methods
// 	// //Initializes and/or returns a cyber constraint object associated with the platform object
// 	WsfCyberConstraint Constraint();
// 	//
// 	//
// 	// //Scan Methods
// 	// //Initiates a cyber scan against the target platform ‘aTarget’ using the attack type ‘aAttackType’
// 	// //‘aAttackType’ must be a valid cyber_attack type
// 	// //Returns true if the command was successful or false if one of the arguments was incorrect
// 	bool CyberScan(WsfPlatform aTarget, FString aAttackType);
// 	//
// 	// //Determines the perceived status of the most recent cyber scan against the target platform ‘aTarget’ using the attack type ‘aAttackType’ ‘aAttackType’ must be a valid cyber_attack type
// 	// //Returns:
// 	// //< 0 if the scan is still in progress (the scan_delay_time has not elapsed);
// 	// //= 0 if the scan was unsuccessful (target is not vulnerable);
// 	// //> 0 if the scan was successful (target is potentially vulnerable to an attack);
// 	bool CyberScanStatus(WsfPlatform aTarget, FString aAttackType);
// 	//
// 	// //Returns the time when the last cyber scan was initiated against the target platform
// 	// //‘aTarget’ using the attack type ‘aAttackType’ ‘aAttackType’ must be a valid cyber_attack type
// 	// //This will be a large positive value if a scan has never been attempted
// 	//
// 	double LastCyberScanTime(WsfPlatform aTarget, FString aAttackType);
// 	//
	// //Military Specific
	// //Subsystem Methods
	// //Returns the WsfWeapon object with the given name
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	UWsfWeapon *Weapon(FString aName);
	//
	// //Returns the number of weapon instances on this platform This is not the weapon quantity
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	int WeaponCount();
// 	//
// 	// //Returns the WsfWeapon object at the given index
// 	// //Note: 0-based indexing applies
// 	WsfWeapon WeaponEntry(int aIndex);
// 	//
// 	// //Return the amount of time that has elapsed since a weapon fire was last requested against
// 	// //the track with the indicated track ID Note:: a weapon may or may not have actually been fired,
// 	// //this time is in reference to the last fire request If no weapon fire has been requested, the return value will be less than zero
// 	double TimeSinceWeaponLastFiredFor(WsfTrackId aTrackId);
// 	//
// 	// //Return the amount of time that has elapsed since any weapon (fired from this platform);
// 	// //last terminated against the track with the indicated track ID If no weapon has terminated,
// 	// //the return value will be less than zero
// 	double TimeSinceWeaponLastTerminatedFor(WsfTrackId aTrackId);
// 	//
// 	// //Return the number of weapon rounds that are in the process of
// 	// //being fired but not yet in-flight against track with the indicated track ID
// 	// //The reason the weapon is pending is likely because of a firing delay, firing interval, or salvo interval
// 	int WeaponsPendingFor(WsfTrackId aTrackId);
// 	//
// 	// //Return the number of weapon rounds that are currently active (in-flight, weapon platforms created);
// 	// //against track with the indicated track ID
// 	int WeaponsActiveFor(WsfTrackId aTrackId);
// 	//
// 	// //Return the number of terminated weapon platforms that were fired against track with the indicated track ID
// 	int RoundsCompleteFor(WsfTrackId aTrackId);
// 	//
// 	// //This is equivalent to “WeaponsActiveFor(); + RoundsCompleteFor();”
// 	// //This returns the number of weapon rounds that have been fired against the track with the indicated ID
// 	// //This includes rounds that are in-flight
// 	int RoundsFiredAt(WsfTrackId aTrackId);
// 	//
// 	// //Return the number of salvos fire requests that have been asked for against the track with the indicated ID
// 	// //This includes salvos that are in-flight, and salvos that were requested even when no weapons were left
// 	int SalvosFiredAt(WsfTrackId aTrackId);
// 	//
// 	// //Return the weapon platforms (currently active & in-flight); fired from this platform against the track with the indicated ID
// 	WsfPlatformList ActiveWeaponPlatformsFor(WsfTrackId aTrackId);
// 	//
// 	//
// 	// //Perception Methods
// 	// //Returns the platform’s perceived threats according to the perception rules setup in the WSF_PERCEPTION_PROCESSOR WsfPerceptionProcessor
// 	TArray<WsfTrack> PerceivedThreats();
// 	//
// 	// //Track Methods
// 	// //Returns the weapon engagement object for weapon platforms Caller should test if the returned engagement IsValid(); prior to using
// 	WsfWeaponEngagement WeaponEngagement();


};

