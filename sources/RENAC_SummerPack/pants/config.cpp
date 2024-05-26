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
	class Breeches_ColorBase;
	class RENAC_Pants_Blink: Breeches_ColorBase
	{
		scope=2;
		displayName="Pantalon";
		descriptionShort="Pantalon RENAC";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Blink.paa",
			"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Blink.paa",
			"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Blink.paa"
		};
	};
	class RENAC_Pants_Cherep : RENAC_Pants_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Cherep.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Cherep.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Cherep.paa"};
	};
	class RENAC_Pants_Night : RENAC_Pants_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Night.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Night.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Night.paa"};
	};
	class RENAC_Pants_Pauk : RENAC_Pants_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Pauk.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Pauk.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Pauk.paa"};
	};
	class RENAC_Pants_Print : RENAC_Pants_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Print.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Print.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Print.paa"};
	};
	class RENAC_Pants_Prizrak : RENAC_Pants_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Prizrak.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Prizrak.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Prizrak.paa"};
	};
	class RENAC_Pants_Rombik : RENAC_Pants_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Rombik.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Rombik.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Rombik.paa"};
	};
	class RENAC_Pants_XXX : RENAC_Pants_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_XXX.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_XXX.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_XXX.paa"};
	};
	class RENAC_Pants_Yellow : RENAC_Pants_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Yellow.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Yellow.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_Yellow.paa"};
	};
	class RENAC_Pants_YellowPrint : RENAC_Pants_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_YellowPrint.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_YellowPrint.paa", "RENACIMIENTO_ClothingPack\RENAC_SummerPack\pants\RENAC_Pants_YellowPrint.paa"};
	};
};
