class ActionSmokeCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.MEASURE_TEMP);
	}
};

class ActionSmoke: ActionContinuousBase
{
	void ActionSmoke()
	{
		m_CallbackClass = ActionMeasureTemperatureSelfCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_TAKETEMPSELF;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_TAKETEMPSELF;
		//m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}
	
	override bool HasProneException()
	{
		return true;
	}
	
	// int GetType()
	// {
	// 	return AT_MEASURE_TEMPERATURE_S;
	// }

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "Smoke";
	}
/*
	override void OnFinishProgressServer( ActionData action_data )
	{	
		Thermometer thermometer = Thermometer.Cast(action_data.m_MainItem);
		
		if(thermometer)
		{
			ScriptRPC rpc = new ScriptRPC();
			rpc.Write(thermometer.GetTemperatureMessage(action_data.m_Player));
			rpc.Send(action_data.m_Player, ERPCs.RPC_SYNC_THERMOMETER, true, action_data.m_Player.GetIdentity() );
		}
		
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
	}
	*/
};