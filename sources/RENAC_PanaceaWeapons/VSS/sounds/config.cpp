class CfgPatches
{
	class sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class vssk_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"PanaceaWeapons\VSS\sounds\VSSK",
				1
			},
			
			{
				"PanaceaWeapons\VSS\sounds\VSSK",
				1
			},
			
			{
				"PanaceaWeapons\VSS\sounds\VSSK",
				1
			}
		};
		volume=0.37828;
		range=120;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Pistol_Shot_Base_SoundSet;
	class vssk_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"vssk_Shot_SoundShader",
			"VSS_Vintorez_mid_shot_01",
			"VSS_Vintorez_dist_shot_01",
			"VSS_Vintorez_closure"
		};
	};
};
