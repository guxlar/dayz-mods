class CfgPatches
{
	class Arbiter
	{
		units[]={};
		weapons[]=
		{
			"Arbiter",
			"Arbiter_Maradeurs"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
		magazines[]=
		{
			"Ammo_20mm"
		};
		ammo[]=
		{
			"Bullet_20mm"
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
	class BoltActionRifle_InnerMagazine_Base;
	class Arbiter_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope=0;
		displayName="Arbiter";
		descriptionShort="Однозарядная снайперская винтовка Arbiter 20mm использует патрон 20×102 мм - данный патрон пробивает бронированную технику насквозь и поражая позади идущую пехоту и экипаж техники красивым фейверком из ошмётков пехоты.";
		weight=4000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		DisplayMagazine=0;
		WeaponLength=1.22271;
		barrelArmor=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_20mm"
		};
		magazines[]={};
		ejectType=0;
		recoilModifier[]={5,5,5};
		swayModifier[]={2.5,2.5,1.3};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_dry",
			0.5,
			1,
			20
		};
		reloadSkips[]={0.31999999,0.41,0.5,0.58999997,0.69,0.76999998};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_reloading",
			0.80000001,
			1,
			20
		};
		reloadAction="ReloadMosinFull";
		shotAction="ReloadMosinShort";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Arbiter_Shot_SoundSet",
				"Arbiter_Shot_SoundSet",
				"Arbiter_Shot_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Mosin_silencerHomeMade_SoundSet",
					"Mosin_silencerHomeMadeTail_SoundSet",
					"Mosin_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			soundBegin[]=
			{
				"begin1",
				0.30000001,
				"begin2",
				0.30000001,
				"begin2",
				0.30000001
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
			reloadTime=1;
			recoil="recoil_mosin";
			recoilProne="recoil_mosin_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mosin9130_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.029999999,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=3;
				overheatingDecayInterval=4;
				class BarrelSmoke
				{
					overrideParticle="smoking_barrel_small";
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
		};
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
							1,
							
							{
								"PanaceaWeapons\Arbiter\data\Arbiter_1.rvmat",
								"PanaceaWeapons\Arbiter\data\Arbiter_2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PanaceaWeapons\Arbiter\data\Arbiter_1.rvmat",
								"PanaceaWeapons\Arbiter\data\Arbiter_2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PanaceaWeapons\Arbiter\data\Arbiter_damage_1.rvmat",
								"PanaceaWeapons\Arbiter\data\Arbiter_damage_2.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PanaceaWeapons\Arbiter\data\Arbiter_damage_1.rvmat",
								"PanaceaWeapons\Arbiter\data\Arbiter_damage_2.rvmat"
							}
						},
						
						{
							0,
							
							{
								"PanaceaWeapons\Arbiter\data\Arbiter_destruct_1.rvmat",
								"PanaceaWeapons\Arbiter\data\Arbiter_destruct_2.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Arbiter: Arbiter_Base
	{
		scope=2;
		model="PanaceaWeapons\Arbiter\arbiter_20mm.p3d";
		itemSize[]={10,3};
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting"
		};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Arbiter\data\Arbiter_20_01_co.paa",
			"PanaceaWeapons\Arbiter\data\Arbiter_20_02_co.paa"
		};
	};
	class Arbiter_Maradeurs: Arbiter
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Arbiter\data\Arbiter_mar_1.paa",
			"PanaceaWeapons\Arbiter\data\Arbiter_mar_2.paa"
		};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_20mm: Ammunition_Base
	{
		scope=2;
		displayName="20mm Cartrige";
		descriptionShort="20mm Cartrige";
		model="\PanaceaWeapons\Arbiter\20mm_SingleRound.p3d";
		iconCartridge=1;
		rotationFlags=34;
		itemSize[]={2,1};
		weight=200;
		count=40;
		ammo="Bullet_20mm";
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
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_20mm
	{
		name="Bullet_20mm";
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_20mm: Bullet_Base
	{
		scope=2;
		casing="";
		round="FxRound_20mm";
		spawnPileType="Ammo_20mm";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		typicalSpeed=740;
		tracerScale=1.2;
		tracerStartTime=-1;
		tracerEndTime=1;
		airFriction=-0.00085000001;
		caliber=5000;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		initSpeed=740;
		weight=0.1;
		impactBehaviour=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=5100;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=100;
			};
		};
		class NoiseHit
		{
			strength=100;
			type="shot";
		};
	};
};
class CfgVehicles
{
	class All;
	class Strategic;
	class ThingEffect;
	class FxRound;
	class FxRound_20mm: FxRound
	{
		model="\PanaceaWeapons\Arbiter\20mm_SingleRound.p3d";
	};
};
class CfgSoundShaders
{
	class Arbiter_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\Arbiter\sound\Shot.ogg",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve="closeShotCurve";
	};
};
class CfgSoundSets
{
	class Pistol_Shot_Base_SoundSet;
	class Arbiter_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Arbiter_closeShot_SoundShader"
		};
	};
};
