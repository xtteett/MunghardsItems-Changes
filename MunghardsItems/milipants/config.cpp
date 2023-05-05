class CfgPatches
{
	class Munghardsmilipants
	{
		units[] = {"milipants_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","Munghardshikingbag"};
	};
};
class CfgMods
{
	class Munghardsmilipants
	{
		dir = "Munghardsitems\milipants";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsmilipants";
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
	class milipants_mung: Clothing
	{
		scope = 2;
		displayName = "milipants";
		descriptionShort = "...";
		model = "\MunghardsItems\milipants\milipants_g.p3d";
		hiddenSelections[] = {"personality"};
		attachments[] = {};
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		rotationFlags = 0;
		itemSize[] = {3,3};
		itemsCargoSize[] = {4,4};
		weight = 3000;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MunghardsItems\milipants\data\milipants.rvmat"}},{0.7,{"MunghardsItems\milipants\data\milipants.rvmat"}},{0.5,{"MunghardsItems\milipants\data\milipants_damaged.rvmat"}},{0.3,{"MunghardsItems\milipants\data\milipants_damaged.rvmat"}},{0.0,{"MunghardsItems\milipants\data\milipants_destroyed.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\MunghardsItems\milipants\milipants.p3d";
			female = "\MunghardsItems\milipants\milipants.p3d";
		};
	};
};
