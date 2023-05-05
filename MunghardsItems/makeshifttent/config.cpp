////////////////////////////////////////////////////////////////////
//DeRap: makeshifttent\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:52 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MunghardsShelter
	{
		units[] = {"makeshifttent_mung","makeshifttent2_mung","makeshifttent_mung_Deployed","makeshifttent2_mung_Deployed"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Crafting","DZ_Structures_Military","DZ_Plants_Bliss","DZ_Plants"};
	};
};
class CfgMods
{
	class MunghardsShelter
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
	class Inventory_Base;
	class makeshifttent_mung: Inventory_Base
	{
		scope = 2;
		displayName = "Improvised shelter";
		descriptionShort = "A Tent crafted from various supplies. To pack the tent back up for travel use the same tool you would to open a can, but be sure to empty the tent of your items first.";
		model = "\MunghardsItems\makeshifttent\tipi_kit.p3d";
		isMeleeWeapon = 0;
		weight = 16000;
		absorbency = 0;
		inventorySlot[] = {"tent"};
		rotationFlags = 16;
		itemSize[] = {6,3};
		lootCategory = "Materials";
		itemBehaviour = 2;
	};
	class makeshifttent2_mung: Inventory_Base
	{
		scope = 2;
		displayName = "Improvised shelter 2";
		descriptionShort = "A Tent crafted from various supplies. To pack the tent back up for travel use the same tool you would to open a can, but be sure to empty the tent of your items first.";
		model = "\MunghardsItems\makeshifttent\tipi_kit.p3d";
		isMeleeWeapon = 0;
		weight = 16000;
		absorbency = 0;
		inventorySlot[] = {"tent"};
		rotationFlags = 16;
		itemSize[] = {6,3};
		lootCategory = "Materials";
		itemBehaviour = 2;
	};
	class Container_Base;
	class makeshifttent_mung_Deployed: Container_Base
	{
		scope = 2;
		displayName = "Improvised Tent";
		descriptionShort = "Improvised Tent";
		model = "\MunghardsItems\makeshifttent\tipi.p3d";
		handheld = "true";
		weight = 10000;
		physLayer = "item_large";
		itemSize[] = {6,3};
		carveNavmesh = 1;
		canBeDigged = 0;
		reversed = 1;
		rotationFlags = 2;
		attachments[] = {"Shoulder"};
		class Cargo
		{
			itemsCargoSize[] = {8,9};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
	class makeshifttent2_mung_Deployed: Container_Base
	{
		scope = 2;
		displayName = "Improvised Tent";
		descriptionShort = "Improvised Tent";
		model = "\MunghardsItems\makeshifttent\bushshelter.p3d";
		handheld = "true";
		weight = 10000;
		physLayer = "item_large";
		itemSize[] = {6,3};
		carveNavmesh = 1;
		canBeDigged = 0;
		reversed = 1;
		rotationFlags = 2;
		attachments[] = {"Shoulder"};
		class Cargo
		{
			itemsCargoSize[] = {8,9};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};
};
