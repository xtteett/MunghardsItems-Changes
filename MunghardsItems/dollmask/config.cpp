////////////////////////////////////////////////////////////////////
//DeRap: dollmask\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:35 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsdollmask
	{
		units[] = {"dollmask_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardsdollmask
	{
		dir = "Munghardsitems";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsitems";
		credits = "munghard";
		author = "munghard";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World","Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"MunghardsItems/scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"MunghardsItems/scripts/4_world"};
			};
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class dollmask_mung: Clothing
	{
		scope = 2;
		displayName = "Dollmask";
		descriptionShort = "A mask...";
		model = "\MunghardsItems\dollmask\dollmask_g.p3d";
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot[] = {"mask"};
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemInfo[] = {"Clothing","mask"};
		rotationFlags = 64;
		weight = 150;
		itemSize[] = {3,3};
		absorbency = 0;
		heatIsolation = 0.13;
		visibilityModifier = 0.7;
		class ClothingTypes
		{
			male = "\MunghardsItems\dollmask\dollmask.p3d";
			female = "\MunghardsItems\dollmask\dollmask.p3d";
		};
	};
};
