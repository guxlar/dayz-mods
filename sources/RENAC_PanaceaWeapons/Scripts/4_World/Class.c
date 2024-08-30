class PNC_DVL10_Base : CZ527_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}			
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "HuntingOptic" );
			entity.SpawnEntityOnGroundPos("PNC_Mag_DVL10_10rnd", entity.GetPosition());
		}
	}
};
class PNC_W_DVL10 : PNC_DVL10_Base {};

class TAC21_Base : CZ527_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}			
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "HuntingOptic" );
			entity.SpawnEntityOnGroundPos("PNC_TAC21_Mag", entity.GetPosition());
		}
	}
};
class PNC_W_TAC21 : TAC21_Base {};

class M200_Base : CZ527_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}			
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "HuntingOptic" );
			entity.SpawnEntityOnGroundPos("PNC_TAC21_Mag", entity.GetPosition());
		}
	}
};
class PNC_W_M200CheyTac : M200_Base {};


class PNC_MK14_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
};  
class PNC_W_MK14 : PNC_MK14_Base {};

class aek971_base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
};  
class PNC_W_AEK971 : aek971_base {};

class rpk16_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
};  
class PNC_W_RPK16 : rpk16_Base {};

class PNC_VR80_Base : M4A1_Base
{
	void PNC_VR80_Base()
	{
		PanaceaUnfoldOptics(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}	
	}	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};
class PNC_W_VR80 : PNC_VR80_Base {};

class PNC_RemingtonR5_Base : M4A1_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};
class PNC_W_RemingtonR5 : PNC_RemingtonR5_Base {};

class G36_Base : RifleBoltFree_Base
{
	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};
class PNC_W_G36 : G36_Base {};

class PNC_AR15Skeleton_Base : M4A1_Base
{
	void PNC_AR15Skeleton_Base()
	{
		PanaceaUnfoldOptics(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}	
	}	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};
class PNC_W_AR15Skeleton : PNC_AR15Skeleton_Base {};

class PNC_M14_Base : RifleBoltFree_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new Ruger1022Recoil(this); //TODO
	}
	
	override int GetWeaponSpecificCommand(int weaponAction ,int subCommand)
	{
		if ( weaponAction == WeaponActions.RELOAD)
		{
			switch (subCommand)
			{
				case WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_BULLET;
				
				case WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_BULLET;
				
				case WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_NOBULLET;
				
				case WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_NOBULLET;
				
				default:
					return subCommand;
			}
		
		}
		return subCommand;
	}
};
class PNC_W_M14 : PNC_M14_Base {};

class PNC_PKP_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
};  
class PNC_W_PKP : PNC_PKP_Base {};

class AN94_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
};  
class PNC_W_AN94Abakan : AN94_Base {};

class PNC_KIVAARI_Base : SVD_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}
};  
class PNC_W_KIVAARI : PNC_KIVAARI_Base {};
class PNC_W_KIVAARI_camo : PNC_KIVAARI_Base {};
class PNC_W_KIVAARI_hive : PNC_KIVAARI_Base {};
class PNC_W_KIVAARI_kryp : PNC_KIVAARI_Base {};

class PNC_M110_Base : SVD_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}
};  
class PNC_W_M110 : PNC_M110_Base {};

class PNC_HoneyBadger_Base : M4A1_Base
{
	void PNC_HoneyBadger_Base()
	{
		PanaceaUnfoldOptics(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}	
	}	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};  
class PNC_W_HoneyBadger : PNC_HoneyBadger_Base {};
class PNC_W_HoneyBadger_black : PNC_HoneyBadger_Base {};
class PNC_W_HoneyBadger_camo : PNC_HoneyBadger_Base {};
class PNC_W_HoneyBadger_camo2 : PNC_HoneyBadger_Base {};
class PNC_W_HoneyBadger_kry : PNC_HoneyBadger_Base {};
class PNC_W_HoneyBadger_kitty : PNC_HoneyBadger_Base {};

class PNC_SCAR_Base : RifleBoltFree_Base
{
	void PNC_SCAR_Base()
	{
		PanaceaUnfoldOptics(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}	
	}	
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
	
	override bool IsShowingChamberedBullet()
	{
		return false;
	}
};
class PNC_W_SCAR : PNC_SCAR_Base {};

class M60_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
	
	override bool IsShowingChamberedBullet()
	{
		return false;
	}
};
class PNC_W_M60 : M60_Base {};


class PNC_AWM_Base : CZ527_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}			
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "HuntingOptic" );
			entity.SpawnEntityOnGroundPos("PNC_Mag_AWM_5rnd", entity.GetPosition());
		}
	}
};
class PNC_W_AWM : PNC_AWM_Base {};
class PNC_W_AWM_Sand : PNC_AWM_Base {};
class PNC_W_AWM_Snow : PNC_AWM_Base {};



class PNC_Mossberg590Tactical_Base : Mp133Shotgun_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Mp133Recoil(this);
	}
	
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			//entity.GetInventory().CreateInInventory( "M4_T3NRDSOptic" );
			entity.SpawnEntityOnGroundPos("Ammo_12gaPellets", entity.GetPosition());
			entity.SpawnEntityOnGroundPos("Ammo_12gaSlug", entity.GetPosition());
			entity.SpawnEntityOnGroundPos("Ammo_12gaRubberSlug", entity.GetPosition());
		}
	}
	
};
class PNC_W_Mossberg590Tactical : PNC_Mossberg590Tactical_Base {};

