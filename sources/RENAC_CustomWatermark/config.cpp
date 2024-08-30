class CfgPatches
{
	class CustomWatermark_Cfg
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Gear_Containers",
			"DZ_Gear_Medical",
			"DZ_Gear_Consumables",
			"DZ_Gear_Tools",
			"DZ_Characters_Headgear",
			"DZ_Characters_Vests",
			"DZ_Characters_Masks",
			"DZ_Characters_Gloves",
			"DZ_Gear_Tools",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class CustomWatermark
	{
		dir="RENAC_CustomWatermark";
		hideName=1;
		hidePicture=1;
		name="RENAC_CustomWatermark";
		author="K3BA6 guxlar";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Mission"
		};
		class defs
		{
			class imageSets
			{
				files[]=
				{
					"RENAC_CustomWatermark/gui_watermark/image/logo.imageset"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"RENAC_CustomWatermark/5_Mission"
				};
			};
		};
	};
};
