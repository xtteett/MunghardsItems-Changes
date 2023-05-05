////////////////////////////////////////////////////////////////////
//DeRap: vinegar\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:15 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsvinegar
	{
		units[] = {"vinegar_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Drinks"};
	};
};
class CfgMods
{
	class Munghardsvinegar
	{
		dir = "Munghardsitems\vinegar";
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
	class Canteen;
	class vinegar_mung: Canteen
	{
		scope = 2;
		displayName = "Vinegar";
		descriptionShort = "Can be used for pickling and cleaning...";
		model = "\MunghardsItems\vinegar\vinegar.p3d";
		itemSize[] = {1,3};
		varLiquidTypeInit = 333;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 333 + 334 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
};
class cfgLiquidDefinitions
{
	class Vinegar
	{
		type = 333;
		displayName = "Vinegar";
		flammability = -10;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 20;
			water = 20;
			nutritionalIndex = 75;
			toxicity = 10;
		};
	};
};
