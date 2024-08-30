class CfgPatches
{
	class M14
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_M14"
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
	class PNC_M14_Base: Rifle_Base
	{
		scope=0;
		weight=4500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		WeaponLength=1.18986;
		barrelArmor=2.0190001;
		initSpeedMultiplier=1.15;
		winchesterTypeOpticsMount=1;
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
			"PNC_MoreMag_FAL_20RndCoupledClamp",
			"PNC_MoreMag_FAL_50Rnd"
		};
		magazineSwitchTime=0.40000001;
		ejectType=1;
		recoilModifier[]={1.2,1.4,1.2};
		swayModifier[]={2.8,2.8,1.8};
		hiddenSelections[]=
		{
			"camo"
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"folding_raised",
			"suppressor"
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
			"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_reload",
			0.80000001,
			1,
			20
		};
		reloadAction="ReloadRuger1022";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"m14_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SKS_silencerHomeMade_SoundSet",
					"SKS_silencerHomeMadeTail_SoundSet",
					"SKS_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.40000001;
			dispersion=0.0024999999;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=5;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=800;
			discreteDistance[]={200,300,400,500,600,700,800};
			discreteDistanceInitIndex=0;
		};
	};
	class PNC_W_M14: PNC_M14_Base
	{
		scope=2;
		displayName="M14";
		descriptionShort="#M14PNC_00";
		model="PanaceaWeapons\Weapons\M14\PNC_M14.p3d";
		itemSize[]={9,3};
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsMosin",
			"PNC_weaponMuzzle_308"
		};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\M14\data\body_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=11250;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\Ruger1022\data\ruger1022.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\Ruger1022\data\ruger1022.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\Ruger1022\data\ruger1022_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\Ruger1022\data\ruger1022_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\Ruger1022\data\ruger1022_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=7;
				overheatingDecayInterval=1;
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class m14_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\m14\sounds\m14",
				1
			}
		};
		volume=0.050000001;
		range=2000;
		rangeCurve="closeShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class m14_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"m14_closeShot_SoundShader",
			"m14_closeShot_SoundShader",
			"m14_closeShot_SoundShader",
			"m14_closeShot_SoundShader"
		};
	};
};
