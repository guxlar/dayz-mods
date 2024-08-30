class CfgPatches
{
	class DVL10
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_DVL10"
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
	class PNC_DVL10_Base: BoltActionRifle_Base
	{
		scope=0;
		animName="cz527";
		weight=4820;
		absorbency=0;
		rotationFlags=1;
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
		initSpeedMultiplier=1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_338LapuaMagnum"
		};
		magazines[]=
		{
			"PNC_Mag_DVL_10rnd"
		};
		magazineSwitchTime=0.38;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.3,1.5,1.3};
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
				"CR527_silencerHomeMade_SoundSet",
				"CR527_silencerHomeMadeTail_SoundSet",
				"CR527_silencerInteriorHomeMadeTail_SoundSet"
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
		class NoiseShoot
		{
			strength=10;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=800;
			discreteDistance[]={200,300,400,500,600,700,800};
			discreteDistanceInitIndex=0;
		};
	};
	class PNC_W_DVL10: PNC_DVL10_Base
	{
		scope=2;
		displayName="DVL-10";
		descriptionShort="#DVL10P_00";
		model="PanaceaWeapons\Weapons\DVL10\PNC_DVL10.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting"
		};
		itemSize[]={9,3};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\DVL10\data\body_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20000;
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
	class base_closeShot_SoundShader;
	class dvl_midShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\DVL10\sounds\dvl",
				1
			}
		};
		volume=0.40000001;
		range=180;
		rangeCurve="midShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class dvl_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"dvl_midShot_SoundShader",
			"dvl_midShot_SoundShader",
			"dvl_midShot_SoundShader",
			"dvl_midShot_SoundShader"
		};
	};
};
