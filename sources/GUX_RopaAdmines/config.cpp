class CfgPatches
{
	class GUX_RopaAdmines
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
	class MountainBag_Red;
	class DryBag_ColorBase;	
	
// CLAN POLICIA	

	// 1-Cap
	class GUX_POLICIA_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Gorra - Cap";
		descriptionShort = "Gorra - Cap";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\policia\policiaCap.paa",
			"GUX_RopaAdmines\models\policia\policiaCap.paa",
			"GUX_RopaAdmines\models\policia\policiaCap.paa"
		};
	};

	// 2-Jacket
	class GUX_POLICIA_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Chaqueta - Jacket 500";
		descriptionShort="Chaqueta - Jacket 100";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\policia\policiaJacket.paa",
			"GUX_RopaAdmines\models\policia\policiaJacket.paa",
			"GUX_RopaAdmines\models\policia\policiaJacket.paa"
		};
	};

	// 3-Pants
	class GUX_POLICIA_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pantalones - Pants 500";
		descriptionShort="Pantalones - Pants 50";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\policia\policiaPants.paa",
			"GUX_RopaAdmines\models\policia\policiaPants.paa",
			"GUX_RopaAdmines\models\policia\policiaPants.paa"
		};
	};

	// 4-Belt
	class GUX_POLICIA_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Cinto - Belt 500";
		descriptionShort="Cinto - Belt 30";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\policia\policiaBelt.paa",
			"GUX_RopaAdmines\models\policia\policiaBelt.paa",
			"GUX_RopaAdmines\models\policia\policiaBelt.paa"
		};
	};

	// 5-Boots
	class GUX_POLICIA_Boots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Botas - Boots";
		descriptionShort = "Botas - Boots";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\policia\policiaBoots.paa",
			"GUX_RopaAdmines\models\policia\policiaBoots.paa",
			"GUX_RopaAdmines\models\policia\policiaBoots.paa"
		};
	};

	// 6-Gloves
	class GUX_POLICIA_Gloves: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Guantes - Gloves";
		descriptionShort = "Guantes - Gloves";
		itemSize[] = {1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\policia\policiaGloves.paa",
			"GUX_RopaAdmines\models\policia\policiaGloves.paa",
			"GUX_RopaAdmines\models\policia\policiaGloves.paa"
		};
	};		
	
// CLAN FBI	

	// 1-Cap
	class GUX_FBI_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Gorra - Cap";
		descriptionShort = "Gorra - Cap";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\fbi\fbiCap.paa",
			"GUX_RopaAdmines\models\fbi\fbiCap.paa",
			"GUX_RopaAdmines\models\fbi\fbiCap.paa"
		};
	};

	// 2-Jacket
	class GUX_FBI_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Chaqueta - Jacket 500";
		descriptionShort="Chaqueta - Jacket 100";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\fbi\fbiJacket.paa",
			"GUX_RopaAdmines\models\fbi\fbiJacket.paa",
			"GUX_RopaAdmines\models\fbi\fbiJacket.paa"
		};
	};

	// 3-Pants
	class GUX_FBI_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pantalones - Pants 500";
		descriptionShort="Pantalones - Pants 50";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\fbi\fbiPants.paa",
			"GUX_RopaAdmines\models\fbi\fbiPants.paa",
			"GUX_RopaAdmines\models\fbi\fbiPants.paa"
		};
	};

	// 4-Belt
	class GUX_FBI_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Cinto - Belt 500";
		descriptionShort="Cinto - Belt 30";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\fbi\fbiBelt.paa",
			"GUX_RopaAdmines\models\fbi\fbiBelt.paa",
			"GUX_RopaAdmines\models\fbi\fbiBelt.paa"
		};
	};

	// 5-Boots
	class GUX_FBI_Boots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Botas - Boots";
		descriptionShort = "Botas - Boots";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\fbi\fbiBoots.paa",
			"GUX_RopaAdmines\models\fbi\fbiBoots.paa",
			"GUX_RopaAdmines\models\fbi\fbiBoots.paa"
		};
	};

	// 6-Gloves
	class GUX_FBI_Gloves: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Guantes - Gloves";
		descriptionShort = "Guantes - Gloves";
		itemSize[] = {1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\fbi\fbiGloves.paa",
			"GUX_RopaAdmines\models\fbi\fbiGloves.paa",
			"GUX_RopaAdmines\models\fbi\fbiGloves.paa"
		};
	};		
	
