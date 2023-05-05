////////////////////////////////////////////////////////////////////
//DeRap: mx991\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:54 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsflashlights
	{
		units[] = {"mx991_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgMods
{
	class Munghardsflashlights
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
	class Flashlight;
	class mx991_mung: Flashlight
	{
		scope = 2;
		displayName = "Mx-991";
		descriptionShort = "Mx-991";
		model = "\MunghardsItems\mx991\mx991.p3d";
		rotationFlags = 16;
		SingleUseActions[] = {509,510};
		itemSize[] = {1,3};
		weight = 300;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		inventorySlot[] = {"WalkieTalkie"};
		hiddenSelections[] = {"glass"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,0.9,CO)"};
		hiddenSelectionsMaterials[] = {"munghardsitems\mx991\data\mx991.rvmat"};
	};
};
