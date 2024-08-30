modded class UniversalLight extends Switchable_Base
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( parent.IsKindOf("PNC_W_KIVAARI") || parent.IsKindOf("PNC_HoneyBadger_Base") || parent.IsKindOf("PNC_W_SCAR") || parent.IsKindOf("PNC_W_AX50_2") || parent.IsKindOf("PNC_W_AK47Tactical") || parent.IsKindOf("PNC_W_RemingtonMSR") || parent.IsKindOf("PNC_W_SuperSniper") || parent.IsKindOf("PNC_W_AR15_Long") || parent.IsKindOf("PNC_W_ASh127") || parent.IsKindOf("PNC_W_AUGA3") || parent.IsKindOf("PNC_W_AX50") || parent.IsKindOf("PNC_W_HK121") || parent.IsKindOf("PNC_W_MAG4") || parent.IsKindOf("PNC_W_SA80"))
		{
			return true;
		}		
		return super.CanPutAsAttachment(parent);
		return false;
	}
	
	//! Enter att slot types to check on attach
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHundguardFal"));
		}
	}
};