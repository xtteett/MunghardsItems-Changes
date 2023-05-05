class hazmatsuit_mung extends Clothing
{
	override void OnWasAttached(EntityAI parent, int slot_id)
	{
		super.OnWasAttached(parent, slot_id);
		if(parent.IsPlayer())
		{
			HideBodyParts(parent, true);
		}
	}

	override void OnWasDetached(EntityAI parent, int slot_id)
	{
    	EntityAI newAttachment = parent.GetInventory().FindAttachment(slot_id);

    	if (!newAttachment || !newAttachment.IsKindOf("hazmatsuit_mung"))
    	{
        	if (parent.IsPlayer())
        	{
            	HideBodyParts(parent, false);
        	}
    	}
	}

	void HideBodyParts(PlayerBase player, bool state)
	{	
		EntityAI bodypart;
		int slot_id;
		//array<string> bodyparts = {"Gloves","Body","Legs","Feet","Head","Hips"};
		array<string> bodyparts = {"Body","Legs","Hips"};
				
	    for ( int i = 0; i < bodyparts.Count(); i++ )
		{
			
			slot_id = InventorySlots.GetSlotIdFromString(bodyparts.Get(i));
			bodypart = player.GetInventory().FindPlaceholderForSlot( slot_id );
			
			if ( bodypart )
			{
				bodypart.SetInvisible( state );
			}
		}			
	}
}