class CfgPatches
{
	class supp
	{
		units[]=
		{
			"PNC_Suppressor_338"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class ItemSuppressor;
	class PNC_Suppressor_338: ItemSuppressor
	{
		scope=2;
		displayName="#SUPPKIVAARI_00";
		descriptionShort="#SUPPKIVAARI_01";
		model="PanaceaWeapons\Weapons\KIVAARI\supp\PNC_Supp338.p3d";
		rotationFlags=17;
		reversed=0;
		weight=73;
		itemSize[]={3,1};
		itemModelLength=0.148;
		barrelArmor=3281.25;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_west"
		};
		inventorySlot[]=
		{
			"PNC_weaponMuzzle_338"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-9.9999997e-05;
		noiseShootModifier=-0.89999998;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={1,1,1};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\cover_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\suppressor556.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\suppressor556.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\suppressor556_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\suppressor556_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\suppressor556_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
				class Ruined
				{
					onlyWithinHealthLabel[]={4,4};
					illuminateWorld=1;
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
	};
};
