////////////////////////////////////////////////////////////////////
//DeRap: stielhandgranate\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:10 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsstielhandgranate
	{
		units[] = {"stielhandgranate_Mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Explosives"};
	};
};
class CfgMods
{
	class Munghardsstielhandgranate
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
	class stielhandgranate_Mung: Grenade_Base
	{
		scope = 2;
		displayName = "Stielhandgranate";
		descriptionShort = "The Stielhandgranate (German for 'stalk hand grenade') was a German hand grenade of unique design. It was the standard issue of the German Empire during World War I, and became the widespread issue of Nazi Germany's Wehrmacht during World War II. The very distinctive appearance led to it being called a 'stick grenade', or 'potato masher' in British Army slang, and is today one of the most easily recognized infantry weapons of the 20th century.";
		model = "\MunghardsItems\stielhandgranate\stielhandgranate.p3d";
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
