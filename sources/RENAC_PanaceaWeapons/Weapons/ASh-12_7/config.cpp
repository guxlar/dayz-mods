class CfgPatches
{
	class ASh_12_7
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_ASh127",
			"PNC_W_ASh127_camo"
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
class CfgWeapons
{
	class Rifle_Base;
	class PNC_ASh127_Base: Rifle_Base
	{
		scope=0;
		weight=3500;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.5,10,190,4,10};
		WeaponLength=0.54108799;
		initSpeedMultiplier=0.64999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12_7_55"
		};
		magazines[]=
		{
			"PNC_Mag_ASh127_20Rnd"
		};
		magazineSwitchTime=0.30000001;
		barrelArmor=800;
		ejectType=1;
		recoilModifier[]={2,2,2};
		swayModifier[]={1,1,1};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadCZ61";
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\pm63rak\pm63rak_reload_0mod",
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
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"ASH12_silencer_SoundSet",
				"VSS_Vintorez_Tail_SoundSet",
				"VSS_Vintorez_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"ASH12_silencer_SoundSet",
					"VSS_Vintorez_Tail_SoundSet",
					"VSS_Vintorez_InteriorTail_SoundSet"
				},
				
				{
					"ASH12_silencer_SoundSet",
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
			beginSilenced_Pro1[]=
			{
				"",
				0.30000001,
				1,
				200
			};
			beginSilenced_HomeMade[]=
			{
				"",
				0.30000001,
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
			reloadTime=0.20999999;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.0089999996;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"ASH12_silencer_SoundSet",
				"VSS_Vintorez_Tail_SoundSet",
				"VSS_Vintorez_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"ASH12_silencer_SoundSet",
					"VSS_Vintorez_Tail_SoundSet",
					"VSS_Vintorez_InteriorTail_SoundSet"
				},
				
				{
					"ASH12_silencer_SoundSet",
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
			beginSilenced_Pro[]=
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
			reloadTime=0.30000001;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.02;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
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
					onlyWithinOverheatLimits[]={0,0.5};
					onlyWithinRainLimits[]={0,0.2};
					ignoreIfSuppressed=1;
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
		class NoiseShoot
		{
			strength=9;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			discreteDistance[]={100,200,300,400};
			discreteDistanceInitIndex=0;
			distanceZoomMin=100;
			distanceZoomMax=400;
		};
	};
	class PNC_W_ASh127: PNC_ASh127_Base
	{
		scope=2;
		displayName="ASH-12";
		descriptionShort="#ASH12PNC_00";
		model="PanaceaWeapons\Weapons\ASh-12_7\PNC_ASh127.p3d";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\ASh-12_7\data\body_co.paa"
		};
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight"
		};
		itemSize[]={8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30000;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\cz61\data\cz61.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\cz61\data\cz61.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\cz61\data\cz61_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\cz61\data\cz61_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\cz61\data\cz61_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_ASh127_camo: PNC_W_ASh127
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\ASh-12_7\data\body_co_camo.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class ASH12_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\ASh-12_7\sounds\ASH12_shot_proSilenced_01",
				1
			}
		};
		volume=0.40000001;
		range=300;
		rangeCurve="closeShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class ASH12_silencer_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"ASH12_silencerCloseShot_SoundShader",
			"ASH12_silencerCloseShot_SoundShader",
			"ASH12_silencerCloseShot_SoundShader",
			"ASH12_silencerCloseShot_SoundShader"
		};
	};
};