// CLAN SAR	

	// 1-Cap
	class GUX_SAR_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Gorra - Cap";
		descriptionShort = "Gorra - Cap";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\sar\sarCap.paa",
			"GUX_RopaAdmines\models\sar\sarCap.paa",
			"GUX_RopaAdmines\models\sar\sarCap.paa"
		};
	};

	// 2-Jacket
	class GUX_SAR_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Chaqueta - Jacket 500";
		descriptionShort="Chaqueta - Jacket 100";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\sar\sarJacket.paa",
			"GUX_RopaAdmines\models\sar\sarJacket.paa",
			"GUX_RopaAdmines\models\sar\sarJacket.paa"
		};
	};

	// 3-Pants
	class GUX_SAR_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pantalones - Pants 500";
		descriptionShort="Pantalones - Pants 50";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\sar\sarPants.paa",
			"GUX_RopaAdmines\models\sar\sarPants.paa",
			"GUX_RopaAdmines\models\sar\sarPants.paa"
		};
	};

	// 4-Belt
	class GUX_SAR_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Cinto - Belt 500";
		descriptionShort="Cinto - Belt 30";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\sar\sarBelt.paa",
			"GUX_RopaAdmines\models\sar\sarBelt.paa",
			"GUX_RopaAdmines\models\sar\sarBelt.paa"
		};
	};

	// 5-Boots
	class GUX_SAR_Boots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Botas - Boots";
		descriptionShort = "Botas - Boots";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\sar\sarBoots.paa",
			"GUX_RopaAdmines\models\sar\sarBoots.paa",
			"GUX_RopaAdmines\models\sar\sarBoots.paa"
		};
	};

	// 6-Gloves
	class GUX_SAR_Gloves: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Guantes - Gloves";
		descriptionShort = "Guantes - Gloves";
		itemSize[] = {1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\sar\sarGloves.paa",
			"GUX_RopaAdmines\models\sar\sarGloves.paa",
			"GUX_RopaAdmines\models\sar\sarGloves.paa"
		};
	};		
	
// CLAN PARAMEDIC	

	// 1-Cap
	class GUX_PARAMEDIC_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Gorra - Cap";
		descriptionShort = "Gorra - Cap";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\paramedic\paramedicCap.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicCap.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicCap.paa"
		};
	};

	// 2-Jacket
	class GUX_PARAMEDIC_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Chaqueta - Jacket 500";
		descriptionShort="Chaqueta - Jacket 100";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\paramedic\paramedicJacket.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicJacket.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicJacket.paa"
		};
	};

	// 3-Pants
	class GUX_PARAMEDIC_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pantalones - Pants 500";
		descriptionShort="Pantalones - Pants 50";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\paramedic\paramedicPants.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicPants.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicPants.paa"
		};
	};

	// 4-Belt
	class GUX_PARAMEDIC_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Cinto - Belt 500";
		descriptionShort="Cinto - Belt 30";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\paramedic\paramedicBelt.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicBelt.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicBelt.paa"
		};
	};

	// 5-Boots
	class GUX_PARAMEDIC_Boots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Botas - Boots";
		descriptionShort = "Botas - Boots";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\paramedic\paramedicBoots.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicBoots.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicBoots.paa"
		};
	};

	// 6-Gloves
	class GUX_PARAMEDIC_Gloves: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Guantes - Gloves";
		descriptionShort = "Guantes - Gloves";
		itemSize[] = {1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\paramedic\paramedicGloves.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicGloves.paa",
			"GUX_RopaAdmines\models\paramedic\paramedicGloves.paa"
		};
	};		
	
