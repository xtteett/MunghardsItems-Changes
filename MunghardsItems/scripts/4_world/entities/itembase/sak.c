class SAK_Mung extends ToolBase
{
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionMineBush);
		AddAction(ActionBurnSewTarget);
		AddAction(ActionBurnSewSelf);
		AddAction(ActionSkinning);
		AddAction(ActionMineTreeBark);
		AddAction(ActionShaveTarget);
		AddAction(ActionShave);
		AddAction(ActionLockDoors);
		AddAction(ActionUnlockDoors);
	}
	
}
