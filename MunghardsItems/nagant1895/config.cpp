////////////////////////////////////////////////////////////////////
//DeRap: nagant1895\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:54 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsnagant
	{
		units[] = {};
		weapons[] = {"Nagant1895_mung"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","Munghardsswmodel3"};
	};
};
class CfgMods
{
	class Munghardsnagant
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
class CfgWeapons
{
	class swmodel3_mung;
	class Nagant1895_mung: swmodel3_mung
	{
		scope = 2;
		displayName = "Nagant1895";
		descriptionShort = "Nagant1895";
		model = "\MunghardsItems\nagant1895\nagant1895.p3d";
		itemSize[] = {4,3};
		rotationFlags = 1;
		hiddenSelections[] = {"metal","drum","handle"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\nagant1895\data\nagant1895.rvmat","\MunghardsItems\nagant1895\data\nagant1895.rvmat","\MunghardsItems\nagant1895\data\nagant1895.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\pistols\magnum\data\magnum.rvmat","DZ\weapons\pistols\magnum\data\magnum_damage.rvmat","DZ\weapons\pistols\magnum\data\magnum_destruct.rvmat"};
		};
	};
};
