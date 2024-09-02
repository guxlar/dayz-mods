class CfgPatches
{
	class RENAC_RopaClanes
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

// accesorios comunes a todos los clanes

	class RENAC_COMMON_Beret: MilitaryBeret_Red
	{
		scope=2;
		displayName = "Beret";
		descriptionShort = "Beret";
		itemSize[] = {1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\_common\RENACcommonBeret.paa",
			"RENAC_RopaClanes\models\_common\RENACcommonBeret.paa",
			"RENAC_RopaClanes\models\_common\RENACcommonBeret.paa"
		};
	};

	class RENAC_COMMON_Boots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Boots";
		descriptionShort = "Boots";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\_common\RENACcommonBoots.paa",
			"RENAC_RopaClanes\models\_common\RENACcommonBoots.paa",
			"RENAC_RopaClanes\models\_common\RENACcommonBoots.paa"
		};
	};

	class RENAC_COMMON_Gloves: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Gloves";
		descriptionShort = "Gloves";
		itemSize[] = {1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\_common\RENACcommonGloves.paa",
			"RENAC_RopaClanes\models\_common\RENACcommonGloves.paa",
			"RENAC_RopaClanes\models\_common\RENACcommonGloves.paa"
		};
	};	
	
// CLAN PARAMEDIC

	// Cap
	class RENAC_Paramedic_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Cap";
		descriptionShort = "Cap";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\paramedic\RENACparamedicCap.paa",
			"RENAC_RopaClanes\models\paramedic\RENACparamedicCap.paa",
			"RENAC_RopaClanes\models\paramedic\RENACparamedicCap.paa"
		};
	};	

	// Jacket
	class RENAC_Paramedic_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Jacket";
		descriptionShort="Jacket";
		itemsCargoSize[] = {10,100};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\paramedic\RENACparamedicJacket.paa",
			"RENAC_RopaClanes\models\paramedic\RENACparamedicJacket.paa",
			"RENAC_RopaClanes\models\paramedic\RENACparamedicJacket.paa"
		};
	};

	// Pants
	class RENAC_Paramedic_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pants";
		descriptionShort="Pants";
		itemsCargoSize[] = {0,0};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\paramedic\RENACparamedicPants.paa",
			"RENAC_RopaClanes\models\paramedic\RENACparamedicPants.paa",
			"RENAC_RopaClanes\models\paramedic\RENACparamedicPants.paa"
		};
	};

	// Belt
	class RENAC_Paramedic_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Belt";
		descriptionShort="Belt";
		itemsCargoSize[] = {0,0};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\paramedic\RENACparamedicBelt.paa",
			"RENAC_RopaClanes\models\paramedic\RENACparamedicBelt.paa",
			"RENAC_RopaClanes\models\paramedic\RENACparamedicBelt.paa"
		};
	};	
	
// CLAN POLICIA

	// Cap
	class RENAC_Policia_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Cap";
		descriptionShort = "Cap";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\policia\RENACpoliciaCap.paa",
			"RENAC_RopaClanes\models\policia\RENACpoliciaCap.paa",
			"RENAC_RopaClanes\models\policia\RENACpoliciaCap.paa"
		};
	};

	// Jacket
	class RENAC_Policia_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Jacket";
		descriptionShort="Jacket";
		itemsCargoSize[] = {10,100};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\policia\RENACpoliciaJacket.paa",
			"RENAC_RopaClanes\models\policia\RENACpoliciaJacket.paa",
			"RENAC_RopaClanes\models\policia\RENACpoliciaJacket.paa"
		};
	};

	// Pants
	class RENAC_Policia_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pants";
		descriptionShort="Pants";
		itemsCargoSize[] = {0,0};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\policia\RENACpoliciaPants.paa",
			"RENAC_RopaClanes\models\policia\RENACpoliciaPants.paa",
			"RENAC_RopaClanes\models\policia\RENACpoliciaPants.paa"
		};
	};

	// Belt
	class RENAC_Policia_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Belt";
		descriptionShort="Belt";
		itemsCargoSize[] = {0,0};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\policia\RENACpoliciaBelt.paa",
			"RENAC_RopaClanes\models\policia\RENACpoliciaBelt.paa",
			"RENAC_RopaClanes\models\policia\RENACpoliciaBelt.paa"
		};
	};
	
	
