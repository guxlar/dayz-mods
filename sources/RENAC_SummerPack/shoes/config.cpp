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
	class AthleticShoes_ColorBase;
	class RENAC_Shoes_Blink: AthleticShoes_ColorBase
	{
		scope=2;
		displayName="Zapatilla";
		descriptionShort="Zapatilla RENAC";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Blink.paa",
			"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Blink.paa",
			"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Blink.paa"
		};
	};
	class RENAC_Shoes_Cherep : RENAC_Shoes_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Cherep.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Cherep.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Cherep.paa"};
	};
	class RENAC_Shoes_Night : RENAC_Shoes_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Night.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Night.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Night.paa"};
	};
	class RENAC_Shoes_Pauk : RENAC_Shoes_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Pauk.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Pauk.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Pauk.paa"};
	};
	class RENAC_Shoes_Print : RENAC_Shoes_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Print.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Print.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Print.paa"};
	};
	class RENAC_Shoes_Prizrak : RENAC_Shoes_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Prizrak.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Prizrak.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Prizrak.paa"};
	};
	class RENAC_Shoes_Rombik : RENAC_Shoes_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Rombik.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Rombik.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Rombik.paa"};
	};
	class RENAC_Shoes_XXX : RENAC_Shoes_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_XXX.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_XXX.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_XXX.paa"};
	};
	class RENAC_Shoes_Yellow : RENAC_Shoes_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Yellow.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Yellow.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_Yellow.paa"};
	};
	class RENAC_Shoes_YellowPrint : RENAC_Shoes_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_YellowPrint.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_YellowPrint.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\shoes\RENAC_Shoes_YellowPrint.paa"};
	};
};
