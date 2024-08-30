class CfgPatches
{
	class VSK94
	{
		units[]={};
		weapons[]=
		{
			"VTR_VSK94"
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
			"VTR_Mag_VSK94"
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
	class VSK94_VTR_Base: Rifle_Base
	{
		scope=0;
		displayName="VSK-94";
		descriptionShort="Российская снайперская винтовка, созданная на базе малогабаритного автомата 9А-91 в Тульском конструкторском бюро приборостроения в 1994 году для ведения снайперского бесшумного и беспламенного огня. Использует патрон 9х39";
		model="PanaceaWeapons\VSK94\VSK94.p3d";
		weight=2500;
		absorbency=0;
		initSpeedMultiplier=0.80000001;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		WeaponLength=0.64300001;
		barrelArmor=3.888;
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics"
		};
		itemSize[]={7,3};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		magazines[]=
		{
			"VTR_Mag_VSK94"
		};
		ejectType=1;
		recoilModifier[]={0.60000002,0.60000002,0.60000002};
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
				"VSS_Vintorez_Shot_SoundSet",
				"VSS_Vintorez_Tail_SoundSet",
				"VSS_Vintorez_InteriorTail_SoundSet"
			};
			reloadTime=0.071999997;
			dispersion=0.00019999999;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"VSS_Vintorez_Shot_SoundSet",
				"VSS_Vintorez_Tail_SoundSet",
				"VSS_Vintorez_InteriorTail_SoundSet"
			};
			reloadTime=0.071999997;
			dispersion=0.00019999999;
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
					overrideParticle="weapon_shot_vss_01";
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
				maxOverheatingValue=20;
				shotsToStartOverheating=3;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
					hitpoints=10100;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"PanaceaWeapons\VSK94\data\material.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PanaceaWeapons\VSK94\data\material.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PanaceaWeapons\VSK94\data\material_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PanaceaWeapons\VSK94\data\material_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"PanaceaWeapons\VSK94\data\material_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class VTR_VSK94: VSK94_VTR_Base
	{
		scope=2;
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class VTR_Mag_VSK94: Magazine_Base
	{
		scope=2;
		displayName="VSK-94 Magazine";
		descriptionShort="Магазин для винтовки VSK-94";
		model="PanaceaWeapons\VSK94\magazine\VSK_Mag.p3d";
		weight=200;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_9x39";
		ammoItems[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"PanaceaWeapons\VSK94\data\material.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PanaceaWeapons\VSK94\data\material.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PanaceaWeapons\VSK94\data\material_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PanaceaWeapons\VSK94\data\material_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"PanaceaWeapons\VSK94\data\material_destruct.rvmat"
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
