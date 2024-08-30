class CfgPatches
{
	class ORIGIN12
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_Origin_12ga"
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
	class PNC_origin_base: Rifle_Base
	{
		scope=0;
		displayName="ORIGIN";
		descriptionShort="#Origins12_00";
		weight=5800;
		initSpeedMultiplier=1.1;
		model="PanaceaWeapons\ORIGIN12\origin.p3d";
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		WeaponLength=0.64300001;
		barrelArmor=3.888;
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"PNC_weaponMuzzle_12ga",
			"weaponButtstockM4"
		};
		itemSize[]={9,3};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		magazines[]=
		{
			"Mag_Saiga_5Rnd",
			"Mag_Saiga_8Rnd",
			"Mag_Saiga_Drum20Rnd",
			"PNC_ORIGIN_Mag",
			"PNC_ORIGIN_Drum_Mag"
		};
		ejectType=1;
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"folding_lowered",
			"folding_raised"
		};
		recoilModifier[]={1.2,1.2,1.2};
		swayModifier[]={2,2,1};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Saiga12_Shot_SoundSet",
				"Saiga12_Tail_SoundSet",
				"Saiga12_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"origin_suppressedshot_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.15000001;
			dispersion=9.9999997e-05;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"Saiga12_Shot_SoundSet",
				"Saiga12_Tail_SoundSet",
				"Saiga12_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"origin_suppressedshot_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.15000001;
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
			};
			class OnOverheating
			{
				maxOverheatingValue=170;
				shotsToStartOverheating=20;
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
					hitpoints=3600;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\shotguns\saiga\data\saiga.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\saiga\data\saiga.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\saiga\data\saiga_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\saiga\data\saiga_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\shotguns\saiga\data\saiga_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_Origin_12ga: PNC_origin_base
	{
		scope=2;
	};
};
