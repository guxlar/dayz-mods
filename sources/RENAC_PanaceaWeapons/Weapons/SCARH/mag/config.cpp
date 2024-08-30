class CfgPatches
{
	class mag
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
			"PNC_SCARH_20Rnd"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class PNC_SCARH_20Rnd: Magazine_Base
	{
		scope=2;
		displayName="SCAR-H Magazine";
		descriptionShort="#SCARHMAG_00";
		model="PanaceaWeapons\Weapons\SCARH\mag\mag.p3d";
		weight=90;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_308Win";
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer",
			"Ammo_308WinAP"
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
							1,
							
							{
								"DZ\weapons\attachments\data\m4_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\m4_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\m4_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\m4_mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\m4_mag_destruct.rvmat"
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
		class PNC_SCARH_40Rnd_Coupled: Magazine_Base
		{
			scope=2;
			displayName="SCAR-H Coupled Magazine";
			descriptionShort="Двойной магазин для автомата SCAR-H";
			model="PanaceaWeapons\Weapons\SCARH\mag\coupled.p3d";
			weight=180;
			itemSize[]={2,3};
			count=60;
			ammo="Bullet_308Win";
			ammoItems[]=
			{
				"Ammo_308Win",
				"Ammo_308WinTracer",
				"Ammo_308WinAP"
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
								1,
								
								{
									"DZ\weapons\attachments\data\m4_mag.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\weapons\attachments\data\m4_mag.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\weapons\attachments\data\m4_mag_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\weapons\attachments\data\m4_mag_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\weapons\attachments\data\m4_mag_destruct.rvmat"
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
};
