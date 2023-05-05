modded class Environment
{
	override void Init( PlayerBase pPlayer )
	{
		super.Init( pPlayer );

		if ( m_BodyParts.Find( InventorySlots.ARMBAND ) == -1) 
			m_BodyParts.Insert( InventorySlots.ARMBAND );
	}
}