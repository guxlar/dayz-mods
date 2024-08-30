class CfgPatches
{
	class RENAC_TCP_R13_UmbrellaGloves
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
	class RENAC_TCP_R13_UmbrellaGloves: TacticalGloves_ColorBase
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
			"RENAC_CustomClan_R13\Data\Gloves\glovesumbrella_R13.paa",
			"RENAC_CustomClan_R13\Data\Gloves\glovesumbrella_R13.paa",
			"RENAC_CustomClan_R13\Data\Gloves\glovesumbrella_R13.paa"
		};
	};		
};
