class CfgPatches
{
	class RENAC_TCP_R13_UmbrellaPlateCarrier
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
	class PlateCarrierVest;
	class RENAC_TCP_R13_UmbrellaPlateCarrier: PlateCarrierVest
	{
		scope=2;
		displayName = "Umbrella Plate Carrier";
		descriptionShort = "Umbrella Plate Carrier RENAC";
		itemSize[] = {1,1};
		itemsCargoSize[] = {10,10};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"RENAC_CustomClan_R13\Data\Vest2\vestumbrella2_R13.paa",
			"RENAC_CustomClan_R13\Data\Vest2\vestumbrella2_R13.paa",
			"RENAC_CustomClan_R13\Data\Vest2\vestumbrella2_R13.paa"
		};
	};		
};

