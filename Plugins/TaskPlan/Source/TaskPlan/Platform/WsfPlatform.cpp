// Fill out your copyright notice in the Description page of Project Settings.


#include "WsfPlatform.h"

UWsfPlatform::UWsfPlatform()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UWsfPlatform::BeginPlay()
{
	Super::BeginPlay();
}

void UWsfPlatform::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWsfPlatform::on_initialize()
{
}

void UWsfPlatform::on_initialize2()
{
}

void UWsfPlatform::on_update()
{
}

void UWsfPlatform::on_damage_received()
{
}

void UWsfPlatform::on_platform_deleted()
{
}

void UWsfPlatform::callback()
{
}
void UWsfPlatform::bluePrintPrase()
{
	char fileName[128] = {0};
	auto AnsiString = StringCast<ANSICHAR>(*PlaformParams.Name);
	const char* charName = AnsiString.Get();
	sprintf(fileName, "D:\\RS250055\\RS250055_gai\\%s.txt", charName);
	FILE* fp = fopen(fileName, "w");

	TArray<FString> Lines;
	OutFileTXT.ParseIntoArrayLines(Lines, false); // false��ʾ����������
	FString fileTxt;
	for (const FString& Line : Lines)
	{
		if (Line.Find("include_once") !=-1)
		{
			auto AnsiStringFileTxt = StringCast<ANSICHAR>(*Line);
			const char* charFileTxt = AnsiStringFileTxt.Get();
			fprintf(fp, "%s\n", charFileTxt);
		}
		else
		{
			fileTxt += Line+"\n";
		}		
	}

	fprintf(fp, "platform_type %s WSF_PLATFORM\n", charName);

	auto AnsiStringFileTxt = StringCast<ANSICHAR>(*fileTxt);
	const char* charFileTxt = AnsiStringFileTxt.Get();
	fprintf(fp, "%s\n", charFileTxt);
	
	fprintf(fp, "end_platform_type\n");
	fclose(fp);

}

void UWsfPlatform::getString(FString str)
{
	OutFileTXT += str;
}

// WsfRoute AWsfPlatform::CreateRoute(FString aRouteName)
// {
// 	WsfRoute a;
// 	return a;
// }

bool UWsfPlatform::ExecuteGlobalScript(FString aScript)
{
	return  true;
}

bool UWsfPlatform::IsA_TypeOf(FString aDerivedType, FString aBaseType)
{
	return  true;
}

int UWsfPlatform::Index()
{
	return 0;
}

double UWsfPlatform::CreationTime()
{
	return 0;
}

double UWsfPlatform::TimeSinceCreation()
{
	return 0;
}

void UWsfPlatform::SetCreationTime(double aTime)
{
}

void UWsfPlatform::SetSide(ESide aSide)
{
	if (aSide == ESide::red) OutFileTXT += "side red\n";
	else if (aSide == ESide::blue) OutFileTXT += "set blue\n";
}

ESide UWsfPlatform::Side()
{
	return ESide(0);
}


//Sets the platform��s icon
void UWsfPlatform::SetIcon(EIcon aIcon)
{
	PlaformParams.IconName = aIcon;
	if (PlaformParams.IconName == EIcon::Scud_Launcher) OutFileTXT+= "icon Scud_Launcher\n";
	else if (PlaformParams.IconName == EIcon::Bullseye) OutFileTXT+= "icon Bullseye\n";
}

//Returns the platform��s icon
EIcon UWsfPlatform::Icon()
{
	return PlaformParams.IconName;
}

UWsfLocalTrackList* UWsfPlatform::MasterTrackList()
{
	return NULL;
}

UWsfWeapon* UWsfPlatform::Weapon(FString aName)
{
	return NULL;
}

// //Returns the number of weapon instances on this platform This is not the weapon quantit
int UWsfPlatform::WeaponCount()
{
	return 0;
}