////////////////////////////////////////////////////////////////////
//DeRap: dynamitestick\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:36 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsdynamitestick
	{
		units[] = {"dynamitestick_Mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Explosives"};
	};
};
class CfgMods
{
	class Munghardsdynamitestick
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
	class Grenade_Base;
	class dynamitestick_Mung: Grenade_Base
	{
		scope = 2;
		displayName = "Dynamitestick";
		descriptionShort = "A stick of dynamite";
		model = "\MunghardsItems\dynamitestick\dynamitestick.p3d";
		weight = 400;
		itemSize[] = {1,3};
		rotationFlags = 32;
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
				class turnOnRadio_Pin
				{
					soundSet = "Grenade_pin_SoundSet";
					id = 1006;
				};
			};
		};
	};
};
