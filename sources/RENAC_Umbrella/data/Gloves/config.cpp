class CfgPatches
{
	class RENAC_TCP_UmbrellaGloves
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
	class TacticalGloves_ColorBase;
	class RENAC_TCP_UmbrellaGloves: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Umbrella Gloves";
		descriptionShort = "Umbrella Gloves RENAC";
		itemSize[] = {1,1};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"RENAC_Umbrella\Data\Gloves\glovesumbrella.paa",
			"RENAC_Umbrella\Data\Gloves\glovesumbrella.paa",
			"RENAC_Umbrella\Data\Gloves\glovesumbrella.paa"
		};
	};		
};
