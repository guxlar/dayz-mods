class CfgPatches
{
	class VR80
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_VR80"
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
	class Launcher_Base;
	class PNC_VR80_Base: Rifle_Base
	{
		scope=0;
		weight=3755;
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
		barrelArmor=2.5;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug"
		};
		magazines[]=
		{
			"PNC_Mag_VR80_5Rnd",
			"PNC_Mag_VR80_10Rnd"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={1.3,1.5,1.3};
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
				"VR80_Shot_SoundSet",
				"Saiga12_Tail_SoundSet",
				"Saiga12_InteriorTail_SoundSet"
			};
			begin1[]=
			{
				"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",
				1,
				1,
				800
			};
			begin2[]=
			{
				"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",
				1,
				1,
				800
			};
			begin3[]=
			{
				"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",
				1,
				1,
				800
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
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0020000001;
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
				"VR80_Shot_SoundSet",
				"Saiga12_Tail_SoundSet",
				"Saiga12_InteriorTail_SoundSet"
			};
			begin1[]=
			{
				"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",
				1,
				1,
				800
			};
			begin2[]=
			{
				"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",
				1,
				1,
				800
			};
			begin3[]=
			{
				"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",
				1,
				1,
				800
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
			reloadTime=0.17142858;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0020000001;
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
		class NoiseShoot
		{
			strength=7;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
	};
	class PNC_W_VR80: PNC_VR80_Base
	{
		scope=2;
		displayName="VR-80";
		descriptionShort="#VR80_00";
		model="PanaceaWeapons\Weapons\VR80\PNC_VR80.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics"
		};
		itemSize[]={9,3};
		spawnDamageRange[]={0,0.60000002};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\VR80\data\body_co.paa"
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
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=23200;
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
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class VR80_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\VR80\sounds\shotgun",
				1
			}
		};
		volume=0.80000001;
		range=800;
		rangeCurve="closeShotCurve";
	};
	class VR80_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\VR80\sounds\shotgun_suppressor",
				1
			}
		};
		volume=0.30000001;
		range=200;
		rangeCurve="closeShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class VR80_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"VR80_closeShot_SoundShader",
			"VR80_closeShot_SoundShader",
			"VR80_closeShot_SoundShader",
			"VR80_closeShot_SoundShader"
		};
	};
	class VR80_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"VR80_silencerCloseShot_SoundShader",
			"VR80_silencerCloseShot_SoundShader",
			"VR80_silencerCloseShot_SoundShader",
			"VR80_silencerCloseShot_SoundShader"
		};
	};
};
