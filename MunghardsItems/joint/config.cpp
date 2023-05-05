////////////////////////////////////////////////////////////////////
//DeRap: joint\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:46 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsjoint
	{
		units[] = {"joint_mung","RollingPapers_Jest"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgVehicles
{
	class Clothing;
	class joint_mung: Clothing
	{
		scope = 2;
		displayName = "joint";
		descriptionShort = "A joint for smoking...";
		model = "\MunghardsItems\joint\joint_g.p3d";
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot[] = {"Armband"};
		vehicleClass = "Clothing";
		simulation = "clothing";
		SingleUseActions[] = {509,510};
		InteractActions[] = {1002,1003};
		itemInfo[] = {"Clothing","mask"};
		rotationFlags = 16;
		weight = 10;
		itemSize[] = {1,2};
		absorbency = 0;
		heatIsolation = 0.13;
		visibilityModifier = 0.7;
		noMask = 0;
		destroyOnEmpty = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		class ClothingTypes
		{
			male = "\MunghardsItems\joint\joint.p3d";
			female = "\MunghardsItems\joint\joint.p3d";
		};
	};
	class Inventory_Base;
	class RollingPapers_Jest: Inventory_Base
	{
		scope = 2;
		displayName = "Rolling papers";
		descriptionShort = "Rolling paper for smoking...";
		model = "\MunghardsItems\joint\sizla.p3d";
		itemSize[] = {2,1};
		varQuantityInit = 10;
		varQuantityMin = 0;
		varQuantityMax = 10;
	};
};
