////////////////////////////////////////////////////////////////////
//DeRap: katana\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:46 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsKatana
	{
		units[] = {"katana_Mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee"};
	};
};
class CfgMods
{
	class MunghardsKatana
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
	class Sword;
	class katana_Mung: Sword
	{
		scope = 2;
		displayName = "Katana";
		descriptionShort = "A japanese sword";
		model = "\MunghardsItems\katana\katana.p3d";
		ContinuousActions[] = {167,209,199};
		repairableWithKits[] = {5,4};
		repairCosts[] = {30,25};
		rotationFlags = 4;
		weight = 1360;
		itemSize[] = {2,8};
		itemBehaviour = 2;
		fragility = 0.01;
		inventorySlot[] = {"Melee"};
		lootCategory = "Tools";
	};
};
