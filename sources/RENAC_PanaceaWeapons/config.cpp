class CfgPatches
{
	class PanaceaWeapons
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class PNC_PanaceaWeapons_CfgMods
	{
		dir="RENAC_PanaceaWeapons";
		hideName=1;
		hidePicture=1;
		name="RENAC_PanaceaWeapons";
		credits="Makoni Veter";
		author="Jon Black";
		version=1;
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"RENAC_PanaceaWeapons\Scripts\4_World"
				};
			};
		};
	};
};
