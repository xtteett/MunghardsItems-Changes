////////////////////////////////////////////////////////////////////
//DeRap: baseballbatsaw\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:25 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsbaseballbatsaw
	{
		units[] = {"baseballbatsaw_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgMods
{
	class Munghardsbaseballbatsaw
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
	class baseballbatsaw_mung: BaseballBat
	{
		scope = 2;
		displayName = "Baseballbat Saw";
		descriptionShort = "Baseballbat with a circular saw attached";
		model = "\MunghardsItems\baseballbatsaw\baseballbatsaw.p3d";
		itemSize[] = {2,6};
		isMeleeWeapon = 1;
		suicideAnim = "fireaxe";
		rotationFlags = 8;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFireAxe";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeFireAxe_Heavy";
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeFireAxe_Heavy";
				range = 3.7;
			};
		};
	};
};
