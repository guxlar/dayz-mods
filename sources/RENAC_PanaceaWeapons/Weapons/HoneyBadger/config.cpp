class CfgPatches
{
	class HoneyBadger
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_HoneyBadger",
			"PNC_W_HoneyBadger_black",
			"PNC_W_HoneyBadger_camo",
			"PNC_W_HoneyBadger_camo2",
			"PNC_W_HoneyBadger_kry",
			"PNC_W_HoneyBadger_kitty",
			"PNC_W_HoneyBadger_sweetish"
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
	class PNC_HoneyBadger_Base: Rifle_Base
	{
		scope=0;
		weight=4200;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		WeaponLength=0.81478399;
		barrelArmor=3.75;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_300AAC",
			"Ammo_300AAC_AP"
		};
		magazines[]=
		{
			"PNC_Mag_HoneyBadger_30Rnd",
			"PNC_Mag_HoneyBadger_Coupled_60Rnd",
			"PNC_Mag_HoneyBadger_60Rnd"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"folding_lowered",
			"folding_raised"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadM4";
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_reload_0",
			0.80000001,
			1,
			20
		};
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
				"HB_Shot_SoundSet",
				"VSS_Vintorez_Tail_SoundSet",
				"VSS_Vintorez_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"HB_silencer_SoundSet",
					"VSS_Vintorez_Tail_SoundSet",
					"VSS_Vintorez_InteriorTail_SoundSet"
				},
				
				{
					"HB_silencer_SoundSet",
					"VSS_Vintorez_Tail_SoundSet",
					"VSS_Vintorez_InteriorTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				1,
				1,
				100
			};
			begin2[]=
			{
				"",
				1,
				1,
				100
			};
			begin3[]=
			{
				"",
				1,
				1,
				100
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin2",
				0.33333001
			};
			reloadTime=0.125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.00098999997;
			magazineSlot="magazine";
			beginSilenced_Pro1[]=
			{
				"",
				0.30000001,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"",
				0.30000001,
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
				"HB_Shot_SoundSet",
				"VSS_Vintorez_Tail_SoundSet",
				"VSS_Vintorez_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"HB_silencer_SoundSet",
					"UMP45_silencerTail_SoundSet",
					"UMP45_silencerInteriorTail_SoundSet"
				},
				
				{
					"HB_silencer_SoundSet",
					"UMP45_silencerHomeMadeTail_SoundSet",
					"UMP45_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				1,
				1,
				100
			};
			begin2[]=
			{
				"",
				1,
				1,
				100
			};
			begin3[]=
			{
				"",
				1,
				1,
				100
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin2",
				0.33333001
			};
			reloadTime=0.075000003;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.00125;
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
		class NoiseShoot
		{
			strength=7;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={50,100,150,200,250,300};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=50;
			distanceZoomMax=300;
		};
	};
	class PNC_W_HoneyBadger: PNC_HoneyBadger_Base
	{
		scope=2;
		displayName="HoneyBadger";
		descriptionShort="#HoneyBadger_00";
		model="PanaceaWeapons\Weapons\HoneyBadger\PNC_HoneyBadger.p3d";
		attachments[]=
		{
			"weaponButtstockM4",
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"PNC_weaponMuzzle_300AAC"
		};
		itemSize[]={8,3};
		spawnDamageRange[]={0,0.60000002};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\HoneyBadger\data\honeyBadger_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"PanaceaWeapons\Weapons\HoneyBadger\data\honeyBadger.rvmat"
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
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
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
				maxOverheatingValue=60;
				shotsToStartOverheating=7;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
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
					hitpoints=12600;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_HoneyBadger_black: PNC_W_HoneyBadger
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\HoneyBadger\data\honeyBadger_black_co.paa"
		};
	};
	class PNC_W_HoneyBadger_camo: PNC_W_HoneyBadger
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\HoneyBadger\data\honeyBadger_camo_co.paa"
		};
	};
	class PNC_W_HoneyBadger_camo2: PNC_W_HoneyBadger
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\HoneyBadger\data\honeyBadger_camo2_co.paa"
		};
	};
	class PNC_W_HoneyBadger_kry: PNC_W_HoneyBadger
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\HoneyBadger\data\honeyBadger_kry_co.paa"
		};
	};
	class PNC_W_HoneyBadger_kitty: PNC_W_HoneyBadger
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\HoneyBadger\data\honeyBadger_kitty_co.paa"
		};
	};
	class PNC_W_HoneyBadger_sweetish: PNC_W_HoneyBadger
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\HoneyBadger\data\honeyBadger_sweetish.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class HB_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\HoneyBadger\sounds\300_silence",
				1
			}
		};
		volume=0.5;
		range=600;
		rangeCurve="closeShotCurve";
	};
	class HB_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\HoneyBadger\sounds\300_silence",
				1
			}
		};
		volume=0.30000001;
		range=150;
		rangeCurve="closeShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class HB_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"HB_closeShot_SoundShader",
			"HB_closeShot_SoundShader",
			"HB_closeShot_SoundShader",
			"HB_closeShot_SoundShader"
		};
	};
	class HB_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"HB_silencerCloseShot_SoundShader",
			"HB_silencerCloseShot_SoundShader",
			"HB_silencerCloseShot_SoundShader",
			"HB_silencerCloseShot_SoundShader"
		};
	};
};
