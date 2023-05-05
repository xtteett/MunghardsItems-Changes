class sleepingbag_mung extends ItemBase
{
	ref protected EffectSound 	m_DeployLoopSound;
	protected Object			sleepingbag_mung_Deployed1;
	protected Object			mung_ClutterCutter;


	override bool IsBasebuildingKit()
	{
		return true;
	}
	string j_unpackedTent()
	{
		return "sleepingbag_blue_mung";
	}
	
	void sleepingbag_mung()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	override void EEInit()
	{
		super.EEInit();
	}
	

	override void OnItemLocationChanged( EntityAI old_owner, EntityAI new_owner ) 
	{
		super.OnItemLocationChanged( old_owner, new_owner );
	}		

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( IsDeploySound() )
		{
			PlayDeploySound();
		}
				
		if ( CanPlayDeployLoopSound() )
		{
			PlayDeployLoopSound();
		}
					
		if ( m_DeployLoopSound && !CanPlayDeployLoopSound() )
		{
			StopDeployLoopSound();
		}
	}

	//================================================================
	// ADVANCED PLACEMENT
	//================================================================			
		
	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0"  )
	{
		super.OnPlacementComplete( player, position, orientation );
		
		PlayerBase pb = PlayerBase.Cast( player );
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
				
			sleepingbag_mung_Deployed1 = GetGame().CreateObjectEx(this.j_unpackedTent(), GetPosition(), ECE_PLACE_ON_SURFACE );				
			sleepingbag_mung_Deployed1.SetPosition( position);
			sleepingbag_mung_Deployed1.SetOrientation( orientation );

			mung_ClutterCutter = GetGame().CreateObject( "ClutterCutterFireplace", pb.GetLocalProjectionPosition(), false );
			mung_ClutterCutter.SetPosition( position);
			mung_ClutterCutter.SetOrientation( orientation );

			this.Delete();			
		}	
		
		SetIsDeploySound( true );
	}
	
	override bool IsDeployable()
	{
		return true;
	}	
	
	override string GetDeploySoundset()
	{
		return "mediumtent_drop_SoundSet"; //putDown_FenceKit_SoundSet
	}
	
	override string GetLoopDeploySoundset()
	{
		return "Bandage_loop_SoundSet";
	}
	
	void PlayDeployLoopSound()
	{		
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{		
			m_DeployLoopSound = SEffectManager.PlaySound( GetLoopDeploySoundset(), GetPosition());
		}
	}
	
	void StopDeployLoopSound()
	{
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{	
			m_DeployLoopSound.SoundStop();
			delete m_DeployLoopSound;
		}
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}
};


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////this is a barrier to keep the demons away

class sleepingbag_blue_mung extends sleepingbag_mung {
	override string j_unpackedTent()
	{
		return "sleepingbag_blue_mung_Deployed";
	}
};

class sleepingbag_red_mung extends sleepingbag_mung {
	override string j_unpackedTent()
	{
		return "sleepingbag_red_mung_Deployed";
	}
};

class sleepingbag_green_mung extends sleepingbag_mung {
	override string j_unpackedTent()
	{
		return "sleepingbag_green_mung_Deployed";
	}
};

class sleepingbag_yellow_mung extends sleepingbag_mung {
	override string j_unpackedTent()
	{
		return "sleepingbag_yellow_mung_Deployed";
	}
};

class sleepingbag_colorbase_mung_Deployed extends ItemBase
{
	protected Object			mung_ClutterCutter;

	string j_tent()
	{
		return "sleepingbag_blue_mung";
	}

	void SpawnTheTent(vector position)
	{
		GetGame().CreateObject(this.j_tent(), position, false );
	}

	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
    }

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionPackSleepingBag);
	}

};

class sleepingbag_green_mung_Deployed extends sleepingbag_colorbase_mung_Deployed
{
	override string j_tent()
	{
		return "sleepingbag_green_mung";
	}
};

class sleepingbag_red_mung_Deployed extends sleepingbag_colorbase_mung_Deployed
{
	override string j_tent()
	{
		return "sleepingbag_red_mung";
	}
};

class sleepingbag_blue_mung_Deployed extends sleepingbag_colorbase_mung_Deployed
{
	override string j_tent()
	{
		return "sleepingbag_blue_mung";
	}
};

class sleepingbag_yellow_mung_Deployed extends sleepingbag_colorbase_mung_Deployed
{
	override string j_tent()
	{
		return "sleepingbag_yellow_mung";
	}
};
