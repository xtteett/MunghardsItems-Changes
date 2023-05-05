////////////////////////////////////////////////////////////////////
//DeRap: ketchup\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:47 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsKetchup
	{
		units[] = {"ketchup_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Drinks"};
	};
};
class CfgMods
{
	class MunghardsKetchup
	{
		dir = "Munghardsitems\ketchup";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "fannypack";
		credits = "munghard";
		author = "munghard";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
	};
};
class CfgVehicles
{
	class WaterBottle;
	class ketchup_mung: WaterBottle
	{
		scope = 2;
		displayName = "Ketchup";
		descriptionShort = "A very famous condiment";
		model = "\MunghardsItems\Ketchup\ketchup.p3d";
		itemSize[] = {1,3};
		varLiquidTypeInit = 334;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 333 + 334 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
};
class cfgLiquidDefinitions
{
	class Ketchup
	{
		type = 334;
		displayName = "Ketchup";
		flammability = -10;
		class Nutrition
		{
			fullnessIndex = 10;
			energy = 500;
			water = 50;
			nutritionalIndex = 75;
			toxicity = -10;
		};
	};
};
