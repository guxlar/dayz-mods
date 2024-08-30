class CfgPatches
{
	class Beowulf50
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_Beowulf50",
			"PNC_W_Beowulf50_camo",
			"PNC_W_Beowulf50_kryp",
			"PNC_W_Beowulf50_hive"
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
	class Launcher_Base;
	class PNC_Beowulf50_Base: Rifle_Base
	{
		scope=0;
		weight=3970;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		WeaponLength=0.81478399;
		barrelArmor=3.75;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_50Beowolf"
		};
		magazines[]=
		{
			"PNC_Mag_Beowulf50_20Rnd"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={2,2,2};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"folding_lowered",
			"folding_raised"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadM4";
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_reload_0",
			0.80000001,
			1,
			20
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Beowulf_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Barret_silencer_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"Barret_silencer_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
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
				"begin3",
				0.33333001
			};
			reloadTime=0.11;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0011;
			magazineSlot="magazine";
			beginSilenced_Pro1[]=
			{
				"",
				1,
				1,
				75
			};
			beginSilenced_Pro2[]={"2",1,1,75};
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
					"beginSilenced_Pro1",
					0.5,
					"beginSilenced_Pro2",
					0.5
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"Beowulf_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Barret_silencer_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"Barret_silencer_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
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
				"begin3",
				0.33333001
			};
			reloadTime=0.11;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0011;
			magazineSlot="magazine";
			beginSilenced_Pro1[]=
			{
				"",
				1,
				1,
				75
			};
			beginSilenced_Pro2[]={"2",1,1,75};
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
					"beginSilenced_Pro1",
					0.5,
					"beginSilenced_Pro2",
					0.5
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=50;
			distanceZoomMax=550;
		};
	};
	class PNC_W_Beowulf50: PNC_Beowulf50_Base
	{
		scope=2;
		displayName="Beowulf .50";
		descriptionShort="#50BeowolfW_00";
		model="PanaceaWeapons\Weapons\Beowulf50\PNC_Beowulf50.p3d";
		attachments[]=
		{
			"weaponButtstockM4",
			"PNC_weaponMuzzle_127_99",
			"weaponWrap",
			"weaponOptics"
		};
		itemSize[]={10,3};
		spawnDamageRange[]={0,0.60000002};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\Beowulf50\data\hndgrd_co.paa",
			"PanaceaWeapons\Weapons\Beowulf50\data\rail_co.paa",
			"PanaceaWeapons\Weapons\Beowulf50\data\reciver_co.paa"
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
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
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
				maxOverheatingValue=60;
				shotsToStartOverheating=7;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
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
					hitpoints=15200;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_Beowulf50_camo: PNC_W_Beowulf50
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\Beowulf50\data\hndgrd_co_camo.paa",
			"PanaceaWeapons\Weapons\Beowulf50\data\reciver_co_camo.paa"
		};
	};
	class PNC_W_Beowulf50_kryp: PNC_W_Beowulf50
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\Beowulf50\data\hndgrd_co_kryp.paa",
			"PanaceaWeapons\Weapons\Beowulf50\data\reciver_co_kryp.paa"
		};
	};
	class PNC_W_Beowulf50_hive: PNC_W_Beowulf50
	{
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\Beowulf50\data\hndgrd_co_hive.paa",
			"PanaceaWeapons\Weapons\Beowulf50\data\reciver_co_hive.paa"
		};
	};
};
class CfgSoundShaders
{
	class base_midShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class Beowulf_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\Beowulf50\sounds\beowulf",
				1
			}
		};
		volume=0.79432821;
		range=2000;
		rangeCurve="midShotCurve";
	};
	class Barret_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Weapons\BarretM82A1\sounds\barret_silence",
				1
			}
		};
		volume=0.79432821;
		range=250;
		rangeCurve="midShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Beowulf_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Beowulf_midShot_SoundShader",
			"Beowulf_midShot_SoundShader",
			"Beowulf_midShot_SoundShader",
			"Beowulf_midShot_SoundShader"
		};
	};
	class Barret_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Barret_silencerMidShot_SoundShader",
			"Barret_silencerMidShot_SoundShader",
			"Barret_silencerMidShot_SoundShader",
			"Barret_silencerMidShot_SoundShader"
		};
	};
};
