////////////////////////////////////////////////////////////////////
//DeRap: diana_m27\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:34 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsdiana_m27
	{
		units[] = {};
		weapons[] = {"diana_m27_mung"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class CfgMods
{
	class Munghardsdiana_m27
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
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Izh18_Base;
	class diana_m27_Base: Izh18_Base
	{
		scope = 0;
		rotationFlags = 16;
		weight = 2300;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		PPDOFProperties[] = {1,0.5,10,175,4,10};
		optics = 1;
		opticsFlare = 0;
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		forceOptics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_22"};
		magazines[] = {};
		magazineSwitchTime = 0.0;
		barrelArmor = 1000;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_dry",0.5,1,20};
		reloadAction = "ReloadIZH18";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_reload",0.8,1,20};
		hiddenSelections[] = {"camo","zasleh"};
		modes[] = {"Single"};
		class NoiseShoot
		{
			strength = 5;
			type = "shot";
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"diana_m27_Shot_SoundSet","",""};
			soundSetShotExt[] = {{"Ruger1022_silencerHomeMade_SoundSet","",""}};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_1outof10";
			recoilProne = "recoil_single_primary_1outof10";
			dispersion = 0.0025;
			magazineSlot = "magazine";
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
		};
	};
	class diana_m27_mung: diana_m27_Base
	{
		scope = 2;
		displayName = "Diana model 27";
		descriptionShort = "";
		model = "\MunghardsItems\diana_m27\diana_m27.p3d";
		attachments[] = {};
		itemSize[] = {8,2};
		simpleHiddenSelections[] = {"hide_barrel"};
	};
};
class cfgSoundsets
{
	class Rifle_Shot_Base_SoundSet;
	class diana_m27_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"diana_m27_closeShot_SoundShader","diana_m27_midShot_SoundShader","diana_m27_distShot_SoundShader"};
	};
};
class CfgSoundShaders
{
	class diana_m27_closeShot_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\Ruger1022\Ruger1022_close_shot_01",1},{"DZ\sounds\weapons\firearms\Ruger1022\Ruger1022_close_shot_02",1},{"DZ\sounds\weapons\firearms\Ruger1022\Ruger1022_close_shot_03",1}};
		volume = 1.7782794;
		range = 2;
		rangeCurve[] = {{0,0.2},{2,1},{4,0},{5,0}};
	};
	class diana_m27_midShot_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\Ruger1022\Ruger1022_mid_shot_01",1},{"DZ\sounds\weapons\firearms\Ruger1022\Ruger1022_mid_shot_02",1},{"DZ\sounds\weapons\firearms\Ruger1022\Ruger1022_mid_shot_03",1}};
		volume = 0.56234133;
		range = 4;
		rangeCurve[] = {{0,0.2},{2,1},{4,0},{5,0}};
	};
	class diana_m27_distShot_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\Ruger1022\Ruger1022_dist_shot_01",1},{"DZ\sounds\weapons\firearms\Ruger1022\Ruger1022_dist_shot_02",1},{"DZ\sounds\weapons\firearms\Ruger1022\Ruger1022_dist_shot_03",1}};
		volume = 1;
		range = 5;
		rangeCurve[] = {{0,0},{2,0},{4,1},{5,1}};
	};
};
