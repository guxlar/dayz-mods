class CfgPatches
{
	class RENAC_TCP_R13_CoyoteBagUmbrella
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
	class CoyoteBag_ColorBase;
	class RENAC_TCP_R13_CoyoteBagUmbrella: CoyoteBag_ColorBase
	{
		scope=2;
		displayName = "Umbrella Coyote Bag";
		descriptionShort = "Umbrella Coyote Bag RENAC";
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
			"RENAC_CustomClan_R13\Data\CYbag\CyUmbrella_R13.paa",
			"RENAC_CustomClan_R13\Data\CYbag\CyUmbrella_R13.paa",
			"RENAC_CustomClan_R13\Data\CYbag\CyUmbrella_R13.paa"
		};
	};	
};
