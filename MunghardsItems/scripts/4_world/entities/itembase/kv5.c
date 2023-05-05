class kv5_mung extends Grenade_Base
{
    // bool likessluts()
    // {
    //     int slot_id = InventorySlots.GetSlotIdFromString("GasCanister");
    //     ItemBase slotCast = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
    //     ItemBase penisbanger = ItemBase.Cast(slotCast.GetParent())
    //     if(penisbanger && penisbanger.kv5slut())
    //     {
    //         return true;
    //     }
    //     return false;
    // }

    private void HideUnhideSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selectionNames);
        int selectionId = selectionNames.Find(selectionName);
        SetSimpleHiddenSelectionState(selectionId, hide);
    }

    override void EEInit()
    {
        super.EEInit();
        HideUnhideSelection("attached", 1);
        HideUnhideSelection("notattached", 0);
    }

    void kv5_mung()
    {
        SetAmmoType("M67Grenade_Ammo");
        SetFuseDelay(4);
        SetParticleExplosion(ParticleList.M67);
    }

    override void OnInventoryExit(Man player)
    {
        super.OnInventoryExit(player);
        
        HideUnhideSelection("attached", 1);
        HideUnhideSelection("notattached", 0);

    }

    override void OnInventoryEnter(Man player)
    {
        super.OnInventoryEnter(player);
        HideUnhideSelection("attached", 0);
        HideUnhideSelection("notattached", 1);
        // EntityAI itemInHands = GetGame().GetPlayer().GetHumanInventory().GetEntityInHands();
        // if (itemInHands && itemInHands != NULL)
        // {
        //     if(itemInHands.IsKindOf("PortableGasLamp") || itemInHands.IsKindOf("PortableGasStove") || itemInHands.IsKindOf("ballgrill_mung"))
        //     {
        //         HideUnhideSelection("attached", 1);
        //         HideUnhideSelection("notattached", 0);
        //     }
        //     else
        //     {
        //         HideUnhideSelection("attached", 0);
        //         HideUnhideSelection("notattached", 1);
        //     }
        // }
    }

    override void OnWasAttached( EntityAI parent, int slot_id )
    {
        ItemBase slutitem = ItemBase.Cast(parent);
        if(slutitem && slutitem.kv5slut())
        {
            HideUnhideSelection("attached", 1);
            HideUnhideSelection("notattached", 0);
        }

    }

    // override void OnItemLocationChanged(EntityAI old_owner, EntityAI new_owner) 
    // { 
    //     super.OnItemLocationChanged(old_owner, new_owner)
    //     PlayerBase player= PlayerBase.Cast( new_owner )


    //     if(new_owner == player)
    //     {
    //         HideUnhideSelection("attached", 0);
    //         HideUnhideSelection("notattached", 1);
    //     }
        
    // }
    // override void EEItemLocationChanged (notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
    // {
    //     super.EEItemLocationChanged(oldLoc,newLoc);

    //     PlayerBase player= PlayerBase.Cast( newLoc.GetParent() )
    //     ItemBase item = player.GetItemInHands();
    //     if(item && item.IsInherited(kv5_mung))
    //     {
    //         HideUnhideSelection("attached", 0);
    //         HideUnhideSelection("notattached", 1);
    //     }
    // }


    void ~kv5_mung() {}

    override void SetActions()
    {
        super.SetActions();
        RemoveAction(ActionUnpin);
        RemoveAction(ActionPin);
    }
};
modded class PortableGasLamp
{
    override bool kv5slut()
    {
    return true;
    }
};
modded class PortableGasStove
{
    override bool kv5slut()
    {
    return true;
    }
};