// CLAN ADMIN	

	// 1-Cap
	class GUX_ADMIN_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Gorra - Cap";
		descriptionShort = "Gorra - Cap";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\admin\adminCap.paa",
			"GUX_RopaAdmines\models\admin\adminCap.paa",
			"GUX_RopaAdmines\models\admin\adminCap.paa"
		};
	};

	// 2-Jacket
	class GUX_ADMIN_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Chaqueta - Jacket 500";
		descriptionShort="Chaqueta - Jacket 100";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\admin\adminJacket.paa",
			"GUX_RopaAdmines\models\admin\adminJacket.paa",
			"GUX_RopaAdmines\models\admin\adminJacket.paa"
		};
	};

	// 3-Pants
	class GUX_ADMIN_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pantalones - Pants 500";
		descriptionShort="Pantalones - Pants 50";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\admin\adminPants.paa",
			"GUX_RopaAdmines\models\admin\adminPants.paa",
			"GUX_RopaAdmines\models\admin\adminPants.paa"
		};
	};

	// 4-Belt
	class GUX_ADMIN_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Cinto - Belt 500";
		descriptionShort="Cinto - Belt 30";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\admin\adminBelt.paa",
			"GUX_RopaAdmines\models\admin\adminBelt.paa",
			"GUX_RopaAdmines\models\admin\adminBelt.paa"
		};
	};

	// 5-Boots
	class GUX_ADMIN_Boots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Botas - Boots";
		descriptionShort = "Botas - Boots";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\admin\adminBoots.paa",
			"GUX_RopaAdmines\models\admin\adminBoots.paa",
			"GUX_RopaAdmines\models\admin\adminBoots.paa"
		};
	};

	// 6-Gloves
	class GUX_ADMIN_Gloves: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Guantes - Gloves";
		descriptionShort = "Guantes - Gloves";
		itemSize[] = {1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\admin\adminGloves.paa",
			"GUX_RopaAdmines\models\admin\adminGloves.paa",
			"GUX_RopaAdmines\models\admin\adminGloves.paa"
		};
	};	
	

// CLAN SECURITY	

	// 1-Cap
	class GUX_SECURITY_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Gorra - Cap";
		descriptionShort = "Gorra - Cap";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\security\securityCap.paa",
			"GUX_RopaAdmines\models\security\securityCap.paa",
			"GUX_RopaAdmines\models\security\securityCap.paa"
		};
	};

	// 2-Jacket
	class GUX_SECURITY_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Chaqueta - Jacket 500";
		descriptionShort="Chaqueta - Jacket 100";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\security\securityJacket.paa",
			"GUX_RopaAdmines\models\security\securityJacket.paa",
			"GUX_RopaAdmines\models\security\securityJacket.paa"
		};
	};

	// 3-Pants
	class GUX_SECURITY_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pantalones - Pants 500";
		descriptionShort="Pantalones - Pants 50";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\security\securityPants.paa",
			"GUX_RopaAdmines\models\security\securityPants.paa",
			"GUX_RopaAdmines\models\security\securityPants.paa"
		};
	};

	// 4-Belt
	class GUX_SECURITY_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Cinto - Belt 500";
		descriptionShort="Cinto - Belt 30";
		itemsCargoSize[] = {10,50};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\security\securityBelt.paa",
			"GUX_RopaAdmines\models\security\securityBelt.paa",
			"GUX_RopaAdmines\models\security\securityBelt.paa"
		};
	};

	// 5-Boots
	class GUX_SECURITY_Boots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Botas - Boots";
		descriptionShort = "Botas - Boots";
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\security\securityBoots.paa",
			"GUX_RopaAdmines\models\security\securityBoots.paa",
			"GUX_RopaAdmines\models\security\securityBoots.paa"
		};
	};

	// 6-Gloves
	class GUX_SECURITY_Gloves: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "Guantes - Gloves";
		descriptionShort = "Guantes - Gloves";
		itemSize[] = {1,1};
		hiddenSelectionsTextures[]=
		{
			"GUX_RopaAdmines\models\security\securityGloves.paa",
			"GUX_RopaAdmines\models\security\securityGloves.paa",
			"GUX_RopaAdmines\models\security\securityGloves.paa"
		};
	};	
	
};