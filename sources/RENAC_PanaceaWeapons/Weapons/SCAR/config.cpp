class CfgPatches
{
	class SCAR
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_SCAR",
			"PNC_W_Scar_camo",
			"PNC_W_Scar_hive",
			"PNC_W_Scar_kryp",
			"PNC_W_Scar_pixel"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
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
	class PNC_SCAR_Base: Rifle_Base
	{
		scope=0;
		weight=3900;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		WeaponLength=0.82906699;
		barrelArmor=4.4439998;
		chamberSize=1;
		chamberedRound="";
		hiddenSelections[]=
		{
			"camo"
		};
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"Ammo_556x45AP"
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
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={0.80000001,0.89999998,0.80000001};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"folding_lowered",
			"folding_raised"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadAKM";
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\akm\Akm_reload",
			0.80000001,
			1,
			20
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
				"scar_Shot_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AUG_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AUG_silencerHomeMade_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				1,
				1,
				1000
			};
			begin2[]=
			{
				"",
				1,
				1,
				1000
			};
			begin3[]=
			{
				"",
				1,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin3",
				0.33333001
			};
			reloadTime=0.125;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"",
				1,
				1,
				100
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"scar_Shot_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AUG_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AUG_silencerHomeMade_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				1,
				1,
				1000
			};
			begin2[]=
			{
				"",
				1,
				1,
				1000
			};
			begin3[]=
			{
				"",
				1,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin3",
				0.33333001
			};
			reloadTime=0.1;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"",
				1,
				1,
				100
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
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
		};
	};
	class PNC_W_SCAR: PNC_SCAR_Base
	{
		scope=2;
		displayName="SCAR-16";
		descriptionShort="#SCAR16_00";
		model="PanaceaWeapons\Weapons\SCAR\PNC_SCAR.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleM4"
		};
		itemSize[]={8,3};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\SCAR\data\body_co.paa"
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
				maxOverheatingValue=40;
				shotsToStartOverheating=5;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
					hitpoints=23300;
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
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_Scar_camo: PNC_W_SCAR
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\SCAR\data\body_co_camo.paa"
		};
	};
	class PNC_W_Scar_hive: PNC_W_SCAR
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\SCAR\data\body_co_hive.paa"
		};
	};
	class PNC_W_Scar_kryp: PNC_W_SCAR
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\SCAR\data\body_co_kryp.paa"
		};
	};
	class PNC_W_Scar_pixel: PNC_W_SCAR
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\SCAR\data\body_co1.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_midShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class scar_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\SCAR\sounds\scar",
				1
			}
		};
		volume=0.60000002;
		range=1600;
		rangeCurve="midShotCurve";
	};
	class scar_silencermidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\SCAR\sounds\scar",
				1
			}
		};
		volume=0.2;
		range=150;
		rangeCurve="midShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class scar_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"scar_midShot_SoundShader",
			"scar_midShot_SoundShader",
			"scar_midShot_SoundShader",
			"scar_midShot_SoundShader"
		};
	};
};
