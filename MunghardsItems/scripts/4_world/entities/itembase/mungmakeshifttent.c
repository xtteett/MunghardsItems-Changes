class makeshifttent_mung extends ItemBase
{	
	ref protected EffectSound 						m_DeployLoopSound;
	protected Object			makeshifttent_mung_Deployed1;
	
	override bool IsBasebuildingKit()
	{
		return true;
	}

	void makeshifttent_mung()
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
			//vector position = player_base.GetLocalProjectionPosition();
			//vector orientation = player_base.GetLocalProjectionOrientation();

			makeshifttent_mung_Deployed makeshifttent_mung_Deployed1 = makeshifttent_mung_Deployed.Cast( GetGame().CreateObjectEx( "makeshifttent_mung_Deployed", GetPosition(), ECE_PLACE_ON_SURFACE ) );	
			makeshifttent_mung_Deployed1.SetPosition( position);
			makeshifttent_mung_Deployed1.SetOrientation( orientation );

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

class makeshifttent_mung_Deployed extends ItemBase
{

	// const float PARAM_HEAT_RADIUS 					= 2.0;		//! radius in which objects are heated by fire
	// const float PARAM_HEAT_THROUGH_AIR_COEF			= 0.035;	//! value for calculation of heat transfered from fireplace through air to player (environment)

	override void EEInit()
	{
		super.EEInit();
		// TransferHeatToNearPlayers();
	}
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
 //    protected void TransferHeatToNearPlayers()
	// {
	// 	float distance;

	// 	ref array<Object> nearest_objects = new array<Object>;
	// 	ref array<CargoBase> proxy_cargos = new array<CargoBase>;

	// 	GetGame().GetObjectsAtPosition ( GetPosition(), PARAM_HEAT_RADIUS, nearest_objects, proxy_cargos ); 

	// 	for ( int i = 0; i < nearest_objects.Count(); i++ )
	// 	{
	// 		Object nearest_object = nearest_objects.Get(i);
			
	// 		//! heat transfer to player
	// 		if ( nearest_object.IsInherited( PlayerBase ) )
	// 		{
	// 			PlayerBase player = PlayerBase.Cast( nearest_object );
	// 			distance = vector.Distance( player.GetPosition(), GetPosition() );
	// 			distance = Math.Max( distance, 0.1 );	//min distance cannot be 0 (division by zero)
				
	// 			//! heat transfer through air to player ( anv temperature )
	// 			float temperature = GetTemperature() * ( PARAM_HEAT_THROUGH_AIR_COEF / distance );
	// 			player.AddToEnvironmentTemperature( temperature );
	// 		}
	// 		//! heat transfer to items (no in player possession)
	// 		else if ( nearest_object != this && nearest_object.IsInherited( ItemBase ) && nearest_object.GetParent() == null )
	// 		{
	// 			ItemBase item = ItemBase.Cast( nearest_object );
	// 			float wetness = item.GetWet();

	// 			//! drying of items around the fireplace (based on distance)
	// 			if ( wetness > 0 )
	// 			{
	// 				distance = vector.Distance( item.GetPosition(), GetPosition() );
	// 				distance = Math.Max( distance, 0.1 );	//min distance cannot be 0 (division by zero)
					
	// 				wetness = wetness * ( PARAM_HEAT_THROUGH_AIR_COEF / distance );
	// 				wetness = Math.Clamp( wetness, item.GetWetMin(), item.GetWetMax() );
	// 				item.AddWet( -wetness );
	// 			}
	// 		}
	// 	}
	// }
}

class makeshifttent2_mung extends ItemBase
{
	ref protected EffectSound 						m_DeployLoopSound;
	protected Object			makeshifttent_mung_Deployed1;
	
	override bool IsBasebuildingKit()
	{
		return true;
	}

	void makeshifttent_mung()
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
			//vector position = player_base.GetLocalProjectionPosition();
			//vector orientation = player_base.GetLocalProjectionOrientation();
				
			makeshifttent_mung_Deployed1 = GetGame().CreateObjectEx("makeshifttent2_mung_Deployed", GetPosition(), ECE_PLACE_ON_SURFACE );
			makeshifttent_mung_Deployed1.SetPosition( position);
			makeshifttent_mung_Deployed1.SetOrientation( orientation );

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
};

class makeshifttent2_mung_Deployed extends ItemBase
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
};