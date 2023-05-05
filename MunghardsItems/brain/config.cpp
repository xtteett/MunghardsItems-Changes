////////////////////////////////////////////////////////////////////
//DeRap: brain\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:27 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsBrain
	{
		units[] = {"brain_Mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Food"};
	};
};
class CfgMods
{
	class MunghardsBrain
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
	class HumanSteakMeat;
	class brain_Mung: HumanSteakMeat
	{
		scope = 2;
		displayName = "Brain";
		descriptionShort = "Munghards special-hot-delicious-saucy Brain";
		model = "\MunghardsItems\brain\brain.p3d";
		ContinuousActions[] = {159,185};
		rotationFlags = 64;
		itemSize[] = {3,3};
		weight = 265;
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		isMeleeWeapon = 1;
	};
};
