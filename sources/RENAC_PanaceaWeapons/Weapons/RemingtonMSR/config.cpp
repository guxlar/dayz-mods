class CfgPatches
{
	class RemingtonMSR
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_RemingtonMSR"
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
	class PNC_RemingtonMSR_Base: BoltActionRifle_Base
	{
		scope=0;
		animName="cz527";
		weight=7500;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		modelOptics="-";
		distanceZoomMin=200;
		distanceZoomMax=1000;
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
			"Ammo_338LapuaMagnum"
		};
		magazines[]=
		{
			"PNC_Mag_RemingtonMSR_5rnd"
		};
		magazineSwitchTime=0.38;
		barrelArmor=900;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo"
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
				"msr_Shot_SoundSet",
				"Repeater_Tail_SoundSet",
				"Repeater_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"msr_silencer_SoundSet",
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=1000;
			discreteDistance[]={200,300,400,500,600,700,800};
			discreteDistanceInitIndex=0;
		};
	};
	class PNC_W_RemingtonMSR: PNC_RemingtonMSR_Base
	{
		scope=2;
		displayName="Remington MSR";
		descriptionShort="#MSRPNC_00";
		model="PanaceaWeapons\Weapons\RemingtonMSR\PNC_RemingtonMSR.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponFlashlight",
			"weaponOpticsHunting",
			"PNC_weaponMuzzle_338"
		};
		itemSize[]={8,3};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\RemingtonMSR\data\body_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=23300;
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
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class msr_closeShot_SoundShader: base_closeShot_SoundShader
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
		rangeCurve="midShotCurve";
	};
	class msr_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
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
		rangeCurve="midShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class msr_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"msr_closeShot_SoundShader",
			"msr_closeShot_SoundShader",
			"msr_closeShot_SoundShader",
			"msr_closeShot_SoundShader"
		};
	};
	class msr_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"msr_silencerCloseShot_SoundShader",
			"msr_silencerCloseShot_SoundShader",
			"msr_silencerCloseShot_SoundShader",
			"msr_silencerCloseShot_SoundShader"
		};
	};
};
