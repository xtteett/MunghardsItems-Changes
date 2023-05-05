////////////////////////////////////////////////////////////////////
//DeRap: tacvest\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:13 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardstacvest
	{
		units[] = {"tacvest_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","Munghardshikingbag","DZ_Characters_Vests"};
	};
};
class CfgMods
{
	class Munghardstacvest
	{
		dir = "Munghardsitems\tacvest";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardstacvest";
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
	class tacvest_mung: Clothing
	{
		scope = 2;
		displayName = "Tacticalvest";
		descriptionShort = "...";
		model = "\MunghardsItems\tacvest\tacvest_g.p3d";
		inventorySlot[] = {"Vest"};
		attachments[] = {"VestHolster","VestPouch","VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		rotationFlags = 2;
		itemSize[] = {3,5};
		itemsCargoSize[] = {6,4};
		weight = 3000;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 0;
		soundAttType = "Outdoor";
		class ClothingTypes
		{
			male = "\MunghardsItems\tacvest\tacvest.p3d";
			female = "\MunghardsItems\tacvest\tacvest.p3d";
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
};
