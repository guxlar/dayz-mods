class CfgPatches
{
	class RENAC_Spur_Modded_Vanilla
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Navigation",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Vests",
			"DZ_Gear_Drinks",
			"Spur_BagZ",
			"Spur_BagZ_Scripts"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;

	class Whetstone: Inventory_Base
	{
		inventorySlot[]=
		{
			"Whetstone"
		};
	};
	class KukriKnife: Inventory_Base
	{
		inventorySlot[]=
		{
			"KukriKnife",
			"KukriKnife2",
			"KukriKnife3",
			"KukriKnife4",
			"KukriKnife5",
			"KukriKnife6",
			"KukriKnife7",
			"KukriKnife8",
			"KukriKnife9",
			"KukriKnife10",
			"KukriKnife11"
		};
	};
	class FangeKnife: Inventory_Base
	{
		inventorySlot[]=
		{
			"Knife",
			"FangeKnife",
			"FangeKnife2",
			"FangeKnife3",
			"FangeKnife4",
			"FangeKnife5",
			"FangeKnife6",
			"FangeKnife7",
			"FangeKnife8",
			"FangeKnife9",
			"FangeKnife10",
			"FangeKnife11"
		};
	};
	class Hatchet: Inventory_Base
	{
		inventorySlot[]=
		{
			"MassTool",
			"Hatchet",
			"Hatchet1",
			"Hatchet2",
			"Hatchet3",
			"Hatchet4"
		};
	};
	class Machete: Inventory_Base
	{
		inventorySlot[]=
		{
			"Machete"
		};
	};
	class OrientalMachete: Inventory_Base
	{
		inventorySlot[]=
		{
			"OrientalMachete",
			"OrientalMachete2",
			"OrientalMachete3",
			"OrientalMachete4",
			"OrientalMachete5",
			"OrientalMachete6",
			"OrientalMachete7",
			"OrientalMachete8",
			"OrientalMachete9",
			"OrientalMachete10",
			"OrientalMachete11"
		};
	};
	class CrudeMachete: Inventory_Base
	{
		inventorySlot[]=
		{
			"CrudeMachete",
			"CrudeMachete2",
			"CrudeMachete3",
			"CrudeMachete4",
			"CrudeMachete5",
			"CrudeMachete6",
			"CrudeMachete7",
			"CrudeMachete8",
			"CrudeMachete9",
			"CrudeMachete10",
			"CrudeMachete11"
		};
	};
	class Bottle_Base;
	class Canteen: Bottle_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\drinks\data\canteen_co.paa"
		};
	};
	class Canteen_Spur_Green: Canteen
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\gcanteen.paa"
		};
	};
	class Canteen_Spur_Black: Canteen
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\bcanteen.paa"
		};
	};
	class Canteen_Spur_Tan: Canteen
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\tcanteen.paa"
		};
	};
	class Canteen_Spur_WoodlandCamo: Canteen
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\wccanteen.paa"
		};
	};
	class Canteen_Spur_MultiCamo: Canteen
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\mccanteen.paa"
		};
	};
	class Canteen_Spur_WinterCamo: Canteen
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\wncanteen.paa"
		};
	};
	class Clothing;
	class SmershBag;
	class SmershBag_Spur_Green: SmershBag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\gsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\gsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\gsmersh.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\Spur_Smersh.rvmat",
								"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\Spur_Smersh_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\Spur_Smersh.rvmat",
								"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\Spur_Smersh_g.rvmat"
							}
						},
						
						{
							0.50,
							
							{
								"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\Spur_Smersh_damage.rvmat",
								"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\Spur_Smersh_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\Spur_Smersh_damage.rvmat",
								"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\Spur_Smersh_g_damage.rvmat"
							}
						},
						
						{
							0.00,
							
							{
								"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\Spur_Smersh_destruct.rvmat",
								"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\Spur_Smersh_g_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SmershBag_Spur_Black: SmershBag_Spur_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\bsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\bsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\bsmersh.paa"
		};
	};
	class SmershBag_Spur_Tan: SmershBag_Spur_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\tsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\tsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\tsmersh.paa"
		};
	};
	class SmershBag_Spur_WoodlandCamo: SmershBag_Spur_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\wcsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\wcsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\wcsmersh.paa"
		};
	};
	class SmershBag_Spur_MultiCamo: SmershBag_Spur_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\mcsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\mcsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\mcsmersh.paa"
		};
	};
	class SmershBag_Spur_WinterCamo: SmershBag_Spur_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\wnsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\wnsmersh.paa",
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\wnsmersh.paa"
		};
	};
	class PlateCarrierHolster: Clothing
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\vests\data\ballisticvest_co.paa"
		};
	};
	class PlateCarrierHolster_Spur_Green: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\gholster.paa"
		};
	};
	class PlateCarrierHolster_Spur_Tan: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\tholster.paa"
		};
	};
	class PlateCarrierHolster_Spur_Black: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\bholster.paa"
		};
	};
	class PlateCarrierHolster_Spur_WoodlandCamo: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\wcholster.paa"
		};
	};
	class PlateCarrierHolster_Spur_MultiCamo: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\mcholster.paa"
		};
	};
	class PlateCarrierHolster_Spur_WinterCamo: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Modded_Vanilla\data\wnholster.paa"
		};
	};
};