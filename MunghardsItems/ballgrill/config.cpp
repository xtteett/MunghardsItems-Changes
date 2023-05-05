class CfgPatches
{
	class Munghardsballgrill
	{
		units[] = {"ballgrill_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Cooking","DZ_Vehicles_Parts"};
	};
};
class CfgMods
{
	class Munghardsballgrill
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
	class Container_Base;
	class ballgrill_mung: Container_Base
	{
		scope = 2;
		displayName = "Ballgrill";
		descriptionShort = "Cook the Cookies";
		model = "\MunghardsItems\ballgrill\ballgrill.p3d";
		handheld = "true";
		carveNavmesh = 1;
		itemBehaviour = 1;
		canBeDigged = 0;
		weight = 50000;
		itemSize[] = {8,10};
		physLayer = "item_large";
		rotationFlags = 2;
		InteractActions[] = {1002,1003};
		attachments[] = {"GasCanister"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {6,6};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class EnergyManager
		{
			switchOnAtSpawn = 0;
			autoSwitchOff = 1;
			autoSwitchOffWhenInCargo = 1;
			energyStorageMax = 0;
			energyUsagePerSecond = 0.1;
			energyAtSpawn = 0;
			powerSocketsCount = 0;
			plugType = 7;
			attachmentAction = 1;
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxykv5: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"GasCanister"};
		model = "\MunghardsItems\KV5\kv5.p3d";
	};
};
class CfgSlots
{
	class Slot_kv5
	{
		name = "GasCanister";
		displayName = "Gas Canister";
		ghostIcon="set:dayz_inventory image:gascanister";
	};
};