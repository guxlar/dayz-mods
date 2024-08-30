class CfgPatches
{
	class Aurora
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_Aurora"
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
	class PNC_Aurora_Base: BoltActionRifle_Base
	{
		scope=0;
		animName="cz527";
		weight=8400;
		initSpeedMultiplier=1.3;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
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
			"Ammo_50BMG",
			"Ammo_50BMG_AP"
		};
		magazines[]=
		{
			"PNC_Mag_Aurora_5Rnd"
		};
		magazineSwitchTime=0.38;
		ejectType=0;
		recoilModifier[]={0.5,0.69999999,0.5};
		swayModifier[]={0.5,0.5,0.5};
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
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Aurora_Shot_SoundSet",
				"Win_Tail_SoundSet",
				"Win_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Aurora_silencer_SoundSet",
					"Win_silencerHomeMadeTail_SoundSet",
					"Win_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\winchester70\winchester70_0",
				1,
				1,
				2000
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\winchester70\winchester70_1",
				1,
				1,
				2000
			};
			soundBegin[]=
			{
				"begin1",
				0.5,
				"begin2",
				0.5
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
					"beginSilenced_HomeMade",
					1
				}
			};
			reloadTime=1;
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=9.9999997e-06;
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
	class PNC_W_Aurora: PNC_Aurora_Base
	{
		scope=2;
		displayName="Aurora .50BMG";
		descriptionShort="#Aurora_00";
		model="PanaceaWeapons\Weapons\Aurora\PNC_Aurora.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"PNC_weaponMuzzle_Aurora"
		};
		itemSize[]={10,3};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\Aurora\data\aurora_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=18300;
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
};
class CfgSoundShaders
{
	class base_midShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class Aurora_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\Aurora\sounds\aurora",
				1
			}
		};
		volume=0.79432821;
		range=2500;
		rangeCurve="midShotCurve";
	};
	class Aurora_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\Aurora\sounds\aurora_silence",
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
	class Aurora_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Aurora_midShot_SoundShader",
			"Aurora_midShot_SoundShader",
			"Aurora_midShot_SoundShader",
			"Aurora_midShot_SoundShader"
		};
	};
	class Aurora_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Aurora_silencerMidShot_SoundShader",
			"Aurora_silencerMidShot_SoundShader",
			"Aurora_silencerMidShot_SoundShader",
			"Aurora_silencerMidShot_SoundShader"
		};
	};
};
