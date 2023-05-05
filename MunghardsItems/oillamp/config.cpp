////////////////////////////////////////////////////////////////////
//DeRap: oillamp\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:56 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsoillamp
	{
		units[] = {"oillamp_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools"};
	};
};
class CfgMods
{
	class Munghardsoillamp
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
	class PortableGasLamp;
	class oillamp_mung: PortableGasLamp
	{
		scope = 2;
		displayName = "Gaslamp";
		descriptionShort = "A lantern style lamp that's fueled by gas";
		model = "\MunghardsItems\oillamp\oillamp.p3d";
		SingleUseActions[] = {509,510};
		InteractActions[] = {1002,1003};
		weight = 330;
		itemSize[] = {2,3};
		rotationFlags = 2;
		inventorySlot[] = {"GasCooker","fishingpole"};
		lootTag[] = {"Camping"};
		lootCategory = "Tools";
		attachments[] = {"GasCanister"};
		containerSlot = "GasCanister";
		hiddenSelections[] = {"body","glass"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\oillamp\oillamp_body.rvmat","\MunghardsItems\oillamp\oillamp_glass.rvmat"};
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
