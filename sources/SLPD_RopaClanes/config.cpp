class CfgPatches
{
	class SLPD_RopaClanes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};

class CfgVehicles
{
	class HikingJacket_ColorBase;
	class CargoPants_ColorBase;
	class MilitaryBelt;	
	class BaseballCap_ColorBase;	
	class JungleBoots_ColorBase;
	class TacticalGloves_ColorBase;
	class MilitaryBeret_Red;
	class MountainBag_Red;
	class DryBag_ColorBase;	

// ROPA GENERICA

	class SLPD_COMMON_Drybag: DryBag_ColorBase
	{
		scope=2;
		displayName = "Dry Bag 500";
		descriptionShort = "Dry Bag 500";
		itemSize[] = {1,1};
		itemsCargoSize[] = {10,50};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\_common\debugDrybag.paa",
			"SLPD_RopaClanes\clanes\_common\debugDrybag.paa",
			"SLPD_RopaClanes\clanes\_common\debugDrybag.paa"
		};
	};	
	
	class SLPD_COMMON_MountainBag: MountainBag_Red
	{
		scope=2;
		displayName = "Mochila - Mountain Bag 1000";
		descriptionShort = "Mochila - Mountain Bag 1000";
		attachments[] = {"Melee","Shoulder","WalkieTalkie","Chemlight"};		
		itemSize[] = {2,2};
		itemsCargoSize[] = {10,100};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\_common\debugMountainbag.paa",
			"SLPD_RopaClanes\clanes\_common\debugMountainbag.paa",
			"SLPD_RopaClanes\clanes\_common\debugMountainbag.paa"
		};
	};

	class SLPD_COMMON_Beret: MilitaryBeret_Red
	{
		scope=2;
		displayName = "Boina - Beret";
		descriptionShort = "Boina - Beret";
		itemSize[] = {2,2};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\_common\debugBeret.paa",
			"SLPD_RopaClanes\clanes\_common\debugBeret.paa",
			"SLPD_RopaClanes\clanes\_common\debugBeret.paa"
		};
	};

	class SLPD_COMMON_Boots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Botas - Boots";
		descriptionShort = "Botas - Boots";
		itemSize[] = {2,2};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\_common\debugBoots.paa",
			"SLPD_RopaClanes\clanes\_common\debugBoots.paa",
			"SLPD_RopaClanes\clanes\_common\debugBoots.paa"
		};
	};

	class SLPD_COMMON_Gloves: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Guantes - Gloves";
		descriptionShort = "Guantes - Gloves";
		itemSize[] = {2,2};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\_common\debugGloves.paa",
			"SLPD_RopaClanes\clanes\_common\debugGloves.paa",
			"SLPD_RopaClanes\clanes\_common\debugGloves.paa"
		};
	};	
	
	// Jacket
	class SLPD_COMMON_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Chaqueta - Jacket 200";
		descriptionShort="Chaqueta - Jacket";
		itemsCargoSize[] = {10,20};
		itemSize[]={2,2};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\_common\debugJacket.paa",
			"SLPD_RopaClanes\clanes\_common\debugJacket.paa",
			"SLPD_RopaClanes\clanes\_common\debugJacket.paa"
		};
	};

	// Pants
	class SLPD_COMMON_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pantalones - Pants 100";
		descriptionShort="Pantalones - Pants";
		itemsCargoSize[] = {10,10};
		itemSize[]={2,2};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\_common\debugPants.paa",
			"SLPD_RopaClanes\clanes\_common\debugPants.paa",
			"SLPD_RopaClanes\clanes\_common\debugPants.paa"
		};
	};

	// Belt
	class SLPD_COMMON_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Cinto - Belt 20";
		descriptionShort="Cinto - Belt";
		itemsCargoSize[] = {10,2};
		itemSize[]={2,2};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\_common\debugBelt.paa",
			"SLPD_RopaClanes\clanes\_common\debugBelt.paa",
			"SLPD_RopaClanes\clanes\_common\debugBelt.paa"
		};
	};	
	
// ROPA CLAN BWC

	class SLPD_BWC_Beret: MilitaryBeret_Red
	{
		scope=2;
		displayName = "Boina - Beret";
		descriptionShort = "Boina - Beret";
		itemSize[] = {1,1};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\bwc\bwcBeret.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcBeret.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcBeret.paa"
		};
	};
	
	class SLPD_BWC_Gloves: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Guantes - Gloves";
		descriptionShort = "Guantes - Gloves";
		itemSize[] = {1,1};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\bwc\bwcGloves.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcGloves.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcGloves.paa"
		};
	};		

	// Cap
	class SLPD_BWC_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Gorra - Cap";
		descriptionShort = "Gorra - Cap";
		itemSize[] = {2,2};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\bwc\bwcCap.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcCap.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcCap.paa"
		};
	};	

	// Jacket
	class SLPD_BWC_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Chaqueta - Jacket";
		descriptionShort="Chaqueta - Jacket";
		itemsCargoSize[] = {10,20};
		itemSize[]={2,2};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\bwc\bwcJacket.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcJacket.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcJacket.paa"
		};
	};

	// Pants
	class SLPD_BWC_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pantalones - Pants";
		descriptionShort="Pantalones - Pants";
		itemsCargoSize[] = {10,10};
		itemSize[]={2,2};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\bwc\bwcPants.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcPants.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcPants.paa"
		};
	};

	// Belt
	class SLPD_BWC_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Cinto - Belt";
		descriptionShort="Cinto - Belt";
		itemsCargoSize[] = {10,2};
		itemSize[]={2,2};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"SLPD_RopaClanes\clanes\bwc\bwcBelt.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcBelt.paa",
			"SLPD_RopaClanes\clanes\bwc\bwcBelt.paa"
		};
	};		
	
};