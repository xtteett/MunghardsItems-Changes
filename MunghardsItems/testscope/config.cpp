////////////////////////////////////////////////////////////////////
//DeRap: testscope\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:30 2023 : 'file' last modified on Wed Feb 15 06:59:14 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsscope
	{
		units[] = {"Leupold_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
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
	class ItemOptics;
	class Leupold_mung: ItemOptics
	{
		scope = 2;
		displayName = "Leupold 24x50";
		descriptionShort = "...";
		model = "Munghardsitems\testscope\testscope.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 800;
		itemSize[] = {5,2};
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
			useModelOptics = 0;
			model = "Munghardsitems\testscope\testscope.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur1"};
			opticsZoomMin = "0.3926/20.5";
			opticsZoomMax = "0.3926/14.5";
			opticsZoomInit = "0.3926/14.5";
			discretefov[] = {"0.3926/14.5","0.3926/20.5"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1600;
			discreteDistance[] = {100,400,600,700,800,900,1000,1100,1200};
			discreteDistanceInitIndex = 1;
			PPMaskProperties[] = {0.5,0.5,0.5,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.4;
		};
	};
};
