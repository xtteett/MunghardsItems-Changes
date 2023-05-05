////////////////////////////////////////////////////////////////////
//DeRap: zippo\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:18 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsZippo
	{
		units[] = {"Zippo_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgMods
{
	class MunghardsZippo
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
	class torch;
	class Zippo_mung: torch
	{
		scope = 2;
		displayName = "Zippo lighter";
		descriptionShort = "A Zippo lighter is a reusable metal lighter manufactured by American Zippo Manufacturing Company of Bradford, Pennsylvania, United States of America.[1] Thousands of different styles and designs have been made in the eight decades since their introduction including military versions for specific regiments. Since its invention Zippos have been sold around the world and have been described (a legendary and distinct symbol of America).";
		model = "\MunghardsItems\zippo\zippo_new.p3d";
		rotationFlags = 16;
		SingleUseActions[] = {510,509,111};
		isMeleeWeapon = 1;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Kitchen","Camping","Work","Farm"};
		itemSize[] = {1,1};
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		quantityBar = 1;
		attachments[] = {};
		class EnergyManager
		{
			autoSwitchOff = 1;
			energyAtSpawn = 1800;
			energyStorageMax = 1800;
			energyUsagePerSecond = 0.1;
			wetnessExposure = 0.5;
			updateInterval = 4;
		};
		class AnimationSources
		{
			class cap
			{
				source = "cap";
				animPeriod = 0.5;
				initPhase = 0;
			};
			class cap2
			{
				source = "cap2";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
	};
};
