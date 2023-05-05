class Pickles_closed : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("Pickles_opened");
	}
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionOpen);
	}
	override bool IsOpen()
	{
		return false;
	}
};