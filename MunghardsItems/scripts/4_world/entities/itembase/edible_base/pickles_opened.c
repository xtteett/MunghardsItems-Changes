class Pickles_opened : Edible_Base
{
	override void Close()
	{
		ReplaceEdibleWithNew("Pickles_closed");
	}
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
		AddAction(ActionClose);
	}
};
