class CfgPatches
{
	class RENAC_TCP_UmbrellaVest
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
	class RENAC_TCP_UmbrellaVest: PressVest_ColorBase
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
			"RENAC_Umbrella\Data\Vest\vestumbrella.paa",
			"RENAC_Umbrella\Data\Vest\vestumbrella.paa",
			"RENAC_Umbrella\Data\Vest\vestumbrella.paa"
		};
	};		
};
