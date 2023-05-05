modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);                	// This executes the original so you dont mess anything up				// 2467737
		actions.Insert(ActionPackSleepingBag);		// 
		// actions.Insert(ActionDisarmTripWireMung);
		actions.Insert(ActionSmoke);
		//actions.Insert(ActionBuildMungCabin);
    }
};
