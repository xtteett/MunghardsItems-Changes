////////////////////////////////////////////////////////////////////
//DeRap: bikervest\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:26 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsbikervest
	{
		units[] = {"bikervest_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardsbikervest
	{
		dir = "Munghardsitems\bikervest";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsbikervest";
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
	class Clothing;
	class bikervest_mung: Clothing
	{
		scope = 2;
		displayName = "Biker vest";
		descriptionShort = "...";
		model = "\MunghardsItems\bikervest\bikervest_g.p3d";
		inventorySlot[] = {"Vest"};
		attachments[] = {"VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		rotationFlags = 2;
		itemSize[] = {3,3};
		itemsCargoSize[] = {4,4};
		weight = 3000;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		class ClothingTypes
		{
			male = "\MunghardsItems\bikervest\bikervest.p3d";
			female = "\MunghardsItems\bikervest\bikervest.p3d";
		};
	};
};
