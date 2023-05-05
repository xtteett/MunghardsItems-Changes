class CfgPatches
{
	class Munghardssimplebackpack
	{
		units[] = {"simplebackpack_blue_mung","simplebackpack_camoblack_mung","simplebackpack_green_mung","simplebackpack_redpink_mung","simplebackpack_redyellow_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Gear_Containers","DZ_Gear_Consumables","DZ_Gear_Tools","DZ_Gear_Cooking","DZ_Gear_Food","DZ_Gear_Navigation","DZ_Gear_Drinks","DZ_Gear_Camping","DZ_Gear_Optics","DZ_Gear_Crafting","DZ_Characters_Belts"};
	};
};
class CfgMods
{
	class Munghardssimplebackpack
	{
		dir = "Munghardsitems\simplebackpack";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "simplebackpack";
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
	class simplebackpack_ColorBase_mung: Clothing
	{
		displayName = "Simple backpack";
		descriptionShort = "A Simple backpack with the possibility to attach some items.";
		model = "\MunghardsItems\simplebackpack\simplebackpack_g.p3d";
		inventorySlot[] = {"Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 0;
		itemSize[] = {4,6};
		itemsCargoSize[] = {6,5};
		weight = 2300;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		attachments[] = {"teddy","protectorcase","flashlight","Belt_Left","waterproofbag"};
		hiddenSelections[] = {"zbytek","groundmodel"};
		class ClothingTypes
		{
			male = "\MunghardsItems\simplebackpack\simplebackpack.p3d";
			female = "\MunghardsItems\simplebackpack\simplebackpack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MunghardsItems\simplebackpack\data\simplebackpack.rvmat"}},{0.7,{"MunghardsItems\simplebackpack\data\simplebackpack.rvmat"}},{0.5,{"MunghardsItems\simplebackpack\data\simplebackpack_damaged.rvmat"}},{0.3,{"MunghardsItems\simplebackpack\data\simplebackpack_damaged.rvmat"}},{0.0,{"MunghardsItems\simplebackpack\data\simplebackpack_destroyed.rvmat"}}};
				};
			};
		};
	};
	class simplebackpack_blue_mung: simplebackpack_ColorBase_mung
	{
		scope = 2;
		descriptionShort = "Munghards simple blue backpack";
		hiddenSelectionsTextures[] = {"MunghardsItems\simplebackpack\data\simplebackpack_co.paa","MunghardsItems\simplebackpack\data\simplebackpack_co.paa"};
	};
	class simplebackpack_camoblack_mung: simplebackpack_ColorBase_mung
	{
		scope = 2;
		descriptionShort = "Munghards simple camo/black backpack";
		hiddenSelectionsTextures[] = {"MunghardsItems\simplebackpack\data\simplebackpack_camoblack_co.paa","MunghardsItems\simplebackpack\data\simplebackpack_camoblack_co.paa"};
	};
	class simplebackpack_green_mung: simplebackpack_ColorBase_mung
	{
		scope = 2;
		descriptionShort = "Munghards simple green backpack";
		hiddenSelectionsTextures[] = {"MunghardsItems\simplebackpack\data\simplebackpack_green_co.paa","MunghardsItems\simplebackpack\data\simplebackpack_green_co.paa"};
	};
	class simplebackpack_redpink_mung: simplebackpack_ColorBase_mung
	{
		scope = 2;
		descriptionShort = "Munghards simple red/pink backpack";
		hiddenSelectionsTextures[] = {"MunghardsItems\simplebackpack\data\simplebackpack_redpink_co.paa","MunghardsItems\simplebackpack\data\simplebackpack_redpink_co.paa"};
	};
	class simplebackpack_redyellow_mung: simplebackpack_ColorBase_mung
	{
		scope = 2;
		descriptionShort = "Munghards simple red/yellow backpack";
		hiddenSelectionsTextures[] = {"MunghardsItems\simplebackpack\data\simplebackpack_redyellow_co.paa","MunghardsItems\simplebackpack\data\simplebackpack_redyellow_co.paa"};
	};
	class Container_Base;
	class Bear_ColorBase: Container_Base
	{
		inventorySlot[] += {"teddy","Bear1","Bear2","Bear3","Bear4"};
	};
	class SmallProtectorCase: Container_Base
	{
		inventorySlot[] += {"protectorcase"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyteddybear: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"teddy"};
		model = "\dz\gear\containers\teddybear.p3d";
	};
	class Proxyprotector_case: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"protectorcase"};
		model = "\dz\gear\containers\protector_case.p3d";
	};
};
class CfgSlots
{
	class Slot_teddy
	{
		name = "teddy";
		displayName = "Teddy Bear";
		ghostIcon = "set:mung_inventory image:teddybear";
	};
	class Slot_protectorcase
	{
		name = "protectorcase";
		displayName = "Protector Case";
		ghostIcon = "set:mung_inventory image:case";
	};
};
