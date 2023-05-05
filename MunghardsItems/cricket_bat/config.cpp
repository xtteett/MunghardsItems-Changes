////////////////////////////////////////////////////////////////////
//DeRap: cricket_bat\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:31 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardscricket_bat
	{
		units[] = {"cricket_bat_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgMods
{
	class Munghardscricket_bat
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
	class BaseballBat;
	class cricket_bat_mung: BaseballBat
	{
		scope = 2;
		displayName = "Cricket bat";
		descriptionShort = "";
		model = "\MunghardsItems\cricket_bat\cricket_bat.p3d";
		itemSize[] = {1,6};
		rotationFlags = 16;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBat";
				range = 1.9;
			};
			class Heavy
			{
				ammo = "MeleeBat_Heavy";
				range = 1.9;
			};
			class Sprint
			{
				ammo = "MeleeBat_Heavy";
				range = 3.7;
			};
		};
	};
};
