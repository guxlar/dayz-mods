class Anzio_Base : BoltActionRifle_InnerMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new MosinRecoil(this);
	}
};

class PNC_Anzio : Anzio_Base {};