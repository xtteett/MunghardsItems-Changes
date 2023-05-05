////////////////////////////////////////////////////////////////////
//DeRap: milipants\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:53 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsmilipants
	{
		units[] = {"milipants_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","Munghardshikingbag"};
	};
};
class CfgMods
{
	class Munghardsmilipants
	{
		dir = "Munghardsitems\milipants";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsmilipants";
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
	class milipants_mung: Clothing
	{
		scope = 2;
		displayName = "milipants";
		descriptionShort = "...";
		model = "\MunghardsItems\milipants\milipants_g.p3d";
		hiddenSelections[] = {"personality"};
		attachments[] = {};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		rotationFlags = 0;
		itemSize[] = {3,3};
		itemsCargoSize[] = {4,4};
		weight = 3000;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		class ClothingTypes
		{
			male = "\MunghardsItems\milipants\milipants.p3d";
			female = "\MunghardsItems\milipants\milipants.p3d";
		};
	};
};
