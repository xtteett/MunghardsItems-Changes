class carrierrig_mung extends Clothing
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( parent.IsKindOf("carrierrig_mung"))
		{
			return false;
		}
		return true;
	}
}

modded class Clothing extends Clothing_Base
{

	bool SmershException(EntityAI hierarchyParent)
	{
		EntityAI hp = hierarchyParent.GetHierarchyParent();
		if (hp)
		{
			if (!hp.IsMan())
				return false;
		}
		
		return IsInherited(Clothing) || IsInherited(SmershBag) && hierarchyParent.IsInherited(carrierrig_mung) || hierarchyParent.IsInherited(SmershVest);
	}

}