class CfgPatches
{
	class RENAC_Spur_LoneWanderer_Bag
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Spur_BagZ",
			"Spur_BagZ_Scripts",
			"DZ_Characters"
		};
	};
};
class cfgVehicles
{
	class Clothing;
	class RENAC_Spur_LW_Bag_ColorBase: Clothing
	{
		scope=0;
		displayName="SPUR Lone Wanderers Backpack";
		descriptionShort="100-slot nice durable leather and canvas bag";
		model="RENAC_SpurBagZ\Spur_LW_Bag\Spur_LW_Bag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Melee",
			"BladeSlot",
			"Hatchet",
			"Machete",
			"KukriKnife",
			"CrudeMachete",
			"OrientalMachete",
			//"Spur_Poncho"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={9,7};
		weight=600;
		varWetMax=0.79000002;
		heatIsolation=0.8000008;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		simpleHiddenSelections[]=
        {
            "slot_melee_rifle",
            "slot_melee_melee",
			"StrapLeft",
			"StrapRifle",
			"StrapRight",
			"StrapBlade"
        };
		class ClothingTypes
		{
			male="RENAC_SpurBagZ\Spur_LW_Bag\Spur_LW_Bag_m.p3d";
			female="RENAC_SpurBagZ\Spur_LW_Bag\Spur_LW_Bag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag.rvmat"
							}
						},
						
						{
							0.50,
							
							{
								"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_damage.rvmat"
							}
						},
						
						{
							0.00,
							
							{
								"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class RENAC_Spur_LW_Bag_Black: RENAC_Spur_LW_Bag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Black_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Black_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Black_co.paa"
		};
	};
	class RENAC_Spur_LW_Bag_Blue: RENAC_Spur_LW_Bag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Blue_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Blue_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Blue_co.paa"
		};
	};
	class RENAC_Spur_LW_Bag_Brown: RENAC_Spur_LW_Bag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Brown_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Brown_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Brown_co.paa"
		};
	};
	class RENAC_Spur_LW_Bag_Green: RENAC_Spur_LW_Bag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Green_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Green_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Green_co.paa"
		};
	};
	class RENAC_Spur_LW_Bag_Grey: RENAC_Spur_LW_Bag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Grey_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Grey_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Grey_co.paa"
		};
	};
	class RENAC_Spur_LW_Bag_Orange: RENAC_Spur_LW_Bag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Orange_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Orange_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Orange_co.paa"
		};
	};
	class RENAC_Spur_LW_Bag_Purple: RENAC_Spur_LW_Bag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Purple_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Purple_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Purple_co.paa"
		};
	};
	class RENAC_Spur_LW_Bag_Red: RENAC_Spur_LW_Bag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Red_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Red_co.paa",
			"RENAC_SpurBagZ\Spur_LW_Bag\data\Spur_Bag_Red_co.paa"
		};
	};
};