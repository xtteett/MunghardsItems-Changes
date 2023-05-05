////////////////////////////////////////////////////////////////////
//DeRap: clawhammer\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:29 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsclawhammer
	{
		units[] = {"Clawhammer_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgMods
{
	class Munghardsclawhammer
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
	class Hammer;
	class Clawhammer_mung: Hammer
	{
		scope = 2;
		displayName = "Clawhammer";
		descriptionShort = "Just a regular clawhammer";
		model = "\MunghardsItems\clawhammer\clawhammer.p3d";
		SingleUseActions[] = {533};
		ContinuousActions[] = {168,193};
		build_action_type = 10;
		dismantle_action_type = 0;
		rotationFlags = 17;
		weight = 940;
		itemSize[] = {2,3};
		fragility = 0.008;
		openItemSpillRange[] = {20,50};
	};
};
