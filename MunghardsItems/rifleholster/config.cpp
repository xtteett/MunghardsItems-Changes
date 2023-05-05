////////////////////////////////////////////////////////////////////
//DeRap: rifleholster\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:59 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsrifleholster
	{
		units[] = {"rifleholster_black_mung","rifleholster_camo_mung","rifleholster_camo_ucp_mung","rifleholster_tan_mung","rifleholster_snow_mung","rifleholster_TTsKO_mung","rifleholster_leatherengraved_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Weapons_Firearms","DZ_Characters_Vests","DZ_Gear_Consumables"};
	};
};
class CfgMods
{
	class Munghardsrifleholster
	{
		dir = "Munghardsitems\rifleholster";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsrifleholster";
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
	class rifleholster_colorbase_mung: Clothing
	{
		displayName = "rifleholster";
		descriptionShort = "The scabbard is thickly padded for weapon protection.";
		model = "\MunghardsItems\rifleholster\rifleholster_g.p3d";
		inventorySlot[] = {"Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 1;
		itemSize[] = {3,8};
		itemsCargoSize[] = {4,2};
		weight = 1000;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		attachments[] = {"VestPouch","shoulder","Chemlight"};
		hiddenSelections[] = {"zbytek"};
		class ClothingTypes
		{
			male = "\MunghardsItems\rifleholster\rifleholster.p3d";
			female = "\MunghardsItems\rifleholster\rifleholster.p3d";
		};
	};
	class rifleholster_black_mung: rifleholster_colorbase_mung
	{
		scope = 2;
		displayName = "Rifleholster black";
		hiddenSelectionsTextures[] = {"\MunghardsItems\rifleholster\data\rifleholster_co.paa"};
	};
	class rifleholster_camo_mung: rifleholster_colorbase_mung
	{
		scope = 2;
		displayName = "Rifleholster camo";
		hiddenSelectionsTextures[] = {"\MunghardsItems\rifleholster\data\rifleholster_camo_co.paa"};
	};
	class rifleholster_camo_ucp_mung: rifleholster_colorbase_mung
	{
		scope = 2;
		displayName = "Rifleholster camo ucp";
		hiddenSelectionsTextures[] = {"\MunghardsItems\rifleholster\data\rifleholster_camo_v2_co.paa"};
	};
	class rifleholster_tan_mung: rifleholster_colorbase_mung
	{
		scope = 2;
		displayName = "Rifleholster tan";
		hiddenSelectionsTextures[] = {"\MunghardsItems\rifleholster\data\rifleholster_tan_co.paa"};
	};
	class rifleholster_snow_mung: rifleholster_colorbase_mung
	{
		scope = 2;
		displayName = "Rifleholster snow";
		hiddenSelectionsTextures[] = {"\MunghardsItems\rifleholster\data\rifleholster_snow_co.paa"};
	};
	class rifleholster_TTsKO_mung: rifleholster_colorbase_mung
	{
		scope = 2;
		displayName = "Rifleholster TTsKO";
		hiddenSelectionsTextures[] = {"\MunghardsItems\rifleholster\data\rifleholster_camo3_co.paa"};
	};
	class rifleholster_leatherengraved_mung: rifleholster_colorbase_mung
	{
		scope = 2;
		displayName = "Rifleholster leather engraved";
		model = "\MunghardsItems\rifleholster\rifleholster_leather_g.p3d";
		hiddenSelectionsTextures[] = {"\MunghardsItems\rifleholster\data\leather\rifleholster_leather_CO.paa"};
		class ClothingTypes
		{
			male = "\MunghardsItems\rifleholster\rifleholster_leather.p3d";
			female = "\MunghardsItems\rifleholster\rifleholster_leather.p3d";
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyproxy_RH: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "shoulder";
		model = "\MunghardsItems\rifleholster\proxy_RH.p3d";
	};
};
