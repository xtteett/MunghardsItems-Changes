modded class Hologram
{
	

	override void UpdateHologram( float timeslice )
    {
        super.UpdateHologram(timeslice);

        ballgrill_mung container = ballgrill_mung.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
        if(container)
        {
            vector containerPos = GetProjectionEntityPosition( m_Player ) + container.Get_MyItemPos();
            SetProjectionPosition( containerPos );
            SetProjectionOrientation( AlignProjectionOnTerrain( timeslice ) );        
            m_Projection.OnHologramBeingPlaced( m_Player );
            return;
        }
    }  
	override string ProjectionBasedOnParent()
	{
		ItemBase item_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );

		 if ( item_in_hands.IsInherited( sleepingbag_green_mung ))
		{
			return "sleepingbag_green_mung_Deployed";
		}

		 if ( item_in_hands.IsInherited( sleepingbag_blue_mung ))
		{
			return "sleepingbag_blue_mung_Deployed";
		}

		if ( item_in_hands.IsInherited( sleepingbag_red_mung ))
		{
			return "sleepingbag_red_mung_Deployed";
		}

		if ( item_in_hands.IsInherited( sleepingbag_yellow_mung ))
		{
			return "sleepingbag_yellow_mung_Deployed";
		}

		 if ( item_in_hands.IsInherited( makeshifttent_mung ))
		{
			return "makeshifttent_mung_Deployed";
		}

 		if ( item_in_hands.IsInherited( makeshifttent2_mung ))
		{
			return "makeshifttent2_mung_Deployed";
		}
		 if ( item_in_hands.IsInherited( gunwall_kit_mung ))
		{
			return "gunwalldisplay_mung";
		}

		 if ( item_in_hands.IsInherited( gunwall_metal_kit_mung ))
		{
			return "gunwalldisplay_metal_mung";
		}

		 if ( item_in_hands.IsInherited( logcabin_kit ))
		{
			return "log_cabin_base";
		}

		return super.ProjectionBasedOnParent();
	}

	// override EntityAI PlaceEntity( EntityAI entity_for_placing )
	// {	
	// 	ItemBase item_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
	
	// 	if ( item_in_hands && item_in_hands.CanMakeGardenplot() )
	// 	{
	// 		Class.CastTo(entity_for_placing, GetGame().CreateObject( m_Projection.GetType(), m_Projection.GetPosition() ));
	// 	}
			
	// 	if( entity_for_placing.CanAffectPathgraph() )
	// 	{		
	// 		entity_for_placing.SetAffectPathgraph( true, false );
			
	// 		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, entity_for_placing);
	// 	}
		
	// 	return entity_for_placing;
	// }		

	override void EvaluateCollision(ItemBase action_item = null)
	{	
		ItemBase item_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
		
		if(item_in_hands)
		{
			 if ( item_in_hands.IsInherited( sleepingbag_green_mung ))
			{
				SetIsColliding(false);
				return;
			}
			 if ( item_in_hands.IsInherited( sleepingbag_red_mung ))
			{
				SetIsColliding(false);
				return;
			}
			 if ( item_in_hands.IsInherited( sleepingbag_blue_mung ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( sleepingbag_yellow_mung ))
			{
				SetIsColliding(false);
				return;
			}
			 if ( item_in_hands.IsInherited( makeshifttent_mung ))
			{
				SetIsColliding(false);
				return;
			}

			 if ( item_in_hands.IsInherited( makeshifttent2_mung ))
			{
				SetIsColliding(false);
				return;
			}
			
			 if ( item_in_hands.IsInherited( gunwall_kit_mung ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( gunwall_metal_kit_mung ))
			{
				SetIsColliding(false);
				return;
			}

			if ( item_in_hands.IsInherited( logcabin_kit ))
			{
				SetIsColliding(false);
				return;
			}
		}
		super.EvaluateCollision(action_item);
	}
};