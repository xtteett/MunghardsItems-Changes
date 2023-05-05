////////////////////////////////////////////////////////////////////
//DeRap: sherlockpipe\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:59:06 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardssherlockpipe
	{
		units[] = {"sherlockpipe_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgVehicles
{
	class Clothing;
	class sherlockpipe_mung: Clothing
	{
		scope = 2;
		displayName = "Sherlock pipe";
		descriptionShort = "A pipe for smoking tobacco...";
		model = "\MunghardsItems\sherlockpipe\sherlockpipe_g.p3d";
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot[] = {"mask"};
		vehicleClass = "Clothing";
		simulation = "clothing";
		SingleUseActions[] = {509,510};
		InteractActions[] = {1002,1003};
		itemInfo[] = {"Clothing","mask"};
		rotationFlags = 8;
		weight = 30;
		itemSize[] = {2,1};
		absorbency = 0;
		heatIsolation = 0.13;
		visibilityModifier = 0.7;
		noMask = 0;
		class ClothingTypes
		{
			male = "\MunghardsItems\sherlockpipe\sherlockpipe.p3d";
			female = "\MunghardsItems\sherlockpipe\sherlockpipe.p3d";
		};
	};
};
