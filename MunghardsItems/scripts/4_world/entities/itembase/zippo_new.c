class Zippo_mung extends ItemBase
{
	TorchLight				m_Light;
	Particle 				m_FireParticle;
	vector 					m_ParticleLocalPos = Vector(0, 0.04, 0);
	private SoundOnVehicle	m_LoopSoundEntity;

	private bool 			IsWorking;
	bool isopen = false;
	protected ref OpenableBehaviour m_Openable;


	
	void Zippo_mung()
	{
		m_Openable = new OpenableBehaviour(false);
		RegisterNetSyncVariableBool("m_Openable.m_IsOpened");
		UpdateVisualState();
		m_Light.m_TorchRadius = 6;
	}
	override bool IsOpen()
	{
		return m_Openable.IsOpened();
	}
	
	
	protected void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("cap", 1.0);
			SetAnimationPhase("cap2", 1.0);
		}
		else
		{
			SetAnimationPhase("cap", 0.0);
			SetAnimationPhase("cap2", 0.0);
		}
	}
	
	 override void OnVariablesSynchronized()
   	 {
   	     super.OnVariablesSynchronized();
	
  	      UpdateVisualState();
  	 }	
	
	void OnSwitchOn()
	{
		super.OnSwitchOn();
		m_Openable.Open();
		SetSynchDirty();
		UpdateVisualState();
		OnWork();
		IsWorking = true;
		
	}
	void OnSwitchOff()
	{
		super.OnSwitchOff();
		if (m_FireParticle)
		{
			m_FireParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.01);
		}
		StopAllParticles();
		m_Openable.Close();
		SetSynchDirty();
		UpdateVisualState();
		OnWorkStop();
		IsWorking = false;

	
	}
	
	void UpdateLight()
	{
		if (!m_Light && this)
		{
			m_Light = TorchLight.Cast( ScriptedLightBase.CreateLight( TorchLight, Vector(0,0,0), 1 ) );
			m_Light.AttachOnObject(this, m_ParticleLocalPos);
			m_Light.SetFadeOutTime(0.1);
			m_Light.m_TorchRadius = 6;
		}
		if (m_FireParticle)
		{
			Object direct_particle = m_FireParticle.GetDirectParticleEffect();
			
			if (direct_particle  &&  direct_particle != m_Light.GetAttachmentParent())
			{
				m_Light.AttachOnObject(direct_particle, Vector(0,0,0));
			}	
		}
	}
	void OnWork()
	{
		// Particle scaling by fuel
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			UpdateLight();
			if (!m_FireParticle)
			
				//vector worldFlamePos = this.ModelToWorld( GetMemoryPointPos("Flame") );
				m_FireParticle = Particle.PlayOnObject(ParticleList.ZIPPOFLAME, this, m_ParticleLocalPos + "0 0.07 0", Vector(0,0,0), true);
				m_FireParticle.SetWiggle(3,0.1);
			
				//m_FireParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.01);
		}
	}
	override void OnWorkStop()
	{
		if (m_Light)
			m_Light.FadeOut();
		
		
		StopAllParticles();
	}
	override bool IsIgnited()
	{
		return GetCompEM().IsWorking();
	}
	bool CanPutInCargo()
	{
		// Don't let players burn their pockets!
		return !GetCompEM().IsWorking();
		//return !IsWorking;
	}
	void StopAllParticles()
	{
		if (m_FireParticle)
		{
			
			m_FireParticle.Stop();
		}
	}
	override bool CanIgniteItem( EntityAI ignite_target = NULL )
	{
		return true;
	}
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
		AddAction(ActionLightItemOnFire);
	}
};
