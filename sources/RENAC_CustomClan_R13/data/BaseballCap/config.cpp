class CfgPatches
{
	class RENAC_TCP_R13_HatUmbrella
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
	class BaseballCap_ColorBase;
	class RENAC_TCP_R13_HatUmbrella: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Umbrella Cap";
		descriptionShort = "Umbrella Cap RENAC";
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
			"RENAC_CustomClan_R13\Data\BaseballCap\umbrellacap_R13.paa",
			"RENAC_CustomClan_R13\Data\BaseballCap\umbrellacap_R13.paa",
			"RENAC_CustomClan_R13\Data\BaseballCap\umbrellacap_R13.paa"
		};
	};		
};
