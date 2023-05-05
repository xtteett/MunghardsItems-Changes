////////////////////////////////////////////////////////////////////
//DeRap: shroud\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:59:06 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsshroud
	{
		units[] = {"shawl_yellow_mung","shawl_red_mung","shawl_templar_mung","shawl_palestini_mung","shawl_black_mung","shawl_floral_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardsshroud
	{
		dir = "Munghardsitems\shroud";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "";
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
	class shawl_colorbase_mung: Clothing
	{
		scope = 0;
		displayName = "Shawl hood";
		descriptionShort = "A folded shawl.";
		model = "\MunghardsItems\shroud\shroud_g.p3d";
		rotationFlags = 64;
		ContinuousActions[] = {190};
		inventorySlot[] = {"Headgear"};
		itemInfo[] = {"Clothing","Head"};
		weight = 600;
		itemSize[] = {3,3};
		itemsCargoSize[] = {0,0};
		quickBarBonus = 0;
		heatIsolation = 0.5;
		absorbency = 0.35;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Coat";
		headSelectionsToHide[] = {"Clipping_HelmetMich"};
		hiddenSelections[] = {"zbytek"};
		class ClothingTypes
		{
			male = "\MunghardsItems\shroud\shroud.p3d";
			female = "\MunghardsItems\shroud\shroud.p3d";
		};
	};
	class shawl_yellow_mung: shawl_colorbase_mung
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MunghardsItems\shroud\data\hoodshemag_lp_CO.paa"};
	};
	class shawl_red_mung: shawl_colorbase_mung
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MunghardsItems\shroud\data\hoodshemag_lp_red_CO.paa"};
	};
	class shawl_templar_mung: shawl_colorbase_mung
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MunghardsItems\shroud\data\hoodshemag_lp_templar_CO.paa"};
	};
	class shawl_palestini_mung: shawl_colorbase_mung
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MunghardsItems\shroud\data\hoodshemag_lp_palestini_CO.paa"};
	};
	class shawl_black_mung: shawl_colorbase_mung
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MunghardsItems\shroud\data\hoodshemag_lp_black_CO.paa"};
	};
	class shawl_floral_mung: shawl_colorbase_mung
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MunghardsItems\shroud\data\hoodshemag_lp_floral_CO.paa"};
	};
};
