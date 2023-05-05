class CfgPatches
{
	class Munghardsgunwall
	{
		units[] = {"gunwall_kit_mung","gunwall_metal_kit_mung","gunwalldisplay_mung","gunwalldisplay_metal_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Weapons_Firearms","DZ_Pistols"};
	};
};
class CfgMods
{
	class Munghardsgunwall
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
class cfgWeapons
{
	class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[] += {"kuroakitaGUN1","kuroakitaGUN2","kuroakitaGUN3","kuroakitaGUN4","kuroakitaGUN5","kuroakitaGUN6","kuroakitaGUN7","kuroakitaGUN8","kuroakitaGUN9","kuroakitaGUN10","kuroakitaGUN11","kuroakitaGUN12","Shoulder","Shoulder1","Shoulder2","Shoulder3","Shoulder4","Shoulder5","Shoulder6","Shoulder7","Melee"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class gunwall_kit_mung: Inventory_Base
	{
		scope = 2;
		displayName = "Gunwall display kit";
		descriptionShort = "...";
		model = "\MunghardsItems\gunwall\gunwall_kit.p3d";
		isMeleeWeapon = 0;
		weight = 16000;
		absorbency = 0;
		rotationFlags = 16;
		itemSize[] = {6,3};
		lootCategory = "Materials";
		reversed = 0;
		itemBehaviour = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MunghardsItems\gunwall\data\gunwall_CO.paa"};
	};
	class gunwall_metal_kit_mung: gunwall_kit_mung
	{
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MunghardsItems\gunwall\data\v2\gunwall_CO.paa"};
		hiddenSelectionsMaterials[] = {"MunghardsItems\gunwall\data\v2\gunwall_metal.rvmat"};
	};
	class Container_Base;
	class gunwalldisplay_mung: Container_Base
	{
		scope = 2;
		storageCategory = 1;
		supplyRadius = 3;
		itemsCargoSize[] = {10,2};
		displayName = "Rifle walldisplay";
		model = "\MunghardsItems\gunwall\gunwall.p3d";
		descriptionShort = "...";
		carveNavmesh = 1;
		physLayer = "item_large";
		weight = 30000;
		itemSize[] = {30,40};
		hiddenSelections[] = {"displaywall"};
		hiddenSelectionsTextures[] = {"MunghardsItems\gunwall\data\gunwall_CO.paa"};
		attachments[] += {"Shoulder","Shoulder1","Shoulder2","Shoulder3","Shoulder4","Shoulder5","Shoulder6","Shoulder7"};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name = "Rifles";
				description = "";
				attachmentSlots[] = {"Shoulder","Shoulder1","Shoulder2","Shoulder3","Shoulder4","Shoulder5","Shoulder6","Shoulder7"};
				icon = "hips";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
					healthLevels[] = {{1.0,{"MunghardsItems\gunwall\data\gunwall.rvmat"}},{0.7,{"MunghardsItems\gunwall\data\gunwall.rvmat"}},{0.5,{"MunghardsItems\gunwall\data\gunwall.rvmat"}},{0.3,{"MunghardsItems\gunwall\data\gunwall.rvmat"}},{0.0,{"MunghardsItems\gunwall\data\gunwall.rvmat"}}};
				};
			};
		};
	};
	class gunwalldisplay_metal_mung: gunwalldisplay_mung
	{
		hiddenSelections[] = {"displaywall"};
		hiddenSelectionsTextures[] = {"MunghardsItems\gunwall\data\v2\gunwall_CO.paa"};
		hiddenSelectionsMaterials[] = {"MunghardsItems\gunwall\data\v2\gunwall_metal.rvmat"};
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
	class Proxyshoulder3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder3";
		model = "\MunghardsItems\gunwall\data\proxy\shoulder3.p3d";
	};
	class Proxyshoulder4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder4";
		model = "\MunghardsItems\gunwall\data\proxy\shoulder4.p3d";
	};
	class Proxyshoulder5: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder5";
		model = "\MunghardsItems\gunwall\data\proxy\shoulder5.p3d";
	};
	class Proxyshoulder6: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder6";
		model = "\MunghardsItems\gunwall\data\proxy\shoulder6.p3d";
	};
	class Proxyshoulder7: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder7";
		model = "\MunghardsItems\gunwall\data\proxy\shoulder7.p3d";
	};
};
class CfgSlots
{
	class Slot_Shoulder1
	{
		name = "shoulder1";
		displayName = "Weapon";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder2
	{
		name = "shoulder2";
		displayName = "Weapon";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder3
	{
		name = "shoulder3";
		displayName = "Weapon";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder4
	{
		name = "shoulder4";
		displayName = "Weapon";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder5
	{
		name = "shoulder5";
		displayName = "Weapon";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder6
	{
		name = "shoulder6";
		displayName = "Weapon";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder7
	{
		name = "shoulder7";
		displayName = "Weapon";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
};
