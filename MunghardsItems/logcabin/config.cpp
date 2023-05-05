////////////////////////////////////////////////////////////////////
//DeRap: logcabin\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:50 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardslogcabin
	{
		units[] = {"logcabin_kit","log_cabin_base"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures_Residential","DZ_Data","DZ_Gear_Consumables","DZ_Gear_Crafting","DZ_Structures","DZ_Structures_Furniture"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class logcabin_kit: Inventory_Base
	{
		scope = 2;
		displayName = "logcabin_kit";
		descriptionShort = "logcabin kit";
		model = "MunghardsItems\logcabin\logcabin_kit.p3d";
		itemSize[] = {1,3};
		itemBehaviour = 1;
	};
	class HouseNoDestruct;
	class log_cabin_base: Inventory_Base
	{
		scope = 2;
		displayName = "logcabin building base";
		descriptionShort = "logcabin building base";
		model = "\MunghardsItems\logcabin\log_cabin_base.p3d";
		itemSize[] = {50,50};
		itemsCargoSize[] = {0,0};
		hiddenSelections[] = {"stickbase","rightwall","frontwall","backwall","leftwall","stones","roof","walls","floor","planks_p","stones_p"};
		simpleHiddenSelections[] = {"stickbase","rightwall","frontwall","backwall","leftwall","stones","roof","walls","floor","planks_p","stones_p"};
		attachments[] = {"Stones","Material_Nails","Material_WoodenLogs","Material_L1_WoodenLogs","Material_L2_WoodenLogs","Material_L3_WoodenLogs","Material_L1_WoodenPlanks","Material_L1W1_WoodenPlanks","Material_L1W2_WoodenPlanks","Material_L1W3_WoodenPlanks","Material_L2_WoodenPlanks","Material_L2W1_WoodenPlanks","Material_L2W2_WoodenPlanks","Material_L2W3_WoodenPlanks"};
		physLayer = "item_large";
		weight = 30000;
	};
	class Land_log_cabin_model: Inventory_Base
	{
		scope = 1;
		model = "\MunghardsItems\logcabin\log_cabin_empty.p3d";
		bounding = "BSphere";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "false";
		lootCategory = "Crafted";
		carveNavmesh = 1;
		weight = 100000;
		itemSize[] = {30,30};
		itemsCargoSize[] = {500,10};
		physLayer = "item_large";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyfrontwall: ProxyAttachment
	{
		scope = 2;
		model = "\MunghardsItems\logcabin\proxy\frontwall";
		inventorySlot = "Material_WoodenLogs";
	};
	class Proxybackwall: ProxyAttachment
	{
		scope = 2;
		model = "\MunghardsItems\logcabin\proxy\backwall";
		inventorySlot = "Material_L1_WoodenLogs";
	};
	class Proxyleftwall: ProxyAttachment
	{
		scope = 2;
		model = "\MunghardsItems\logcabin\proxy\leftwall";
		inventorySlot = "Material_L2_WoodenLogs";
	};
	class Proxyrightwall: ProxyAttachment
	{
		scope = 2;
		model = "\MunghardsItems\logcabin\proxy\rightwall";
		inventorySlot = "Material_L3_WoodenLogs";
	};
};
