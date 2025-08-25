// Fill out your copyright notice in the Description page of Project Settings.


#include "WsfWeapon.h"

// Sets default values
UWsfWeapon::UWsfWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void UWsfWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void UWsfWeapon::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//�Զ��庯��



FString UWsfWeapon::SetWeapon(EWeapon aWeapon,FString name)
{
	m_weapon = aWeapon;
	m_name = name;
	OutFileTXT = "";

	if (aWeapon == EWeapon::RED_MRBM_2) OutFileTXT += "weapon "+name+" RED_MRBM_2\n";
	else if (aWeapon == EWeapon::RED_SRBM_1) OutFileTXT += "weapon " + name + " RED_SRBM_1\n";
	else if (aWeapon == EWeapon::RED_SRBM_2) OutFileTXT += "weapon " + name + " RED_SRBM_2\n";
	else if (aWeapon == EWeapon::RED_SRBM_3) OutFileTXT += "weapon " + name + " RED_SRBM_3\n";
	else if (aWeapon == EWeapon::RED_SRBM_4) OutFileTXT += "weapon " + name + " RED_SRBM_4\n";

	UE_LOG(LogTemp, Log, TEXT("SetWeapon: %s"), *OutFileTXT);

	return  OutFileTXT;
}

FString UWsfWeapon::SetString()
{
	OutFileTXT += "end_weapon\n";
	return OutFileTXT;
}

FString UWsfWeapon::SetIncludeFile(FString fileName)
{
	OutFileTXT += "include_once weapons/"+ fileName+"\n";
	return OutFileTXT;
}


FString UWsfWeapon::quantity(int num)
{
	OutFileTXT += "    quantity " + FString::FromInt(num);
	OutFileTXT += "\n";
	return "";
}

//Cues the weapon to the track.
void UWsfWeapon::CueToTarget(UWsfTrack* aTrack)
{

}

//Returns the number of weapons / jam requests remaining as a double precision value, so percentages can be used if desired.
double UWsfWeapon::QuantityRemaining()
{
	return 0;
}

//Sets the number of weapons remaining to the specified quantity.
void UWsfWeapon::SetQuantityRemaining(double aQuantity)
{

}

//Fires the weapon with or without a current track.��ͼ���Ӿ��ű�ϵͳ�޷���ͨ�������������ֺ���
bool UWsfWeapon::Fire(UWsfTrack* aTrack)
{
	return 0;
}
