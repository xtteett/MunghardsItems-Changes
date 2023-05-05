////////////////////////////////////////////////////////////////////
//DeRap: vesuri\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:15 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsVesuri
	{
		units[] = {"Vesuri_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgMods
{
	class MunghardsVesuri
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
	class Machete;
	class Vesuri_mung: Machete
	{
		scope = 2;
		displayName = "Vesuri";
		descriptionShort = "A tool for clearing branches and brush";
		model = "\MunghardsItems\vesuri\vesuri.p3d";
		SingleUseActions[] = {533};
		ContinuousActions[] = {168,193};
		build_action_type = 10;
		dismantle_action_type = 0;
		rotationFlags = 16;
		weight = 940;
		itemSize[] = {1,4};
		fragility = 0.008;
		openItemSpillRange[] = {20,50};
	};
};
