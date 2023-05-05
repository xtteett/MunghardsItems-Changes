////////////////////////////////////////////////////////////////////
//DeRap: weldinggoggles\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:16 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsWeldingglasses
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Glasses"};
	};
};
class CfgMods
{
	class MunghardsWeldingglasses
	{
		dir = "Munghardsitems\weldinggoggles";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "MunghardsWeldingglasses";
		credits = "munghard";
		author = "munghard";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
	};
};
class CfgVehicles
{
	class AviatorGlasses;
	class weldinggoggles_mung: AviatorGlasses
	{
		displayName = "Welding goggles";
		descriptionShort = "...";
		model = "\MunghardsItems\weldinggoggles\weldinggoggles_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Eyewear"};
		itemInfo[] = {"Clothing","Eyewear"};
		rotationFlags = 64;
		weight = 36;
		itemSize[] = {2,1};
		lootTag[] = {"Kitchen","Camping","Work","Farm","Military_west","Military_east","Civilian"};
		lootCategory = "Eyewear";
		class ClothingTypes
		{
			male = "\MunghardsItems\weldinggoggles\weldinggoggles.p3d";
			female = "\MunghardsItems\weldinggoggles\weldinggoggles.p3d";
		};
	};
};
