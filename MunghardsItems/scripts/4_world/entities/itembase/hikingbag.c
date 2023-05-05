class Hikingbagmung_ColorBase extends Clothing
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