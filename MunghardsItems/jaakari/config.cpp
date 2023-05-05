class CfgPatches
{
	class Munghardsjaakari
	{
		units[] = {"jaakari_brown_mung","jaakari_camo_mung","jaakari_black_mung","jaakari_tan_mung","jaakari_simple_brown_mung","jaakari_simple_camo_mung","jaakari_simple_black_mung","jaakari_simple_tan_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Gear_Containers","DZ_Gear_Consumables","DZ_Gear_Tools","DZ_Gear_Cooking","DZ_Gear_Food","DZ_Gear_Navigation","DZ_Gear_Drinks","DZ_Gear_Camping","DZ_Gear_Optics","DZ_Gear_Crafting","DZ_Weapons_Firearms","DZ_Radio","DZ_Characters_Belts"};
	};
};
class CfgMods
{
	class Munghardsjaakari
	{
		dir = "Munghardsitems\jaakari";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsjaakari";
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
	class jaakari_Colorbase_mung: Clothing
	{
		scope = 0;
		displayName = "jaakari with pouches";
		model = "\MunghardsItems\jaakari\jaakari_g.p3d";
		inventorySlot[] = {"Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemSize[] = {7,8};
		itemsCargoSize[] = {8,8};
		weight = 1600;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		attachments[] = {"Belt_Left","WalkieTalkie","flashlight","Chemlight","CookingEquipment"};
		hiddenSelections[] = {"zbytek"};
		class ClothingTypes
		{
			male = "\MunghardsItems\jaakari\jaakari.p3d";
			female = "\MunghardsItems\jaakari\jaakari.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MunghardsItems\jaakari\data\jaakari.rvmat"}},{0.7,{"MunghardsItems\jaakari\data\jaakari.rvmat"}},{0.5,{"MunghardsItems\jaakari\data\jaakari_damaged.rvmat"}},{0.3,{"MunghardsItems\jaakari\data\jaakari_damaged.rvmat"}},{0.0,{"MunghardsItems\jaakari\data\jaakari_destroyed.rvmat"}}};
				};
			};
		};
	};
	class jaakari_simple_Colorbase_mung: jaakari_Colorbase_mung
	{
		displayName = "jaakari";
		model = "\MunghardsItems\jaakari\jaakari_simple_g.p3d";
		itemSize[] = {5,8};
		itemsCargoSize[] = {5,8};
		class ClothingTypes
		{
			male = "\MunghardsItems\jaakari\jaakari_simple.p3d";
			female = "\MunghardsItems\jaakari\jaakari_simple.p3d";
		};
	};
	class jaakari_brown_mung: jaakari_Colorbase_mung
	{
		scope = 2;
		displayName = "Jaakari brown";
		hiddenSelectionsTextures[] = {"MunghardsItems\jaakari\data\Jaakari_backpack_lp_brown_CO.paa"};
	};
	class jaakari_camo_mung: jaakari_Colorbase_mung
	{
		scope = 2;
		displayName = "Jaakari camo";
		hiddenSelectionsTextures[] = {"MunghardsItems\jaakari\data\Jaakari_backpack_lp_camo_CO.paa"};
	};
	class jaakari_black_mung: jaakari_Colorbase_mung
	{
		scope = 2;
		displayName = "Jaakari black";
		hiddenSelectionsTextures[] = {"MunghardsItems\jaakari\data\Jaakari_backpack_lp_black_CO.paa"};
	};
	class jaakari_tan_mung: jaakari_Colorbase_mung
	{
		scope = 2;
		displayName = "Jaakari tan";
		hiddenSelectionsTextures[] = {"MunghardsItems\jaakari\data\Jaakari_backpack_lp_tan_CO.paa"};
	};
	class jaakari_simple_brown_mung: jaakari_simple_Colorbase_mung
	{
		scope = 2;
		displayName = "Jaakari brown";
		hiddenSelectionsTextures[] = {"MunghardsItems\jaakari\data\Jaakari_backpack_lp_brown_CO.paa"};
	};
	class jaakari_simple_camo_mung: jaakari_simple_Colorbase_mung
	{
		scope = 2;
		displayName = "Jaakari camo";
		hiddenSelectionsTextures[] = {"MunghardsItems\jaakari\data\Jaakari_backpack_lp_camo_CO.paa"};
	};
	class jaakari_simple_black_mung: jaakari_simple_Colorbase_mung
	{
		scope = 2;
		displayName = "Jaakari black";
		hiddenSelectionsTextures[] = {"MunghardsItems\jaakari\data\Jaakari_backpack_lp_black_CO.paa"};
	};
	class jaakari_simple_tan_mung: jaakari_simple_Colorbase_mung
	{
		scope = 2;
		displayName = "Jaakari tan";
		hiddenSelectionsTextures[] = {"MunghardsItems\jaakari\data\Jaakari_backpack_lp_tan_CO.paa"};
	};
};
