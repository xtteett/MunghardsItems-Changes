// modded class PlayerBase extends ManBase
// {
//     override void Init()
//     {
//         if ( !GetGame().IsServer() || !GetGame().IsMultiplayer() ) 
// 		{
//             DayzPlayerItemBehaviorCfg     toolsOneHanded = new DayzPlayerItemBehaviorCfg;
//             toolsOneHanded.SetToolsOneHanded();

//             DayzPlayerItemBehaviorCfg     twoHanded = new DayzPlayerItemBehaviorCfg;
//             twoHanded.SetTwoHanded();

//             DayzPlayerItemBehaviorCfg     fireArmsItemBehaviour = new DayzPlayerItemBehaviorCfg;
//             fireArmsItemBehaviour.SetFirearms();

//             DayzPlayerItemBehaviorCfg     heavyItemBehaviour = new DayzPlayerItemBehaviorCfg;
//             heavyItemBehaviour.SetHeavyItems();

//             DayzPlayerItemBehaviorCfg   pistolItemBehaviour = new DayzPlayerItemBehaviorCfg;
//             pistolItemBehaviour.SetPistols();
            
//             // GetDayZPlayerType().AddItemInHandsProfileIK("swmodel3_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_fnp45.asi", pistolItemBehaviour, "dz/anims/anm/player/ik/weapons/fnp45.anm", "dz/anims/anm/player/reloads/FNP45/w_fnp45_states.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("mx991_mung", "dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi", toolsOneHanded,             "dz/anims/anm/player/ik/gear/roadflare.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("Leupold_mung", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", toolsOneHanded,                      "dz/anims/anm/player/ik/attachments/optic/optic_longrange.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("diana_m27_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_izh18.asi", fireArmsItemBehaviour, "dz/anims/anm/player/ik/weapons/izh18.anm", "dz/anims/anm/player/reloads/IZH18/w_izh18_states.anm");
//             // GetDayZPlayerType().AddItemInHandsProfileIK("izh54_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_izh18.asi", fireArmsItemBehaviour, "dz/anims/anm/player/ik/weapons/izh18.anm", "dz/anims/anm/player/reloads/IZH18/w_izh18_states.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("Scythe_Mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", twoHanded,               "dz/anims/anm/player/ik/two_handed/baseballbat.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("sleepingbag_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                "dz/anims/anm/player/ik/two_handed/WaterproofBag.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("katana_Mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", twoHanded,				"dz/anims/anm/player/ik/two_handed/baseballbat.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("shovel_Mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", twoHanded,				"dz/anims/anm/player/ik/two_handed/baseballbat.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("riflesling_colorbase_mung", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,                     "dz/anims/anm/player/ik/camping/combinationlock.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("meleesling_colorbase_mung", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,                     "dz/anims/anm/player/ik/camping/combinationlock.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("oillamp_mung", "dz/anims/workspaces/player/player_main/props/player_main_1h_flashlight.asi", toolsOneHanded,       "dz/anims/anm/player/ik/gear/flashlight.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("jaakari_Colorbase_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("6B38_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("kv5_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("gunwall_kit_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("gunwall_metal_kit_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             // GetDayZPlayerType().AddItemInHandsProfileIK("hardigg_Mung", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour,                     "dz/anims/anm/player/ik/heavy/generator.anm");            
//             GetDayZPlayerType().AddItemInHandsProfileIK("hardigg2_Mung", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour,                     "dz/anims/anm/player/ik/heavy/generator.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("ballgrill_mung", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour,                     "dz/anims/anm/player/ik/heavy/generator.anm");            
//             GetDayZPlayerType().AddItemInHandsProfileIK("logcabin_kit", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("makeshifttent_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("rifleholster_colorbase_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("carrierrig_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("Hikingbagmung_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("oxygentankrig_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("simplebackpack_ColorBase_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", twoHanded,                 "dz/anims/anm/player/ik/two_handed/mountain_g.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("brain_Mung", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", twoHanded,              "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("wonderbread_mung", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", toolsOneHanded,                "dz/anims/anm/player/ik/gear/hammer_ik.anm");
//             GetDayZPlayerType().AddItemInHandsProfileIK("sandwich_mung", "dz/anims/workspaces/player/player_main/props/player_main_1h_fruit.asi", toolsOneHanded,                                "dz/anims/anm/player/ik/gear/pear.anm");      
//         	GetDayZPlayerType().AddItemInHandsProfileIK("sherlockpipe_mung", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,						"dz/anims/anm/player/ik/gear/thermometer.anm");
//         	GetDayZPlayerType().AddItemInHandsProfileIK("cigarette_mung", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,						"dz/anims/anm/player/ik/gear/thermometer.anm");
//         	GetDayZPlayerType().AddItemInHandsProfileIK("cigar_mung", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,						"dz/anims/anm/player/ik/gear/thermometer.anm");
// 		}
//         super.Init();
//     }
// }
