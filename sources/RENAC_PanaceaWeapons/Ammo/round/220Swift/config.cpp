class CfgPatches
{
	class 220Swift
	{
		units[]=
		{
			"AmmoBox_220Swift_20Rnd"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Magazines"
		};
		magazines[]=
		{
			"Ammo_220Swift"
		};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_220Swift: Ammunition_Base
	{
		scope=2;
		displayName="220 Swift";
		descriptionShort=".220 Swift — semi-flange rifle cartridge developed by Winchester and introduced in 1935.";
		model="PanaceaWeapons\Ammo\round\338LapuaMagnum\338Lp.p3d";
		iconCartridge=2;
		iconType=1;
		weight=13;
		count=40;
		ammo="Bullet_220Swift";
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
	class PNC_AmmoBox_220Swift_20Rnd: Box_Base
	{
		scope=2;
		displayName="220 Swift Ammo Box 20Rnd";
		descriptionShort=".220 Swift — полуфланцевый винтовочный патрон, разработанный фирмой Winchester и введённый в 1935 году. ";
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
			class Ammo_220Swift
			{
				value=20;
				variable="quantity";
			};
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"PanaceaWeapons\Ammo\round\220Swift\data\ammobox220.paa"
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
