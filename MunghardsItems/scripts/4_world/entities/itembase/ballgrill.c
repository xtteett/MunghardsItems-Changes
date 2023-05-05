class ballgrill_mung extends ItemBase
{
	protected const string FLAME_BUTANE_ON 			= "dz\\gear\\cooking\\data\\flame_butane_ca.paa";
	protected const string FLAME_BUTANE_OFF 		= "";
	typename ATTACHMENT_COOKING_POT 				= Pot;
	
	//fire

	protected FireplaceLight m_Light; // Light entity
	protected Particle m_ParticleFireStart;
	protected Particle m_ParticleSmoke;
	protected int PARTICLE_OVEN_FIRE 			= ParticleList.BALLGRILLSPARKS;
	protected int PARTICLE_FIRE_START 			= ParticleList.BALLGRILLSPARKS;
	protected int PARTICLE_SMOKE 			= ParticleList.CAMP_SMALL_SMOKE;
	//cooking

	const float PARAM_SMALL_FIRE_TEMPERATURE 		= 150;		//! maximum fireplace temperature of a small fire (degree Celsius)
	const float PARAM_NORMAL_FIRE_TEMPERATURE 		= 1000;		//! maximum fireplace temperature of a normal fire (degree Celsius)
	const float PARAM_MIN_FIRE_TEMPERATURE 			= 40;		//! minimum fireplace temperature under which the fireplace is inactive (degree Celsius)
	const float	PARAM_TEMPERATURE_INCREASE 			= 30;		//! how much will temperature increase when fireplace is burning (degree Celsius)
	const float	PARAM_TEMPERATURE_DECREASE 			= 10;		//! how much will temperature decrease when fireplace is cooling (degree Celsius)
	const float	PARAM_MAX_WET_TO_IGNITE 			= 0.2;		//! maximum wetness value when the fireplace can be ignited
	const float PARAM_MIN_TEMP_TO_REIGNITE 			= 100;		//! minimum fireplace temperature under which the fireplace can be reignited using air only (degree Celsius)
	const float	PARAM_IGNITE_RAIN_THRESHOLD 		= 0.05;		//! maximum rain value when the fireplace can be ignited
	const float	PARAM_BURN_WET_THRESHOLD 			= 0.40;		//! maximum wetness value when the fireplace is able to burn
	const float	PARAM_WET_INCREASE_COEF 			= 0.02;		//! value for calculating of  wetness that fireplace gain when raining
	const float	PARAM_WET_HEATING_DECREASE_COEF 	= 0.01;		//! value for calculating wetness loss during heating process
	const float	PARAM_WET_COOLING_DECREASE_COEF 	= 0.002;	//! value for calculating wetness loss during cooling process
	const float	PARAM_FIRE_CONSUM_RATE_AMOUNT		= 1.0;		//! base value of fire consumption rate (how many base energy will be spent on each update)
	const float	PARAM_BURN_DAMAGE_COEF				= 0.05;		//! value for calculating damage on items located in fireplace cargo
	const float	PARAM_ITEM_HEAT_TEMP_INCREASE_COEF	= 15;		//! value for calculating temperature increase on each heat update interval (degree Celsius)
	const float	PARAM_ITEM_HEAT_MIN_TEMP			= 40;		//! minimum temperature for items that can be heated in fireplace cargo or as attachments (degree Celsius)
	const float PARAM_MAX_ITEM_HEAT_TEMP_INCREASE	= 200;		//! maximum value of temperature of items in fireplace when heating (degree Celsius)
	const float PARAM_HEAT_RADIUS 					= 3.0;		//! radius in which objects are heated by fire
	const float PARAM_HEAT_THROUGH_AIR_COEF			= 0.035;	//! value for calculation of heat transfered from fireplace through air to player (environment)


	protected const float PARAM_COOKING_TEMP_THRESHOLD			= 95;		//temperature threshold for starting coooking process (degree Celsius)
	protected const float PARAM_COOKING_EQUIP_TEMP_INCREASE		= 1;		//how much will temperature increase when attached on burning fireplace (degree Celsius)
	protected const float PARAM_COOKING_EQUIP_MAX_TEMP			= 200;		//maximum temperature of attached cooking equipment (degree Celsius)
	protected const float PARAM_COOKING_TIME_INC_COEF			= 100;		//cooking time increase coeficient, can be used when balancing how fast a food can be cooked

	//
	ref Cooking m_CookingProcess;
	ItemBase m_CookingEquipment;
	
	//sound
	const string SOUND_BURNING 		= "portablegasstove_burn_SoundSet";
	const string SOUND_TURN_ON		= "portablegasstove_turn_on_SoundSet";
	const string SOUND_TURN_OFF		= "portablegasstove_turn_off_SoundSet";
	
	protected EffectSound m_SoundBurningLoop;
	protected EffectSound m_SoundTurnOn;
	protected EffectSound m_SoundTurnOff;
	

	//effects

    override bool kv5slut()
    {
    return true;
    }

	protected bool StopParticle( out Particle particle )
	{
		if ( particle && GetGame() && ( !GetGame().IsMultiplayer() || GetGame().IsClient() ) )
		{
			particle.Stop();
			particle = NULL;
			
			return true;
		}
		
		return false;
	}

	protected bool PlayParticle( out Particle particle, int particle_type, vector local_pos )
	{
		if ( !particle && GetGame() && ( !GetGame().IsMultiplayer() || GetGame().IsClient() ) )
		{
			particle = Particle.PlayOnObject( particle_type, this, local_pos );
			
			return true;
		}
		
		return false;
	}
	
	
	//start fire
	protected void ParticleFireStartStart()
	{	

		PlayParticle( m_ParticleFireStart, PARTICLE_OVEN_FIRE, GetFireEffectPosition() );
		PlayParticle( m_ParticleSmoke, PARTICLE_SMOKE, GetFireEffectPosition() );
	}
	
	protected void ParticleFireStartStop()
	{
		StopParticle( m_ParticleFireStart );
		StopParticle( m_ParticleSmoke );
	}

	protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.73, 0 );
	}
	
	protected vector GetSmokeEffectPosition()
	{
		return Vector( 0, 0.73, 0 );
	}

	//cooking equipment
	ItemBase GetCookingEquipment()
	{
		return m_CookingEquipment;
	}
	
	void SetCookingEquipment( ItemBase equipment )
	{
		m_CookingEquipment = equipment;
	}
	
	void ClearCookingEquipment()
	{
		SetCookingEquipment( NULL );
	}

	//Destroy
	void DestroyFireplace()
	{
		//delete object
		GetGame().ObjectDelete( this );
	}	
	
	//--- ATTACHMENTS
	override void EEItemAttached ( EntityAI item, string slot_name ) 
	{
		super.EEItemAttached( item, slot_name );
		
		//cookware
		if ( item.Type() == ATTACHMENT_COOKING_POT )
		{
			ItemBase item_base = ItemBase.Cast( item );
			SetCookingEquipment( item_base );
		}
	}

	FireplaceLight GetLightEntity()
	{
		return m_Light;
	}
	
	void SetLightEntity( FireplaceLight light )
	{
		m_Light = light;
		light.SetRadiusTo( 5.5 );
	}

	override void EEItemDetached ( EntityAI item, string slot_name ) 
	{
		super.EEItemDetached( item, slot_name );
		
		//cookware
		if ( item.Type() == ATTACHMENT_COOKING_POT )
		{
			ClearCookingEquipment();
			
			//stop steam particle
			RemoveCookingAudioVisuals();			
		}	
	}
	
	//--- POWER EVENTS
	override void OnSwitchOn()
	{
		super.OnSwitchOn();
		
		//sound (client only)
		SoundTurnOn();
		//effects
		ParticleFireStartStart();

		if ( !GetLightEntity()  &&  ( GetGame().IsClient() || !GetGame().IsMultiplayer() ) )
			{
				SetLightEntity( FireplaceLight.Cast( ScriptedLightBase.CreateLight(FireplaceLight, GetPosition(), 3) ) );
				GetLightEntity().AttachOnMemoryPoint(this, "light");
				
			}
	}

	override void OnSwitchOff()
	{
		super.OnSwitchOff();
		
		//sound (client only)
		SoundTurnOff();
		//effects
		ParticleFireStartStop();
		if (GetLightEntity())
			{
				GetLightEntity().FadeOut();
			}
	}
	
	override void OnWorkStart()
	{
		//refresh visual
		SetObjectTexture( 0, FLAME_BUTANE_ON );
		
		//sound (client only)
		SoundBurningStart();
	}

	override void OnWorkStop()
	{
		//refresh visual
		SetObjectTexture( 0, FLAME_BUTANE_OFF );
		
		//stop steam particle
		RemoveCookingAudioVisuals();
		
		//sound (client only)
		SoundBurningStop();
	}
	
	//on update 
	override void OnWork( float consumed_energy )
	{

        BurnItemsInFireplace();
     

		//manage cooking equipment
		if ( GetCookingEquipment() )
		{
			if ( GetGame() && GetGame().IsServer() )
			{
				float cook_equip_temp = GetCookingEquipment().GetTemperature();
				
				//start cooking
				if ( cook_equip_temp >= PARAM_COOKING_TEMP_THRESHOLD )
				{
					CookWithEquipment();
				}				
				
				//set temperature to cooking equipment
				cook_equip_temp = cook_equip_temp + PARAM_COOKING_EQUIP_TEMP_INCREASE;
				cook_equip_temp = Math.Clamp ( cook_equip_temp, 0, PARAM_COOKING_EQUIP_MAX_TEMP );
				GetCookingEquipment().SetTemperature( cook_equip_temp );
			}
		}
	}
	
	void CookWithEquipment()
	{
		if ( m_CookingProcess == NULL )
		{
			m_CookingProcess = new Cooking();
		}
		
		m_CookingProcess.CookWithEquipment ( GetCookingEquipment(), PARAM_COOKING_TIME_INC_COEF );
	}

	//================================================================
	// PARTICLES
	//================================================================	
	//cooking equipment steam
	protected void RemoveCookingAudioVisuals()
	{
		if ( GetCookingEquipment() )
		{
			Bottle_Base cooking_pot = Bottle_Base.Cast( GetCookingEquipment() );
			cooking_pot.RemoveAudioVisualsOnClient();
		}
	}	
	
	//================================================================
	// SOUNDS
	//================================================================
	protected void SoundBurningStart()
	{
		PlaySoundSetLoop( m_SoundBurningLoop, SOUND_BURNING, 1, 1 );
	}
	
	protected void SoundBurningStop()
	{
		StopSoundSet( m_SoundBurningLoop );
	}	

	protected void SoundTurnOn()
	{
		PlaySoundSet( m_SoundTurnOn, SOUND_TURN_ON, 0.1, 0.1 );
	}
	
	protected void SoundTurnOff()
	{
		PlaySoundSet( m_SoundTurnOff, SOUND_TURN_OFF, 0.1, 0.1 );
	}		
		
	//================================================================
	// CONDITIONS
	//================================================================
	//this into/outo parent.Cargo
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}
		if ( GetCompEM().IsSwitchedOn() )
		{
			return false;
		}
		
		return true;
	}

	override bool CanRemoveFromCargo( EntityAI parent )
	{
		return true;
	}
	
	//hands
	override bool CanPutIntoHands( EntityAI parent )
	{
		if( !super.CanPutIntoHands( parent ) )
		{
			return false;
		}
		if ( GetCompEM().IsSwitchedOn() )
		{
			return false;
		}
		
		return true;
	}	
	

	protected void BurnItemsInFireplace()
	{
		//Cargo
		CargoBase cargo = GetInventory().GetCargo();
		for ( int i = 0; i < cargo.GetItemCount(); i++ )
		{
			ItemBase item = ItemBase.Cast( cargo.GetItem ( i ) );
			
			//set damage
			AddDamageToItemByFire( item, false );

			if ( ( item.GetHealth("", "Health") <= 0 ) && !( item.IsKindOf( "Grenade_Base" ) ) )
			{
				// item.Delete();
			}
			
			//add temperature
			AddTemperatureToItemByFire( item );
			
			//remove wetness
			AddWetnessToItem( item, -PARAM_WET_HEATING_DECREASE_COEF );
		}
		
		//Fuel (only) attachments
		for ( int j = 0; j < GetInventory().AttachmentCount(); ++j )
		{
			ItemBase attachment = ItemBase.Cast( GetInventory().GetAttachmentFromIndex( j ) );
			
			//set damage (fuel items only)
			
			//add temperature
			AddTemperatureToItemByFire( attachment );
		
			//remove wetness
			AddWetnessToItem( attachment, -PARAM_WET_HEATING_DECREASE_COEF );		
		}
	}
    protected void AddTemperatureToItemByFire( ItemBase item )
	{
		if (item && item.GetTemperatureMax() >= PARAM_ITEM_HEAT_MIN_TEMP )
		{
			float temperature = item.GetTemperature() + PARAM_ITEM_HEAT_TEMP_INCREASE_COEF;
			temperature = Math.Clamp ( temperature, PARAM_ITEM_HEAT_MIN_TEMP, PARAM_MAX_ITEM_HEAT_TEMP_INCREASE );
			item.SetTemperature( temperature );
		}
		if (item && item.GetTemperature() >= 100  &&  item.HasFoodStage() == true)
		{
			Edible_Base edible_item = Edible_Base.Cast( item );
			if (edible_item && edible_item.GetFoodStageType() == FoodStageType.RAW)
			{
				edible_item.ChangeFoodStage( FoodStageType.BAKED );
				edible_item.RemoveAllAgents();
			}
		}
	}

	// void fierybutthole( ItemBase item )
	// {
		
	// }

	protected void AddDamageToItemByFire( ItemBase item, bool can_be_ruined )
	{
		//if item can be cooked, burn it
		if ( item.CanBeCooked() )
		{
		// Edible_Base edible_item = Edible_Base.Cast( item );
		// edible_item.ChangeFoodStage( FoodStageType.BURNED );
		// edible_item.RemoveAllAgents();
			// GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater( this.fierybutthole, 1000, false );
		}
		//else add damage (max to BADLY_DAMAGED state)
		else
		{
			float damage_amount = PARAM_BURN_DAMAGE_COEF * 100;
			float min_health;
			
			if ( !can_be_ruined )
			{
				min_health = InjuryHandlerThresholds.RUINED * 100;
			}
				
			if ( item.GetHealth() >= min_health + damage_amount )
			{
				item.DecreaseHealth( damage_amount, false );
			}	
		}
	}
	protected void AddWetnessToItem( ItemBase item, float amount )
	{
		if (item)
		{
			float wetness = item.GetWet();
			wetness = wetness + amount;
			wetness = Math.Clamp ( wetness, 0, 1 );		//wetness <0-1>
			item.SetWet( wetness );
		}
	}
	
	//add wetness on fireplace
	void AddWetnessToFireplace( float amount )
	{
		//add wetness
		float wetness = GetWet();
		wetness = wetness + amount;
		wetness = Math.Clamp ( wetness, 0, 1 );		//wetness <0-1>
		SetWet( wetness );
		
		//decrease temperature
		if ( amount > 0 )
		{
			float temperature = GetTemperature();
			temperature = temperature * ( 1 - ( wetness * 0.5 ) );
			temperature = Math.Clamp( temperature, PARAM_MIN_FIRE_TEMPERATURE, PARAM_NORMAL_FIRE_TEMPERATURE );
			SetTemperature( temperature );
		}
	}	
	//================================================================
	// ITEM-TO-ITEM FIRE DISTRIBUTION
	//================================================================
	
	override bool IsIgnited()
	{
		return GetCompEM().IsWorking();
	}
	
	override bool CanIgniteItem(EntityAI ignite_target = NULL)
	{
		return GetCompEM().IsWorking();
	}

	vector Get_MyItemPos()
    {
        return "0 0.65 0";
    }

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTurnOnWhileOnGround);
		AddAction(ActionTurnOffWhileOnGround);
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
};