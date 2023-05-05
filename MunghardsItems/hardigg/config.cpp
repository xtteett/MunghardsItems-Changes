////////////////////////////////////////////////////////////////////
//DeRap: hardigg\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:40 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardshardigg
	{
		units[] = {"hardigg_Mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardshardigg
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
	class hardigg2_Mung;
	class hardigg_Mung: hardigg2_Mung
	{
		scope = 2;
		displayName = "Hardigg";
		descriptionShort = "Military storage case";
		model = "\MunghardsItems\hardigg\hardigg.p3d";
		hiddenSelectionsTextures[] = {"\MunghardsItems\hardigg\data\hardigg_CO.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,40};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
	};
};
