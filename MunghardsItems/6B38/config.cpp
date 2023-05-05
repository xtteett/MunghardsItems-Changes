////////////////////////////////////////////////////////////////////
//DeRap: 6B38\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:23 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghards6B38
	{
		units[] = {"bag_6B38_camo_mung","bag_6B38_LETO_mung","bag_6B38_Black_mung","bag_6B38_Snow_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Gear_Containers","DZ_Gear_Consumables","DZ_Gear_Tools","DZ_Gear_Cooking","DZ_Gear_Food","DZ_Gear_Navigation","DZ_Gear_Drinks","DZ_Gear_Camping","DZ_Gear_Optics","DZ_Gear_Crafting","DZ_Weapons_Firearms","DZ_Characters_Vests","DZ_Radio"};
	};
};
class CfgMods
{
	class Munghards6B38
	{
		dir = "Munghardsitems\6B38";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghards6B38";
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
	class Container_Base;
	class AmmoBox: Container_Base
	{
		inventorySlot[] += {"300RoundBox"};
	};
	class Clothing;
	class bag_6B38_Colorbase_mung: Clothing
	{
		displayName = "6B38";
		model = "\MunghardsItems\6B38\6B38_g.p3d";
		inventorySlot[] = {"Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 0;
		itemSize[] = {5,7};
		itemsCargoSize[] = {10,8};
		weight = 2600;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		attachments[] = {"binocular","VestPouch","Belt_Left","WalkieTalkie","flashlight","300roundbox","Chemlight","shoulder"};
		hiddenSelections[] = {"zbytek"};
		class ClothingTypes
		{
			male = "\MunghardsItems\6B38\6B38.p3d";
			female = "\MunghardsItems\6B38\6B38.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MunghardsItems\6B38\data\raidbackpack_6B38.rvmat"}},{0.7,{"MunghardsItems\6B38\data\raidbackpack_6B38.rvmat"}},{0.5,{"MunghardsItems\6B38\data\raidbackpack_6B38.rvmat"}},{0.3,{"MunghardsItems\6B38\data\raidbackpack_6B38.rvmat"}},{0.0,{"MunghardsItems\6B38\data\raidbackpack_6B38.rvmat"}}};
				};
			};
		};
	};
	class bag_6B38_camo_mung: bag_6B38_Colorbase_mung
	{
		scope = 2;
		displayName = "6B38";
		descriptionShort = "Original Russian Army raid  BACKPACK EMR Camo. Produced by Zaratkul. Supplied military equipment number is 6B38.";
		hiddenSelectionsTextures[] = {"\MunghardsItems\6B38\data\raidbackpack_6B38_co.paa"};
	};
	class bag_6B38_LETO_mung: bag_6B38_Colorbase_mung
	{
		scope = 2;
		displayName = "6B38 LETO";
		descriptionShort = "Original Russian Army raid  BACKPACK EMR Leto Camo. Produced by Zaratkul. Supplied military equipment number is 6B38.";
		hiddenSelectionsTextures[] = {"\MunghardsItems\6B38\data\raidbackpack_6B38_LETO_co.paa"};
	};
	class bag_6B38_Black_mung: bag_6B38_Colorbase_mung
	{
		scope = 2;
		displayName = "6B38 BLACK";
		descriptionShort = "Original Russian Army raid  BACKPACK EMR Black. Produced by Zaratkul. Supplied military equipment number is 6B38.";
		hiddenSelectionsTextures[] = {"\MunghardsItems\6B38\data\raidbackpack_6B38_black_co.paa"};
	};
	class bag_6B38_Snow_mung: bag_6B38_Colorbase_mung
	{
		scope = 2;
		displayName = "6B38 SNOW";
		descriptionShort = "Original Russian Army raid  BACKPACK EMR Snow. Produced by Zaratkul. Supplied military equipment number is 6B38.";
		hiddenSelectionsTextures[] = {"\MunghardsItems\6B38\data\raidbackpack_6B38_snow_co.paa"};
	};
};
class CfgSlots
{
	class Slot_flashlight
	{
		name[] = {"flashlight","MassFlashlight"};
		displayName = "flashlight";
		ghostIcon = "flashlight";
	};
	class Slot_binocular
	{
		name = "binocular";
		displayName = "binocular";
		ghostIcon = "opticacog";
	};
	class Slot_ammobox
	{
		name = "300roundbox";
		displayName = "300roundbox";
		ghostIcon = "hips";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxy300RoundBox: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"300RoundBox"};
		model = "\dz\gear\containers\300RoundBox.p3d";
	};
	class Proxygun: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"shoulder"};
		model = "\MunghardsItems\6B38\gun.p3d";
	};
};