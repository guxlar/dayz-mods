class CfgPatches
{
	class DayZExpansion_LoadingScreen_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class DZ_Expansion_LoadingScreen
	{
		dir = "RENAC_LoadingScreen";
		credits = "salutesh guxlar darkgeo";
		extra = 0;
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"RENAC_LoadingScreen/Scripts/3_Game"};				
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"RENAC_LoadingScreen/scripts/5_Mission"};
			};
		};
	};
};

class CfgSoundSets
{
	class FMusic_Menu_SoundSet // do not change anything in this
	{
		soundShaders[] = {"FMusic_Menu_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
};
class CfgSoundShaders
{
	class FMusic_Menu_SoundShader
	{
		samples[] = {
					 {"\RENAC_LoadingScreen\OGG\musica.ogg",1}
					}; 
		volume = 0.65;  // volume of your music
	};
};