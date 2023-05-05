////////////////////////////////////////////////////////////////////
//DeRap: clownmask\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:30 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsclownmask
	{
		units[] = {"clownmask_mung","clownmaskjokers_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgMods
{
	class Munghardsclownmask
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
	class clownmask_mung: Clothing
	{
		scope = 2;
		displayName = "Clownmask";
		descriptionShort = "A Clownmask from the circus.";
		model = "\MunghardsItems\clownmask\clownmask_g.p3d";
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot[] = {"mask"};
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemInfo[] = {"Clothing","mask"};
		rotationFlags = 64;
		weight = 1500;
		itemSize[] = {3,3};
		absorbency = 0;
		heatIsolation = 0.13;
		visibilityModifier = 0.7;
		noMask = 0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MunghardsItems\clownmask\data\clownmask_ca.paa"};
		hiddenSelectionsMaterials[] = {"MunghardsItems\clownmask\data\clownmask.rvmat"};
		class ClothingTypes
		{
			male = "\MunghardsItems\clownmask\clownmask.p3d";
			female = "\MunghardsItems\clownmask\clownmask.p3d";
		};
	};
	class clownmaskjokers_mung: clownmask_mung
	{
		scope = 2;
		displayName = "Jokers mask";
		descriptionShort = "A Clownmask for the Jokers of heart.";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MunghardsItems\clownmask\data\jokers\clownmask_ca.paa"};
		hiddenSelectionsMaterials[] = {"MunghardsItems\clownmask\data\jokers\clownmaskjokers.rvmat"};
		class ClothingTypes
		{
			male = "\MunghardsItems\clownmask\clownmask.p3d";
			female = "\MunghardsItems\clownmask\clownmask.p3d";
		};
	};
};
