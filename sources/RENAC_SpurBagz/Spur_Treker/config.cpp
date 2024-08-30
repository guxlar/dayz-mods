class CfgPatches
{
	class RENAC_Spur_Treker
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
	class RENAC_Spur_Treker_ColorBase: Clothing
	{
		scope=0;
		displayName="SPUR Treker Bag";
		descriptionShort="200-slot sturdy bag for treking";
		model="RENAC_SpurBagZ\Spur_Treker\Spur_Treker_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={10,20};
		weight=600;
		varWetMax=0.249;
		heatIsolation=0.8000008;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		canBeDigged=1;
		soundAttType="Outdoor";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		
		class ClothingTypes
		{
			male="RENAC_SpurBagZ\Spur_Treker\Spur_Treker_m.p3d";
			female="RENAC_SpurBagZ\Spur_Treker\Spur_Treker_f.p3d";
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
								"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker.rvmat"
							}
						},
						
						{
							0.70,
							
							{
								"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker.rvmat"
							}
						},
						
						{
							0.50,
							
							{
								"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_damage.rvmat"
							}
						},
						
						{
							0.30,
							
							{
								"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_damage.rvmat"
							}
						},
						
						{
							0.00,
							
							{
								"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_destruct.rvmat"
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
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
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
	class RENAC_Spur_Treker_Yellow: RENAC_Spur_Treker_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_co.paa",
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_co.paa",
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_co.paa"
		};
	};	
	class RENAC_Spur_Treker_Green: RENAC_Spur_Treker_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_green_co.paa",
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_green_co.paa",
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_green_co.paa"
		};
	};	
	class RENAC_Spur_Treker_Red: RENAC_Spur_Treker_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_red_co.paa",
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_red_co.paa",
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_red_co.paa"
		};
	};	
	class RENAC_Spur_Treker_Black: RENAC_Spur_Treker_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_black_co.paa",
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_black_co.paa",
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_black_co.paa"
		};
	};	
	class RENAC_Spur_Treker_Blue: RENAC_Spur_Treker_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_blue_co.paa",
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_blue_co.paa",
			"RENAC_SpurBagZ\Spur_Treker\data\Spur_Treker_blue_co.paa"
		};
	};	
};