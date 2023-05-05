class gunwall_kit_mung extends ItemBase
{

	override bool IsBasebuildingKit()
	{
		return true;
	}
	ref protected EffectSound 						m_DeployLoopSound;
	protected Object			gunwalldisplay_mung_Deployed1;


	
	void gunwall_kit_mung()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	// override void EEInit()
	// {
	// 	super.EEInit();
	// }
	

	// override void OnItemLocationChanged( EntityAI old_owner, EntityAI new_owner ) 
	// {
	// 	super.OnItemLocationChanged( old_owner, new_owner );
	// }		

	// override void OnVariablesSynchronized()
	// {
	// 	super.OnVariablesSynchronized();
		
	// 	if ( IsDeploySound() )
	// 	{
	// 		PlayDeploySound();
	// 	}
				
	// 	if ( CanPlayDeployLoopSound() )
	// 	{
	// 		PlayDeployLoopSound();
	// 	}
					
	// 	if ( m_DeployLoopSound && !CanPlayDeployLoopSound() )
	// 	{
	// 		StopDeployLoopSound();
	// 	}
	// }
	
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
			
			gunwalldisplay_mung gunwalldisplay_mung_Deployed1 = gunwalldisplay_mung.Cast( GetGame().CreateObjectEx( "gunwalldisplay_mung", GetPosition(), ECE_PLACE_ON_SURFACE ) );	
			gunwalldisplay_mung_Deployed1.SetPosition( position);
			gunwalldisplay_mung_Deployed1.SetOrientation( orientation );

			this.Delete();
			// HideAllSelections();			
		}	
		
		SetIsDeploySound( true );
	}
	
	override bool IsDeployable()
	{
		return true;
	}	
	
	override string GetDeploySoundset()
	{
		return "putDown_FenceKit_SoundSet";
	}
	
	override string GetLoopDeploySoundset()
	{
		return "BarbedWire_Deploy_loop_SoundSet";
	}
	
	void PlayDeployLoopSound()
	{		
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{		
			m_DeployLoopSound = SEffectManager.PlaySound( GetLoopDeploySoundset(), GetPosition() );
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
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////this is a barrier to keep the demons away



class gunwalldisplay_mung extends ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        if( !super.CanPutIntoHands( parent ) )
        {
            return false;
        }
        if ( GetNumberOfItems() == 0 )
        {
            return false;
        }
        return false;

    }
    void Destroy_gunwall()
	{
		GetGame().ObjectDelete( this );
	}

	override void SetActions()
	{
		super.SetActions();
	}
}

