////////////////////////////////////////////////////////////////////
//DeRap: woodenhammer\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:17 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardswoodenhammer
	{
		units[] = {"woodenhammer_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgMods
{
	class Munghardswoodenhammer
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
	class woodenhammer_mung: BaseballBat
	{
		scope = 2;
		displayName = "Wooden hammer";
		descriptionShort = "";
		model = "\MunghardsItems\woodenhammer\woodenhammer.p3d";
		itemSize[] = {2,6};
		isMeleeWeapon = 1;
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
