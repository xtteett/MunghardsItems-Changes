////////////////////////////////////////////////////////////////////
//DeRap: pickles\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:58:57 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardspickles
	{
		units[] = {"Pickles_closed","Pickles_opened"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Food","Munghardsoillamp"};
	};
};
class CfgMods
{
	class Munghardspickles
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
	class Edible_Base;
	class Pickles_closed: Edible_Base
	{
		scope = 2;
		displayName = "Jar of pickles";
		descriptionShort = "Munghards special-hot-delicious-saucy pickles";
		model = "\MunghardsItems\pickles\pickles_closed.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 64;
		itemSize[] = {2,3};
		weight = 1000;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Sardines.rvmat"}},{0.7,{"DZ\gear\food\data\Sardines.rvmat"}},{0.5,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.3,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Sardines_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class Pickles_opened: Edible_Base
	{
		scope = 2;
		displayName = "Opened jar of pickles";
		descriptionShort = "Munghards special-hot-delicious-saucy pickles";
		model = "\MunghardsItems\pickles\pickles_open.p3d";
		rotationFlags = 64;
		itemSize[] = {2,3};
		weight = 265;
		SingleUseActions[] = {538};
		ContinuousActions[] = {186};
		varQuantityInit = 350;
		varQuantityMin = 0;
		varQuantityMax = 500;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
					healthLevels[] = {{1,{"DZ\gear\food\data\tuna.rvmat"}},{0.7,{"DZ\gear\food\data\tuna.rvmat"}},{0.5,{"DZ\gear\food\data\tuna_damage.rvmat"}},{0.3,{"DZ\gear\food\data\tuna_damage.rvmat"}},{0,{"DZ\gear\food\data\tuna_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 500;
			water = 200;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
};