class PNC_AK47Tactical_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}		
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "AK_WoodBttstck" );
			entity.GetInventory().CreateInInventory( "AK_RailHndgrd" );
			entity.GetInventory().CreateInInventory( "AK_Bayonet" );
			entity.GetInventory().CreateInInventory( "UniversalLight" );
			entity.GetInventory().CreateInInventory( "M4_T3NRDSOptic" );
			entity.GetInventory().CreateInInventory( "Battery9V" );
			entity.GetInventory().CreateInInventory( "Battery9V" );
			entity.SpawnEntityOnGroundPos("Mag_AKM_Drum75Rnd", entity.GetPosition());
		}
	}	
};
class PNC_W_AK47Tactical: PNC_AK47Tactical_Base {};


class PNC_M30_Base : DoubleBarrel_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Izh43Recoil(this);
	}
				
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.SpawnEntityOnGroundPos("Ammo_12gaPellets", entity.GetPosition());
			entity.SpawnEntityOnGroundPos("Ammo_12gaSlug", entity.GetPosition());
			entity.SpawnEntityOnGroundPos("Ammo_12gaRubberSlug", entity.GetPosition());
		}
	}
};
class PNC_W_M30: PNC_M30_Base {};


class PNC_AR15_Long_Base : M4A1_Base
{
	void PNC_AR15_Long_Base()
	{		
		PanaceaUnfoldOptics(this);	
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
		
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}
	}
};  
class PNC_W_AR15_Long : PNC_AR15_Long_Base {};

class PNC_Arbiter450_Base : M4A1_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};  
class PNC_W_Arbiter450 : PNC_Arbiter450_Base {};

class PNC_Arbiter450Admin_Base : M4A1_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};  
class PNC_W_Arbiter450Admin : PNC_Arbiter450Admin_Base {};

class PNC_ASh127_Base : CZ527_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}	
};  
class PNC_W_ASh127 : PNC_ASh127_Base {};

class PNC_AssaultRifle_Base : CZ61_Base
{
	void PNC_AssaultRifle_Base()
	{		
		PanaceaUnfoldOptics(this);	
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new Cz61Recoil(this);
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}
	}
};  
class PNC_W_AssaultRifle : PNC_AssaultRifle_Base {};

class PNC_AUGA3_Base : UMP45_Base
{
	void PNC_AUGA3_Base()
	{
		PanaceaUnfoldOptics(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}	
	}	
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
};  
class PNC_W_AUGA3 : PNC_AUGA3_Base {};

class PNC_Famas_Base : UMP45_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
};  
class PNC_W_Famas : PNC_Famas_Base {};

class PNC_Aurora_Base : CZ527_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
};  
class PNC_W_Aurora : PNC_Aurora_Base {};

class PNC_AX50_Base : CZ527_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
};  
class PNC_W_AX50 : PNC_AX50_Base {};

class PNC_BarretM82A1_Base : SVD_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}
	override bool IsShowingChamberedBullet()
	{
		return false;
	}
};  
class PNC_W_BarretM82A1 : PNC_BarretM82A1_Base {};
class PNC_W_BarretM82A1_black : PNC_BarretM82A1_Base {};
class PNC_W_BarretM82A1_desert : PNC_BarretM82A1_Base {};
class PNC_W_BarretM82A1_snow : PNC_BarretM82A1_Base {};

class PNC_MG4_Base : FAL_Base
{
	void PNC_MG4_Base()
	{
		PanaceaUnfoldOptics(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}	
	}	
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
};  
class PNC_W_MG4 : PNC_MG4_Base {};

class PNC_SCARH_Base : RifleBoltFree_Base
{
	void PNC_SCARH_Base()
	{
		PanaceaUnfoldOptics(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}	
	}	
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
	
	override bool IsShowingChamberedBullet()
	{
		return false;
	}
};
class PNC_W_SCARH : PNC_SCARH_Base {};

class PNC_origin_base : RifleBoltFree_Base

{
	void PNC_origin_base()
	{
		PanaceaUnfoldOptics(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}	
	}	
	
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
};  
class PNC_W_Origin_12ga : PNC_origin_base {};

class MCX_Base : RifleBoltFree_Base
{	
	void MCX_Base()
	{		
		PanaceaUnfoldOptics(this);	
	}

	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}
	}
};  
class PNC_MCX : MCX_Base {};

class PNC_vssk_Base : CZ527_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
};   
class PNC_VSSK_vychlop : PNC_vssk_Base {};

class PNC_SniperRifle_A_Base : M4A1_Base
{	
	void PNC_SniperRifle_A_Base()
	{		
		PanaceaUnfoldOptics(this);	
	}

	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}
	}
};  
class PNC_W_SniperRifle_A : PNC_SniperRifle_A_Base {};
class PNC_W_SniperRifle_A_camo : PNC_SniperRifle_A_Base {};

class PNC_SuperSniper_Base : M4A1_Base
{
	void PNC_SuperSniper_Base()
	{		
		PanaceaUnfoldOptics(this);	
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
		
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}
	}
};  
class PNC_W_SuperSniper : PNC_SuperSniper_Base {};

class PNC_ORSIST5000_Base : CZ527_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
};  
class PNC_W_ORSIST5000 : PNC_ORSIST5000_Base {};

class PNC_Beowulf50_Base : M4A1_Base
{	
	void PNC_Beowulf50_Base()
	{
		PanaceaUnfoldOptics(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaFoldOptics(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			PanaceaUnfoldOptics(this);
		}	
	}	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};  
class PNC_W_Beowulf50 : PNC_Beowulf50_Base {};

class PNC_CheyTacM300_Base : CZ527_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
};  
class PNC_W_CheyTacM300 : PNC_CheyTacM300_Base {};

class PNC_RemingtonMSR_Base : CZ527_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
};  
class PNC_W_RemingtonMSR : PNC_RemingtonMSR_Base {};

class PNC_AX50_2_Base : CZ527_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
};  
class PNC_W_AX50_2 : PNC_AX50_2_Base {};