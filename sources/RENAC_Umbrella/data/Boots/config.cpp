class CfgPatches
{
	class RENAC_TCP_UmbrellaBoots
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
	class RENAC_TCP_UmbrellaBoots: JungleBoots_ColorBase
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
			"RENAC_Umbrella\Data\Boots\bootsumbrella.paa",
			"RENAC_Umbrella\Data\Boots\bootsumbrella.paa",
			"RENAC_Umbrella\Data\Boots\bootsumbrella.paa"
		};
	};		
};
