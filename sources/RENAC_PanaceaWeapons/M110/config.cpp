class CfgPatches
{
	class M110
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_M110"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Magazines"
		};
		magazines[]=
		{
			"PNC_M110_Mag"
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
	class PNC_M110_Base: Rifle_Base
	{
		scope=0;
		displayName="M110";
		descriptionShort="#M110_00";
		model="PanaceaWeapons\M110\PNC_M110.p3d";
		weight=3800;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		initSpeedMultiplier=1.1;
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		WeaponLength=0.94300002;
		barrelArmor=3.888;
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"weaponFlashlight",
			"PNC_weaponMuzzle_308",
			"weaponButtstockM4"
		};
		itemSize[]={9,3};
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
			"Mag_FAL_20Rnd",
			"PNC_MoreMag_FAL_50Rnd",
			"PNC_MoreMag_FAL_20RndCoupledClamp",
			"PNC_M110_Mag"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={2,2,1};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M110_Shot_SoundSet",
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
			reloadTime=0.17;
			dispersion=9.9999997e-06;
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
					hitpoints=1800;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"PanaceaWeapons\M110\data\body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PanaceaWeapons\M110\data\body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PanaceaWeapons\M110\data\body.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PanaceaWeapons\M110\data\body.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"PanaceaWeapons\M110\data\body.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_M110: PNC_M110_Base
	{
		scope=2;
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class PNC_M110_Mag: Magazine_Base
	{
		scope=2;
		displayName="M110 Magazine";
		descriptionShort="#M110Mag_00";
		model="PanaceaWeapons\M110\magazine\magazine.p3d";
		weight=200;
		itemSize[]={1,2};
		count=15;
		ammo="Bullet_308Win";
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer",
			"Ammo_308WinAP"
		};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							
							{
								1.01,
								
								{
									"PanaceaWeapons\M110\magazine\material.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"PanaceaWeapons\M110\magazine\material.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"PanaceaWeapons\M110\magazine\material_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"PanaceaWeapons\M110\magazine\material_damage.rvmat"
								}
							},
							
							{
								0.0099999998,
								
								{
									"\PanaceaWeapons\M110\magazine\material_destruct.rvmat"
								}
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class base_midShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class M110_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\M110\sounds\shot_01",
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
	class M110_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M110_midShot_SoundShader",
			"M110_midShot_SoundShader",
			"M110_midShot_SoundShader",
			"M110_midShot_SoundShader"
		};
	};
};
