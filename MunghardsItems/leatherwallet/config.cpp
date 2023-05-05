////////////////////////////////////////////////////////////////////
//DeRap: leatherwallet\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:48 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsleatherwallet
	{
		units[] = {"leatherwallet_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgMods
{
	class Munghardsleatherwallet
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
	class SmallProtectorCase;
	class leatherwallet_mung: SmallProtectorCase
	{
		scope = 2;
		storageCategory = 1;
		displayName = "leatherwallet";
		descriptionShort = "A wallet to store your moneys";
		model = "\MunghardsItems\leatherwallet\leatherwallet.p3d";
		rotationFlags = 16;
		weight = 94;
		itemSize[] = {2,2};
		itemsCargoSize[] = {10,2};
	};
};
