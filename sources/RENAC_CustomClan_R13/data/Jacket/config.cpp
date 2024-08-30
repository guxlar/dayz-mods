class CfgPatches
{
	class RENAC_TCP_R13_UmbrellaJacket
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
	class M65Jacket_ColorBase;
	class RENAC_TCP_R13_UmbrellaJacket: M65Jacket_ColorBase
	{
		scope=2;
		displayName = "Umbrella Jacket";
		descriptionShort = "Umbrella Jacket RENAC";
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
			"RENAC_CustomClan_R13\Data\Jacket\M65Umbrella_R13.paa",
			"RENAC_CustomClan_R13\Data\Jacket\M65Umbrella_R13.paa",
			"RENAC_CustomClan_R13\Data\Jacket\M65Umbrella_R13.paa"
		};
	};		
};
