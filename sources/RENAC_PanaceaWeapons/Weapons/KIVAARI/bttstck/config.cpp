class CfgPatches
{
	class bttstck
	{
		units[]=
		{
			"PNC_KIVAARI_Bttstck",
			"PNC_KIVAARI_Bttstck_camo",
			"PNC_KIVAARI_Bttstck_hive",
			"PNC_KIVAARI_Bttstck_kryp"
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
	class PNC_KIVAARI_Bttstck: Inventory_Base
	{
		scope=2;
		displayName="#Kivaaristck_00";
		descriptionShort="#Kivaaristck_01";
		model="PanaceaWeapons\Weapons\KIVAARI\bttstck\PNC_KIVAARI_bttstck.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponButtstockM4"
		};
		weight=454;
		itemSize[]={2,1};
		dispersionModifier=-9.9999997e-05;
		dispersionCondition="true";
		recoilModifier[]={1,1,1};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"camo"
		};
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
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\attachments\data\m4_stock.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\m4_stock.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\m4_stock_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\m4_stock_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\attachments\data\m4_stock_destruct.rvmat"
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
	class PNC_KIVAARI_Bttstck_camo: PNC_KIVAARI_Bttstck
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_co_camo.paa"
		};
	};
	class PNC_KIVAARI_Bttstck_hive: PNC_KIVAARI_Bttstck
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_co_hive.paa"
		};
	};
	class PNC_KIVAARI_Bttstck_kryp: PNC_KIVAARI_Bttstck
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Weapons\KIVAARI\data\body_co_kryp.paa"
		};
	};
};
