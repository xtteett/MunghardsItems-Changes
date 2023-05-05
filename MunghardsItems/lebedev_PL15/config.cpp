////////////////////////////////////////////////////////////////////
//DeRap: lebedev_PL15\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:48 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardslebedev
	{
		units[] = {};
		weapons[] = {"lebedev_PL15_mung"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles","DZ_Weapons_Lights","DZ_Weapons_Optics","DZ_Weapons_Ammunition"};
		magazines[] = {"Mag_lebedev_PL15_16Rnd"};
	};
};
class CfgMods
{
	class Munghardsnagant
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
class CfgWeapons
{
	class CZ75;
	class lebedev_PL15_mung: CZ75
	{
		scope = 2;
		displayName = "lebedev_PL15";
		descriptionShort = "lebedev_PL15";
		model = "\MunghardsItems\lebedev_PL15\lebedev_PL15.p3d";
		itemSize[] = {4,2};
		rotationFlags = 1;
		magazines[] = {"Mag_lebedev_PL15_16Rnd"};
	};
};
class CfgMagazines
{
	class Mag_CZ75_15Rnd;
	class Mag_lebedev_PL15_16Rnd: Mag_CZ75_15Rnd
	{
		scope = 2;
		displayName = "Lebedev PL-15 16Rnd mag";
		descriptionShort = "...";
		model = "\MunghardsItems\lebedev_PL15\data\magazine\magazine.p3d";
		count = 16;
	};
};
