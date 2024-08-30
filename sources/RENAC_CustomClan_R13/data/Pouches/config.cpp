class CfgPatches
{
	class RENAC_TCP_R13_UmbrellaPouches
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
	class PlateCarrierPouches;
	class RENAC_TCP_R13_UmbrellaPouches: PlateCarrierPouches
	{
		scope=2;
		displayName = "Umbrella Pouches";
		descriptionShort = "Umbrella Pouches Carrier RENAC";
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

