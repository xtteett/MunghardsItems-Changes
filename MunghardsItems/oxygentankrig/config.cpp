////////////////////////////////////////////////////////////////////
//DeRap: oxygentankrig\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:57 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsoxygentank
	{
		units[] = {"oxygentankrig_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","Munghardshikingbag","DZ_Radio","DZ_Gear_Tools","DZ_Gear_Containers","DZ_Characters_Belts"};
	};
};
class CfgMods
{
	class Munghardsoxygentank
	{
		dir = "Munghardsitems\oxygentankrig";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsoxygentank";
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
	class oxygentankrig_mung: Clothing
	{
		scope = 2;
		displayName = "Oxygentank rig";
		descriptionShort = "A oxygentank rig with the possibility to attach some items.";
		model = "\MunghardsItems\oxygentankrig\oxygentankrig_g.p3d";
		inventorySlot[] = {"Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 0;
		itemSize[] = {5,7};
		itemsCargoSize[] = {4,10};
		weight = 3000;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MunghardsItems\oxygentankrig\data\oxygenrig_co.paa"};
		attachments[] = {"mask","walkietalkie","flashlight","Belt_Left","waterproofbag"};
		class ClothingTypes
		{
			male = "\MunghardsItems\oxygentankrig\oxygentankrig.p3d";
			female = "\MunghardsItems\oxygentankrig\oxygentankrig.p3d";
		};
	};
};
class CfgSlots
{
	class Slot_flashlight
	{
		name = "flashlight";
		displayName = "flashlight";
		ghostIcon = "flashlight";
	};
	class Slot_waterproofbag
	{
		name = "waterproofbag";
		displayName = "waterproofbag";
		ghostIcon = "pouches";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymag3_gasmask_g: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"mask"};
		model = "\MunghardsItems\mag3_gasmask\mag3_gasmask_g.p3d";
	};
};
