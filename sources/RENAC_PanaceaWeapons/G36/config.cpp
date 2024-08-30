class CfgPatches
{
	class G36
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_G36",
			"PNC_W_G36_camo",
			"PNC_W_G36_hive",
			"PNC_W_G36_kryp"
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
	class G36_Base: Rifle_Base
	{
		scope=0;
		displayName="HK-G36";
		descriptionShort="#G36_00";
		model="PanaceaWeapons\G36\G36.p3d";
		weight=3800;
		absorbency=0;
		initSpeedMultiplier=0.80000001;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		WeaponLength=0.64300001;
		barrelArmor=3.888;
		attachments[]=
		{
			"weaponMuzzleM4",
			"weaponOptics",
			"weaponWrap",
			"weaponFlashlight"
		};
		itemSize[]={6,3};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45AP",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_CMAG_30Rnd_Banana",
			"PNC_MoreMag_M4Drum_60Rnd",
			"PNC_MoreMag_M4Drum_100Rnd"
		};
		ejectType=1;
		recoilModifier[]={0.60000002,0.60000002,0.60000002};
		swayModifier[]={2,2,1.1};
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M4_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M4_silencer_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"M4_silencerHomeMade_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.068000004;
			dispersion=9.9999997e-05;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"M4_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M4_silencer_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"M4_silencerHomeMade_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.068000004;
			dispersion=9.9999997e-05;
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
					hitpoints=3500;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"PanaceaWeapons\G36\data\material.rvmat",
								"PanaceaWeapons\G36\data\mag_material.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PanaceaWeapons\G36\data\material.rvmat",
								"PanaceaWeapons\G36\data\mag_material.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PanaceaWeapons\G36\data\material_damage.rvmat",
								"PanaceaWeapons\G36\data\material_damage2.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PanaceaWeapons\G36\data\material_damage.rvmat",
								"PanaceaWeapons\G36\data\material_damage2.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"PanaceaWeapons\G36\data\material_destruct.rvmat",
								"PanaceaWeapons\G36\data\material_destruct2.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_G36: G36_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\G36\data\body_co.paa"
		};
	};
	class PNC_W_G36_camo: PNC_W_G36
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\G36\data\body_co_camo.paa"
		};
	};
	class PNC_W_G36_hive: PNC_W_G36
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\G36\data\body_co_hive.paa"
		};
	};
	class PNC_W_G36_kryp: PNC_W_G36
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\G36\data\body_co_kryp.paa"
		};
	};
};
