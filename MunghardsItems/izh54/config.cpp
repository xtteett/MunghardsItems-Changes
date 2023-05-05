////////////////////////////////////////////////////////////////////
//DeRap: izh54\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:43 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsizh54
	{
		units[] = {};
		weapons[] = {"izh54_mung","izh54_sawnoff_mung"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Projectiles"};
	};
};
class CfgMods
{
	class Munghardsizh54
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
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Izh43Shotgun;
	class izh54_mung: Izh43Shotgun
	{
		scope = 2;
		displayName = "Izh 54";
		descriptionShort = "";
		model = "\MunghardsItems\izh54\izh54.p3d";
		itemSize[] = {9,3};
		rotationFlags = 16;
	};
	class izh54_sawnoff_mung: izh54_mung
	{
		scope = 2;
		displayName = "Sawnoff Izh 54";
		descriptionShort = "";
		model = "\MunghardsItems\izh54\izh54_sawnoff.p3d";
		itemSize[] = {4,2};
		rotationFlags = 16;
	};
};
