class CfgPatches
{
	class RENAC_TCP_DryBagUmbrella
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
	class DryBag_ColorBase;
	class RENAC_TCP_DryBagUmbrella: DryBag_ColorBase
	{
		scope=2;
		displayName = "Umbrella Dry Bag";
		descriptionShort = "Umbrella Dry Bag RENAC";
		itemSize[] = {1,1};
		itemsCargoSize[] = {10,40};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"RENAC_Umbrella\Data\DryBag\DryBagUmbrella.paa",
			"RENAC_Umbrella\Data\DryBag\DryBagUmbrella.paa",
			"RENAC_Umbrella\Data\DryBag\DryBagUmbrella.paa"
		};
	};	
};
