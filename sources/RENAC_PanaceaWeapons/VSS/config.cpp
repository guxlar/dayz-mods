class CfgPatches
{
	class VSS
	{
		units[]={};
		weapons[]=
		{
			"PNC_VSSK_vychlop"
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
	class PNC_vssk_Base: Rifle_Base
	{
		scope=0;
		displayName="#VSSK_00";
		descriptionShort="#VSSK_01";
		weight=6000;
		model="PanaceaWeapons\VSS\PNC_VSS.p3d";
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		WeaponLength=1.1;
		barrelArmor=3.888;
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting"
		};
		itemSize[]={10,3};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12_7_55"
		};
		magazines[]=
		{
			"PNC_VSSK_Mag"
		};
		ejectType=1;
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		recoilModifier[]={1,1.2,1};
		swayModifier[]={2.3,5,1.3};
		modes[]=
		{
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
			soundSetShotExt[]=
			{
				
				{
					"VSS_Vintorez_Shot_SoundSet",
					"VSS_Vintorez_Tail_SoundSet",
					"VSS_Vintorez_InteriorTail_SoundSet"
				}
			};
			reloadTime=0.30000001;
			dispersion=0.001;
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
		class OnBulletCasingEject
		{
			class ChamberSmokeRaise
			{
				overrideParticle="weapon_shot_chamber_smoke_raise";
				overridePoint="Nabojnicestart";
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
	class PNC_VSSK_vychlop: PNC_vssk_Base
	{
		scope=2;
	};
};
