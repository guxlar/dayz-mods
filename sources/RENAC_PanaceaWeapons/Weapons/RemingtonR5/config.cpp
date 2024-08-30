class CfgPatches
{
	class RemingtonR5
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_RemingtonR5",
			"PNC_W_RemingtonR5_tan"
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
	class PNC_RemingtonR5_Base: Rifle_Base
	{
		scope=0;
		weight=3600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.75,20,170,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic"
		};
		WeaponLength=0.66352999;
		barrelArmor=0.89999998;
		initSpeedMultiplier=1.05;
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
		magazineSwitchTime=0.44999999;
		ejectType=1;
		recoilModifier[]={1.1,1.2,1,1};
		swayModifier[]={1.3,1.3,1};
		drySound[]=
		{
			"DZ\sounds\weapons\firearms\ump45\UMP45_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"",
			0.80000001,
			1,
			30
		};
		reloadAction="ReloadUMP";
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
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
				"RemingtonR5_Shot_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"RemingtonR5_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"RemingtonR5_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
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
			recoil="recoil_auto_primary_7outof10";
			recoilProne="recoil_auto_primary_prone_7outof10";
			dispersion=0.003;
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
				"RemingtonR5_Shot_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"RemingtonR5_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"RemingtonR5_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
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
			reloadTime=0.092307694;
			recoil="recoil_auto_primary_7outof10";
			recoilProne="recoil_auto_primary_prone_7outof10";
			dispersion=0.003;
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
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating=5;
				maxOverheatingValue=20;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					ignoreIfSuppressed=1;
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.30000001};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					ignoreIfSuppressed=1;
					overrideParticle="smoking_barrel";
					positionOffset[]={0.1,0,0};
					onlyWithinOverheatLimits[]={0.30000001,0.89999998};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot2
				{
					ignoreIfSuppressed=1;
					overrideParticle="smoking_barrel_heavy";
					positionOffset[]={0.1,0,0};
					onlyWithinOverheatLimits[]={0.89999998,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0.050000001,0};
					onlyWithinOverheatLimits[]={0,0.5};
					onlyWithinRainLimits[]={0.2,1};
				};
				class SmokingBarrelHotSteam2
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.13,0.050000001,0};
					onlyWithinOverheatLimits[]={0.5,1};
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
		class NoiseShoot
		{
			strength=66;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=800;
			discreteDistance[]={100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex=0;
		};
	};
	class PNC_W_RemingtonR5: PNC_RemingtonR5_Base
	{
		scope=2;
		displayName="Remington GPC";
		descriptionShort="#RemigtonR5_00";
		model="PanaceaWeapons\Weapons\RemingtonR5\PNC_RemingtonR5.p3d";
		attachments[]=
		{
			"weaponButtstockM4",
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleM4"
		};
		itemSize[]={7,3};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\RemingtonR5\data\body_black.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=23500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\UMP45\data\ump45_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_RemingtonR5_tan: PNC_W_RemingtonR5
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\RemingtonR5\data\body_tan.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class RemingtonR5_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\RemingtonR5\sounds\remignton",
				1
			}
		};
		volume=0.60000002;
		range=1600;
	};
	class RemingtonR5_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\RemingtonR5\sounds\r5",
				1
			}
		};
		volume=0.30000001;
		range=150;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class RemingtonR5_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"RemingtonR5_closeShot_SoundShader",
			"RemingtonR5_closeShot_SoundShader",
			"RemingtonR5_closeShot_SoundShader",
			"RemingtonR5_closeShot_SoundShader"
		};
	};
	class RemingtonR5_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"RemingtonR5_silencerCloseShot_SoundShader",
			"RemingtonR5_silencerCloseShot_SoundShader",
			"RemingtonR5_silencerCloseShot_SoundShader",
			"RemingtonR5_silencerCloseShot_SoundShader"
		};
	};
};
