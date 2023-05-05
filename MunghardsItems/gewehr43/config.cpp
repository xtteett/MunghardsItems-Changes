////////////////////////////////////////////////////////////////////
//DeRap: gewehr43\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:38 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsgewehr43
	{
		units[] = {};
		weapons[] = {"Gewehr43_mung"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools","DZ_Weapons_Magazines","DZ_Weapons_Firearms_FAL","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Supports","DZ_Weapons_Ammunition"};
		magazines[] = {"Mag_gewehr43_10Rnd_mung"};
	};
};
class CfgMods
{
	class Munghardsdoubledrum
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
class CfgMagazines
{
	class Mag_FAL_20Rnd;
	class Mag_gewehr43_10Rnd_mung: Mag_FAL_20Rnd
	{
		scope = 2;
		displayName = "gewehr43 10 round Mag";
		descriptionShort = "10 round magazine for the Walther gewehr43";
		model = "\MunghardsItems\Gewehr43\data\magazine\magazine.p3d";
		rotationFlags = 16;
		weight = 91;
		itemSize[] = {1,1};
		count = 10;
		ammo = "Bullet_762x39";
		ammoItems[] = {"Ammo_762x39","Ammo_762x39Tracer"};
		tracersEvery = 0;
	};
};
class CfgWeapons
{
	class FAL;
	class Gewehr43_Base: FAL
	{
		scope = 0;
		weight = 3700;
		absorbency = 0;
		rotationFlags = 1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,20,150,4,10};
		WeaponLength = 0.752228;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x39","Ammo_762x39Tracer"};
		magazines[] = {"Mag_gewehr43_10Rnd_mung"};
	};
	class Gewehr43_mung: Gewehr43_Base
	{
		scope = 2;
		displayName = "Walther Gewehr 43";
		descriptionShort = "The Gewehr 43 or Karabiner 43 (abbreviated G43, K43, Gew 43, Kar 43) is a 762x39 caliber semi-automatic rifle developed by Germany during World War II. The design was based on that of the earlier G41(W), but incorporating an improved short-stroke piston gas system similar to that of the Soviet Tokarev SVT-40, and it incorporated innovative mass-production techniques.";
		model = "\MunghardsItems\Gewehr43\WaltherGewehr43.p3d";
		modes[] = {"SemiAuto"};
		attachments[] = {"weaponOpticsMosin","weaponBayonetSKS","weaponWrap","suppressorImpro","weaponOpticsHunting"};
		itemSize[] = {9,3};
		magazines[] = {"Mag_gewehr43_10Rnd_mung"};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"bodywood","bolt","trigger"};
		hiddenSelectionsTextures[] = {"\MunghardsItems\Gewehr43\data\WaltherGewehr43_co.paa","\MunghardsItems\Gewehr43\data\WaltherGewehr43_co.paa","\MunghardsItems\Gewehr43\data\WaltherGewehr43_co.paa"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\Gewehr43\data\WaltherGewehr43.rvmat","\MunghardsItems\Gewehr43\data\WaltherGewehr43.rvmat","\MunghardsItems\Gewehr43\data\WaltherGewehr43.rvmat"};
	};
};
