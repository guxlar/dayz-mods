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
	class SurgicalMask;
	class RENAC_Mask_Blink: SurgicalMask
	{
		scope=2;
		displayName="Mascara";
		descriptionShort="Mascara RENAC";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"RENAC_SummerPack\mask\RENAC_Mask_Blink.paa",
			"RENAC_SummerPack\mask\RENAC_Mask_Blink.paa",
			"RENAC_SummerPack\mask\RENAC_Mask_Blink.paa"
		};
	};
	class RENAC_Mask_Cherep : RENAC_Mask_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\mask\RENAC_Mask_Cherep.paa", "RENAC_SummerPack\mask\RENAC_Mask_Cherep.paa", "RENAC_SummerPack\mask\RENAC_Mask_Cherep.paa"};
	};
	class RENAC_Mask_Night : RENAC_Mask_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\mask\RENAC_Mask_Night.paa", "RENAC_SummerPack\mask\RENAC_Mask_Night.paa", "RENAC_SummerPack\mask\RENAC_Mask_Night.paa"};
	};
	class RENAC_Mask_Pauk : RENAC_Mask_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\mask\RENAC_Mask_Pauk.paa", "RENAC_SummerPack\mask\RENAC_Mask_Pauk.paa", "RENAC_SummerPack\mask\RENAC_Mask_Pauk.paa"};
	};
	class RENAC_Mask_Print : RENAC_Mask_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\mask\RENAC_Mask_Print.paa", "RENAC_SummerPack\mask\RENAC_Mask_Print.paa", "RENAC_SummerPack\mask\RENAC_Mask_Print.paa"};
	};
	class RENAC_Mask_Prizrak : RENAC_Mask_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\mask\RENAC_Mask_Prizrak.paa", "RENAC_SummerPack\mask\RENAC_Mask_Prizrak.paa", "RENAC_SummerPack\mask\RENAC_Mask_Prizrak.paa"};
	};
	class RENAC_Mask_Rombik : RENAC_Mask_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\mask\RENAC_Mask_Rombik.paa", "RENAC_SummerPack\mask\RENAC_Mask_Rombik.paa", "RENAC_SummerPack\mask\RENAC_Mask_Rombik.paa"};
	};
	class RENAC_Mask_XXX : RENAC_Mask_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\mask\RENAC_Mask_XXX.paa", "RENAC_SummerPack\mask\RENAC_Mask_XXX.paa", "RENAC_SummerPack\mask\RENAC_Mask_XXX.paa"};
	};
	class RENAC_Mask_Yellow : RENAC_Mask_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\mask\RENAC_Mask_Yellow.paa", "RENAC_SummerPack\mask\RENAC_Mask_Yellow.paa", "RENAC_SummerPack\mask\RENAC_Mask_Yellow.paa"};
	};
	class RENAC_Mask_YellowPrint : RENAC_Mask_Blink {
		scope = 2;
		hiddenSelectionsTextures[] = {"RENAC_SummerPack\mask\RENAC_Mask_YellowPrint.paa", "RENAC_SummerPack\mask\RENAC_Mask_YellowPrint.paa", "RENAC_SummerPack\mask\RENAC_Mask_YellowPrint.paa"};
	};
};