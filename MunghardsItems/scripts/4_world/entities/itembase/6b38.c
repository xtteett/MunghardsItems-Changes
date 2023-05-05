class bag_6B38_Colorbase_mung extends Clothing
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