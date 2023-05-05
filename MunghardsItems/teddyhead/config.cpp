////////////////////////////////////////////////////////////////////
//DeRap: teddyhead\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:13 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsteddyhead
	{
		units[] = {"teddyhead_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgMods
{
	class Munghardsteddyhead
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
	class GasMask;
	class teddyhead_mung: GasMask
	{
		scope = 2;
		displayName = "Teddyhead";
		descriptionShort = "A teddyhead from the circus.";
		model = "\MunghardsItems\teddyhead\teddyhead_g.p3d";
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot[] = {"mask"};
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemInfo[] = {"Clothing","mask"};
		rotationFlags = 64;
		weight = 1500;
		itemSize[] = {4,4};
		absorbency = 0;
		heatIsolation = 0.13;
		visibilityModifier = 0.7;
		noMask = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1.0,{"MunghardsItems\teddyhead\data\teddyhead.rvmat"}},{0.7,{"MunghardsItems\teddyhead\data\teddyhead.rvmat"}},{0.5,{"MunghardsItems\teddyhead\data\teddyhead_damaged.rvmat"}},{0.3,{"MunghardsItems\teddyhead\data\teddyhead_damaged.rvmat"}},{0.0,{"MunghardsItems\teddyhead\data\teddyhead_destroyed.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\MunghardsItems\teddyhead\teddyhead.p3d";
			female = "\MunghardsItems\teddyhead\teddyhead.p3d";
		};
	};
};
