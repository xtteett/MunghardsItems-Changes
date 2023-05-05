////////////////////////////////////////////////////////////////////
//DeRap: sleepingbag\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:08 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardssleepingbag
	{
		units[] = {"sleepingbag_green_mung","sleepingbag_red_mung","sleepingbag_yellow_mung","sleepingbag_blue_mung","sleepingbag_green_mung_Deployed","sleepingbag_red_mung_Deployed","sleepingbag_yellow_mung_Deployed","sleepingbag_blue_mung_Deployed"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardssleepingbag
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
	class sleepingbag_mung: Inventory_Base
	{
		scope = 0;
		displayName = "Sleepingbag packed";
		descriptionShort = "A tightly packed sleepingbag.";
		model = "\MunghardsItems\sleepingbag\Sleepingbag_packed.p3d";
		weight = 2000;
		itemBehaviour = 2;
		isMeleeWeapon = 0;
		absorbency = 0;
		reversed = 0;
		inventorySlot[] = {"waterproofbag","sleepingbag_packed"};
		rotationFlags = 8;
		itemSize[] = {3,4};
		lootCategory = "Materials";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MunghardsItems\sleepingbag\data\packed\sleepingbag_packed_CO.paa"};
	};
	class sleepingbag_green_mung: sleepingbag_mung
	{
		scope = 2;
		displayName = "Sleepingbag green";
		hiddenSelectionsTextures[] = {"MunghardsItems\sleepingbag\data\packed\sleepingbag_packed_CO.paa"};
	};
	class sleepingbag_red_mung: sleepingbag_mung
	{
		scope = 2;
		displayName = "Sleepingbag red";
		hiddenSelectionsTextures[] = {"MunghardsItems\sleepingbag\data\packed\sleepingbag_packed_red_CO.paa"};
	};
	class sleepingbag_yellow_mung: sleepingbag_mung
	{
		scope = 2;
		displayName = "Sleepingbag yellow";
		hiddenSelectionsTextures[] = {"MunghardsItems\sleepingbag\data\packed\sleepingbag_packed_yellow_CO.paa"};
	};
	class sleepingbag_blue_mung: sleepingbag_mung
	{
		scope = 2;
		displayName = "Sleepingbag blue";
		hiddenSelectionsTextures[] = {"MunghardsItems\sleepingbag\data\packed\sleepingbag_packed_blue_CO.paa"};
	};
	class sleepingbag_colorbase_mung_Deployed: Inventory_Base
	{
		scope = 0;
		displayName = "Sleepingbag";
		descriptionShort = "Sleepingbag";
		model = "\MunghardsItems\sleepingbag\Sleepingbag.p3d";
		weight = 2000;
		physLayer = "item_large";
		itemsCargoSize[] = {5,5};
		itemSize[] = {8,4};
		carveNavmesh = 1;
		rotationFlags = 0;
		itemBehaviour = 2;
		storageCategory = 1;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MunghardsItems\sleepingbag\data\unpacked\sleepingbag_CO.paa"};
	};
	class sleepingbag_green_mung_Deployed: sleepingbag_colorbase_mung_Deployed
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MunghardsItems\sleepingbag\data\unpacked\sleepingbag_CO.paa"};
	};
	class sleepingbag_red_mung_Deployed: sleepingbag_colorbase_mung_Deployed
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MunghardsItems\sleepingbag\data\unpacked\sleepingbag_red_CO.paa"};
	};
	class sleepingbag_yellow_mung_Deployed: sleepingbag_colorbase_mung_Deployed
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MunghardsItems\sleepingbag\data\unpacked\sleepingbag_yellow_CO.paa"};
	};
	class sleepingbag_blue_mung_Deployed: sleepingbag_colorbase_mung_Deployed
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MunghardsItems\sleepingbag\data\unpacked\sleepingbag_blue_CO.paa"};
	};
};
