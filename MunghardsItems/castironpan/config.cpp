////////////////////////////////////////////////////////////////////
//DeRap: castironpan\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:28 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardscastironpan
	{
		units[] = {"castironpan_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools","DZ_Gear_Containers","DZ_Gear_Consumables","DZ_Gear_Cooking"};
	};
};
class CfgMods
{
	class Munghardscastironpan
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
	class PoliceBaton;
	class castironpan_mung: PoliceBaton
	{
		scope = 2;
		displayName = "Castiron pan";
		descriptionShort = "";
		model = "\MunghardsItems\castironpan\castironpan.p3d";
		SingleUseActions[] = {533};
		ContinuousActions[] = {168,193};
		build_action_type = 10;
		dismantle_action_type = 0;
		rotationFlags = 8;
		weight = 940;
		itemSize[] = {2,3};
		fragility = 4e-10;
		openItemSpillRange[] = {20,50};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBat";
				range = 1.6;
			};
			class Heavy
			{
				ammo = "MeleeBat_Heavy";
				range = 1.6;
			};
			class Sprint
			{
				ammo = "MeleeBat_Heavy";
				range = 3.7;
			};
		};
	};
};
