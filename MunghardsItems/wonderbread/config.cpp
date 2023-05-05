////////////////////////////////////////////////////////////////////
//DeRap: wonderbread\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:16 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsWonderbread
	{
		units[] = {"wonderbread_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Food"};
	};
};
class CfgMods
{
	class MunghardsWonderbread
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
	class Edible_Base;
	class wonderbread_mung: Edible_Base
	{
		scope = 2;
		displayName = "Jest's Wonderbread";
		descriptionShort = "Jest's wonder bread from years ago and... theres no mold?! because science! Best before: 1998/6";
		model = "\MunghardsItems\wonderbread\wonderbread.p3d";
		itemSize[] = {2,4};
		ContinuousActions[] = {186,187};
		varQuantityInit = 120;
		varQuantityMin = 0;
		varQuantityMax = 120;
		isMeleeWeapon = 1;
		rotationFlags = 4;
		class Nutrition
		{
			fullnessIndex = 2.5;
			energy = 200;
			water = 3;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
};
