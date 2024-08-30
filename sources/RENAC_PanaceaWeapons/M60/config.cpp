class CfgPatches
{
	class M60
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_M60"
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
	class M60_Base: Rifle_Base
	{
		scope=0;
		displayName="M60";
		descriptionShort="#M60_01";
		model="PanaceaWeapons\M60\M60.p3d";
		weight=8000;
		initSpeedMultiplier=1.1;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		WeaponLength=0.85000002;
		barrelArmor=3.888;
		attachments[]=
		{
			"weaponWrap",
			"PNC_weaponMuzzle_308"
		};
		itemSize[]={8,3};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer",
			"Ammo_308WinAP"
		};
		magazines[]=
		{
			"PNC_M60_Mag"
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		recoilModifier[]={0.60000002,0.60000002,0.60000002};
		swayModifier[]={1,1,1};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M60_Shot_SoundSet",
				"FNFAL_Tail_SoundSet",
				"FNFAL_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.11;
			dispersion=9.9999997e-05;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"M60_Shot_SoundSet",
				"FNFAL_Tail_SoundSet",
				"FNFAL_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.11;
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
					hitpoints=35000;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"PanaceaWeapons\M60\data\material.rvmat",
								"PanaceaWeapons\M60\data\material_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PanaceaWeapons\M60\data\material.rvmat",
								"PanaceaWeapons\M60\data\material_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PanaceaWeapons\M60\data\material_damage.rvmat",
								"PanaceaWeapons\M60\data\material_damage2.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PanaceaWeapons\M60\data\material_damage.rvmat",
								"PanaceaWeapons\M60\data\material_damage2.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"PanaceaWeapons\M60\data\material_destruct.rvmat",
								"PanaceaWeapons\M60\data\material_destruct2.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_M60: M60_Base
	{
		scope=2;
	};
};
class CfgSoundShaders
{
	class base_midShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class M60_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\M60\sounds\shot_01",
				1
			}
		};
		volume=0.69999999;
		range=1600;
		rangeCurve="midShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class M60_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M60_midShot_SoundShader",
			"M60_midShot_SoundShader",
			"M60_midShot_SoundShader",
			"M60_midShot_SoundShader"
		};
	};
};
