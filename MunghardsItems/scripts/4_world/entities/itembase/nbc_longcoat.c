class nbc_longcoat_mung extends Clothing
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
    //     // if ( parent.FindAttachmentBySlotName("Legs") == NULL)
    //     // {
    //     //     EntityAI invisPants = parent.GetInventory().CreateAttachment("nbc_longcoat_legs_mung");
    //     // }
    // }

    // override void OnWasDetached( EntityAI parent, int slot_id )
    // {
    //     PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
    //     if(player)
    //     {
    //         player.HideClothing_mung(false);
    //     }
    //     // EntityAI invisPants = parent.GetAttachmentByType(nbc_longcoat_legs_mung);

    //     // if (invisPants)
    //     // {
    //     //     invisPants.Delete(); 
    //     // }

    // }
};


// class nbc_longcoat_legs_mung extends Clothing
// {
//     override bool CanDetachAttachment (EntityAI parent)
//     {
//         return false;
//     }
// };