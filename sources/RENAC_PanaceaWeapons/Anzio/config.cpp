class CfgPatches
{
	class Anzio
	{
		units[]={};
		weapons[]=
		{
			"PNC_Anzio"
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
	class BoltActionRifle_InnerMagazine_Base;
	class Anzio_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope=0;
		displayName="Anzio";
		descriptionShort="20-мм винтовка Анцио - американская антиматериальная винтовка . и продается Anzio Iron Works. Это первая американская антиматериальная винтовка, разработанная и серийно производимая для публичной продажи с диаметром ствола более 50 калибра за более чем 80 лет.";
		weight=10000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		DisplayMagazine=0;
		WeaponLength=1.22271;
		barrelArmor=2;
		chamberSize=3;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_20mm"
		};
		magazines[]={};
		ejectType=0;
		recoilModifier[]={4,4,4};
		swayModifier[]={2,2,2};
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
								"PanaceaWeapons\Anzio\data\material.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PanaceaWeapons\Anzio\data\material.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PanaceaWeapons\Anzio\data\material_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PanaceaWeapons\Anzio\data\material_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"PanaceaWeapons\Anzio\data\material_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PNC_Anzio: Anzio_Base
	{
		scope=2;
		model="PanaceaWeapons\Anzio\anzio.p3d";
		itemSize[]={10,4};
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting"
		};
	};
};
