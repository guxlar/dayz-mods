class CfgPatches
{
	class Famas
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_Famas"
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
	class PNC_Famas_Base: Rifle_Base
	{
		scope=0;
		weight=3454;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.75,40,180,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic"
		};
		WeaponLength=0.583269;
		barrelArmor=1.6670001;
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
			"PNC_Famas_Mag",
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
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={0.60000002,0.60000002,0.60000002};
		swayModifier[]={1.2,1.2,1};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadMP5";
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"aug4_Shot_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"aug4_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"aug4_silencer_SoundSet",
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
			reloadTime=0.055;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.00030000001;
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
				"aug4_Shot_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"aug4_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				},
				
				{
					"aug4_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
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
			reloadTime=0.055;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.00030000001;
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
					overrideParticle="weapon_shot_mp5k_01";
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
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.80000001};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0.02,0};
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
		};
	};
	class PNC_W_Famas: PNC_Famas_Base
	{
		scope=2;
		displayName="Famas G2";
		descriptionShort="#Famas_00";
		model="PanaceaWeapons\Weapons\Famas\PNC_Famas.p3d";
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
			"PanaceaWeapons\Weapons\Famas\data\Famas_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8600;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\MP5\data\mp5k_body_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class aug4_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\Famas\sounds\aug4",
				1
			}
		};
		volume=0.60000002;
		range=1200;
	};
	class aug4_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\Famas\sounds\aug4",
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
	class aug4_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"aug4_closeShot_SoundShader",
			"aug4_closeShot_SoundShader",
			"aug4_closeShot_SoundShader",
			"aug4_closeShot_SoundShader"
		};
	};
	class aug4_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"aug4_silencerCloseShot_SoundShader",
			"aug4_silencerCloseShot_SoundShader",
			"aug4_silencerCloseShot_SoundShader",
			"aug4_silencerCloseShot_SoundShader"
		};
	};
};
