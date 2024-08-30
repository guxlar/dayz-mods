class CfgPatches
{
	class BarretM82A1
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_BarretM82A1",
			"PNC_W_BarretM82A1_black",
			"PNC_W_BarretM82A1_desert",
			"PNC_W_BarretM82A1_snow",
			"PNC_W_BarretM82A1_Mikey"
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
	class PNC_BarretM82A1_Base: Rifle_Base
	{
		scope=0;
		weight=7485;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		ironsightsExcludingOptics[]=
		{
			"HuntingOptic",
			"HuntingOptic"
		};
		WeaponLength=1.18986;
		barrelArmor=1.6;
		chamberedRound="";
		chamberSize=1;
		chamberableFrom[]=
		{
			"Ammo_50BMG",
			"Ammo_50BMG_AP"
		};
		magazines[]=
		{
			"PNC_Mag_BarretM82A1_10Rnd"
		};
		magazineSwitchTime=0.25;
		ejectType=1;
		recoilModifier[]={2,2.5,2};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo"
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\svd\svd_reload",
			1,
			1,
			30
		};
		reloadAction="ReloadSVD";
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Barret_Shot_SoundSet",
				"Win_Tail_SoundSet",
				"Win_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Barret_silencer_SoundSet",
					"Win_silencerHomeMadeTail_SoundSet",
					"Win_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\winchester70\winchester70_0",
				1,
				1,
				1000
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\winchester70\winchester70_1",
				1,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.5,
				"begin2",
				0.5
			};
			reloadTime=0.22499999;
			recoil="recoil_svd";
			recoilProne="recoil_svd_prone";
			dispersion=9.9999997e-06;
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
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed=1;
				};
				class SmokeCloud1
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle="weapon_shot_m4a1_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					overridePoint="StarFlash";
					ignoreIfSuppressed=1;
				};
				class GasPistonBurstR
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=5;
				maxOverheatingValue=30;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overridePoint="GasPiston";
					positionOffset[]={0.050000001,-0.02,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint="GasPiston";
					positionOffset[]={0.12,-0.02,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint="GasPiston";
					positionOffset[]={0.20999999,-0.02,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class Steam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.40000001,0.02,0};
					onlyWithinOverheatLimits[]={0,0.5};
					onlyWithinRainLimits[]={0.2,1};
				};
				class Steam2
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.44999999,0.02,0};
					onlyWithinOverheatLimits[]={0.5,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
					onlyWithinOverheatLimits[]={0,1};
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=1200;
			discreteDistance[]={200,300,400,500,600,700,800,900,1000,1100,1200};
			discreteDistanceInitIndex=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet="Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id=892;
				};
			};
		};
	};
	class PNC_W_BarretM82A1: PNC_BarretM82A1_Base
	{
		scope=2;
		displayName="Barret M82A1";
		descriptionShort="#M82A2BMG_00";
		model="PanaceaWeapons\Weapons\BarretM82A1\PNC_BarretM82A1.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"PNC_weaponMuzzle_127_99"
		};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\BarretM82A1\data\rifle_co.paa"
		};
		itemSize[]={10,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=19250;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_BarretM82A1_black: PNC_W_BarretM82A1
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\BarretM82A1\data\rifle_desert_co.paa"
		};
	};
	class PNC_W_BarretM82A1_desert: PNC_W_BarretM82A1
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\BarretM82A1\data\rifle_desert_co.paa"
		};
	};
	class PNC_W_BarretM82A1_snow: PNC_W_BarretM82A1
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\BarretM82A1\data\rifle_snow_co.paa"
		};
	};
	class PNC_W_BarretM82A1_Mikey: PNC_W_BarretM82A1
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\BarretM82A1\data\rifle_Mickey.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_midShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class Barret_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\BarretM82A1\sounds\barret",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve="midShotCurve";
	};
	class Barret_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\BarretM82A1\sounds\barret_silence",
				1
			}
		};
		volume=0.56234133;
		range=300;
		rangeCurve="midShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Barret_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Barret_midShot_SoundShader",
			"Barret_midShot_SoundShader",
			"Barret_midShot_SoundShader",
			"Barret_midShot_SoundShader"
		};
	};
	class Barret_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Barret_silencerMidShot_SoundShader",
			"Barret_silencerMidShot_SoundShader",
			"Barret_silencerMidShot_SoundShader",
			"Barret_silencerMidShot_SoundShader"
		};
	};
};
