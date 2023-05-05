////////////////////////////////////////////////////////////////////
//DeRap: dutchoven\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:35 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsdutchoven
	{
		units[] = {"dutchoven_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgMods
{
	class Munghardsdutchoven
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
	class Pot;
	class dutchoven_mung: Pot
	{
		scope = 2;
		displayName = "Dutchoven";
		descriptionShort = "";
		model = "\MunghardsItems\dutchoven\dutchoven.p3d";
		weight = 1740;
		itemSize[] = {5,4};
		itemsCargoSize[] = {5,4};
		varQuantityMax = 5000;
	};
};
