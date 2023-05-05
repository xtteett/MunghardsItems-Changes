////////////////////////////////////////////////////////////////////
//DeRap: lennon_glasses\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:49 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardslennonglasses
	{
		units[] = {"Lennon_glasses_pink_mung","Lennon_glasses_galaxy_mung","Lennon_glasses_black_mung","Lennon_glasses_blue_mung","Lennon_glasses_yellow_mung","Lennon_glasses_white_mung","victorian_glasses_pink_mung","victorian_glasses_galaxy_mung","victorian_glasses_black_mung","victorian_glasses_blue_mung","victorian_glasses_yellow_mung","victorian_glasses_white_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Glasses"};
	};
};
class CfgMods
{
	class Munghardslennonglasses
	{
		dir = "Munghardsitems\lennon_glasses";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardslennonglasses";
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
	class Lennon_glasses_mung: AviatorGlasses
	{
		displayName = "Lennon glasses";
		descriptionShort = "Round lensed glasses";
		model = "\MunghardsItems\lennon_glasses\lennon_glasses_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Eyewear"};
		itemInfo[] = {"Clothing","Eyewear"};
		rotationFlags = 64;
		weight = 36;
		itemSize[] = {2,1};
		lootTag[] = {"Kitchen","Camping","Work","Farm","Military_west","Military_east","Civilian"};
		hiddenSelections[] = {"head","lens","zbytek"};
		lootCategory = "Eyewear";
		class ClothingTypes
		{
			male = "\MunghardsItems\lennon_glasses\lennon_glasses.p3d";
			female = "\MunghardsItems\lennon_glasses\lennon_glasses.p3d";
		};
	};
	class Lennon_glasses_pink_mung: Lennon_glasses_mung
	{
		scope = 2;
		displayName = "Lennon glasses pink";
		hiddenSelectionsTextures[] = {"MunghardsItems\lennon_glasses\data\round_glasses_pink_ca.paa","MunghardsItems\lennon_glasses\data\round_glasses_pink_ca.paa","MunghardsItems\lennon_glasses\data\round_glasses_pink_ca.paa"};
	};
	class Lennon_glasses_galaxy_mung: Lennon_glasses_mung
	{
		scope = 2;
		displayName = "Lennon glasses galaxy";
		hiddenSelectionsTextures[] = {"MunghardsItems\lennon_glasses\data\round_glasses_galaxy_co.paa","MunghardsItems\lennon_glasses\data\round_glasses_galaxy_co.paa","MunghardsItems\lennon_glasses\data\round_glasses_galaxy_co.paa"};
	};
	class Lennon_glasses_black_mung: Lennon_glasses_mung
	{
		scope = 2;
		displayName = "Lennon glasses black";
		hiddenSelectionsTextures[] = {"MunghardsItems\lennon_glasses\data\round_glasses_black_co.paa","MunghardsItems\lennon_glasses\data\round_glasses_black_co.paa","MunghardsItems\lennon_glasses\data\round_glasses_black_co.paa"};
	};
	class Lennon_glasses_blue_mung: Lennon_glasses_mung
	{
		scope = 2;
		displayName = "Lennon glasses blue";
		hiddenSelectionsTextures[] = {"MunghardsItems\lennon_glasses\data\round_glasses_blue_ca.paa","MunghardsItems\lennon_glasses\data\round_glasses_blue_ca.paa","MunghardsItems\lennon_glasses\data\round_glasses_blue_ca.paa"};
	};
	class Lennon_glasses_yellow_mung: Lennon_glasses_mung
	{
		scope = 2;
		displayName = "Lennon glasses yellow";
		hiddenSelectionsTextures[] = {"MunghardsItems\lennon_glasses\data\round_glasses_yellow_ca.paa","MunghardsItems\lennon_glasses\data\round_glasses_yellow_ca.paa","MunghardsItems\lennon_glasses\data\round_glasses_yellow_ca.paa"};
	};
	class Lennon_glasses_white_mung: Lennon_glasses_mung
	{
		scope = 2;
		displayName = "Lennon glasses";
		hiddenSelectionsTextures[] = {"MunghardsItems\lennon_glasses\data\round_glasses_white_ca.paa","MunghardsItems\lennon_glasses\data\round_glasses_white_ca.paa","MunghardsItems\lennon_glasses\data\round_glasses_white_ca.paa"};
	};
	class Victorian_glasses_mung: Lennon_glasses_mung
	{
		displayName = "Victorian glasses";
		descriptionShort = "Round lensed victorian glasses";
		model = "\MunghardsItems\lennon_glasses\victorian_glasses_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Eyewear"};
		itemInfo[] = {"Clothing","Eyewear"};
		rotationFlags = 32;
		weight = 36;
		itemSize[] = {2,1};
		lootTag[] = {"Kitchen","Camping","Work","Farm","Military_west","Military_east","Civilian"};
		hiddenSelections[] = {"head","lens","zbytek"};
		lootCategory = "Eyewear";
		class ClothingTypes
		{
			male = "\MunghardsItems\lennon_glasses\victorian_glasses.p3d";
			female = "\MunghardsItems\lennon_glasses\victorian_glasses.p3d";
		};
	};
	class victorian_glasses_pink_mung: victorian_glasses_mung
	{
		scope = 2;
		displayName = "victorian glasses pink";
		hiddenSelectionsTextures[] = {"MunghardsItems\Lennon_glasses\data\round_glasses_pink_ca.paa","MunghardsItems\Lennon_glasses\data\round_glasses_pink_ca.paa","MunghardsItems\Lennon_glasses\data\round_glasses_pink_ca.paa"};
	};
	class victorian_glasses_galaxy_mung: victorian_glasses_mung
	{
		scope = 2;
		displayName = "victorian glasses galaxy";
		hiddenSelectionsTextures[] = {"MunghardsItems\Lennon_glasses\data\round_glasses_galaxy_co.paa","MunghardsItems\Lennon_glasses\data\round_glasses_galaxy_co.paa","MunghardsItems\Lennon_glasses\data\round_glasses_galaxy_co.paa"};
	};
	class victorian_glasses_black_mung: victorian_glasses_mung
	{
		scope = 2;
		displayName = "victorian glasses black";
		hiddenSelectionsTextures[] = {"MunghardsItems\Lennon_glasses\data\round_glasses_black_co.paa","MunghardsItems\Lennon_glasses\data\round_glasses_black_co.paa","MunghardsItems\Lennon_glasses\data\round_glasses_black_co.paa"};
	};
	class victorian_glasses_blue_mung: victorian_glasses_mung
	{
		scope = 2;
		displayName = "victorian glasses blue";
		hiddenSelectionsTextures[] = {"MunghardsItems\Lennon_glasses\data\round_glasses_blue_ca.paa","MunghardsItems\Lennon_glasses\data\round_glasses_blue_ca.paa","MunghardsItems\Lennon_glasses\data\round_glasses_blue_ca.paa"};
	};
	class victorian_glasses_yellow_mung: victorian_glasses_mung
	{
		scope = 2;
		displayName = "victorian glasses yellow";
		hiddenSelectionsTextures[] = {"MunghardsItems\Lennon_glasses\data\round_glasses_yellow_ca.paa","MunghardsItems\Lennon_glasses\data\round_glasses_yellow_ca.paa","MunghardsItems\Lennon_glasses\data\round_glasses_yellow_ca.paa"};
	};
	class victorian_glasses_white_mung: victorian_glasses_mung
	{
		scope = 2;
		displayName = "victorian glasses";
		hiddenSelectionsTextures[] = {"MunghardsItems\Lennon_glasses\data\round_glasses_white_ca.paa","MunghardsItems\Lennon_glasses\data\round_glasses_white_ca.paa","MunghardsItems\Lennon_glasses\data\round_glasses_white_ca.paa"};
	};
};
