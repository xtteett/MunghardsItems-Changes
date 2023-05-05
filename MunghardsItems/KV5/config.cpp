////////////////////////////////////////////////////////////////////
//DeRap: KV5\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:47 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardskv5
	{
		units[] = {"kv5_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgMods
{
	class Munghardskv5
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
	class Inventory_Base;
	class kv5_mung: Inventory_Base
	{
		scope = 2;
		displayName = "kv5";
		descriptionShort = "A propane gascanister";
		model = "\MunghardsItems\kv5\kv5.p3d";
		rotationFlags = 0;
		weight = 5000;
		itemSize[] = {3,4};
		overrideDrawArea = "8.0";
		forceFarBubble = "true";
		inventorySlot[] = {"GasCanister"};
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping"};
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		varQuantityDestroyOnMin = 0;
		simpleHiddenSelections[] = {"attached","notattached"};
		HiddenSelections[] = {"attached","notattached"};
		hiddenSelectionsTextures[] = {"\MunghardsItems\KV5\data\kv5_CO.paa"};
		class EnergyManager
		{
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 8000;
			energyUsagePerSecond = 0;
			energyAtSpawn = 8000;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {7};
			convertEnergyToQuantity = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"\MunghardsItems\kv5\data\kv5.rvmat"}},{0.7,{"\MunghardsItems\kv5\data\kv5.rvmat"}},{0.5,{"\MunghardsItems\kv5\data\kv5.rvmat"}},{0.3,{"\MunghardsItems\kv5\data\kv5.rvmat"}},{0,{"\MunghardsItems\kv5\data\kv5.rvmat"}}};
				};
			};
		};
	};
};
