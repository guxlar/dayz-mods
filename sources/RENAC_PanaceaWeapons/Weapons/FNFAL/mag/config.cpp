class CfgPatches
{
	class mag
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
		magazines[]=
		{
			"PNC_MoreMag_FAL_20RndCoupledClamp",
			"PNC_MoreMag_FAL_50Rnd"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_FAL_20Rnd;
	class PNC_MoreMag_FAL_20RndCoupledClamp: Mag_FAL_20Rnd
	{
		scope=2;
		weight=340;
		itemSize[]={3,2};
		count=40;
		model="PanaceaWeapons\Weapons\FNFAL\mag\PNC_Mag20RndCoupledClamp.p3d";
		ammo="Bullet_308Win";
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer",
			"Ammo_308WinAP"
		};
	};
	class PNC_MoreMag_FAL_50Rnd: Mag_FAL_20Rnd
	{
		scope=2;
		displayName="#LAR50RND_00";
		descriptionShort="#LAR50RND_01";
		model="PanaceaWeapons\Weapons\FNFAL\mag\PNC_Mag50Rnd.p3d";
		ammo="Bullet_308Win";
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer",
			"Ammo_308WinAP"
		};
		weight=400;
		itemSize[]={2,2};
		count=50;
	};
};
