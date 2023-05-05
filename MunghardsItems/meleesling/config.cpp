////////////////////////////////////////////////////////////////////
//DeRap: meleesling\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:53 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsmeleesling
	{
		units[] = {"meleesling_colorbase_mung","meleesling_black_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Scripts","DZ_Characters_Backpacks","DZ_Weapons_Firearms"};
	};
};
class CfgMods
{
	class Munghardsmeleesling
	{
		dir = "Munghardsitems\meleesling";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsmeleesling";
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
	class meleesling_colorbase_mung: Clothing
	{
		scope = 2;
		displayName = "Meleesling leather";
		descriptionShort = "";
		model = "\MunghardsItems\meleesling\meleesling_g.p3d";
		inventorySlot[] = {"Melee"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 64;
		itemSize[] = {7,3};
		itemsCargoSize[] = {0,0};
		weight = 500;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		attachments[] = {"Melee"};
		simpleHiddenSelections[] = {"rolled","deployed","sword","axe"};
		hiddenSelections[] = {"rolled","deployed","sling","sword","axe"};
		hiddenSelectionsTextures[] = {"MunghardsItems\meleesling\data\ground\rifle_sling_g_CO.paa","MunghardsItems\meleesling\data\rifle_sling_CO.paa","MunghardsItems\meleesling\data\rifle_sling_CO.paa"};
		class ClothingTypes
		{
			male = "\MunghardsItems\meleesling\meleesling.p3d";
			female = "\MunghardsItems\meleesling\meleesling.p3d";
		};
	};
	class meleesling_black_mung: meleesling_colorbase_mung
	{
		scope = 2;
		displayName = "Meleesling black";
		hiddenSelectionsTextures[] = {"\MunghardsItems\meleesling\data\ground\rifle_sling_g_black_co.paa","\MunghardsItems\meleesling\data\rifle_sling_black_co.paa","\MunghardsItems\meleesling\data\rifle_sling_black_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyproxy1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Melee";
		model = "\MunghardsItems\meleesling\proxy1.p3d";
	};
	class Proxyproxy2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Melee";
		model = "\MunghardsItems\meleesling\proxy2.p3d";
	};
};
