class CfgPatches
{
	class magazine
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
		magazines[]=
		{
			"PNC_Famas_Mag"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class PNC_Famas_Mag: Magazine_Base
	{
		scope=2;
		displayName="Famas Magazine";
		descriptionShort="#FamasMag_00";
		model="PanaceaWeapons\Weapons\Famas\magazine\PNC_famas_mag.p3d";
		weight=400;
		itemSize[]={1,2};
		count=25;
		ammo="Bullet_556x45";
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45AP",
			"Ammo_556x45Tracer"
		};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"PanaceaWeapons\Weapons\Famas\data\famas.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PanaceaWeapons\Weapons\Famas\data\famas.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PanaceaWeapons\Weapons\Famas\data\famas.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PanaceaWeapons\Weapons\Famas\data\famas.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"PanaceaWeapons\Weapons\Famas\data\famas.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
};
