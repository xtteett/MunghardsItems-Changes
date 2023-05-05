////////////////////////////////////////////////////////////////////
//DeRap: stalker_gasmask\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:10 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsStalkergasmask
	{
		units[] = {"stalker_gasmask_black_mung","stalker_gasmask_white_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgMods
{
	class MunghardsStalkergasmask
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
	class stalker_gasmask_colorbase_mung: GasMask
	{
		displayName = "Stalker gasmask";
		descriptionShort = "A gasmask used for stalking...";
		model = "\MunghardsItems\stalker_gasmask\stalker_gasmask_g.p3d";
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
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		hiddenSelections[] = {"zbytek"};
		class ClothingTypes
		{
			male = "\MunghardsItems\stalker_gasmask\stalker_gasmask.p3d";
			female = "\MunghardsItems\stalker_gasmask\stalker_gasmask.p3d";
		};
	};
	class stalker_gasmask_black_mung: stalker_gasmask_colorbase_mung
	{
		scope = 2;
		descriptionShort = "Stalker gasmask black";
		hiddenSelectionsTextures[] = {"MunghardsItems\stalker_gasmask\data\stalkergasmask_black_co.paa"};
	};
	class stalker_gasmask_white_mung: stalker_gasmask_colorbase_mung
	{
		scope = 2;
		descriptionShort = "Stalker gasmask white";
		hiddenSelectionsTextures[] = {"MunghardsItems\stalker_gasmask\data\stalkergasmask_co.paa"};
	};
};
