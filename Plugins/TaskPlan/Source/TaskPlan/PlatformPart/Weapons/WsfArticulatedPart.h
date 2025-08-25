// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../WsfPlatformPart.h"
#include "WsfArticulatedPart.generated.h"
USTRUCT(BlueprintType)
struct FFArticulatedPart
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	FVector location;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double yaw ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double pitch;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double roll ;	
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double tilt;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double slew_mode;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double azimuth_slew_limits;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double elevation_slew_limits;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double azimuth_slew_rate ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double elevation_slew_rate ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double slew_method;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfArticulatedPart");
	// double masking_pattern;
	
};
/**
 * 
 */
UCLASS()
class TASKPLAN_API UWsfArticulatedPart : public UWsfPlatformPart
{
	GENERATED_BODY()
// public:
// // 	General Methods
// 	// Returns the pitch angle in degrees.
// 	double Pitch();
// 	
// 	// Sets the pitch to the angle provided in degrees.
// 	void SetPitch(double aPitch);
//
// 	// Returns the roll angle in degrees.
// 	double Roll();
// 	
// 	// Sets the roll to the angle provided in degrees.
// 	void SetRoll(double aRoll);
//
// 	// Returns the yaw angle in degrees.
// 	double Yaw();
//
// 	// Sets the yaw to the angle provided in degrees.
// 	void SetYaw(double aYaw);
// 	
// 	// Returns the location of the part in the The Entity Coordinate System (ECS) coordinate system.
// 	FVector Location();
// 	
// 	// Returns the X, Y, Z position and DX, DY, DZ velocity relative to the host platform. This is used primarily for visualization only.
// 	double X();
// 	double Y();
// 	double Z();
// 	double DX();
// 	double DY();
// 	double DZ();
//
// 	// Sets the articulated part’s position or velocity relative to the host platform (meters). This is used primarily for visualization only.
// 	void SetXYZ(double aX, double aY, double aZ);
// 	void SetDXYZ(double aDeltaX, double aDeltaY, double aDeltaZ);
//
// 	// Indicates if the device can ‘slew’ in the selected direction, as defined by the slew_mode.
// 	bool CanSlewInAzimuth();
// 	bool CanSlewInElevation();
//
// 	// Returns the requested slew angle limit (in degrees) as defined by the azimuth_slew_limits and elevation_slew_limits.
// 	double SlewMinimumAzimuth();
// 	double SlewMaximumAzimuth();
// 	double SlewMinimumElevation();
// 	double SlewMaximumElevation();
//
// 	// Indicates if the device can cue in the selected direction.
// 	// Note The slew limits and cue limits of a device are the same if the device does not support mode-specific cue limits (e.g., sensors).
// 	bool CanCueInAzimuth();
// 	bool CanCueInElevation();
//
// 	// Returns the indicated cue angle limit (in degrees).
// 	// Note The slew limits and cue limits of a device are the same if the device does not support mode-specific cue limits (e.g., sensors).
// 	double CueMinimumAzimuth();
// 	double CueMaximumAzimuth();
// 	double CueMinimumElevation();
// 	double CueMaximumElevation();
//
// 	// Returns the current masking pattern state of the articulated platform part.
// 	FString MaskingPatternState();
// 	
// 	// Sets the articulated platform part’s masking pattern state to the given state.
// 	void SetMaskingPatternState(string aState);
//
// 	//
// // Relative Geometry Methods
// 	// This method is used to compute the ‘apparent’ location of an object (i.e., the perceived location of an object which accounts for atmospheric refraction).
// 	// The apparent location may be needed to properly cue sensors which have very narrow beams.
// 	WsfGeoPoint ApparentLocationOf(WsfGeoPoint aTrueLocation, double aEarthRadiusScaleFactor);
//
// 	// Return the azimuth or elevation angle of the supplied point with respect to the current orientation of the articulated part.
// 	// If a cue is active then the return value will be with respect to the cued orientation of the part, otherwise it will be with respect to the uncued orientation
// 	// The returned azimuth angle will be in the range of +/- 180 degrees, with positive values going to the right.
// 	// The returned elevation angle will be in the range of +/- 90 degrees, with positive values going up.
// 	double RelativeAzimuthOf(WsfGeoPoint aPoint);
// 	double RelativeElevationOf(WsfGeoPoint aPoint);
//
// 	// Given a vector in the Part Coordinate System (PCS), convert that vector to the World Coordinate System (WCS).
// 	FVector ConvertPCSVectorToWCS(FVector aPCS_Vector);
//
// 	// Given a vector in the World Coordinate System (WCS), convert that vector to the Part Coordinate System (PCS).
// 	FVector ConvertWCSVectorToPCS(FVector aWCS_Vector);
// 	
// 	// Given a vector in the Part Coordinate System (PCS), convert that vector to the Entity Coordinate System (The Entity Coordinate System (ECS)).
// 	FVector ConvertPCSVectorToECS(FVector aPCS_Vector);
// 	
// 	// Given a vector in the Entity Coordinate System (The Entity Coordinate System (ECS)), convert that vector to the Part Coordinate System (PCS).
// 	FVector ConvertECSVectorToPCS(FVector aWCS_Vector);
//
// 	//
// // Cueing Methods
// 	// Sets the cued location to the provided latitude, longitude, and altitude (degrees, degrees, meters). Returns true if the requested cue is within the part limits.
// 	bool CueToLLA(double aLat, double aLon, double aAlt);
// 	
// 	// Set the cued location to the provided WCS location x, y, and z (meters, meters, meters). Returns true if the requested cue is within the part limits.
// 	bool CueToWCS(double aX, double aY, double aZ);
// 	bool CueToWCS(FVector aLocationWCS);
//
// 	// Sets the cued location the location defined by the provided point. Returns true if the requested cue is within the part limits.
// 	bool CueToPoint(WsfGeoPoint aPoint);
//
// 	// Sets the cued location to the location defined by the provided track. Returns true if the requested cue is within the part limits.
// 	bool CueToTrack(WsfTrack aTrack);
//
// 	// Cues to the part specified azimuth and elevation relative to the horizontal plane (no pitch or roll) of the host platform.
// 	// The angles must be provided in degrees. Returns true if the requested cue is within the part limits.
// 	// Note The supplied angles are converted to part-relative angles at the time of the call.
// 	bool CueToAbsoluteAzEl(double aAz, double aEl);
//
// 	// Cues the part to the specified azimuth and elevation relative to the uncued orientation of the part.
// 	// The must be provided in degrees. Returns true if the requested cue is within the part limits.
// 	bool CueToRelativeAzEl(double aAz, double aEl);
// 	bool CueToAzEl(double aAz, double aEl);
//
// 	// Clear the current cue.
// 	void ClearCueing();
//
// 	// Returns true if a cue is active.
// 	bool IsCued();
// 	
// 	// Returns true if the part is currently slewing to a cue.
// 	bool IsSlewing();
//
// 	// Returns the amount of time in seconds it takes for the part to orient in azimuth and elevation to the given location. Must have an azimuth_slew_rate and/or elevation_slew_rate defined, otherwise the rate is instantaneous. For sensors,
// 	// if the azimuth_cue_rate and/or the elevation_cue_rate are defined then the minimum azimuth rate and minimum elevation rate will be used in the calculation.
// 	// Note If the given location is outside of the slew limits, -1 is returned.
// 	double TimeToCueToLLA(double aLatitude, double aLongitude, double aAltitude);
// 	double TimeToCueToWCS(double aX, double aY, double aZ);
// 	double TimeToCueToWCS(FVector aLocationWCS);
// 	double TimeToCueToPoint(WsfGeoPoint aPoint);
// 	double TimeToCueToTrack(WsfTrack aTrack);
// 	double TimeToCueToAbsoluteAzEl(double aAbsoluteAzimuth, double aAbsoluteElevation);
// 	double TimeToCueToRelativeAzEl(double aRelativeAzimuth, double aRelativeElevation);
// 	double TimeToCueToAzEl(double aRelativeAzimuth, double aRelativeElevation);
//
// 	// Returns azimuth or elevation angle of the cue with respect to the uncued orientation of the part. If a cue is not active then zero will be returned.
// 	// Note If the current cue is outside the slew/cue limits, the angles will be clipped to the current limits.
// 	// Note Values returned from these methods differ from WsfArticulatedPart.CurrentCuedAzimuth and
// 	// WsfArticulatedPart.CurrentCuedElevation while the articulated part is in the process of slewing to a cue.
// 	double ActualCuedAzimuth();
// 	double ActualCuedElevation();
//
//
// 	// Returns the current azimuth or elevation angle of the part with respect to its uncued orientation. If a cue is not active then zero will be returned.
// 	// The returned azimuth angle will be in the range of -/- 180 degrees, with positive values going to the right. The returned elevation angle will be in the range of +/- 90 degrees, with positive values going up.
// 	// Note If the current cue is outside the slew/cue limits, the angles will be clipped to the current limits.
// 	double CurrentCuedAzimuth();
// 	double CurrentCuedElevation();
//
// // Articulation Update Control
// 	// Enables articulation update events. This schedules an event that will update the part’s articulation state at the specified interval (in seconds).
// 	void EnableArticulationUpdates(double aInterval);
//
// 	// Cancels the articulation update event.
// 	void DisableArticulationUpdates();
// 	// Cancels the articulation update event.
};
