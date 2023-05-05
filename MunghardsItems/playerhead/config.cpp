////////////////////////////////////////////////////////////////////
//DeRap: playerhead\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:58 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsplayerhead
	{
		units[] = {"playerhead_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters_Heads","DZ_Gear_Food"};
	};
};
class CfgMods
{
	class Munghardsplayerhead
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
	class playerhead_mung: Inventory_Base
	{
		scope = 2;
		displayName = "Human head";
		descriptionShort = "A human head";
		model = "\MunghardsItems\playerhead\playerhead.p3d";
		rotationFlags = 0;
		weight = 1500;
		itemSize[] = {3,4};
	};
};
