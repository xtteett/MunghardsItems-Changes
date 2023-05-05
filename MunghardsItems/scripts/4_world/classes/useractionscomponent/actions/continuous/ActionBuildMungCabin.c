class ActionBuildMungCabinCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		int penis = 1;
		m_ActionData.m_ActionComponent = new CAContinuousTime(penis); // or however long we want
		// m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.BURY_BODY); // or however long we want
	}
};

class ActionBuildMungCabin: ActionContinuousBase
{
    int axeDamage = 50;

	void ActionBuildMungCabin()
	{
		m_CallbackClass = ActionBuildMungCabinCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_ASSEMBLE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_MEDIUM;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();
		log_cabin_base IsLookingAt = log_cabin_base.Cast( targetObject );
		PlayerBase itemInHands = PlayerBase.Cast(player.GetHumanInventory().GetEntityInHands());
        
		if ( IsLookingAt && itemInHands.IsKindOf("Hammer") && IsLookingAt.CanBuild() )
		{
			return true;
		}
		return false;
	}
	// 	override bool HasProgress()
	// {
	// 	return true;
	// }

	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}

	override string GetText()
	{
		return "Build";
	}
	
 //    override bool ActionConditionContinue( ActionData action_data ) //condition for action
	// {
	// 	return true;
	// }

	override void OnFinishProgressServer( ActionData action_data )
	{
        Object targetObject = action_data.m_Target.GetObject();
        log_cabin_base m_cabin = log_cabin_base.Cast( targetObject );
        
        m_cabin.MasterBuilder();
	}
};