////////////////////////////////////////////////////////////////////
//DeRap: carrierrig\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:28 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardscarrierrig
	{
		units[] = {"carrierrig_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Gear_Containers","DZ_Gear_Consumables","DZ_Gear_Tools","DZ_Gear_Cooking","DZ_Gear_Food","DZ_Gear_Navigation","DZ_Gear_Drinks","DZ_Gear_Camping","DZ_Gear_Optics","DZ_Gear_Crafting","DZ_Weapons_Firearms"};
	};
};
class CfgMods
{
	class Munghardscarrierrig
	{
		dir = "Munghardsitems\carrierrig";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardscarrierrig";
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
	class SmershBag;
	class carrierrig_mung: SmershBag
	{
		scope = 2;
		displayName = "Backpack carrier-rig";
		descriptionShort = "A rig for heavy carrying, takes many different attachments, effectively makes every backpack modular";
		model = "\MunghardsItems\carrierrig\carrierrig_g.p3d";
		inventorySlot[] = {"Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 0;
		itemSize[] = {9,10};
		itemsCargoSize[] = {0,0};
		weight = 3000;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		attachments[] = {"Back","protectorcase","flashlight","waterproofbag","Chemlight","CookingEquipment"};
		hiddenSelections[] = {"zbytek","camoground"};
		hiddenSelectionsTextures[] = {"MunghardsItems\carrierrig\data\carrierrig_co.paa"};
		class ClothingTypes
		{
			male = "\MunghardsItems\carrierrig\carrierrig.p3d";
			female = "\MunghardsItems\carrierrig\carrierrig.p3d";
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxybackpack: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Back"};
		model = "\MunghardsItems\carrierrig\proxy\backpack.p3d";
	};
};
class CfgSlots{};
