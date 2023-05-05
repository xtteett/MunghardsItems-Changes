////////////////////////////////////////////////////////////////////
//DeRap: stalkerpants\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsstalkerpants
	{
		units[] = {"stalkerpants_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","Munghardshikingbag"};
	};
};
class CfgMods
{
	class Munghardsstalkerpants
	{
		dir = "Munghardsitems\stalkerpants";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsstalkerpants";
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
	class stalkerpants_mung: Clothing
	{
		scope = 2;
		displayName = "stalkerpants";
		descriptionShort = "...";
		model = "\MunghardsItems\stalkerpants\stalkerpants_g.p3d";
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MunghardsItems\stalkerpants\data\stalkerpants.rvmat"}},{0.7,{"MunghardsItems\stalkerpants\data\stalkerpants.rvmat"}},{0.5,{"MunghardsItems\stalkerpants\data\stalkerpants_damaged.rvmat"}},{0.3,{"MunghardsItems\stalkerpants\data\stalkerpants_damaged.rvmat"}},{0.0,{"MunghardsItems\stalkerpants\data\stalkerpants_destroyed.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\MunghardsItems\stalkerpants\stalkerpants.p3d";
			female = "\MunghardsItems\stalkerpants\stalkerpants.p3d";
		};
	};
};
