////////////////////////////////////////////////////////////////////
//DeRap: scope2\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:29 2023 : 'file' last modified on Wed Feb 15 06:59:02 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsscope
	{
		units[] = {"Leupold_PIP_mung","Leupold_ACOG_mung","Leupold_Double_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class CfgMods
{
	class Munghardsscope
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
class cfgvehicles
{
	class Leupold_mung;
	class Leupold_PIP_mung: Leupold_mung
	{
		scope = 2;
		displayName = "Leupold PIP";
		descriptionShort = "...";
		model = "Munghardsitems\scope2\testscope.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 300;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponOpticsMosin","WeaponOptics","weaponOpticsAK","weaponOpticsLRS","weaponOpticsHunting"};
		simulation = "itemoptics";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		memoryPointCamera = "eyescope";
		cameraDir = "cameradir";
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/1";
			opticsZoomMax = "0.3926/1";
			opticsZoomInit = "0.3926/1";
			distanceZoomMin = 100;
			distanceZoomMax = 400;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.13000001,0.010000001};
			PPLensProperties[] = {1,0.12000001,0,0};
			PPBlurProperties = 0.6;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class show
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class Leupold_ACOG_mung: Leupold_mung
	{
		scope = 2;
		displayName = "Leupold Mark5";
		descriptionShort = "...";
		model = "Munghardsitems\scope2\testscope.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 300;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponOpticsMosin","WeaponOptics","weaponOpticsAK","weaponOpticsLRS","weaponOpticsHunting"};
		simulation = "itemoptics";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		memoryPointCamera = "eyescope";
		cameraDir = "cameradir";
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/3";
			opticsZoomMax = "0.3926/3";
			opticsZoomInit = "0.3926/3";
			distanceZoomMin = 100;
			distanceZoomMax = 400;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.13000001,0.010000001};
			PPLensProperties[] = {0,0.12000001,0,0};
			PPBlurProperties = 0.6;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class show
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class Leupold_Double_mung: Leupold_mung
	{
		scope = 2;
		displayName = "Leupold Mark5";
		descriptionShort = "...";
		model = "Munghardsitems\scope2\testscope.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 300;
		itemSize[] = {3,1};
		attachments[] = {"pistolOptics"};
		inventorySlot[] = {"weaponOpticsMosin","WeaponOptics","weaponOpticsAK","weaponOpticsLRS","weaponOpticsHunting"};
		simulation = "itemoptics";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		memoryPointCamera = "eyescope";
		cameraDir = "cameradir";
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur2"};
			opticsZoomMin = "0.3926/1";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			distanceZoomMin = 100;
			distanceZoomMax = 800;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.13000001,0.010000001};
			PPLensProperties[] = {0,0.12000001,0,0};
			PPBlurProperties = 0.6;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.375,0.05};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0.6;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class show
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
};
