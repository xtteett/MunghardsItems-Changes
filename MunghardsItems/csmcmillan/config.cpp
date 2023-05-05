class CfgPatches
{
	class Munghardscsmcmillan
	{
		units[] = {"mcmillan_buttstock"};
		weapons[] = {"csmcmillan_mung"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Magazines","DZ_Weapons_Firearms","DZ_Weapons_Firearms_CZ527","DZ_Weapons_Muzzles","DZ_Weapons_Lights","DZ_Weapons_Optics","DZ_Weapons_Supports","DZ_Weapons_Ammunition"};
		magazines[] = {"Mag_cs5_10Rnd_mung"};
	};
};
class CfgMods
{
	class Munghardscsmcmillan
	{
		dir = "csmcmillan";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "csmcmillan";
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
class CfgMagazines
{
	class Mag_FAL_20Rnd;
	class Mag_cs5_10Rnd_mung: Mag_FAL_20Rnd
	{
		scope = 2;
		displayName = "Mcmillan cs5 10 round Mag";
		descriptionShort = "10 round magazine for the Mcmillan cs5 sniper-rifle";
		model = "\MunghardsItems\csmcmillan\data\magazine\cs5_mag.p3d";
		rotationFlags = 16;
		weight = 91;
		itemSize[] = {1,2};
		count = 10;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		tracersEvery = 0;
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class BoltActionRifle_Base;
	class OpticsInfoRifle;
	class CZ527;
	class csmcmillan_Base: CZ527
	{
		scope = 0;
		animName = "cz527";
		weight = 2720;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 1000;
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		opticsFlare = 0;
		ironsightsExcludingOptics[] = {"BUISOptic","HuntingOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		chamberSize = 1;
		chamberableFrom[] = {"Ammo_308Win"};
		magazines[] = {"Mag_cs5_10Rnd_mung"};
		magazineSwitchTime = 0.38;
		barrelArmor = 900;
		simpleHiddenSelections[] = {"hide_barrel"};
		ejectType = 0;
		recoilModifier[] = {3,3,3};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class NoiseShoot
		{
			strength = 5;
			type = "shot";
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorHomeMadeTail_SoundSet"};
			soundSetShotExt[] = {"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorHomeMadeTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_close_shot_homesilenced_01",1,1,300};
			begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_close_shot_homesilenced_01",1,1,300};
			begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_close_shot_homesilenced_01",1,1,300};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4_close_shot_homesilenced_01",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_Rifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_Rifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_Rifle_Walk
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_Rifle_Run
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_Rifle_Sprint
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_Rifle_Land
				{
					soundSet = "Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
				class drop
				{
					soundset = "rifle_drop_SoundSet";
					id = 898;
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
		};
	};
	class csmcmillan_mung: csmcmillan_Base
	{
		scope = 2;
		displayName = "McMillan CS5";
		descriptionShort = "The McMillan ALIAS CS5 (Concealable Subsonic/Supersonic Suppressed Sniper System) is an American suppressed sniper rifle system.";
		model = "\MunghardsItems\csmcmillan\csmcmillan.p3d";
		itemSize[] = {9,3};
		rotationFlags = 1;
		modes[] = {"Single"};
		attachments[] = {"buttstock_mcmillan","weaponFlashlight","weaponOptics","weaponBipod","weaponBayonet","weaponWrap","WeaponHandguardM4","weaponOpticsHunting"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class mcmillan_buttstock: Inventory_Base
	{
		scope = 2;
		displayName = "Mcmillan cs5 buttstock";
		descriptionShort = "Mcmillan cs5 sniper-rifle buttstock";
		model = "\MunghardsItems\csmcmillan\data\buttstock\buttstock.p3d";
		inventorySlot = "buttstock_mcmillan";
		weight = 354;
		rotationFlags = 16;
		itemSize[] = {2,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {0.2,0.2,0.2};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxybuttstock: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "buttstock_mcmillan";
		model = "\MunghardsItems\csmcmillan\data\buttstock\buttstock.p3d";
	};
};
class CfgSlots
{
	class Slot_buttstock_mcmillan
	{
		name = "buttstock_mcmillan";
		displayName = "Buttstock";
		ghostIcon="set:dayz_inventory image:buttstock";
	};
};
