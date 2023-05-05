////////////////////////////////////////////////////////////////////
//DeRap: cigarette\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:29 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsCigarette
	{
		units[] = {"cigarette_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgVehicles
{
	class Clothing;
	class cigarette_mung: Clothing
	{
		scope = 2;
		displayName = "Cigarette";
		descriptionShort = "A Cigarette for smoking...";
		model = "\MunghardsItems\cigarette\cigarette_g.p3d";
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot[] = {"Armband"};
		vehicleClass = "Clothing";
		simulation = "clothing";
		SingleUseActions[] = {509,510};
		InteractActions[] = {1002,1003};
		itemInfo[] = {"Clothing","mask"};
		rotationFlags = 4;
		weight = 10;
		itemSize[] = {1,2};
		absorbency = 0;
		heatIsolation = 0.13;
		visibilityModifier = 0.7;
		noMask = 0;
		class ClothingTypes
		{
			male = "\MunghardsItems\cigarette\cigarette.p3d";
			female = "\MunghardsItems\cigarette\cigarette.p3d";
		};
	};
};
