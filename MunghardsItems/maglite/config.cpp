////////////////////////////////////////////////////////////////////
//DeRap: maglite\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:52 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsflashlights
	{
		units[] = {"maglite_mung","Airam_mung"};
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
	class maglite_mung: Flashlight
	{
		scope = 2;
		displayName = "Maglite";
		descriptionShort = "Maglite";
		model = "\MunghardsItems\maglite\maglite.p3d";
		rotationFlags = 64;
		SingleUseActions[] = {509,510};
		itemSize[] = {3,1};
		weight = 210;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		hiddenSelections[] = {"cylinder"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat"};
	};
	class Airam_mung: Flashlight
	{
		scope = 2;
		displayName = "Airam Flashlight";
		descriptionShort = "old northern european flashlight";
		model = "\MunghardsItems\maglite\airam.p3d";
		rotationFlags = 64;
		SingleUseActions[] = {509,510};
		itemSize[] = {3,1};
		weight = 210;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		hiddenSelections[] = {"cylinder"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\maglite\airam.rvmat","\MunghardsItems\maglite\airam.rvmat","\MunghardsItems\maglite\airam.rvmat"};
	};
};
