////////////////////////////////////////////////////////////////////
//DeRap: mag3_gasmask\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:50 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsmag3gasmask
	{
		units[] = {"mag3_gasmask_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgMods
{
	class Munghardsmag3gasmask
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
	class mag3_gasmask_mung: GasMask
	{
		scope = 2;
		displayName = "MAG3 gasmask";
		descriptionShort = "A gasmask for breathing in unclean air.";
		model = "\MunghardsItems\mag3_gasmask\mag3_gasmask_g.p3d";
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
		class ClothingTypes
		{
			male = "\MunghardsItems\mag3_gasmask\mag3_gasmask.p3d";
			female = "\MunghardsItems\mag3_gasmask\mag3_gasmask.p3d";
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymag3_gasmask_g: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"mask"};
		model = "\MunghardsItems\mag3_gasmask\mag3_gasmask_g.p3d";
	};
};
