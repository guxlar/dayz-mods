class CfgPatches
{
	class AX50_2
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_AX50_2",
			"PNC_W_AX50_2_camo",
			"PNC_W_AX50_2_hive"
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
	class PNC_AX50_2_Base: BoltActionRifle_Base
	{
		scope=0;
		animName="cz527";
		weight=8154;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		modelOptics="-";
		distanceZoomMin=200;
		distanceZoomMax=1100;
		initSpeedMultiplier=1.3;
		PPDOFProperties[]={1,0.5,50,160,4,10};
		opticsFlare=0;
		ironsightsExcludingOptics[]=
		{
			"HuntingOptic"
		};
		WeaponLength=0.934214;
		value=0;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_65Creedmore"
		};
		magazines[]=
		{
			"PNC_Mag_AX50_2_5rnd"
		};
		magazineSwitchTime=0.38;
		barrelArmor=900;
		ejectType=0;
		recoilModifier[]={0.5,0.69999999,0.5};
		swayModifier[]={1.5,1.5,0.69999999};
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
				"AX50_2_Shot_SoundSet",
				"SKS_Tail_SoundSet",
				"SKS_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AX50_2_silencer_SoundSet",
					"SKS_silencerHomeMadeTail_SoundSet",
					"SKS_silencerInteriorHomeMadeTail_SoundSet"
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
				"begin2",
				0.33333001
			};
			beginSilenced_HomeMade[]=
			{
				"",
				1,
				1,
				150
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
			reloadTime=0.89999998;
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=1e-06;
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
			distanceZoomMax=1100;
			discreteDistance[]={200,300,400,500,600,700,800,900,1000,1100};
			discreteDistanceInitIndex=0;
		};
	};
	class PNC_W_AX50_2: PNC_AX50_2_Base
	{
		scope=2;
		displayName="AX 6.5 Creedmoor";
		descriptionShort="#AX5065_00";
		model="PanaceaWeapons\Weapons\AX50_2\PNC_AX50_2.p3d";
		attachments[]=
		{
			"weaponWrap",
			"PNC_weaponMuzzle_6_5CreedMore",
			"weaponFlashlight",
			"weaponOpticsHunting"
		};
		itemSize[]={11,3};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\AX50_2\data\body_co.paa"
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
	class PNC_W_AX50_2_camo: PNC_W_AX50_2
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\AX50_2\data\body_co_camo.paa"
		};
	};
	class PNC_W_AX50_2_hive: PNC_W_AX50_2
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\AX50_2\data\body_co_hive.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_midShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class AX50_2_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\AX50_2\sounds\6_5",
				1
			}
		};
		volume=0.69999999;
		range=1600;
		rangeCurve="midShotCurve";
	};
	class AX50_2_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\AX50_2\sounds\6_5_silence",
				1
			}
		};
		volume=0.40000001;
		range=250;
		rangeCurve="midShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class AX50_2_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AX50_2_midShot_SoundShader",
			"AX50_2_midShot_SoundShader",
			"AX50_2_midShot_SoundShader",
			"AX50_2_midShot_SoundShader"
		};
	};
	class AX50_2_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AX50_2_silencerMidShot_SoundShader",
			"AX50_2_silencerMidShot_SoundShader",
			"AX50_2_silencerMidShot_SoundShader",
			"AX50_2_silencerMidShot_SoundShader"
		};
	};
};
