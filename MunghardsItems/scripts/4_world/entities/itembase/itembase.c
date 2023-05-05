modded class ItemBase
{
	// protected bool CanReceiveItemIntoCargoMung = true;

	bool kv5slut()
	{
		return false;
	}
	override bool CanReceiveItemIntoCargo( EntityAI item )
	{	
		// if (CanReceiveItemIntoCargoMung)
		// {
			EntityAI parent = this.GetHierarchyParent();
			if (parent)
			{
				if (parent.IsInherited(carrierrig_mung) || parent.IsInherited(riflesling_colorbase_mung)) // thanks Dr.Day Leonid
				{
					if (this.!IsRuined() && item.!IsRuined())
						return true;
				}			
			}		
			return super.CanReceiveItemIntoCargo(item);
		// }
		// else
		// {
		// 	return false;
		// }
	}
	// void SetRecieveItemIntoCargoTrue()
	// {
	// 	CanReceiveItemIntoCargoMung = true;
	// }
};
