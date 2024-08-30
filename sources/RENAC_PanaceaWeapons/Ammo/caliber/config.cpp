class CfgPatches
{
	class caliber
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Projectiles"
		};
		ammo[]=
		{
			"Bullet_454Casull",
			"Bullet_454Casull_Admin",
			"Bullet_454Casull",
			"Bullet_454Casull_Admin",
			"Bullet_408CheyTac",
			"Bullet_220Swift",
			"Bullet_338LP",
			"Bullet_308WinAP",
			"Bullet_300AAC",
			"Bullet_300AAC_AP",
			"Bullet_50BMG",
			"Bullet_50BMG_AP",
			"Bullet_50Beowolf",
			"Bullet_762x39AP",
			"Bullet_65Creedmore",
			"Bullet_556x45AP",
			"Bullet_12_7_55",
			"Bullet_556x45",
			"Bullet_556x45Tracer",
			"Bullet_545x39",
			"Bullet_545x39Tracer",
			"Bullet_762x54",
			"Bullet_762x54Tracer",
			"Bullet_308Win",
			"Bullet_308WinTracer",
			"Bullet_762x39",
			"Bullet_762x39Tracer",
			"Bullet_9x39AP",
			"Bullet_9x39"
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_454Casull
	{
		name="Bullet_454Casull";
	};
	class AType_Bullet_454Casull_Admin
	{
		name="Bullet_454Casull_Admin";
	};
	class AType_Bullet_408CheyTac
	{
		name="Bullet_408CheyTac";
	};
	class AType_Bullet_338LP
	{
		name="Bullet_338LP";
	};
	class AType_Bullet_220Swift
	{
		name="Bullet_220Swift";
	};
	class AType_Bullet_Bullet_308WinAP
	{
		name="Bullet_308WinAP";
	};
	class AType_Bullet_300AAC
	{
		name="Bullet_300AAC";
	};
	class AType_Bullet_300AAC_AP
	{
		name="Bullet_300AAC_AP";
	};
	class AType_Bullet_50BMG
	{
		name="Bullet_50BMG";
	};
	class AType_Bullet_50BMG_AP
	{
		name="Bullet_50BMG_AP";
	};
	class AType_Bullet_50Beowolf
	{
		name="Bullet_50Beowolf";
	};
	class AType_Bullet_762x39AP
	{
		name="Bullet_762x39AP";
	};
	class AType_Bullet_65Creedmore
	{
		name="Bullet_65Creedmore";
	};
	class AType_Bullet_556x45AP
	{
		name="Bullet_556x45AP";
	};
	class AType_Bullet_12_7_55
	{
		name="Bullet_12_7_55";
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class DefaultAmmo;
	class Bullet_454Casull_Admin: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_454Casull_Admin";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=910;
		typicalSpeed=1000;
		airFriction=-0.00105;
		caliber=0.89999998;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=3;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.4;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=1000;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=66;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_454Casull: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_454Casull";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=910;
		typicalSpeed=1000;
		airFriction=-0.00105;
		caliber=0.89999998;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.001;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.4;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=55;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=66;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_408CheyTac: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_408CheyTac";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=22;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=910;
		typicalSpeed=1100;
		airFriction=-9.9999997e-006;
		caliber=4;
		deflecting=1;
		tracerScale=0;
		tracerStartTime=-1;
		tracerEndTime=0;
		nvgOnly=1;
		damageBarrel=150;
		damageBarrelDestroyed=150;
		weight=0.001;
		impactBehaviour=1;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=2500;
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
			strength=18;
			type="shot";
		};
	};
	class Bullet_338LP: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_338LapuaMagnum";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=18;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=1000;
		typicalSpeed=1150;
		airFriction=-9.9999999e-009;
		caliber=1.5;
		deflecting=0;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=100;
		damageBarrelDestroyed=100;
		weight=0.001;
		impactBehaviour=1;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=650;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=90;
			};
		};
		class NoiseHit
		{
			strength=14;
			type="shot";
		};
	};
	class Bullet_220Swift: Bullet_338LP
	{
		scope=2;
		spawnPileType="Ammo_220Swift";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=18;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=1500;
		typicalSpeed=1650;
		airFriction=-9.9999999e-009;
		caliber=1.5;
		deflecting=0;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=100;
		damageBarrelDestroyed=100;
		weight=0.001;
		impactBehaviour=1;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=350;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=90;
			};
		};
		class NoiseHit
		{
			strength=14;
			type="shot";
		};
	};
	class Bullet_308WinAP: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_308WinAP";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=770;
		typicalSpeed=940;
		airFriction=-0.00044999999;
		caliber=1.4;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.001;
		impactBehaviour=1;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=170;
				armorDamage=10;
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
			strength=10;
			type="shot";
		};
	};
	class Bullet_300AAC_AP: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_300AAC_AP";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=320;
		typicalSpeed=320;
		airFriction=-0.0015;
		caliber=1.3;
		deflecting=15;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=50;
		damageBarrelDestroyed=50;
		weight=0.001;
		impactBehaviour=0;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			class Health
			{
				damage=120;
				armorDamage=10;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=75;
				damageOverride[]=
				{
					{0.89999998,1}
				};
			};
			class NoiseHit
			{
				strength=6;
				type="shot";
			};
		};
	};
	class Bullet_300AAC: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_300AAC";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=320;
		typicalSpeed=320;
		airFriction=-0.0015;
		caliber=1;
		deflecting=15;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=550;
		damageBarrelDestroyed=550;
		weight=0.001;
		impactBehaviour=0;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.5;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			class Health
			{
				damage=120;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=75;
				damageOverride[]=
				{
					{0.89999998,1}
				};
			};
		};
	};
	class Bullet_50BMG_AP: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_50BMG_AP";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=60;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=1050;
		typicalSpeed=1150;
		airFriction=-9.9999997e-006;
		caliber=100000;
		deflecting=1;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=550;
		damageBarrelDestroyed=550;
		weight=0.001;
		impactBehaviour=1;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=3500;
				armorDamage=10;
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
			strength=10;
			type="shot";
		};
	};
	class Bullet_50BMG: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_50BMG";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=1050;
		typicalSpeed=1150;
		airFriction=-9.9999997e-006;
		caliber=10;
		deflecting=1;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=550;
		damageBarrelDestroyed=550;
		weight=0.001;
		impactBehaviour=1;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=3500;
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
			strength=10;
			type="shot";
		};
	};
	class Bullet_12_7_55: Bullet_Base
	{
		scope=2;
        cartridge="FxCartridge_762";
        casing="FxCartridge_762";
        round="FxRound_308Win";
        spawnPileType="Ammo_12_7_55";
        hit=12;
        indirectHit=0;
        indirectHitRange=0;
        visibleFire=22;
        audibleFire=22;
        visibleFireTime=4;
        airLock=1;
        typicalSpeed=600;
        initSpeed=650;
        airFriction=-0.0015;
        caliber=5;
        deflecting=10;
        damageBarrel=300;
        damageBarrelDestroyed=300;
        weight=0.018999999;
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
				damage=3500;
			};
			class Blood
			{
				damage=400;
			};
			class Shock
			{
				damage=400;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_50Beowolf: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_50Beowolf";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=13;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=620;
		typicalSpeed=620;
		airFriction=-0.0024999999;
		caliber=1.5;
		deflecting=13;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.001;
		impactBehaviour=1;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=300;
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
			strength=14;
			type="shot";
		};
	};
	class Bullet_762x39AP: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_762x39AP";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=9.5;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=640;
		typicalSpeed=740;
		airFriction=-0.0015;
		caliber=1;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.001;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.5;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			class Health
			{
				damage=110;
				armorDamage=3;
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
			strength=10;
			type="shot";
		};
	};
	class Bullet_65Creedmore: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_65Creedmore";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=14;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=1265;
		typicalSpeed=1380;
		airFriction=-0.00044999999;
		caliber=1.60210001;
		deflecting=5;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=150;
		damageBarrelDestroyed=150;
		weight=0.001;
		impactBehaviour=1;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=200;
				armorDamage=1;
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
			strength=12;
			type="shot";
		};
	};
	class Bullet_556x45AP: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_556x45AP";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=850;
		typicalSpeed=950;
		airFriction=-0.00125;
		caliber=0.95;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.001;
		impactBehaviour=0;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.5;
			defaultDamageOverride[]=
			{
				{0.87,1}
			};
			class Health
			{
				damage=110;
				armorDamage=3;
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
			strength=10;
			type="shot";
		};
	};
	class Bullet_556x45: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_556x45";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=850;
		typicalSpeed=1000;
		airFriction=-0.00125;
		caliber=0.8;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.001;
		impactBehaviour=0;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.5;
			defaultDamageOverride[]=
			{
				{0.87,1}
			};
			class Health
			{
				damage=110;
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
			strength=6;
			type="shot";
		};
	};
	class Bullet_556x45Tracer: Bullet_556x45
	{
		scope=2;
		model="\dz\weapons\projectiles\tracer_red.p3d";
		spawnPileType="Ammo_556x45Tracer";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=3;
	};
	class Bullet_545x39: Bullet_Base
	{
		scope=2;
		spawnPileType="Ammo_545x39";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=7.1999998;
		airFriction=-0.00125;
		typicalSpeed=880;
		initSpeed=880;
		caliber=1.20;
		deflecting=10;
		damageBarrel=214.28572;
		damageBarrelDestroyed=214.28572;
		weight=0.001;
		impactBehaviour=0;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.5;
			class Health
			{
				damage=80;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=90;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_545x39Tracer: Bullet_545x39
	{
		scope=2;
		model="\dz\weapons\projectiles\tracer_green.p3d";
		spawnPileType="Ammo_545x39Tracer";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=3;
	};
	class Bullet_762x54: Bullet_Base
	{
		scope=2;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType="Ammo_762x54";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=790;
		typicalSpeed=790;
		airFriction=-9.9999997e-005;
		caliber=1;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.001;
		impactBehaviour=1;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.5;
			defaultDamageOverride[]=
			{
				{0.94,1}
			};
			class Health
			{
				damage=170;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=100;
				damageOverride[]=
				{
					{0.86000001,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_762x54Tracer: Bullet_762x54
	{
		scope=2;
		model="\dz\weapons\projectiles\tracer_green.p3d";
		spawnPileType="Ammo_762x54Tracer";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=3;
	};
	class Bullet_308Win: Bullet_Base
	{
		scope=2;
		casing="FxCartridge_762";
		round="FxRound_308Win";
		spawnPileType="Ammo_308Win";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=770;
		typicalSpeed=940;
		tracerScale=1.2;
		tracerStartTime=-1;
		tracerEndTime=1;
		airFriction=-0.00044999999;
		caliber=1;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.001;
		impactBehaviour=1;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.6;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=170;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=170;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_308WinTracer: Bullet_308Win
	{
		scope=2;
		model="\dz\weapons\projectiles\tracer_red.p3d";
		spawnPileType="Ammo_308WinTracer";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=3;
	};
	class Bullet_762x39: Bullet_Base
	{
		scope=2;
		casing="FxCartridge_762x39";
		round="FxRound_762x39";
		spawnPileType="Ammo_762x39";
		hit=9.5;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=640;
		typicalSpeed=740;
		airFriction=-0.0015;
		caliber=0.7;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.001;
		impactBehaviour=0;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.5;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			class Health
			{
				damage=110;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=110;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_762x39Tracer: Bullet_762x39
	{
		scope=2;
		model="\dz\weapons\projectiles\tracer_green.p3d";
		spawnPileType="Ammo_762x39Tracer";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=3;
	};
	class Bullet_9x39AP: Bullet_Base
	{
		scope=2;
		casing="FxCartridge_762x39";
		round="FxRound_762x39";
		spawnPileType="Ammo_9x39AP";
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=1.2;
		deflecting=15;
		typicalSpeed=320;
		airFriction=-0.00015000001;
		initSpeed=320;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.001;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		impactBehaviour=0;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.8;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			class Health
			{
				damage=75;
				armorDamage=10;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=75;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_9x39: Bullet_Base
	{
		scope=2;
		casing="FxCartridge_762x39";
		round="FxRound_762x39";
		spawnPileType="Ammo_9x39";
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.89999998;
		deflecting=20;
		typicalSpeed=280;
		airFriction=-0.0015;
		initSpeed=280;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.001;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		impactBehaviour=0;
		hitAnimation=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=0.5;
			class Health
			{
				damage=120;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=75;
				damageOverride[]=
				{
					{0.94999999,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
};
