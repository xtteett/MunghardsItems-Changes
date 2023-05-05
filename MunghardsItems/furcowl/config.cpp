////////////////////////////////////////////////////////////////////
//DeRap: furcowl\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:37 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsfurcowl
	{
		units[] = {"wolffurcowl_mung","bearfurcowl_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardsfurcowl
	{
		dir = "Munghardsitems\furcowl";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsfurcowl";
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
	class wolffurcowl_mung: Clothing
	{
		scope = 2;
		displayName = "Wolf-fur cowl";
		descriptionShort = "Keeps you warm...";
		model = "\MunghardsItems\furcowl\furcowl_g.p3d";
		inventorySlot[] = {"Armband"};
		attachments[] = {};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing"};
		rotationFlags = 0;
		itemSize[] = {3,5};
		itemsCargoSize[] = {0,0};
		weight = 3000;
		absorbency = 0.1;
		heatIsolation = 0.73;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 0;
		soundAttType = "Outdoor";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MunghardsItems\furcowl\data\wolf\furvest_CO.paa"};
		hiddenSelectionsMaterials[] = {"MunghardsItems\furcowl\data\wolf\wolfcowl.rvmat"};
		class ClothingTypes
		{
			male = "\MunghardsItems\furcowl\furcowl.p3d";
			female = "\MunghardsItems\furcowl\furcowl.p3d";
		};
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
			};
		};
	};
	class bearfurcowl_mung: wolffurcowl_mung
	{
		scope = 2;
		displayName = "Bearfur cowl";
		descriptionShort = "Keeps you warm...";
		heatIsolation = 0.93;
		hiddenSelectionsTextures[] = {"MunghardsItems\furcowl\data\bear\bearfurvest_CO.paa"};
		hiddenSelectionsMaterials[] = {"MunghardsItems\furcowl\data\bear\bearcowl.rvmat"};
	};
};
