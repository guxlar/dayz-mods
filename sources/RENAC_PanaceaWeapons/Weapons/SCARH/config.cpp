class CfgPatches
{
	class SCARH
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_SCARH",
			"PNC_W_ScarH_camo",
			"PNC_W_ScarH_hive",
			"PNC_W_ScarH_kryp",
			"PNC_W_ScarH_pixel"
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
	class PNC_SCARH_Base: Rifle_Base
	{
		scope=0;
		weight=3800;
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
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer",
			"Ammo_308WinAP"
		};
		magazines[]=
		{
			"PNC_Mag_AR15_Long_30Rnd",
			"PNC_MoreMag_FAL_20RndCoupledClamp",
			"PNC_MoreMag_FAL_50Rnd",
			"Mag_FAL_20Rnd",
			"PNC_SCARH_40Rnd_Coupled",
			"PNC_SCARH_20Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={0.80000001,0.89999998,0.80000001};
		swayModifier[]={2,2,1.1};
		hiddenSelections[]=
		{
			"camo"
		};
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
				"FNFAL_Shot_SoundSet",
				"FNFAL_Tail_SoundSet",
				"FNFAL_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SCARH_silencer_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				},
				
				{
					"SCARH_silencer_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				1,
				1,
				900
			};
			begin2[]=
			{
				"",
				1,
				1,
				900
			};
			begin3[]=
			{
				"",
				1,
				1,
				900
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
				200
			};
			beginSilenced_HomeMade[]=
			{
				"",
				1,
				1,
				300
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
				"FNFAL_Shot_SoundSet",
				"FNFAL_Tail_SoundSet",
				"FNFAL_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SCARH_silencer_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				},
				
				{
					"SCARH_silencer_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				1,
				1,
				900
			};
			begin2[]=
			{
				"",
				1,
				1,
				900
			};
			begin3[]=
			{
				"",
				1,
				1,
				900
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
				200
			};
			beginSilenced_HomeMade[]=
			{
				"",
				1,
				1,
				300
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
	class PNC_W_SCARH: PNC_SCARH_Base
	{
		scope=2;
		displayName="SCAR-H";
		descriptionShort="#SCARHPNC_00";
		model="PanaceaWeapons\Weapons\SCARH\PNC_SCARH.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"PNC_weaponMuzzle_308"
		};
		itemSize[]={8,3};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\SCARH\data\SCARH_co.paa"
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
					hitpoints=23600;
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
	class PNC_W_ScarH_camo: PNC_W_SCARH
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\SCARH\data\SCARH_co_camo.paa"
		};
	};
	class PNC_W_ScarH_hive: PNC_W_SCARH
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\SCARH\data\SCARH_co_hive.paa"
		};
	};
	class PNC_W_ScarH_kryp: PNC_W_SCARH
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\SCARH\data\SCARH_co_kryp.paa"
		};
	};
	class PNC_W_ScarH_pixel: PNC_W_SCARH
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\SCARH\data\SCARH_co1.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class SCARH_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
		volume=1;
		range=800;
	};
	class SCARH_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
		volume=0.79432821;
	};
	class SCARH_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\SCARH\sounds\SCARH_silence",
				1
			}
		};
		volume=0.60000002;
		range=150;
	};
	class SCARH_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\SCARH\sounds\SCARH_silence",
				1
			}
		};
		volume=0.56234133;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class SCARH_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SCARH_closeShot_SoundShader",
			"SCARH_midShot_SoundShader",
			"SCARH_closeShot_SoundShader",
			"AK_Closure_SoundShader"
		};
	};
	class SCARH_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SCARH_silencerCloseShot_SoundShader",
			"SCARH_silencerMidShot_SoundShader",
			"SCARH_silencerCloseShot_SoundShader",
			"AK_Closure_SoundShader"
		};
	};
};
