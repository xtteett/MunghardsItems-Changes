////////////////////////////////////////////////////////////////////
//DeRap: dapperhat\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:33 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsdapperhat
	{
		units[] = {"dapperhat_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools","DZ_Characters_Headgear"};
	};
};
class CfgMods
{
	class Munghardsdapperhat
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
	class dapperhat_mung: Clothing
	{
		scope = 2;
		displayName = "Tophat";
		descriptionShort = "An old tophat, for gentlemen and women";
		model = "\MunghardsItems\dapperhat\dapperhat_g.p3d";
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot = "Headgear";
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Headgear"};
		headSelectionsToHide[] = {"Clipping_MilitaryBeret_xx"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\MunghardsItems\dapperhat\data\dapperhat_CO.paa"};
		rotationFlags = 64;
		weight = 150;
		itemSize[] = {3,2};
		absorbency = 0;
		heatIsolation = 0.13;
		visibilityModifier = 0.7;
		noMask = 0;
		class ClothingTypes
		{
			male = "\MunghardsItems\dapperhat\dapperhat.p3d";
			female = "\MunghardsItems\dapperhat\dapperhat.p3d";
		};
	};
};
