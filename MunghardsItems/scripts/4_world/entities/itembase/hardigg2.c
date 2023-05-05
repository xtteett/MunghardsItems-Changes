class hardigg2_Mung extends Container_Base
{
	override void OnInventoryEnter(Man player)
    {
        super.OnInventoryEnter(player);
        GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);        
    }
    
    override void OnInventoryExit(Man player)
    {
        super.OnInventoryExit(player);
        GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
        
    }

    override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0"  )
    {
        super.OnPlacementComplete( player, position, orientation );
        GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);

    }

    // override bool IsHeavyBehaviour() 
    // {
    //     return true; 
    // }

	override bool IsContainer()
	{
		return true;
	}

	// override bool CanReceiveItemIntoCargo(EntityAI cargo)
 //    {

 //        PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
	// 	EntityAI item_in_hands = player.GetHumanInventory().GetEntityInHands();

	// 	if( item_in_hands != NULL)
	// 	{
	//            if ( item_in_hands.IsKindOf("hardigg2_Mung"))
	// 	        {
	// 	        	return false;
	// 	        }
	// 	    	return true;		
	// 	}
	// 	return true;
 //    }
	
	override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0 && GetInventory().AttachmentCount() == 0)
        {
            return true;
        }
        return false;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        if( !super.CanPutIntoHands( parent ) )
        {
            return false;
        }
        if ( GetNumberOfItems() == 0 && GetInventory().AttachmentCount() == 0)
        {
            return true;
        }
        return false;

    }


	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
};
class hardigg_Mung : hardigg2_Mung{};
class hardigg2_Mung_camo : hardigg2_Mung{};
class hardigg2_Mung_snow : hardigg2_Mung{};
class hardigg3_mung : hardigg2_Mung{};