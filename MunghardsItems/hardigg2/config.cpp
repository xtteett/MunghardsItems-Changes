class CfgPatches
{
	class Munghardshardigg2
	{
		units[] = {"hardigg2_Mung","hardigg2_Mung_camo","hardigg2_Mung_snow","hardigg3_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardshardigg2
	{
		dir = "Munghardsitems";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsitems";
		credits = "munghard";
		author = "munghard";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World","Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"MunghardsItems/scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"MunghardsItems/scripts/4_world"};
			};
		};
	};
};
class CfgVehicles
{
	class WoodenCrate;
	class hardigg2_Mung: WoodenCrate
	{
		scope = 2;
		storageCategory = 1;
		displayName = "Hardigg 2";
		descriptionShort = "Military storage case 2";
		model = "\MunghardsItems\hardigg2\hardigg2.p3d";
		attachments[] = {"Shoulder1","Shoulder2"};
		weight = 40000;
		physLayer = "item_large";
		simulation = "inventoryItem";
		carveNavmesh = 1;
		canBeDigged = 0;
		itemBehaviour = 0;
		itemSize[] = {10,12};
		itemsCargoSize[] = {10,30};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\MunghardsItems\hardigg2\data\hardigg2_CO.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,30};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet = "barrel_movement_SoundSet";
					id = 1;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpBarrelLight_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBarrel_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "barrel_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class hardigg2_Mung_camo: hardigg2_Mung
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\MunghardsItems\hardigg2\data\camo\hardigg2_camo_CO.paa"};
	};
	class hardigg2_Mung_snow: hardigg2_Mung
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\MunghardsItems\hardigg2\data\snow\hardigg2_snow_CO.paa"};
	};
	class hardigg3_mung: hardigg2_Mung
	{
		scope = 2;
		displayName = "Hardigg 2.5";
		model = "\MunghardsItems\hardigg2\hardigg3.p3d";
		class Cargo
		{
			itemsCargoSize[] = {10,15};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyshoulder1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder1";
		model = "\MunghardsItems\gunwall\data\proxy\shoulder1.p3d";
	};
	class Proxyshoulder2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder2";
		model = "\MunghardsItems\gunwall\data\proxy\shoulder2.p3d";
	};
};
class CfgSlots
{
	class Slot_Gun1
	{
		name = "shoulder1";
		displayName = "shoulder1";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Gun2
	{
		name = "shoulder2";
		displayName = "shoulder2";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
};
