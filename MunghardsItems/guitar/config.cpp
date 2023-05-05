////////////////////////////////////////////////////////////////////
//DeRap: guitar\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:38 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsguitar
	{
		units[] = {"guitar_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardsguitar
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
	class BaseballBat;
	class guitar_mung: BaseballBat
	{
		scope = 2;
		displayName = "Guitar";
		descriptionShort = "...";
		model = "\MunghardsItems\guitar\guitar.p3d";
		itemSize[] = {3,6};
		itemsCargoSize[] = {3,3};
		isMeleeWeapon = 1;
		rotationFlags = 4;
	};
};
