class CfgPatches
{
	class RENAC_TCP_UmbrellaPants
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
	class CargoPants_ColorBase;
	class RENAC_TCP_UmbrellaPants: CargoPants_ColorBase
	{
		scope=2;
		displayName = "Umbrella Pants";
		descriptionShort = "Umbrella Pants RENAC";
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
			"RENAC_Umbrella\Data\Pants\pantsumbrella.paa",
			"RENAC_Umbrella\Data\Pants\pantsumbrella.paa",
			"RENAC_Umbrella\Data\Pants\pantsumbrella.paa"
		};
	};		
};
