class Arbiter_Base : BoltActionRifle_InnerMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new MosinRecoil(this);
	}
};

class Arbiter : Arbiter_Base {};



modded class WeaponManager
{
    override void Fire(Weapon_Base wpn)
    {
        super.Fire(wpn);
        if(wpn.ClassName().Contains("Arbiter"))
        {
            for( int i = 0; i < wpn.GetMuzzleCount(); i++ )
            {
                    if(wpn.IsChamberEmpty(i))
                    {
                        wpn.EjectCasing(i);
                        wpn.EffectBulletHide(i);
                        wpn.HideBullet(i);
                    }
            }
        }
    }
}
