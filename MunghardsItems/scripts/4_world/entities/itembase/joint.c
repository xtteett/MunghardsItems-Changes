class joint_mung : Clothing
{
	Particle 				m_SmokeParticle;
	bool attached = false;
	vector 					m_ParticleLocalPos = Vector(0.1, 1.52, 0.25);
		
	
	void joint_mung()
	{	
		init();	
	}

	void init()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // client side
			{
					m_SmokeParticle = Particle.PlayOnObject(ParticleList.CAMP_NORMAL_SMOKE, this, m_ParticleLocalPos, Vector(0,0,0), true);
					m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.01);
					m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.03);
			}
		//smokeupdate();				
	}

	void ~joint_mung()
	{
		StopAllParticles();
	}
/*
	void smokeupdate()
	{	
		if ( MemoryPointExists("smokestart") && !attached )
			{
				if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // client side
				{
						vector smokeparticlepos = this.ModelToWorld(GetMemoryPointPos("smokestart"));
						m_SmokeParticle = Particle.PlayOnObject(ParticleList.CAMP_NORMAL_SMOKE, this, smokeparticlepos, Vector(0,0,0), true);
						m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.01);
						m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.03);
						
				}
				
			}
			else
				{
				m_SmokeParticle = Particle.PlayOnObject(ParticleList.CAMP_NORMAL_SMOKE, this,"0 1.53 0", Vector(0,0,0), true);
				m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.01);
				m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.03);
				}
			
	}

	override void OnWasAttached(EntityAI parent, int slot_id)
	{
		attached = true;
		PlayerBase player;
		Class.CastTo(player, parent.GetHierarchyRootPlayer());
		//bool selected = player.IsPlayerSelected();//this is 0 upon player's connection to server

		if ( (GetGame().IsClient() || !GetGame().IsMultiplayer()) && player && player.IsControlledPlayer() && slot_id == InventorySlots.MASK )
		{
			smokeupdate();
		}
	}
	override void OnWasDetached( EntityAI parent, int slot_id )
	{
		attached = false;
		PlayerBase player;
		Class.CastTo(player, parent.GetHierarchyRootPlayer());
		//bool selected = player.IsPlayerSelected();//this is 0 upon player's connection to server

		if ( (GetGame().IsClient() || !GetGame().IsMultiplayer()) && player && player.IsControlledPlayer() && slot_id == InventorySlots.MASK )
		{
			smokeupdate();
		}
	}
	*/

	void StopAllParticles()
	{
		if (m_SmokeParticle)
		{
			m_SmokeParticle.Stop();
		}
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSmoke);
	}	
}