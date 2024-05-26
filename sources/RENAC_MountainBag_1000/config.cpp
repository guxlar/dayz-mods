class CfgPatches
{
	class DZ_Characters_Backpacks
	{
		units[]=
		{
			"BagTaloon_Blue",
			"BagTaloon_Green",
			"BagTaloon_Orange",
			"BagTaloon_Violet",
			"BagCourierImprovised",
			"BagCourierImprovisedFur",
			"BagImprovised",
			"BagImprovisedFur",
			"BagHunting",
			"BagMountain_Blue",
			"BagMountain_Green",
			"BagMountain_Orange",
			"BagMountain_Red",
			"BagChilds_Blue",
			"BagChilds_Green",
			"BagChilds_Red",
			"GhillieBushragWoodland",
			"GhillieTopWoodland",
			"GhillieSuitWoodland",
			"GhillieBushragTan",
			"GhillieTopTan",
			"GhillieSuitTan",
			"GhillieBushragMossy",
			"GhillieTopMossy",
			"GhillieSuitMossy"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class RENAC_MountainBag_1000_ColorBase: Clothing
	{
		model="\dz\characters\backpacks\mountain_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"Knife",
			"Shoulder",
			"Melee",
			"Belt_Left"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={2,2};
		itemsCargoSize[]={10,100};
		weight=100;
		varWetMax=0;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\mountain_blue_co.paa",
			"\dz\characters\backpacks\data\mountain_blue_co.paa",
			"\dz\characters\backpacks\data\mountain_blue_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\mountain_m.p3d";
			female="\DZ\characters\backpacks\mountain_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500000;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\mountain.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\mountain.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\mountain_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\mountain_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\mountain_destruct.rvmat"
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
	class RENAC_MountainBag_1000: RENAC_MountainBag_1000_ColorBase
	{
		displayName="Mochila RENAC 1000";
		descriptionShort="Mochila Renacimiento liviana con 1000 slots";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\RENACIMIENTO_MountainBag\RENAC_MountainBag_1000\data\mountain_1000_co.paa",
			"\RENACIMIENTO_MountainBag\RENAC_MountainBag_1000\data\mountain_1000_co.paa",
			"\RENACIMIENTO_MountainBag\RENAC_MountainBag_1000\data\mountain_1000_co.paa"
		};
	};
};
