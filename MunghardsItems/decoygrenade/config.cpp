////////////////////////////////////////////////////////////////////
//DeRap: decoygrenade\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 05 16:13:28 2023 : 'file' last modified on Wed Feb 15 06:58:34 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Munghardsstielhandgranate
	{
		units[] = {"Decoygrenade_mung"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Explosives"};
		ammo[] = {"GunShotGrenade_Ammo","GunShotGrenade_Ammo"};
	};
};
class CfgMods
{
	class Munghardsdecoygrenade
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
	class Grenade_Base;
	class Decoygrenade_mung: Grenade_Base
	{
		scope = 2;
		displayName = "Bullet Can";
		descriptionShort = "use this to make people think you are where you are not.";
		model = "\DZ\gear\drinks\sodacan_used.p3d";
		rotationFlags = 17;
		weight = 300;
		lootTag[] = {"Military_east","Military_west","Police"};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\dz\gear\drinks\Data\SodaCan_pipsi_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{""}},{0.5,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
				class turnOnRadio_Pin
				{
					soundSet = "Grenade_pin_SoundSet";
					id = 1006;
				};
			};
		};
	};
};
class CfgAmmo
{
	class DefaultAmmo;
	class GunShotGrenade_Ammo: DefaultAmmo
	{
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet"};
		class DamageApplied
		{
			type = "FragGrenade";
			class Health
			{
				damage = 0;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseExplosion
		{
			strength = 300;
			type = "shot";
		};
	};
};
