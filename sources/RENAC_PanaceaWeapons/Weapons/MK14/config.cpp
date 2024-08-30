class CfgPatches
{
	class MK14
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_MK14"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Magazines"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class PNC_MK14_Base: Rifle_Base
	{
		scope=0;
		displayName="MK 14";
		descriptionShort="#MK14PNC_00";
		model="PanaceaWeapons\Weapons\MK14\PNC_MK14.p3d";
		weight=3800;
		initSpeedMultiplier=1.1;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		WeaponLength=0.94300002;
		barrelArmor=3.888;
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"PNC_weaponMuzzle_308"
		};
		itemSize[]={9,3};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinAP",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"Mag_FAL_20Rnd",
			"PNC_MoreMag_FAL_50Rnd",
			"PNC_MoreMag_FAL_20RndCoupledClamp"
		};
		ejectType=1;
		recoilModifier[]={1.3,1.5,1.3};
		swayModifier[]={2,2,1.1};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M110_Shot_SoundSet",
				"SVD_Tail_SoundSet",
				"SVD_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"SVD_silencerHomeMadeTail_SoundSet",
					"SVD_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.095714286;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"M110_Shot_SoundSet",
				"SVD_Tail_SoundSet",
				"SVD_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"SVD_silencerHomeMadeTail_SoundSet",
					"SVD_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.095714286;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=120;
				shotsToStartOverheating=2;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={-0.02,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.1,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.30000001,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=13300;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_MK14: PNC_MK14_Base
	{
		scope=2;
	};
};
