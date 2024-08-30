class CfgPatches
{
	class RENAC_TCP_UmbrellaJacket
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
	class RENAC_TCP_UmbrellaJacket: M65Jacket_ColorBase
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
			"RENAC_Umbrella\Data\Jacket\M65Umbrella.paa",
			"RENAC_Umbrella\Data\Jacket\M65Umbrella.paa",
			"RENAC_Umbrella\Data\Jacket\M65Umbrella.paa"
		};
	};		
};