// CLAN GUXLAR	

	// Jacket
	class RENAC_Guxlar_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Jacket";
		descriptionShort="Jacket";
		itemsCargoSize[] = {10,100};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\guxlar\RENACguxlarJacket.paa",
			"RENAC_RopaClanes\models\guxlar\RENACguxlarJacket.paa",
			"RENAC_RopaClanes\models\guxlar\RENACguxlarJacket.paa"
		};
	};

	// Pants
	class RENAC_Guxlar_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pants";
		descriptionShort="Pants";
		itemsCargoSize[] = {0,0};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\guxlar\RENACguxlarPants.paa",
			"RENAC_RopaClanes\models\guxlar\RENACguxlarPants.paa",
			"RENAC_RopaClanes\models\guxlar\RENACguxlarPants.paa"
		};
	};

	// Belt
	class RENAC_Guxlar_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Belt";
		descriptionShort="Belt";
		itemsCargoSize[] = {0,0};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\guxlar\RENACguxlarBelt.paa",
			"RENAC_RopaClanes\models\guxlar\RENACguxlarBelt.paa",
			"RENAC_RopaClanes\models\guxlar\RENACguxlarBelt.paa"
		};
	};
		
// CLAN ADMIN

	class RENAC_Admin_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "RENAC Admin Cap";
		descriptionShort = "RENAC Admin Cap";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\admin\RENACadminCap.paa",
			"RENAC_RopaClanes\models\admin\RENACadminCap.paa",
			"RENAC_RopaClanes\models\admin\RENACadminCap.paa"
		};
	};

	// Jacket
	class RENAC_Admin_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="RENAC Admin Jacket";
		descriptionShort="RENAC Admin Jacket";
		itemsCargoSize[] = {10,100};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\admin\RENACadminJacket.paa",
			"RENAC_RopaClanes\models\admin\RENACadminJacket.paa",
			"RENAC_RopaClanes\models\admin\RENACadminJacket.paa"
		};
	};

	// Pants
	class RENAC_Admin_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="RENAC Admin Pants";
		descriptionShort="RENAC Admin Pants";
		itemsCargoSize[] = {10,20};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\admin\RENACadminPants.paa",
			"RENAC_RopaClanes\models\admin\RENACadminPants.paa",
			"RENAC_RopaClanes\models\admin\RENACadminPants.paa"
		};
	};

	// Belt
	class RENAC_Admin_Belt: MilitaryBelt
	{
		scope=2;
		displayName="RENAC Admin Belt";
		descriptionShort="RENAC Admin Belt";
		itemsCargoSize[] = {10,10};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\admin\RENACadminBelt.paa",
			"RENAC_RopaClanes\models\admin\RENACadminBelt.paa",
			"RENAC_RopaClanes\models\admin\RENACadminBelt.paa"
		};
	};	
	
// CLAN SAR	

	// Cap
	class RENAC_SAR_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Cap";
		descriptionShort = "Cap";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\sar\RENACsarCap.paa",
			"RENAC_RopaClanes\models\sar\RENACsarCap.paa",
			"RENAC_RopaClanes\models\sar\RENACsarCap.paa"
		};
	};

	// Jacket
	class RENAC_SAR_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Jacket";
		descriptionShort="Jacket";
		itemsCargoSize[] = {10,100};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\sar\RENACsarJacket.paa",
			"RENAC_RopaClanes\models\sar\RENACsarJacket.paa",
			"RENAC_RopaClanes\models\sar\RENACsarJacket.paa"
		};
	};

	// Pants
	class RENAC_SAR_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pants";
		descriptionShort="Pants";
		itemsCargoSize[] = {0,0};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\sar\RENACsarPants.paa",
			"RENAC_RopaClanes\models\sar\RENACsarPants.paa",
			"RENAC_RopaClanes\models\sar\RENACsarPants.paa"
		};
	};

	// Belt
	class RENAC_SAR_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Belt";
		descriptionShort="Belt";
		itemsCargoSize[] = {0,0};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"RENAC_RopaClanes\models\sar\RENACsarBelt.paa",
			"RENAC_RopaClanes\models\sar\RENACsarBelt.paa",
			"RENAC_RopaClanes\models\sar\RENACsarBelt.paa"
		};
	};
	
};