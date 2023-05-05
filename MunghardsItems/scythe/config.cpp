////////////////////////////////////////////////////////////////////
//DeRap: scythe\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:59:05 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsScythe
	{
		units[] = {"Scythe_Mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgMods
{
	class MunghardsScythe
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
	class Scythe_Mung: Machete
	{
		scope = 2;
		displayName = "Scythe";
		descriptionShort = "An old tool used to reap fields";
		model = "\MunghardsItems\scythe\scythe.p3d";
		ContinuousActions[] = {167,209};
		repairableWithKits[] = {5,4};
		repairCosts[] = {30,25};
		rotationFlags = 4;
		weight = 1360;
		itemSize[] = {5,7};
		itemBehaviour = 2;
		fragility = 0.01;
		inventorySlot[] = {"Melee"};
		lootCategory = "Tools";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFireAxe";
				range = 2.2;
			};
			class Heavy
			{
				ammo = "MeleeFireAxe_Heavy";
				range = 2.2;
			};
			class Sprint
			{
				ammo = "MeleeFireAxe_Heavy";
				range = 3.9;
			};
		};
	};
};
