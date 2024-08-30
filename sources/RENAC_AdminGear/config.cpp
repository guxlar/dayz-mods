class CfgPatches
{
	class RENAC_Admin
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
	// Jacket
	class HikingJacket_ColorBase;
	class RENAC_Admin_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="RENAC Admin Jacket";
		descriptionShort="Chaleco para Administradores RENAC.";
		itemsCargoSize[] = {10,100};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_AdminGear\models\RENACadminJacket.paa",
			"RENAC_AdminGear\models\RENACadminJacket.paa",
			"RENAC_AdminGear\models\RENACadminJacket.paa"
		};
	};

	// Pants
	class CargoPants_ColorBase;
	class RENAC_Admin_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="RENAC Admin Pants";
		descriptionShort="Pantalones para Administradores RENAC.";
		itemsCargoSize[] = {10,20};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"RENAC_AdminGear\models\RENACadminPants.paa",
			"RENAC_AdminGear\models\RENACadminPants.paa",
			"RENAC_AdminGear\models\RENACadminPants.paa"
		};
	};

	// Belt
	class MilitaryBelt;
	class RENAC_Admin_Belt: MilitaryBelt
	{
		scope=2;
		displayName="RENAC Admin Belt";
		descriptionShort="Cinturon para Administradores RENAC.";
		itemsCargoSize[] = {10,10};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"RENAC_AdminGear\models\RENACadminBelt.paa",
			"RENAC_AdminGear\models\RENACadminBelt.paa",
			"RENAC_AdminGear\models\RENACadminBelt.paa"
		};
	};
	
};