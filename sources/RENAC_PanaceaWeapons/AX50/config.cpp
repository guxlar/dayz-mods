class CfgPatches
{
	class AX50
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_AX50"
		};
		magazines[]=
		{
			"PNC_Mag_AX50_7rnd"
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
	class BoltActionRifle_Base;
	class PNC_AX50_Base: BoltActionRifle_Base
	{
		scope=0;
		displayName="#AX50S_00";
		descriptionShort="#AX50S_01";
		weight=12500;
		model="PanaceaWeapons\AX50\PNC_AX50.p3d";
		absorbency=0;
		initSpeedMultiplier=1.2;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		WeaponLength=1.1;
		barrelArmor=3.888;
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"PNC_weaponMuzzle_127_99"
		};
		itemSize[]={10,3};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_50BMG"
		};
		magazines[]=
		{
			"PNC_Mag_AX50_7rnd"
		};
		ejectType=1;
		recoilModifier[]={0.5,0.69999999,0.5};
		swayModifier[]={1.3,1.3,0.69999999};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AX50_Shot_SoundSet",
				"SVD_Tail_SoundSet",
				"SVD_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AX50_silencer_SoundSet",
					"SVD_silencerHomeMadeTail_SoundSet",
					"SVD_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.69999999;
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
					hitpoints=30000;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"PanaceaWeapons\AX50\data\material.rvmat",
								"PanaceaWeapons\AX50\data\materialbody.rvmat",
								"PanaceaWeapons\AX50\data\materialhandle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PanaceaWeapons\AX50\data\material.rvmat",
								"PanaceaWeapons\AX50\data\materialbody.rvmat",
								"PanaceaWeapons\AX50\data\materialhandle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PanaceaWeapons\AX50\data\material_damage.rvmat",
								"PanaceaWeapons\AX50\data\materialbody_damage.rvmat",
								"PanaceaWeapons\AX50\data\materialhandle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PanaceaWeapons\AX50\data\material_damage.rvmat",
								"PanaceaWeapons\AX50\data\materialbody_damage.rvmat",
								"PanaceaWeapons\AX50\data\materialhandle_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"PanaceaWeapons\AX50\data\material_destruct.rvmat",
								"PanaceaWeapons\AX50\data\materialbody_destruct.rvmat",
								"PanaceaWeapons\AX50\data\materialhandle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_W_AX50: PNC_AX50_Base
	{
		scope=2;
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class PNC_Mag_AX50_7rnd: Magazine_Base
	{
		scope=2;
		displayName="#AX50MAGPNC_00";
		descriptionShort="#AX50MAGPNC_01";
		model="PanaceaWeapons\AX50\mag\PNC_AX50_mag.p3d";
		weight=400;
		itemSize[]={2,2};
		count=7;
		ammo="Bullet_50BMG";
		ammoItems[]=
		{
			"Ammo_50BMG",
			"Ammo_50BMG_AP"
		};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"PanaceaWeapons\AX50\mag\material.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PanaceaWeapons\AX50\mag\material.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PanaceaWeapons\AX50\mag\materia_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PanaceaWeapons\AX50\mag\materia_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"PanaceaWeapons\AX50\mag\material_destruct.rvmat"
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
