class CfgPatches
{
	class GUX_AdminVests
	{
		units[]=
		{
			"GUX_AdminBlackPouches",
			"GUX_AdminBlackHolster",
			"GUX_AdminPlateCarrierVest"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Vests",
			"DZ_Gear_Containers",
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class PlateCarrierVest;
	class PlateCarrierHolster;
	class PlateCarrierPouches;
	class GUX_AdminPlateCarrierVest: PlateCarrierVest
	{
		displayName="ADMIN Plate Carrier";
		descriptionShort="Plate Carrier";
		scope=2;
		itemSize[]={1,1};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"GUX_AdminPlateCarrier\data\BlackPlateADMIN.paa",
			"GUX_AdminPlateCarrier\data\BlackPlateADMIN.paa",
			"GUX_AdminPlateCarrier\data\BlackPlateADMIN.paa"
		};
	};
	class GUX_AdminBlackPouches: PlateCarrierPouches
	{
		displayName="ADMIN Pouches";
		descriptionShort="ADMIN 60-slot Plate Carrier Pouches";
		scope=2;
		itemsCargoSize[] = {10,6};
		itemSize[]={1,1};		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"GUX_AdminPlateCarrier\data\BlackPlateADMIN.paa",
			"GUX_AdminPlateCarrier\data\BlackPlateADMIN.paa",
			"GUX_AdminPlateCarrier\data\BlackPlateADMIN.paa"
		};
	};
	class GUX_AdminBlackHolster: PlateCarrierHolster
	{
		displayName="ADMIN Plate Carrier Pistol Holster";
		descriptionShort="Pistol Holster";
		scope=2;
		itemSize[]={1,1};		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"GUX_AdminPlateCarrier\data\BlackPlateADMIN.paa",
			"GUX_AdminPlateCarrier\data\BlackPlateADMIN.paa",
			"GUX_AdminPlateCarrier\data\BlackPlateADMIN.paa"
		};
	};
};
