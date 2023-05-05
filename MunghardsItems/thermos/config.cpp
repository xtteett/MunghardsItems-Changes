////////////////////////////////////////////////////////////////////
//DeRap: thermos\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:14 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsthermos
	{
		units[] = {"thermos_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Drinks"};
	};
};
class CfgMods
{
	class Munghardsthermos
	{
		dir = "Munghardsitems\thermos";
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
	class thermos_mung: Canteen
	{
		scope = 2;
		displayName = "Thermos";
		descriptionShort = "Container to store liquid";
		model = "\MunghardsItems\thermos\thermos.p3d";
		itemSize[] = {1,3};
		varQuantityInit = 1500;
		varQuantityMin = 0;
		varQuantityMax = 1500;
	};
};
