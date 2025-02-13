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
	class TShirt_ColorBase;
	class RENAC_Jacket_Blink: TShirt_ColorBase
	{
		scope=2;
		displayName="Camiseta";
		descriptionShort="Camiseta RENAC";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SummerPack\jacket\RENAC_Jacket_Blink.paa",
			"RENAC_SummerPack\jacket\RENAC_Jacket_Blink.paa",
			"RENAC_SummerPack\jacket\RENAC_Jacket_Blink.paa"
		};
	};
	class RENAC_Jacket_Cherep : RENAC_Jacket_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\jacket\RENAC_Jacket_Cherep.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Cherep.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Cherep.paa"};
	};
	class RENAC_Jacket_Night : RENAC_Jacket_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\jacket\RENAC_Jacket_Night.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Night.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Night.paa"};
	};
	class RENAC_Jacket_Pauk : RENAC_Jacket_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\jacket\RENAC_Jacket_Pauk.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Pauk.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Pauk.paa"};
	};
	class RENAC_Jacket_Print : RENAC_Jacket_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\jacket\RENAC_Jacket_Print.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Print.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Print.paa"};
	};
	class RENAC_Jacket_Prizrak : RENAC_Jacket_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\jacket\RENAC_Jacket_Prizrak.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Prizrak.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Prizrak.paa"};
	};
	class RENAC_Jacket_Rombik : RENAC_Jacket_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\jacket\RENAC_Jacket_Rombik.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Rombik.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Rombik.paa"};
	};
	class RENAC_Jacket_XXX : RENAC_Jacket_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\jacket\RENAC_Jacket_XXX.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_XXX.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_XXX.paa"};
	};
	class RENAC_Jacket_Yellow : RENAC_Jacket_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\jacket\RENAC_Jacket_Yellow.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Yellow.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_Yellow.paa"};
	};
	class RENAC_Jacket_YellowPrint : RENAC_Jacket_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\jacket\RENAC_Jacket_YellowPrint.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_YellowPrint.paa", "RENAC_SummerPack\jacket\RENAC_Jacket_YellowPrint.paa"};
	};
};