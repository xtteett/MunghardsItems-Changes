class wonderbread_mung : Edible_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatSmall);
	}
}
