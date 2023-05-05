////////////////////////////////////////////////////////////////////
//DeRap: nbc_longcoat\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:55 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsnbc_longcoat
	{
		units[] = {"nbc_longcoat_mung","nbc_longcoat_legs_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardsnbc_longcoat
	{
		dir = "Munghardsitems\nbc_longcoat";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "nbc_longcoat";
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
	class nbc_longcoat_mung: Clothing
	{
		scope = 2;
		displayName = "NBC longcoat";
		descriptionShort = "...";
		model = "\MunghardsItems\nbc_longcoat\nbc_longcoat_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing","Body"};
		weight = 500;
		itemSize[] = {3,3};
		itemsCargoSize[] = {0,0};
		quickBarBonus = 0;
		heatIsolation = 0.8;
		absorbency = 0;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Coat";
		headSelectionsToHide[] = {"Clipping_GP5GasMask"};
		hiddenSelections[] = {"personality"};
		class Protection
		{
			biological = 0.75;
		};
		class ClothingTypes
		{
			male = "\MunghardsItems\nbc_longcoat\nbc_longcoat_M.p3d";
			female = "\MunghardsItems\nbc_longcoat\nbc_longcoat_F.p3d";
		};
	};
	class nbc_longcoat_legs_mung: Clothing
	{
		scope = 2;
		displayName = "NBC longcoat";
		descriptionShort = "...";
		model = "\MunghardsItems\nbc_longcoat\nbc_longcoat_legs.p3d";
		inventorySlot[] = {"Legs"};
		itemInfo[] = {"Clothing","Legs"};
	};
};
