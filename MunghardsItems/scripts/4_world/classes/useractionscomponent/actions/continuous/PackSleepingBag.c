class ActionPackSleepingBag: ActionContinuousBase
{
	void ActionPackSleepingBag()
	{
		m_CallbackClass = ActionBuildOvenCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{	
		
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
		m_ConditionItem = new CCINotPresent;
	}
		
	override string GetText()
	{
		return "Pack Sleeping Bag";
	}
	
	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}

	override bool HasProgress()
	{
		return true;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		sleepingbag_colorbase_mung_Deployed m_sleepingbag = sleepingbag_colorbase_mung_Deployed.Cast( targetObject );

		if ( m_sleepingbag )
		{
			if ( m_sleepingbag.GetNumberOfItems() == 0 )
	        {
	            return true;
	        }
		}
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data )
	{	
		Object targetObject = action_data.m_Target.GetObject();
		sleepingbag_colorbase_mung_Deployed target = sleepingbag_colorbase_mung_Deployed.Cast( targetObject );
		vector position = target.GetPosition();

		target.SpawnTheTent(position);
		target.Delete();
	}
}