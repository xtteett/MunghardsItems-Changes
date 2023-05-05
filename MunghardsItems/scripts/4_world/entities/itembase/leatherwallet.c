class leatherwallet_mung extends Inventory_Base
{
	  override bool CanReceiveItemIntoCargo (EntityAI item)
    {
        if ( item.IsKindOf("MoneyRuble1"))
        {
            return true;
        };
        return false;
    }
}
