class CfgPatches
{
	class RENAC_TCP_UmbrellaMountainBag
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
	class MountainBag_Red;
	class RENAC_TCP_UmbrellaMountainBag: MountainBag_Red
	{
		scope=2;
		displayName = "Umbrella Mountain Bag";
		descriptionShort = "Umbrella Mountain Bag RENAC";
		attachments[] = {"Melee","WalkieTalkie","Chemlight"};		
		itemSize[] = {1,1};
		itemsCargoSize[] = {10,40};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"RENAC_Umbrella\Data\Mtnbag\mtnUmbrella.paa",
			"RENAC_Umbrella\Data\Mtnbag\mtnUmbrella.paa",
			"RENAC_Umbrella\Data\Mtnbag\mtnUmbrella.paa"
		};
	};	
};
