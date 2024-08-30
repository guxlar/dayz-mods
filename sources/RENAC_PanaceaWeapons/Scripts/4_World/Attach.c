

class PNC_Suppressor_408_CheyTac extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL)
		{
			return true;
		}
		return false;
	}
};

class PNC_KIVAARI_Bttstck : ButtstockBase {};
class PNC_KIVAARI_Bttstck_camo : ButtstockBase {};
class PNC_KIVAARI_Bttstck_hive : ButtstockBase {};
class PNC_KIVAARI_Bttstck_kryp : ButtstockBase {};

class PNC_AR15_Bttstck_2 : ButtstockBase {};
class PNC_AR15_Bttstck_2_camo : ButtstockBase {};
class PNC_AR15_Bttstck_2_hive : ButtstockBase {};
class PNC_AR15_Bttstck_2_kryp : ButtstockBase {};

class PNC_Suppressor_65_Creedmore extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL)
		{
			return true;
		}
		return false;
	}
};
class PNC_Suppressor_65_Creedmore_tan : PNC_Suppressor_65_Creedmore {};

class PNC_Suppressor_556mm extends SuppressorBase
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

class PNC_Suppressor_338 extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL)
		{
			return true;
		}
		return false;
	}
};

class PNC_AR15_Bttstck : ButtstockBase {};

class PNC_Suppressor_556mm_Legion extends SuppressorBase
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

class PNC_HoneyBadger_Suppressor_01 extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL)
		{
			return true;
		}
		return false;
	}
};

class PNC_HoneyBadger_Suppressor_02 extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL)
		{
			return true;
		}
		return false;
	}
};

class PNC_HoneyBadger_Suppressor_03 extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL)
		{
			return true;
		}
		return false;
	}
};

class PNC_HoneyBadger_Bttstck : ButtstockBase {};
class PNC_HoneyBadger_Bttstck_tan : ButtstockBase {};
class PNC_HoneyBadger_Bttstck_camo : ButtstockBase {};
class PNC_HoneyBadger_Bttstck_camo2 : ButtstockBase {};
class PNC_HoneyBadger_Bttstck_kryp : ButtstockBase {};
class PNC_HoneyBadger_Bttstck_kitty : ButtstockBase {};

class PNC_BarretM82A1_Suppressor extends SuppressorBase
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
// class PNC_W_BarretM82A1_black extends SuppressorBase {};
// class PNC_W_BarretM82A1_desert extends SuppressorBase {};
// class PNC_W_BarretM82A1_snow extends SuppressorBase {};

class PNC_Aurora_Suppressor extends SuppressorBase
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

class origin12ga_suppressor extends ItemSuppressor
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponMuzzle12ga") == NULL )
		{
			return true;
		}
		return false;
	}
};

class PNC_Suppressor_9mm extends ItemSuppressor
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponMuzzleMP5") == NULL )
		{
			return true;
		}
		return false;
	}
};

class PNC_Suppressor_45acp extends ItemSuppressor
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponMuzzleMP5") == NULL )
		{
			return true;
		}
		return false;
	}
};

class PNC_Suppressor_357 extends ItemSuppressor
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponMuzzleMP5") == NULL )
		{
			return true;
		}
		return false;
	}
};

class PNC_Suppressor_556mm_1 extends SuppressorBase
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

class PNC_Suppressor_556mm_2 extends SuppressorBase
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

class PNC_Suppressor_12ga extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL)
		{
			return true;
		}
		return false;
	}
};

class PNC_Suppressor_308Win extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL)
		{
			return true;
		}
		return false;
	}
};

class PNC_Suppressor_338_1 extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL)
		{
			return true;
		}
		return false;
	}
};

class PNC_Suppressor_338_2 extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL)
		{
			return true;
		}
		return false;
	}
};

class PNC_Suppressor_762mm_39_1 extends ItemSuppressor
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponBayonetAK") == NULL )
		{
			return true;
		}
		return false;
	}
};

class PNC_Suppressor_762mm_39_2 extends ItemSuppressor
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponBayonetAK") == NULL )
		{
			return true;
		}
		return false;
	}
}