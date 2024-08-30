#define SPUR_BAGZ
class CfgPatches
{
	class Spur_BagZ
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class Spur_Mod
	{
		dir="RENAC_SpurBagz";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="RENAC_SpurBagz";
		credits="spurgle helkhiana windstride cleetus sicks dannydoomno1 guxlar";
		author="Spurgle";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
//			"Game",
			"World"//,
//			"Mission"
		};
		class defs
		{
			class imageSets
            {
                files[]=
                {
                    "RENAC_SpurBagz/gui/imagesets/Spur_BagZ_Slots.imageset"
                };
            };

			class worldScriptModule
			{
				value="";
				files[]=
				{
					"RENAC_SpurBagz/scripts/4_world"
				};
			};

		};
	};
};