class CfgPatches
{
	class RENAC_TCP_UmbrellaPlateCarrierHolster
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"DZ_Data",
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class PlateCarrierHolster;
	class RENAC_TCP_UmbrellaPlateCarrierHolster: PlateCarrierHolster
	{
		scope=2;
		displayName = "Umbrella Plate Carrier Holster";
		descriptionShort = "Umbrella Plate Carrier Holster RENAC";
		itemSize[] = {1,1};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"RENAC_Umbrella\Data\Vest2\vestumbrella2.paa",
			"RENAC_Umbrella\Data\Vest2\vestumbrella2.paa",
			"RENAC_Umbrella\Data\Vest2\vestumbrella2.paa"
		};
	};		
};

