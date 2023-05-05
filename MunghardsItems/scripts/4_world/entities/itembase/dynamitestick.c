class dynamitestick_Mung extends Grenade_Base
{
	Particle 				m_FireParticle;
	protected bool m_IsBurning 	= false; 
	protected SoundOnVehicle		m_LoopSoundEntity;
	static protected const string	BURNING_SOUND = "roadflareLoop";

	void dynamitestick_Mung()
	{
		SetAmmoType("M67Grenade_Ammo");
		SetFuseDelay(20);
		SetParticleExplosion(ParticleList.M67);
	}

	void ~dynamitestick_Mung() 
	{

	}

 	bool IsBurning()
	{
		return m_IsBurning;
	}

	override bool HasFlammableMaterial()
	{
		return true;
	}
	
	override bool CanBeIgnitedBy( EntityAI igniter = NULL )
	{
			return true;
	}
	
	override bool CanIgniteItem( EntityAI ignite_target = NULL )
	{
		if ( IsBurning() )
		{
			return true;
		}
		
		return false;
	}
	
	override bool IsIgnited()
	{
		return IsBurning();
	}
	
	override void OnIgnitedTarget( EntityAI ignited_item )
	{
	}
	
	override void OnIgnitedThis( EntityAI fire_source )
	{	
		Activate();
		Sparks();
		m_LoopSoundEntity = PlaySoundLoop(BURNING_SOUND, 30);
	}
	
	void Sparks()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() && !m_FireParticle )
			{
			m_FireParticle = Particle.PlayOnObject(ParticleList.DYNAMITESPARKS, this, "0.048 0.211 0", "0 0 0", true);
			}
	}

	override bool IsThisIgnitionSuccessful( EntityAI item_source = NULL )
	{
		return true;	
	}

	override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
		
		DestroyParticle(m_ParticleExplosion);
		DestroyParticle(m_FireParticle);
	}

	override void SetActions()
	{
		AddAction(ActionLightItemOnFire);
	}
};