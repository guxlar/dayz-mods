class VSK94_VTR_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}		
		
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{		
			entity.GetInventory().CreateInInventory( "M4_T3NRDSOptic" );	
			entity.GetInventory().CreateInInventory( "Battery9V" );	
			entity.SpawnEntityOnGroundPos("VTR_Mag_VSK94", entity.GetPosition());
		}
	}
};
class VTR_VSK94 : VSK94_VTR_Base{};