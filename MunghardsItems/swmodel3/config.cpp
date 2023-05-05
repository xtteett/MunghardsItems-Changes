////////////////////////////////////////////////////////////////////
//DeRap: swmodel3\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:12 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsswmodel3
	{
		units[] = {};
		weapons[] = {"swmodel3_mung"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols","DZ_Pistols_Glock"};
	};
};
class CfgMods
{
	class Munghardsswmodel3
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
	class Glock19;
	class swmodel3_mung: Glock19
	{
		scope = 2;
		displayName = "Smith & Wesson model 3";
		descriptionShort = "...";
		model = "\MunghardsItems\swmodel3\swmodel3.p3d";
		rotationFlags = 16;
		itemSize[] = {4,3};
		ironsightsExcludingOptics[] = {};
		attachments[] = {};
		magazines[] = {"Mag_357Speedloader_6Rnd"};
		chamberableFrom[] = {"Ammo_357"};
		chamberSize = 6;
		chamberedRound = "";
		chamberTime = 0.5;
		cartridgeCreateTime[] = {0.8};
		drumReloadStart = 1;
		drumReloadEnd = 0.8;
		ejectType = 9;
		recoilModifier[] = {3,3,0.2};
		simpleHiddenSelections[] = {"six","five","four","three","two","one"};
		modes[] = {"Single"};
		class Mode_SemiAuto;
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Magnum_Shot_SoundSet","Magnum_Tail_SoundSet","Magnum_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\firearms\magnum\magnum_close_shot_02",1,1,700};
			begin2[] = {"dz\sounds\weapons\firearms\magnum\magnum_close_shot_01",1,1,700};
			begin3[] = {"dz\sounds\weapons\firearms\magnum\magnum_close_shot_03",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.25;
			recoil = "recoil_magnum";
			recoilProne = "recoil_magnum_prone";
			dispersion = 0.02;
			magazineSlot = "magazine";
		};
	};
};
