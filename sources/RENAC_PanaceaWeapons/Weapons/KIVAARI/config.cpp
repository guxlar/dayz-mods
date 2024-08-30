class CfgPatches
{
	class Panacea_KIVAARI
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_KIVAARI",
			"PNC_W_KIVAARI_camo",
			"PNC_W_KIVAARI_black",
			"PNC_W_KIVAARI_hive",
			"PNC_W_KIVAARI_kryp",
			"JB_KIVAARI_Snake",
			"JB_KIVAARI_Digi",
			"JB_KIVAARI_Camouflage",
			"JB_KIVAARI_Obsidian",
			"JB_KIVAARI_GoldDragon",
			"JB_KIVAARI_Dragon",
			"JB_KIVAARI_FireDragon",
			"JB_KIVAARI_MagicDragon",
			"JB_KIVAARI_Pillar",
			"JB_KIVAARI_GoldCamouflage",
			"JB_KIVAARI_Puzzled",
			"JB_KIVAARI_Rush",
			"JB_KIVAARI_PurpleHaze",
			"JB_KIVAARI_PurpleDeath",
			"JB_KIVAARI_RedDeath",
			"JB_KIVAARI_BlueDeath",
			"JB_KIVAARI_GreenDeath",
			"JB_KIVAARI_OrangeDeath",
			"JB_KIVAARI_TEST"
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
	class PNC_KIVAARI_Base: Rifle_Base
	{
		scope=0;
		weight=6200;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		ironsightsExcludingOptics[]=
		{
			"GrozaOptic",
			"KobraOptic"
		};
		WeaponLength=1.18986;
		barrelArmor=1.6;
		chamberedRound="";
		chamberSize=1;
		chamberableFrom[]=
		{
			"Ammo_338LapuaMagnum"
		};
		magazines[]=
		{
			"PNC_Mag_KIVAARI_10Rnd"
		};
		magazineSwitchTime=0.25;
		ejectType=1;
		recoilModifier[]={1.2,1.7,1.2};
		swayModifier[]={2.3,2.3,1.3};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
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
			"dz\sounds\weapons\firearms\svd\svd_reload",
			1,
			1,
			30
		};
		reloadAction="ReloadSVD";
		modes[]=
		{
			"SemiAuto"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"338_Shot_SoundSet",
				"Repeater_Tail_SoundSet",
				"Repeater_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"338_silencer_SoundSet",
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
			reloadTime=0.145;
			recoil="recoil_svd";
			recoilProne="recoil_svd_prone";
			dispersion=0.00075000001;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"",
				1,
				1,
				230
			};
			beginSilenced_HomeMade[]=
			{
				"",
				1,
				1,
				230
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_m4a1_01";
					ignoreIfSuppressed=1;
				};
				class SmokeCloud1
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle="weapon_shot_m4a1_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					overridePoint="StarFlash";
					ignoreIfSuppressed=1;
				};
				class GasPistonBurstR
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=5;
				maxOverheatingValue=30;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overridePoint="GasPiston";
					positionOffset[]={0.050000001,-0.02,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint="GasPiston";
					positionOffset[]={0.12,-0.02,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint="GasPiston";
					positionOffset[]={0.20999999,-0.02,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class Steam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.40000001,0.02,0};
					onlyWithinOverheatLimits[]={0,0.5};
					onlyWithinRainLimits[]={0.2,1};
				};
				class Steam2
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.44999999,0.02,0};
					onlyWithinOverheatLimits[]={0.5,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
					onlyWithinOverheatLimits[]={0,1};
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet="Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id=892;
				};
			};
		};
	};
	class PNC_W_KIVAARI: PNC_KIVAARI_Base
	{
		scope=2;
		displayName="KIVAARI .338LP";
		descriptionShort="#KIVAARIPNC_00";
		model="PanaceaWeapons\Weapons\KIVAARI\PNC_KIVAARI.p3d";
		attachments[]=
		{
			"weaponButtstockM4",
			"weaponWrap",
			"weaponOpticsHunting",
			"weaponFlashlight",
			"PNC_weaponMuzzle_338"
		};
		itemSize[]={10,3};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_co.paa"

		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class JB_KIVAARI_Snake: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake_co.paa"
		};
	};
	class JB_KIVAARI_Snake2: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 2";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake2_co.paa"
		};
	};
	class JB_KIVAARI_Snake3: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 3";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake3_co.paa"
		};
	};
	class JB_KIVAARI_Snake4: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 4";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake4_co.paa"
		};
	};
	class JB_KIVAARI_Snake5: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 5";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake5_co.paa"
		};
	};
	class JB_KIVAARI_Snake6: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 6";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake6_co.paa"
		};
	};
	class JB_KIVAARI_Snake7: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 7";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake7_co.paa"
		};
	};
	class JB_KIVAARI_Snake8: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 8";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake8_co.paa"
		};
	};
	class JB_KIVAARI_Snake9: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 9";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake9_co.paa"
		};
	};
	class JB_KIVAARI_Snake10: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 10";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake10_co.paa"
		};
	};
	class JB_KIVAARI_Snake11: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 11";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake11_co.paa"
		};
	};
	class JB_KIVAARI_Snake12: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Snake Skin 12";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_snake12_co.paa"
		};
	};
	class JB_KIVAARI_Digi: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Digi";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_Digi_co.paa"
		};
	};
	class JB_KIVAARI_Camouflage: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Camouflage";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_camo_co.paa"
		};
	};
	class JB_KIVAARI_Obsidian: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Obsidian";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_obsidian_co.paa"
		};
	};
	class JB_KIVAARI_GoldDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Gold Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_golddragon_co.paa"
		};
	};
	class JB_KIVAARI_Dragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_dragon_co.paa"
		};
	};
	class JB_KIVAARI_FireDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Fire Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_firedragon_co.paa"
		};
	};
	class JB_KIVAARI_MagicDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Magic Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_magicdragon_co.paa"
		};
	};
	class JB_KIVAARI_Pillar: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Pillar";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_pillar_co.paa"
		};
	};
	class JB_KIVAARI_GoldCamouflage: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Gold Camouflage";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_goldcamo_co.paa"
		};
	};
	class JB_KIVAARI_Puzzled: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Puzzled";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_puzzle_co.paa"
		};
	};
	class JB_KIVAARI_Rush: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Rush";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_rush_co.paa"
		};
	};
	class JB_KIVAARI_PurpleHaze: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Purple Haze";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_purplehaze_co.paa"
		};
	};
	class JB_KIVAARI_PurpleDeath: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Purple Death";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_purpledeath_co.paa"
		};
	};
	class JB_KIVAARI_RedDeath: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Red Death";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_reddeath_co.paa"
		};
	};
	class JB_KIVAARI_BlueDeath: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Blue Death";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_bluedeath_co.paa"
		};
	};
	class JB_KIVAARI_GreenDeath: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Green Death";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_greendeath_co.paa"
		};
	};
	class JB_KIVAARI_OrangeDeath: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Orange Death";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_orangedeath_co.paa"
		};
	};
	class JB_KIVAARI_SilverDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Silver Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_silverdragon_co.paa"
		};
	};
	class JB_KIVAARI_PurpleDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Purple Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_purpledragon_co.paa"
		};
	};
	class JB_KIVAARI_MidnightDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Midnight Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_midnightdragon_co.paa"
		};
	};
	class JB_KIVAARI_GreenDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Green Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_greendragon_co.paa"
		};
	};
	class JB_KIVAARI_DuskDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Dusk Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_duskdragon_co.paa"
		};
	};
	class JB_KIVAARI_DayDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Day Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_daydragon_co.paa"
		};
	};
	class JB_KIVAARI_BlueDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Blue Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_bluedragon_co.paa"
		};
	};
	class JB_KIVAARI_BlackDragon: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Blacks Kivaari Black Dragon";
		descriptionShort="A Kivaari Retextured by Jon Black!";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_blackdragon_co.paa"
		};
	};
	class PNC_W_KIVAARI_camo: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Kivaari Camo";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_co_camo.paa"
		};
	};
	class PNC_W_KIVAARI_black: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Kivaari Black";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_co_black.paa"
		};
	};
	class PNC_W_KIVAARI_hive: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Kivaari Hive";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_co_hive.paa"
		};
	};
	class PNC_W_KIVAARI_kryp: PNC_W_KIVAARI
	{
		scope=2;
		displayName="Kivaari Kryp";
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_co_kryp.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_midShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class 338_midShot_SoundShader: base_midShot_SoundShader
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
	class 338_silencermidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
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
	class 338_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"338_midShot_SoundShader",
			"338_midShot_SoundShader",
			"338_midShot_SoundShader",
			"338_midShot_SoundShader"
		};
	};
	class 338_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"338_silencermidShot_SoundShader",
			"338_silencermidShot_SoundShader",
			"338_silencermidShot_SoundShader",
			"338_silencermidShot_SoundShader"
		};
	};
};
