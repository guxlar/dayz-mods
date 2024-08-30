class CfgPatches
{
	class RENAC_TCP_R13_UmbrellaBeret
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
	class MilitaryBeret_Red;
	class RENAC_TCP_R13_UmbrellaBeret: MilitaryBeret_Red
	{
		scope=2;
		displayName = "Umbrella Beret";
		descriptionShort = "Umbrella Beret RENAC";
		itemSize[] = {1,1};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"RENAC_CustomClan_R13\Data\beret\beret_R13.paa",
			"RENAC_CustomClan_R13\Data\beret\beret_R13.paa",
			"RENAC_CustomClan_R13\Data\beret\beret_R13.paa"
		};
	};		
};
