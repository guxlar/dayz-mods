class CfgPatches
{
	class RPK16
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_RPK16_Black",
			"PNC_W_RPK16_green",
			"PNC_W_RPK16_Tan"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Magazines"
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
	class rpk16_Base: Rifle_Base
	{
		scope=0;
		displayName="#RPK16_00";
		descriptionShort="#RPK16_01.";
		weight=4500;
		initSpeedMultiplier=1.2;
		model="PanaceaWeapons\RPK16\RPK16.p3d";
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		WeaponLength=0.75;
		barrelArmor=5.888;
		attachments[]=
		{
			"weaponButtstockAK",
			"WeaponHandguardAK",
			"weaponWrap",
			"weaponOptics",
			"weaponMuzzleAK",
			"Mag_AK74_45Rnd"
		};
		itemSize[]={9,3};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		magazines[]=
		{
			"PNC_RPK16_Drum",
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green"
		};
		ejectType=1;
		recoilModifier[]={0.69999999,0.89999998,0.69999999};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
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
				"RPK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.085000001;
			dispersion=9.9999997e-05;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"RPK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.085000001;
			dispersion=9.9999997e-05;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
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
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4400;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"\PanaceaWeapons\RPK16\data\material.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"\PanaceaWeapons\RPK16\data\material.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"\PanaceaWeapons\RPK16\data\material_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"\PanaceaWeapons\RPK16\data\material_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"\PanaceaWeapons\RPK16\data\material_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_RPK16_Black: rpk16_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\RPK16\data\body_co.paa"
		};
	};
	class PNC_W_RPK16_green: PNC_W_RPK16_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\RPK16\data\body_green_co.paa"
		};
	};
	class PNC_W_RPK16_Tan: PNC_W_RPK16_Black
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\RPK16\data\body_tan_co.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_midShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class RPK_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\RPK16\sounds\shot_01",
				1
			}
		};
		volume=0.39999998;
		range=1600;
		rangeCurve="midShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class RPK_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"RPK_midShot_SoundShader",
			"RPK_midShot_SoundShader",
			"RPK_midShot_SoundShader",
			"RPK_midShot_SoundShader"
		};
	};
};
