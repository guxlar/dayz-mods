class CfgPatches
{
	class GUXLARLAND_Debug
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
	// base classes go here
	class HikingJacket_ColorBase;
	class CargoPants_ColorBase;	
	class MilitaryBelt;	

	//Debug Jacket
	class GUXLARLAND_debug_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Admin Jacket";
		descriptionShort="A Jacket for server administrators.";
		itemsCargoSize[] = {0,0};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUXLARLAND_AdminGear\models\debug\debugJacket.paa",
			"GUXLARLAND_AdminGear\models\debug\debugJacket.paa",
			"GUXLARLAND_AdminGear\models\debug\debugJacket.paa"
		};
	};

	//Debug Pants
	class GUXLARLAND_debug_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Admin Pants";
		descriptionShort="A Pants for server administrators.";
		itemsCargoSize[] = {0,0};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUXLARLAND_AdminGear\models\debug\debugPants.paa",
			"GUXLARLAND_AdminGear\models\debug\debugPants.paa",
			"GUXLARLAND_AdminGear\models\debug\debugPants.paa"
		};
	};

	//Debug Belt
	class GUXLARLAND_debug_Belt: MilitaryBelt
	{
		scope=2;
		displayName="Admin Belt";
		descriptionShort="A Belt for server administrators.";
		itemsCargoSize[] = {10,100};
		itemSize[]={1,1};
		attachments[]={};
		hiddenSelectionsTextures[]=
		{
			"GUXLARLAND_AdminGear\models\debug\debugBelt.paa",
			"GUXLARLAND_AdminGear\models\debug\debugBelt.paa",
			"GUXLARLAND_AdminGear\models\debug\debugBelt.paa"
		};
	};
	
	//GUXLAR Jacket
	class GUXLARLAND_guxlar_Jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Admin Jacket";
		descriptionShort="A Jacket for server administrators.";
		itemsCargoSize[] = {10,100};
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"GUXLARLAND_AdminGear\models\guxlar\guxlarJacket.paa",
			"GUXLARLAND_AdminGear\models\guxlar\guxlarJacket.paa",
			"GUXLARLAND_AdminGear\models\guxlar\guxlarJacket.paa"
		};
	};	
	
};