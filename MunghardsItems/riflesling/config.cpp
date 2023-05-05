////////////////////////////////////////////////////////////////////
//DeRap: riflesling\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:59:00 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsriflesling
	{
		units[] = {"riflesling_colorbase_mung","riflesling_2_colorbase_mung","riflesling_2_black_mung","riflesling_black_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Weapons_Firearms"};
	};
};
class CfgMods
{
	class Munghardsriflesling
	{
		dir = "Munghardsitems\riflesling";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsriflesling";
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
	class riflesling_colorbase_mung: Clothing
	{
		scope = 2;
		displayName = "Riflesling leather";
		descriptionShort = "";
		model = "\MunghardsItems\riflesling\riflesling_g.p3d";
		inventorySlot = "shoulder";
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
		attachments[] = {"shoulder"};
		simpleHiddenSelections[] = {"rolled","deployed"};
		hiddenSelections[] = {"rolled","deployed","sling"};
		hiddenSelectionsTextures[] = {"MunghardsItems\riflesling\data\ground\rifle_sling_g_CO.paa","MunghardsItems\riflesling\data\rifle_sling_CO.paa","MunghardsItems\riflesling\data\rifle_sling_CO.paa"};
		class ClothingTypes
		{
			male = "\MunghardsItems\riflesling\riflesling.p3d";
			female = "\MunghardsItems\riflesling\riflesling.p3d";
		};
	};
	class riflesling_2_colorbase_mung: riflesling_colorbase_mung
	{
		scope = 2;
		displayName = "Riflesling 2 brown";
		class ClothingTypes
		{
			male = "\MunghardsItems\riflesling\riflesling2.p3d";
			female = "\MunghardsItems\riflesling\riflesling2.p3d";
		};
	};
	class riflesling_2_black_mung: riflesling_2_colorbase_mung
	{
		scope = 2;
		displayName = "Riflesling 2 black";
		hiddenSelectionsTextures[] = {"\MunghardsItems\riflesling\data\ground\rifle_sling_g_black_co.paa","\MunghardsItems\riflesling\data\rifle_sling_black_co.paa","\MunghardsItems\riflesling\data\rifle_sling_black_co.paa"};
	};
	class riflesling_black_mung: riflesling_colorbase_mung
	{
		scope = 2;
		displayName = "Riflesling black";
		hiddenSelectionsTextures[] = {"\MunghardsItems\riflesling\data\ground\rifle_sling_g_black_co.paa","\MunghardsItems\riflesling\data\rifle_sling_black_co.paa","\MunghardsItems\riflesling\data\rifle_sling_black_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyproxy3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "shoulder";
		model = "\MunghardsItems\riflesling\proxy3.p3d";
	};
};
