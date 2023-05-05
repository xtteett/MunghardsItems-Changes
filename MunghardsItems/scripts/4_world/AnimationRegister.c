modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterFireArms(pType, pBehavior);
		
		pType.AddItemInHandsProfileIK("diana_m27_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_izh18.asi", pBehavior, "dz/anims/anm/player/ik/weapons/izh18.anm", "dz/anims/anm/player/reloads/IZH18/w_izh18_states.anm");
	}

	override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.RegisterHeavy( pType, pBehavior );

		pType.AddItemInHandsProfileIK("hardigg2_Mung", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/generator.anm");
		pType.AddItemInHandsProfileIK("ballgrill_mung", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/generator.anm");            
	}

    override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
        super.RegisterOneHanded( pType, pBehavior );

		pType.AddItemInHandsProfileIK("cigar_mung", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/thermometer.anm");
		pType.AddItemInHandsProfileIK("cigarette_mung", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/thermometer.anm");
		pType.AddItemInHandsProfileIK("Leupold_mung", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_longrange.anm");
		pType.AddItemInHandsProfileIK("meleesling_colorbase_mung", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/camping/combinationlock.anm");
		pType.AddItemInHandsProfileIK("mx991_mung", "dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi", pBehavior, "dz/anims/anm/player/ik/gear/roadflare.anm");
		pType.AddItemInHandsProfileIK("oillamp_mung", "dz/anims/workspaces/player/player_main/props/player_main_1h_flashlight.asi", pBehavior, "dz/anims/anm/player/ik/gear/flashlight.anm");
		pType.AddItemInHandsProfileIK("riflesling_colorbase_mung", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/camping/combinationlock.anm");
		pType.AddItemInHandsProfileIK("sandwich_mung", "dz/anims/workspaces/player/player_main/props/player_main_1h_fruit.asi", pBehavior, "dz/anims/anm/player/ik/gear/pear.anm");      
		pType.AddItemInHandsProfileIK("sherlockpipe_mung", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/thermometer.anm");
		pType.AddItemInHandsProfileIK("wonderbread_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");
		pType.AddItemInHandsProfileIK("Pickles_closed", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,						"dz/anims/anm/player/ik/gear/food_can.anm");
		pType.AddItemInHandsProfileIK("Pickles_opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,				"dz/anims/anm/player/ik/gear/food_can_opened.anm");
	}

	override void RegisterTwoHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.RegisterTwoHanded( pType, pBehavior );

		pType.AddItemInHandsProfileIK("Scythe_Mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/baseballbat.anm");
		pType.AddItemInHandsProfileIK("sleepingbag_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/WaterproofBag.anm");
		pType.AddItemInHandsProfileIK("katana_Mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/baseballbat.anm");
		// pType.AddItemInHandsProfileIK("shovel_Mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/baseballbat.anm");
		pType.AddItemInHandsProfileIK("jaakari_Colorbase_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("6B38_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("kv5_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("gunwall_kit_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("gunwall_metal_kit_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("logcabin_kit", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("makeshifttent_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("rifleholster_colorbase_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("carrierrig_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("Hikingbagmung_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("oxygentankrig_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("simplebackpack_ColorBase_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
		pType.AddItemInHandsProfileIK("brain_Mung", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
	}
}