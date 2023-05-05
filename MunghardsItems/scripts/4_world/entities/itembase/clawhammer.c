class Clawhammer_mung: Hammer
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionBuildPartSwitch);
		AddAction(ActionMineRock);
		AddAction(ActionBuildPart);
	}
	
}
