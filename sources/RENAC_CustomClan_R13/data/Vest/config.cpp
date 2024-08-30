class CfgPatches
{
	class RENAC_TCP_R13_UmbrellaVest
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
	class PressVest_ColorBase;
	class RENAC_TCP_R13_UmbrellaVest: PressVest_ColorBase
	{
		scope=2;
		displayName = "Umbrella Vest";
		descriptionShort = "Umbrella Vest RENAC";
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
			"RENAC_CustomClan_R13\Data\Vest\vestumbrella_R13.paa",
			"RENAC_CustomClan_R13\Data\Vest\vestumbrella_R13.paa",
			"RENAC_CustomClan_R13\Data\Vest\vestumbrella_R13.paa"
		};
	};		
};
