class hazmatsuit_mung extends Clothing
{


    // override bool CanPutAsAttachment( EntityAI parent )
    // {
    //     if ( parent.FindAttachmentBySlotName("Legs") == NULL)
    //     {
    //         return true;
    //     }
    //     return false;
    // }
   
    // override void OnWasAttached( EntityAI parent, int slot_id )
    // {
        
    //     PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
    //     if(player)
    //     {
    //         player.HideClothing_mung(true);
    //     }
    //     // Print(player);
    //     // parent.FindAttachmentBySlotName("Legs").SetSimpleHiddenSelectionState("personality",!boo);

    //     // int slot_id = parent.InventorySlots.GetSlotIdFromString("Legs");
    //     // m_CharactersLegs = Legs_Default.Cast(GetInventory().FindPlaceholderForSlot( slot_id ));

    //     // if ( parent.FindAttachmentBySlotName("Legs") == NULL)
    //     // {
    //     //     // EntityAI invisPants = parent.GetInventory().CreateAttachment("hazmatsuit_legs_mung");
            
    //     // }
    // }

    // override void OnWasDetached( EntityAI parent, int slot_id )
    // {
    //     PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
    //     if(player)
    //     {
    //         player.HideClothing_mung(false);
    //     }
    //     // parent.HideClothing_mung().SetInvisibleRecursive(false,this,clothingArray_mung);
    //     // parent.FindAttachmentBySlotName("Legs").GetHiddenSelectionIndex("personality");

    //     // EntityAI invisPants = parent.GetAttachmentByType(hazmatsuit_legs_mung);

    //     // if (invisPants)
    //     // {
    //     //     invisPants.Delete();
    //     // }


    //     //  EntityAI pants = parent.FindAttachmentBySlotName("Legs");
    //     // if (pants.IsKindOf("hazmatsuit_legs_mung")
        // {
        // pants.Delete();     //this properly deletes right? I have an idea for change if not
        // }
    // }

};


// class hazmatsuit_legs_mung extends Clothing
// {
//     override bool CanDetachAttachment (EntityAI parent)
//     {
//         return false;
//     }
// };