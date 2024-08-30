class CfgPatches
{
	class 338LapuaMagnum
	{
		units[]=
		{
			"AmmoBox_338LapuaMagnum_20Rnd"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Magazines"
		};
		magazines[]=
		{
			"Ammo_338LapuaMagnum"
		};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_338LapuaMagnum: Ammunition_Base
	{
		scope=2;
		displayName="338 Lapua Magnum";
		descriptionShort="#338PNCLP_00";
		model="PanaceaWeapons\Ammo\round\338LapuaMagnum\338Lp.p3d";
		iconCartridge=2;
		iconType=1;
		weight=13;
		count=40;
		ammo="Bullet_338LP";
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
								"DZ\weapons\ammunition\data\556_LooseRounds5.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\556_LooseRounds5.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\556_LooseRounds5_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\556_LooseRounds5_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\ammunition\data\556_LooseRounds5_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class AmmoBox_338LapuaMagnum_20Rnd: Box_Base
	{
		scope=2;
		displayName="338 Lapua Magnum Box";
		descriptionShort="#338PNCLPBOX_00";
		model="PanaceaWeapons\Ammo\round\AmmoBox.p3d";
		iconType=1;
		rotationFlags=17;
		weight=85;
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
								"DZ\weapons\ammunition\data\556_20RoundBox.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\556_20RoundBox.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\ammunition\data\556_20RoundBox_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_338LapuaMagnum
			{
				value=10;
				variable="quantity";
			};
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Ammo\round\338LapuaMagnum\data\Ammobox338.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
};
