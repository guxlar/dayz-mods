class CfgPatches
{
	class handguard
	{
		units[]=
		{
			"PNC_Fal_WoodenHndgrd",
			"PNC_Fal_PlasticHndgrd",
			"PNC_Fal_RISHndgrd"
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
	class Inventory_Base;
	class PNC_Fal_WoodenHndgrd: Inventory_Base
	{
		scope=2;
		displayName="#LARhdng_00";
		descriptionShort="#LARhdng_01";
		model="PanaceaWeapons\Weapons\FNFAL\handguard\PNC_FalHandguard_Wooden.p3d";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponHundguardFal"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\attachments\data\handguard_world.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\handguard_world.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\handguard_world_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\handguard_world_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\attachments\data\handguard_world_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};
	class PNC_Fal_PlasticHndgrd: Inventory_Base
	{
		scope=2;
		displayName="#LARsttck1_00";
		descriptionShort="#LARsttck1_01";
		model="PanaceaWeapons\Weapons\FNFAL\handguard\PNC_FalHandguard_Plastic.p3d";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponHundguardFal"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\attachments\data\handguard_world.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\handguard_world.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\handguard_world_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\handguard_world_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\attachments\data\handguard_world_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};
	class PNC_Fal_RISHndgrd: Inventory_Base
	{
		scope=2;
		displayName="#LARrishdng_00";
		descriptionShort="#LARrishdng_01";
		model="PanaceaWeapons\Weapons\FNFAL\handguard\PNC_FalHandguard_Ris.p3d";
		rotationFlags=17;
		reversed=0;
		weight=470;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponHundguardFal"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={1,1,1};
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
								"DZ\weapons\attachments\data\m4_ris.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\m4_ris.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\m4_ris_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\m4_ris_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\attachments\data\m4_ris_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};
};
