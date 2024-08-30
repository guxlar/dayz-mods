class CfgPatches
{
	class FNFAL
	{
		units[]={};
		weapons[]=
		{
			"PNC_W_FAL"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Vests",
			"DZ_Gear_Containers",
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class cfgWeapons
{
	class FAL;
	class PNC_W_FAL: FAL
	{
		scope=2;
		displayName="LAR";
		descriptionShort="#LARPNC_00";
		model="PanaceaWeapons\Weapons\FNFAL\PNC_FAL.p3d";
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer",
			"Ammo_308WinAP"
		};
		attachments[]=
		{
			"weaponButtstockFal",
			"weaponHundguardFal",
			"weaponHandleFal",
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"PNC_weaponMuzzle_308",
			"suppressorImpro"
		};
		magazines[]=
		{
			"Mag_FAL_20Rnd",
			"PNC_MoreMag_FAL_50Rnd",
			"PNC_MoreMag_FAL_20RndCoupledClamp"
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20000;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_weaponHundguardFal
	{
		name="weaponHundguardFal";
		displayName="weaponHundguardFal";
		ghostIcon="handguard";
	};
	class Slot_weaponHandleFal
	{
		name="weaponHandleFal";
		displayName="weaponHandleFal";
		ghostIcon="missing";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyPNC_plastic_handguard: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponHundguardFal";
		model="PanaceaWeapons\Weapons\FNFAL\handguard\proxy\PNC_plastic_handguard.p3d";
		ghostIcon="missing";
	};
	class ProxyPNC_ris_handguard: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponHundguardFal";
		model="PanaceaWeapons\Weapons\FNFAL\handguard\proxy\PNC_ris_handguard.p3d";
		ghostIcon="missing";
	};
	class ProxyPNC_wooden_handguard: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponHundguardFal";
		model="PanaceaWeapons\Weapons\FNFAL\handguard\proxy\PNC_wooden_handguard.p3d";
		ghostIcon="missing";
	};



	class ProxyPNC_FalHandle_Plastic: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponHandleFal";
		ghostIcon="missing";
	};
};
