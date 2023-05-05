////////////////////////////////////////////////////////////////////
//DeRap: SAK\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:59:01 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsSAK
	{
		units[] = {"SAK_Mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgMods
{
	class MunghardsSAK
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
	class Machete;
	class SAK_Mung: Machete
	{
		scope = 2;
		displayName = "SAK";
		descriptionShort = "Munghards swiss army knife, can do many things...";
		model = "\MunghardsItems\SAK\SAK.p3d";
		SingleUseActions[] = {};
		animClass = "Knife";
		ContinuousActions[] = {146,153,154,167,197,199,210,211};
		isLockpick = 1;
		RestrainUnlockType = 0;
		inventorySlot = "Knife";
		suicideAnim = "onehanded";
		rotationFlags = 4;
		canSkinBodies = 1;
		itemSize[] = {1,2};
		openItemSpillRange[] = {0,0};
		weight = 10;
	};
};
