class PNC_Fal_Compensator_1: ItemSuppressor 
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponBayonet") == NULL )
		{
			return true;
		}
		return false;
	}
};
class PNC_Fal_Compensator_2: ItemSuppressor 
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponBayonet") == NULL )
		{
			return true;
		}
		return false;
	}
};
class PNC_Fal_WoodenBttstck: Inventory_Base {};
class PNC_Fal_WoodenHndgrd: Inventory_Base {};
class PNC_Fal_PlasticHndgrd: Inventory_Base {};
class PNC_Fal_RISHndgrd: Inventory_Base
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponFlashlight") || Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponHandleFal") )
		{
			return false;
		}
		return true;
	}
};
class PNC_Fal_PlasticHundle: Inventory_Base 
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		bool fal_rishndgrd   = false;

		if ( parent.FindAttachmentBySlotName("weaponHundguardFal") != NULL )
		{
			fal_rishndgrd = parent.FindAttachmentBySlotName("weaponHundguardFal").IsKindOf("Fal_RISHndgrd");
		}
		
		if ( fal_rishndgrd )
		{
			return true;
		}
		
		return false;
	}
};