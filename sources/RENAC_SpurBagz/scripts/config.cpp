class CfgPatches
{
	class RENAC_Spur_BagZ_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Spur_BagZ"
		};
	};
};
class CfgSlots
{
	class Slot_Hatchet
	{
		name="Hatchet";
		displayName="Hatchet";
		ghostIcon="set:Spur_BagZ_Slots image:BladeSlot";
	};
	class Slot_Machete
	{
		name="Machete";
		displayName="Machete";
		ghostIcon="set:Spur_BagZ_Slots image:BladeSlot";
	};
	class Slot_KukriKnife
	{
		name="KukriKnife";
		displayName="KukriKnife";
		ghostIcon="set:Spur_BagZ_Slots image:BladeSlot";
	};
	class Slot_BladeSlot
	{
		name="BladeSlot";
		displayName="BladeSlot";
		ghostIcon="set:Spur_BagZ_Slots image:BladeSlot";
	};
	class Slot_CrudeMachete
	{
		name="CrudeMachete";
		displayName="Tactical Machete";
		ghostIcon="set:Spur_BagZ_Slots image:BladeSlot";
	};
	class Slot_OrientalMachete
	{
		name="OrientalMachete";
		displayName="Oriental Machete";
		ghostIcon="set:Spur_BagZ_Slots image:BladeSlot";
	};
	class Slot_FangeKnife
	{
		name="FangeKnife";
		displayName="Fange Knife";
		ghostIcon="set:Spur_BagZ_Slots image:BladeSlot";
	};
	class Slot_Whetstone
	{
		name="Whetstone";
		displayName="Whetstone";
		ghostIcon="set:Spur_BagZ_Slots image:Whetstone";
	};

};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyhatchet: ProxyAttachment
	{
		scope=2;
		inventorySlot="Hatchet";
		model="\DZ\weapons\melee\blade\hatchet.p3d";
	};
	class Proxymachete: ProxyAttachment
	{
		scope=2;
		inventorySlot="Machete";
		model="\DZ\weapons\melee\blade\machete.p3d";
	};
	class Proxykukri_knife: ProxyAttachment
	{
		scope=2;
		inventorySlot="KukriKnife";
		model="\DZ\weapons\melee\blade\kukri_knife.p3d";
	};
	class Proxyfange_knife: ProxyAttachment
	{
		scope=2;
		inventorySlot="FangeKnife";
		model="\DZ\weapons\melee\blade\fange_knife.p3d";
	};
	class Proxymachete_tactical: ProxyAttachment
	{
		scope=2;
		inventorySlot="CrudeMachete";
		model="\DZ\weapons\melee\blade\machete_tactical.p3d";
	};
	class Proxymachete_oriental: ProxyAttachment
	{
		scope=2;
		inventorySlot="OrientalMachete";
		model="\DZ\weapons\melee\blade\machete_oriental.p3d";
	};

};