class mx991_mung extends ItemBase
{

	FlashlightLight m_Light;

	static int		REFLECTOR_ID = 1;
	static int		GLASS_ID = 2;


	static string 	GLASS_ON = "#(argb,8,8,3)color(0,0,0,0.1,CO)";
	static string 	GLASS_OFF = "#(argb,8,8,3)color(0,0,0,0.9,CO)";

	override void OnWorkStart()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // Client side
		{
			m_Light = FlashlightLight.Cast(  ScriptedLightBase.CreateLight(FlashlightLight, "0 0 0", 0.08)  ); // Position is zero because light is attached on parent immediately.
			m_Light.AttachOnMemoryPoint(this, "beamStart", "beamEnd");
		}
		
		SetObjectTexture(GLASS_ID, GLASS_ON);
	}
	
	override void OnWork( float consumed_energy )
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // Client side
		{
			Battery9V battery = Battery9V.Cast( GetCompEM().GetEnergySource() );
			
			if (battery  &&  m_Light)
			{
				float efficiency = battery.GetEfficiency0To1();
				
				if ( efficiency < 1 )
				{
					m_Light.SetIntensity( efficiency, GetCompEM().GetUpdateInterval() );
				}
				else
				{
					m_Light.SetIntensity( 1, 0 );
				}
			}
		}
	}
	
	override void OnWorkStop()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // Client side
		{
			if (m_Light)
				m_Light.FadeOut();
			
			m_Light = NULL;
		}
		
		SetObjectTexture(GLASS_ID, GLASS_OFF);
	}
	
	// Inventory manipulation
	override void OnInventoryExit(Man player)
	{
		super.OnInventoryExit(player);
		
		if ( GetCompEM().IsWorking() )
		{
			if (player)
			{
				vector ori_rotate = player.GetOrientation();
				ori_rotate = ori_rotate + Vector(90,0,0);
				SetOrientation(ori_rotate);
			}
		}
	}


	override void OnWasAttached( EntityAI parent, int slot_id ) 
	{ 

		vector ori_rotate = Vector(50,90,0);
		SetOrientation(ori_rotate);
		
	}
		
	// !Called on CHILD when it's detached from parent.
	override void OnWasDetached( EntityAI parent, int slot_id ) 
	{ 

		vector ori_rotate = Vector(0,-90,0);
		SetOrientation(ori_rotate);
		
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
	}
};