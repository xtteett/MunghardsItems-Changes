////////////////////////////////////////////////////////////////////
//DeRap: zenitco_pt3\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:17 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardszenitco_pt3
	{
		units[] = {"zenitco_pt3_buttstock_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Magazines","DZ_Weapons_Firearms"};
	};
};
class CfgMods
{
	class Munghardszenitco_pt3
	{
		dir = "zenitco_pt3";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "zenitco_pt3";
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
class cfgVehicles
{
	class Inventory_Base;
	class zenitco_pt3_buttstock_mung: Inventory_Base
	{
		scope = 2;
		displayName = "zenitco pt3 buttstock";
		descriptionShort = "zenitco pt3 buttstock";
		model = "\MunghardsItems\zenitco_pt3\zenitco_pt3.p3d";
		rotationFlags = 16;
		inventorySlot[] = {"weaponButtstockAK"};
		weight = 354;
		itemSize[] = {3,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
	};
};
