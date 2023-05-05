////////////////////////////////////////////////////////////////////
//DeRap: poncho\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:58 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsponcho
	{
		units[] = {"poncho_mung","poncho_camo_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Structures_Military"};
	};
};
class CfgMods
{
	class Munghardsponcho
	{
		dir = "Munghardsitems\poncho";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "oxygentankrig";
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
	class poncho_mung: Clothing
	{
		scope = 2;
		displayName = "Poncho";
		descriptionShort = "A raincoat poncho.";
		model = "\MunghardsItems\poncho\poncho_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot[] = {"Armband"};
		itemInfo[] = {"Clothing","Head"};
		weight = 1600;
		itemSize[] = {2,2};
		itemsCargoSize[] = {0,0};
		quickBarBonus = 0;
		heatIsolation = 0.5;
		absorbency = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Coat";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MunghardsItems\poncho\data\poncho_co.paa"};
		hiddenSelectionsMaterials[] = {"MunghardsItems\poncho\data\poncho.rvmat"};
		class ClothingTypes
		{
			male = "\MunghardsItems\poncho\poncho.p3d";
			female = "\MunghardsItems\poncho\poncho.p3d";
		};
	};
	class poncho_camo_mung: poncho_mung
	{
		scope = 2;
		displayName = "Ghillie poncho";
		descriptionShort = "A ghillie poncho.";
		model = "\MunghardsItems\poncho\poncho_g.p3d";
		hiddenSelectionsTextures[] = {"DZ\structures\military\improvised\data\camonet_east_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\structures\military\improvised\data\camonet_east.rvmat"};
	};
};
