class CfgPatches
{
	class RENAC_TCP_R13_UmbrellaBoots
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
	class JungleBoots_ColorBase;
	class RENAC_TCP_R13_UmbrellaBoots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Umbrella Boots";
		descriptionShort = "Umbrella Boots RENAC";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"RENAC_CustomClan_R13\Data\Boots\bootsumbrella_R13.paa",
			"RENAC_CustomClan_R13\Data\Boots\bootsumbrella_R13.paa",
			"RENAC_CustomClan_R13\Data\Boots\bootsumbrella_R13.paa"
		};
	};		
};
