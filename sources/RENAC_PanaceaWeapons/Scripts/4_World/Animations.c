modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );
     
        pType.AddItemInHandsProfileIK("PNC_AR15_Long_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("Arbiter_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mosin1903.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mosin9130.anm",  "dz/anims/anm/player/reloads/mosin9130/w_mosin9130_states.anm");
		pType.AddItemInHandsProfileIK("Anzio_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mosin1903.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mosin9130.anm",  "dz/anims/anm/player/reloads/mosin9130/w_mosin9130_states.anm");
		pType.AddItemInHandsProfileIK("G36_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("AN94_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("aek971_base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("PNC_AssaultRifle_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/CZ61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");
		pType.AddItemInHandsProfileIK("PNC_Aurora_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("TAC21_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("PNC_AX50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("PNC_AX50_2_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("PNC_BarretM82A1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm","dz/anims/anm/player/reloads/SVD/w_SVD_states.anm");
		pType.AddItemInHandsProfileIK("PNC_MG4_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
		pType.AddItemInHandsProfileIK("PNC_SniperRifle_A_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("PNC_SuperSniper_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("PNC_ORSIST5000_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("PNC_Beowulf50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("PNC_CheyTacM300_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("M200_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("PNC_RemingtonMSR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("PNC_Mossberg590Shockwave_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mp133.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp133.anm","dz/anims/anm/player/reloads/MP133/w_mp133_states.anm");
		pType.AddItemInHandsProfileIK("PNC_M30_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_izh43.asi", pBehavior, "dz/anims/anm/player/ik/weapons/izh43.anm", "dz/anims/anm/player/reloads/IZH43/w_IZH43_states.anm");
		pType.AddItemInHandsProfileIK("PNC_ASh127_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("PNC_AWM_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("PNC_HoneyBadger_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("PNC_KIVAARI_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm","dz/anims/anm/player/reloads/SVD/w_SVD_states.anm");
		pType.AddItemInHandsProfileIK("PNC_M110_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm","dz/anims/anm/player/reloads/SVD/w_SVD_states.anm");
		pType.AddItemInHandsProfileIK("PNC_PKP_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("PNC_vssk_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
		pType.AddItemInHandsProfileIK("rpk16_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("PNC_M14_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ruger1022.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ruger1022.anm", "dz/anims/anm/player/reloads/ruger1022/w_Ruger1022_states.anm");
		pType.AddItemInHandsProfileIK("PNC_AR15Skeleton_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("PNC_Famas_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ump45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ump.anm","dz/anims/anm/player/reloads/UMP45/w_UMP45_states.anm");
		pType.AddItemInHandsProfileIK("PNC_AUGA3_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ump45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ump.anm","dz/anims/anm/player/reloads/UMP45/w_UMP45_states.anm");
		pType.AddItemInHandsProfileIK("evo3_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ump45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ump.anm","dz/anims/anm/player/reloads/UMP45/w_UMP45_states.anm");
		pType.AddItemInHandsProfileIK("PNC_VR80_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("MCX_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("PNC_M110_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("PNC_HK417_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("PNC_RemingtonR5_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("PNC_MK14_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("PNC_origin_base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
		pType.AddItemInHandsProfileIK("M60_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
		pType.AddItemInHandsProfileIK("PNC_SCAR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
		pType.AddItemInHandsProfileIK("PNC_SCARH_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
		pType.AddItemInHandsProfileIK("PNC_DVL10_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
        pType.AddItemInHandsProfileIK("VSK94_VTR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");        
         
	};

       override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
		super.RegisterOneHanded( pType, pBehavior );		
		pType.AddItemInHandsProfileIK("Fal_PlasticHundle", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");
		pType.AddItemInHandsProfileIK("Fal_Compensator_1", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");
		pType.AddItemInHandsProfileIK("Fal_Compensator_2", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");
		pType.AddItemInHandsProfileIK("Fal_OeBttstckWooden", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/buttstock_fal_oe.anm");
		pType.AddItemInHandsProfileIK("Fal_FNFAL_WoodenHndgrd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
		pType.AddItemInHandsProfileIK("PNC_PRK16_butt", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
		pType.AddItemInHandsProfileIK("PNC_RPK16_Handguard_black", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
		pType.AddItemInHandsProfileIK("PNC_RPK16_Handguard_Green", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
		pType.AddItemInHandsProfileIK("PNC_RPK16_Handguard_Tan", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
		pType.AddItemInHandsProfileIK("PNC_MCXButt", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
		pType.AddItemInHandsProfileIK("PNC_RPK16_Handguard_VLTOR_black", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
		pType.AddItemInHandsProfileIK("PNC_RPK16_Handguard_VLTOR_green", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
		pType.AddItemInHandsProfileIK("PNC_RPK16_Handguard_VLTOR_tan", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
		pType.AddItemInHandsProfileIK("Fal_FNFAL_RISHndgrd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
		pType.AddItemInHandsProfileIK("Fal_Bipods", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/gear/Cooking_Tripod.anm");
		pType.AddItemInHandsProfileIK("PNC_MoreMag_FAL_20RndCoupledClamp", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("PNC_SCARH_40Rnd_Coupled", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("PNC_SCARH_20Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("PNC_M60_Mag", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("PNC_TAC21_Mag", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("PNC_MoreMag_FAL_50Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Famas_Mag", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_W_Knife", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior,"dz/anims/anm/player/ik/gear/kitchenknife.anm"); 
		pType.AddItemInHandsProfileIK("PNC_W_AXE", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,"dz/anims/anm/player/ik/gear/Hatchet.anm"); 		
		pType.AddItemInHandsProfileIK("PNC_HoneyBadger_Bttstck", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");
		pType.AddItemInHandsProfileIK("PNC_KIVAARI_Bttstck", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");
		pType.AddItemInHandsProfileIK("PNC_AR15_Bttstck", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");
		pType.AddItemInHandsProfileIK("PNC_AR15_Bttstck_2", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");		
		pType.AddItemInHandsProfileIK("PNC_Mag_AR15_Long_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_SuperSniper_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_M110_Mag", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_Beowulf50_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_G36_Mag", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_Arbiter450_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_ASh127_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_AssaultRifle_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_Aurora_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_ORIGIN_Drum_Mag", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_ORIGIN_Mag", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_AX50_5rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/ammunition/9x39_20RoundBox.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_AX50_2_5rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/ammunition/9x39_20RoundBox.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_BarretM82A1_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_MG4_100Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("PNC_RPK16_Drum", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_SniperRifle_A_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_svd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_ORSIST5000_5rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,			 	"dz/anims/anm/player/ik/ammunition/9x39_20RoundBox.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_CheyTacM300_7rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,			 	"dz/anims/anm/player/ik/ammunition/9x39_20RoundBox.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_RemingtonMSR_5rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,			 	"dz/anims/anm/player/ik/ammunition/9x39_20RoundBox.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_HoneyBadger_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_HoneyBadger_60Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_HoneyBadger_Coupled_60Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 			"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_KIVAARI_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_svd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_SuperSniper_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_svd.anm");
		pType.AddItemInHandsProfileIK("PNC_MoreMag_VAL_20RndCoupledClamp", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_svd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_PKP_200Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_svd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_VR80_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_M110_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_RSASS_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("PNC_Mag_DVL_10rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_cz527.anm");
		
		
		pType.AddItemInHandsProfileIK("PNC_Kriss_Suppressor", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,							"dz/anims/anm/player/ik/attachments/muzzle/suppressor_45acp.anm");
		pType.AddItemInHandsProfileIK("PNC_BarretM82A1_Suppressor", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");
		pType.AddItemInHandsProfileIK("PNC_Aurora_Suppressor", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_9mm", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,							"dz/anims/anm/player/ik/attachments/muzzle/suppressor_45acp.anm");
		pType.AddItemInHandsProfileIK("origin12ga", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,							"dz/anims/anm/player/ik/attachments/muzzle/suppressor_45acp.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_45acp", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,							"dz/anims/anm/player/ik/attachments/muzzle/suppressor_45acp.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_357", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,							"dz/anims/anm/player/ik/attachments/muzzle/suppressor_45acp.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_556mm_1", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_556mm_2", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_12ga", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_308Win", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_338_1", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_338_2", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_762mm_39_1", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_762mm_39_2", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_HoneyBadger_Suppressor_01", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_HoneyBadger_Suppressor_02", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_HoneyBadger_Suppressor_03", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_556mm_Legion", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_338", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_556mm", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_65_Creedmore", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_408_CheyTac", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		pType.AddItemInHandsProfileIK("PNC_Suppressor_308Win_M110_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,								"dz/anims/anm/player/ik/attachments/muzzle/suppressor_545.anm");
		
		
		pType.AddItemInHandsProfileIK("PNC_AmmoBox_338_20Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,			 	"dz/anims/anm/player/ik/ammunition/9x39_20RoundBox.anm");
		pType.AddItemInHandsProfileIK("PNC_AmmoBox_220Swift_20Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,			 	"dz/anims/anm/player/ik/ammunition/9x39_20RoundBox.anm");
		pType.AddItemInHandsProfileIK("PNC_AmmoBox_12_7x99_10Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,			 	"dz/anims/anm/player/ik/ammunition/9x39_20RoundBox.anm");
		pType.AddItemInHandsProfileIK("PNC_AmmoBox_127x55_5Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,			 	"dz/anims/anm/player/ik/ammunition/9x39_20RoundBox.anm");
		
		pType.AddItemInHandsProfileIK("PNC_Optic_Holosight", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, 						"dz/anims/anm/player/ik/attachments/optic/optic_reflex.anm");
		pType.AddItemInHandsProfileIK("PNC_Optic_LongRange", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, 						"dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
		pType.AddItemInHandsProfileIK("PNC_Optic_Ghost", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior,							"dz/anims/anm/player/ik/attachments/optic/optic_acog.anm");
		pType.AddItemInHandsProfileIK("PNC_Optic_Rhino", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, 							"dz/anims/anm/player/ik/attachments/optic/optic_m68_cco.anm");
		pType.AddItemInHandsProfileIK("PNC_Optic_NightScope", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, 						"dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
		
		pType.AddItemInHandsProfileIK("PNC_SkullMask", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,						"dz/anims/anm/player/ik/gear/dallas_mask.anm");

	};  
};
