////////////////////////////////////////////////////////////////////
//DeRap: pilotjacket\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:58 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardspilotjacket
	{
		units[] = {"pilotjacket_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardspilotjacket
	{
		dir = "Munghardsitems\pilotjacket";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "oxygentankrig";
		credits = "munghard";
		author = "munghard";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
	};
};
class CfgVehicles
{
	class Clothing;
	class pilotjacket_mung: Clothing
	{
		scope = 2;
		displayName = "pilotjacket";
		descriptionShort = "A pilotjacket.";
		model = "\MunghardsItems\pilotjacket\pilotjacket.p3d";
		ContinuousActions[] = {190};
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 3200;
		itemSize[] = {4,4};
		itemsCargoSize[] = {6,5};
		quickBarBonus = 1;
		heatIsolation = 0.5;
		absorbency = 0.35;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Coat";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "\MunghardsItems\pilotjacket\pilotjacket.p3d";
			female = "\MunghardsItems\pilotjacket\pilotjacket.p3d";
		};
	};
};
