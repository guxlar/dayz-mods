class CfgPatches
{
	class RENAC_FreeSummerPack
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
	class BaseballCap_ColorBase;
	class RENAC_Cap_Blink: BaseballCap_ColorBase
	{
		scope=2;
		displayName="Gorro";
		descriptionShort="Gorro RENAC";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Blink.paa",
			"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Blink.paa",
			"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Blink.paa"
		};
	};
	class RENAC_Cap_Cherep : RENAC_Cap_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Cherep.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Cherep.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Cherep.paa"};
	};
	class RENAC_Cap_Night : RENAC_Cap_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Night.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Night.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Night.paa"};
	};
	class RENAC_Cap_Pauk : RENAC_Cap_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Pauk.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Pauk.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Pauk.paa"};
	};
	class RENAC_Cap_Print : RENAC_Cap_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Print.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Print.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Print.paa"};
	};
	class RENAC_Cap_Prizrak : RENAC_Cap_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Prizrak.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Prizrak.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Prizrak.paa"};
	};
	class RENAC_Cap_Rombik : RENAC_Cap_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Rombik.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Rombik.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Rombik.paa"};
	};
	class RENAC_Cap_XXX : RENAC_Cap_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_XXX.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_XXX.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_XXX.paa"};
	};
	class RENAC_Cap_Yellow : RENAC_Cap_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Yellow.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Yellow.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_Yellow.paa"};
	};
	class RENAC_Cap_YellowPrint : RENAC_Cap_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_YellowPrint.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_YellowPrint.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\headg\RENAC_Cap_YellowPrint.paa"};
	};
};
