////////////////////////////////////////////////////////////////////
//DeRap: hazmatsuit\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:41 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardshazmatsuit
	{
		units[] = {"hazmatsuit_mung","hazmatsuit_legs_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardshazmatsuit
	{
		dir = "Munghardsitems\hazmatsuit";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "hazmatsuit";
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
	class hazmatsuit_mung: Clothing
	{
		scope = 2;
		displayName = "Hazmatsuit";
		descriptionShort = "Full biological protection with some radiation protection.";
		model = "\MunghardsItems\hazmatsuit\hazmatsuit_g.p3d";
		ContinuousActions[] = {190};
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing","Body"};
		weight = 2000;
		itemSize[] = {5,5};
		itemsCargoSize[] = {0,0};
		quickBarBonus = 0;
		heatIsolation = 0.8;
		absorbency = 0;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Coat";
		noHelmet = 0;
		noMask = 0;
		rotationFlags = 16;
		headSelectionsToHide[] = {"Clipping_GP5GasMask"};
		hiddenSelections[] = {"personality"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MunghardsItems\hazmatsuit\data\hazmatsuit.rvmat"}},{0.7,{"MunghardsItems\hazmatsuit\data\hazmatsuit.rvmat"}},{0.5,{"MunghardsItems\hazmatsuit\data\hazmatsuit_damaged.rvmat"}},{0.3,{"MunghardsItems\hazmatsuit\data\hazmatsuit_damaged.rvmat"}},{0.0,{"MunghardsItems\hazmatsuit\data\hazmatsuit_destroyed.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\MunghardsItems\hazmatsuit\hazmatsuit_M.p3d";
			female = "\MunghardsItems\hazmatsuit\hazmatsuit_F.p3d";
		};
		class Protection
		{
			biological = 1.0;
		};
	};
	class hazmatsuit_legs_mung: Clothing
	{
		scope = 0;
		displayName = "Hazmatsuit";
		descriptionShort = "Full biological protection with some radiation protection.";
		model = "\MunghardsItems\hazmatsuit\hazmatsuit_legs.p3d";
		inventorySlot[] = {"Legs"};
		itemInfo[] = {"Clothing","Legs"};
	};
};
