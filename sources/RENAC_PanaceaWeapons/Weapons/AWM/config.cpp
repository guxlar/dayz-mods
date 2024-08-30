class CfgPatches
{
	class AWM
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_AWM",
			"PNC_W_AWM_black"
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
	class BoltActionRifle_Base;
	class PNC_AWM_Base: BoltActionRifle_Base
	{
		scope=0;
		animName="cz527";
		weight=6950;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		modelOptics="-";
		distanceZoomMin=200;
		distanceZoomMax=1000;
		PPDOFProperties[]={1,0.5,50,160,4,10};
		opticsFlare=0;
		winchesterTypeOpticsMount=1;
		ironsightsExcludingOptics[]=
		{
			"HuntingOptic"
		};
		WeaponLength=0.934214;
		barrelArmor=1.1109999;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_338LapuaMagnum"
		};
		magazines[]=
		{
			"PNC_Mag_AWM_5rnd"
		};
		magazineSwitchTime=0.38;
		ejectType=0;
		recoilModifier[]={0.5,0.69999999,0.5};
		swayModifier[]={2.2,2.2,1.2};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\CR527\cz527_reload_0",
			1,
			1,
			20
		};
		reloadSound[]=
		{
			"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",
			1,
			1,
			20
		};
		reloadAction="Reloadcz527";
		shotAction="Reloadcz527Shot";
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"awm_Shot_SoundSet",
				"Repeater_Tail_SoundSet",
				"Repeater_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"awm_silencer_SoundSet",
					"Repeater_silencerHomeMadeTail_SoundSet",
					"Repeater_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				3.9810717,
				1,
				1000
			};
			begin2[]=
			{
				"",
				3.9810717,
				1,
				1000
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
			reloadTime=1;
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0.001;
			magazineSlot="magazine";
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
					overrideParticle="weapon_shot_cz527_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=4;
				overheatingDecayInterval=3;
				class BarrelSmoke
				{
					overrideParticle="smoking_barrel_small";
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
			distanceZoomMax=1000;
			discreteDistance[]={200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
		};
	};
	class PNC_W_AWM: PNC_AWM_Base
	{
		scope=2;
		displayName="AWM";
		descriptionShort="#L96A1_00";
		model="PanaceaWeapons\Weapons\AWM\PNC_AWM.p3d";
		attachments[]=
		{
			"weaponWrap",
			"PNC_weaponMuzzle_338",
			"weaponOpticsHunting"
		};
		itemSize[]={10,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\AWM\data\body_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=9300;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\cz527\Data\cz527.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\cz527\Data\cz527.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\cz527\Data\cz527_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\cz527\Data\cz527_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\cz527\Data\cz527_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_AWM_black: PNC_W_AWM
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\AWM\data\body_co_black.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class awm_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\KIVAARI\sounds\338",
				1
			}
		};
		volume=0.80000001;
		range=2000;
		rangeCurve="closeShotCurve";
	};
	class awm_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\KIVAARI\sounds\338_SILENCE",
				1
			}
		};
		volume=0.30000001;
		range=230;
		rangeCurve="closeShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class awm_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"awm_closeShot_SoundShader",
			"awm_closeShot_SoundShader",
			"awm_closeShot_SoundShader",
			"awm_closeShot_SoundShader"
		};
	};
	class awm_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"awm_silencerCloseShot_SoundShader",
			"awm_silencerCloseShot_SoundShader",
			"awm_silencerCloseShot_SoundShader",
			"awm_silencerCloseShot_SoundShader"
		};
	};
};
