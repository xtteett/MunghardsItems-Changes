class CfgPatches
{
	class Munghardsfannypack
	{
		units[] = {"fannypack_pink_mung","fannypack_black_mung","fannypack_multi_mung","fannypack_camo_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Gear_Tools","DZ_Gear_Camping","DZ_Gear_Crafting","DZ_Characters_Belts","DZ_Weapons_Melee_Blade","DZ_Characters_Vests"};
	};
};
class CfgMods
{
	class Munghardsfannypack
	{
		dir = "Munghardsitems\fannypack";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "fannypack";
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
	class fannypack_ColorBase_mung: Clothing
	{
		displayName = "Fannypack";
		descriptionShort = "A fannypack for that little extra space. Some items can be attached.";
		model = "\MunghardsItems\fannypack\fannypack_g.p3d";
		attachments[] = {"VestHolster","Hatchet","machete"};
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing","Hips"};
		itemSize[] = {4,1};
		itemsCargoSize[] = {4,2};
		weight = 20;
		lootCategory = "Crafted";
		lootTag[] = {"Civilian"};
		hiddenSelections[] = {"zbytek"};
        repairableWithKits[]={5,2};
        repairCosts[]={30,25};
		class ClothingTypes
		{
			male = "\MunghardsItems\fannypack\fannypack.p3d";
			female = "\MunghardsItems\fannypack\fannypack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MunghardsItems\fannypack\data\fannypack.rvmat"}},{0.7,{"MunghardsItems\fannypack\data\fannypack.rvmat"}},{0.5,{"MunghardsItems\fannypack\data\fannypack_damaged.rvmat"}},{0.3,{"MunghardsItems\fannypack\data\fannypack_damaged.rvmat"}},{0.0,{"MunghardsItems\fannypack\data\fannypack_destroyed.rvmat"}}};
				};
			};
		};
	};
	class fannypack_pink_mung: fannypack_ColorBase_mung
	{
		scope = 2;
		descriptionShort = "Munghards pink fannypack";
		hiddenSelectionsTextures[] = {"MunghardsItems\fannypack\data\fannypack_co.paa"};
	};
	class fannypack_black_mung: fannypack_ColorBase_mung
	{
		scope = 2;
		descriptionShort = "Munghards black fannypack";
		hiddenSelectionsTextures[] = {"MunghardsItems\fannypack\data\fannypack_black_co.paa"};
	};
	class fannypack_multi_mung: fannypack_ColorBase_mung
	{
		scope = 2;
		descriptionShort = "Munghards multi fannypack";
		hiddenSelectionsTextures[] = {"MunghardsItems\fannypack\data\fannypack_multi_co.paa"};
	};
	class fannypack_camo_mung: fannypack_ColorBase_mung
	{
		scope = 2;
		descriptionShort = "Munghards camo fannypack";
		hiddenSelectionsTextures[] = {"MunghardsItems\fannypack\data\fannypack_camo_co.paa"};
	};
	class Inventory_Base;
	class Hatchet: Inventory_Base
	{
		inventorySlot[] += {"MassTool","Hatchet","Hatchet1","Hatchet2","Hatchet3","Hatchet4"};
	};
	class Machete: Inventory_Base
	{
		inventorySlot[] += {"machete"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyhatchet: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"MassTool","Hatchet","Hatchet1","Hatchet2","Hatchet3","Hatchet4"};
		model = "\dz\weapons\melee\blade\hatchet.p3d";
	};
	class Proxymachete: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] += {"machete"};
		model = "\dz\weapons\melee\blade\machete.p3d";
	};
};
class CfgSlots
{
	class Slot_hatchet
	{
		name = "hatchet";
		displayName = "Hatchet";
		ghostIcon = "set:mung_inventory image:hatchet";
	};
	class Slot_machete
	{
		name = "machete";
		displayName = "Machete";
		ghostIcon = "set:mung_inventory image:machete";
	};
};
