////////////////////////////////////////////////////////////////////
//DeRap: dappercane\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:33 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsdappercane
	{
		units[] = {"dappercane_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgMods
{
	class Munghardsdappercane
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
	class dappercane_mung: PoliceBaton
	{
		scope = 2;
		displayName = "Lion cane";
		descriptionShort = "";
		model = "\MunghardsItems\dappercane\dappercane.p3d";
		itemSize[] = {1,6};
		isMeleeWeapon = 1;
		rotationFlags = 16;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.9;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.9;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 4.1;
			};
		};
	};
};
