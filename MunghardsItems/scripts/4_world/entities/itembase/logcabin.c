class logcabin_kit extends Inventory_Base
{
    ref protected EffectSound                       m_DeployLoopSound;
    protected Object                                logcabin_kit_mung_Deployed1;


    
    void logcabin_kit()
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
                
            logcabin_kit_mung_Deployed1 = GetGame().CreateObject("log_cabin_base", pb.GetLocalProjectionPosition(), false );
            logcabin_kit_mung_Deployed1.SetPosition( position);
            logcabin_kit_mung_Deployed1.SetOrientation( orientation );

            this.Delete();          
        }   
        
        SetIsDeploySound( true );
    }
    
    override bool IsDeployable()
    {
        return true;
    }   
    
    string GetDeploySoundset()
    {
        return "putDown_FenceKit_SoundSet";
    }
    
    string GetLoopDeploySoundset()
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

    vector Get_MyItemPos()
    {
        return "0 0 0";
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

class log_cabin_base extends Inventory_Base
{

    static const string             SEL_BASE         = "stickbase";
    static const string             SEL_STONES       = "stones";
    static const string             SEL_ROOF         = "roof";
    static const string             SEL_FLOOR        = "floor";
    static const string             SEL_WALLS        = "walls";
    static const string             SEL_PLANKS_P     = "planks_p";
    static const string             SEL_STONES_P     = "stones_p";

    bool m_hasstones;
    bool m_hasfloor;
    bool m_haswalls;
    bool m_hasroof;

    bool hasstones()
    {
        return m_hasstones;
    }

    bool hasfloor()
    {
        return m_hasfloor;
    }

    bool haswalls()
    {
        return m_haswalls;
    }

    bool hasroof()
    {
        return m_hasroof;
    }

    bool CanBuild()
    {
        if(HasStuffForBase()||HasStuffForFloor()||HasStuffForWalls()||HasStuffForRoof())
        {
            return true;
        }
    return false;
    }

    private void HideUnhideSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selectionNames);
        int selectionId = selectionNames.Find(selectionName);
        SetSimpleHiddenSelectionState(selectionId, hide);
    }

    override void EEInit()
    {
        super.EEInit();
        InitVisuals();

    }
    bool IsItemAttachedQuantity( typename item_type, float quantity )
    {
        ItemBase item = ItemBase.Cast( GetAttachmentByType( item_type ) );
        
        if ( item.GetQuantity() >= quantity )
        {
            return true;
        }
        
        return false;
    }

    //Has attachments of given type
    bool IsItemTypeAttached( typename item_type )
    {
        if ( GetAttachmentByType( item_type ) )
        {
            return true;
        }
        
        return false;
    }

    bool HasStuffForBase()
    {
        if ( IsItemAttachedQuantity(Stone, 8) )
        {
            return true;
        }
    return false;
    }

    bool HasStuffForFloor()
    {
        if (hasstones())
        {
            if ( IsItemAttachedQuantity(WoodenPlank, 20) )
            {
                return true;
            }
            return false;
        }
        return false;
    }

    bool HasStuffForWalls()
    {
        if (hasfloor())
        {
            if ( IsItemAttachedQuantity(WoodenLog, 2) )
            {
                return true;
            }
            return false;
        }
        return false;
    }

    bool HasStuffForRoof()
    {
        if (haswalls())
        {
            if ( IsItemAttachedQuantity(WoodenPlank, 20) )
            {
                return true;
            }
            return false;
        }
        return false;
    }

    
    void buildstones()
    {
        HideUnhideSelection(SEL_BASE, 0);
        HideUnhideSelection(SEL_STONES, 1);
        m_hasstones = true;
    }
    void buildfloor()
    {
        HideUnhideSelection(SEL_FLOOR, 1);
        m_hasfloor = true;
    }
    void buildwalls()
    {
        HideUnhideSelection(SEL_WALLS, 1);
        m_haswalls = true;
    }
    void buildroof()
    {
        HideUnhideSelection(SEL_ROOF, 1);
        m_hasroof = true;
    }

    void MasterBuilder()
    {
        if(HasStuffForBase() && !hasstones())
        {
            buildstones();
        }
        else if(HasStuffForFloor())
        {
            buildfloor();
        }
        else if(HasStuffForWalls())
        {
            buildwalls();
        }
        else if(HasStuffForRoof())
        {
            buildroof();
        }     
    }

    void InitVisuals()
    {
        HideUnhideSelection(SEL_BASE, 1);
        HideUnhideSelection(SEL_WALLS, 0);
        HideUnhideSelection(SEL_STONES, 0);
        HideUnhideSelection(SEL_ROOF, 0);
        HideUnhideSelection(SEL_FLOOR, 0);
        HideUnhideSelection(SEL_PLANKS_P, 0);
        HideUnhideSelection(SEL_STONES_P, 0);        
    }
    


    override void EEItemAttached( EntityAI item, string slot_name )
    {
            super.EEItemAttached(item, slot_name);
            if(IsItemTypeAttached(Stone))
            {
                HideUnhideSelection(SEL_STONES_P, 1); 
            }
            else if(IsItemTypeAttached(WoodenPlank))
            {
                HideUnhideSelection(SEL_PLANKS_P, 1); 
            }
    }
    override void EEItemDetached( EntityAI item, string slot_name )
    {
            super.EEItemDetached(item, slot_name);
            if ( this.IsItemAttachedQuantity(Stone, 0))
            {
                HideUnhideSelection(SEL_STONES_P, 0); 
            }
            else if ( this.IsItemAttachedQuantity(WoodenPlank, 0))
            {
                HideUnhideSelection(SEL_PLANKS_P, 0); 
            }           
    }
    
    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) 
            {
                return false;
            }        
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
    override void SetActions()
    {
        super.SetActions();
        
        AddAction(ActionBuildMungCabin);
    }
};

class Land_log_cabin_model extends Inventory_Base
{

    override bool IsInventoryVisible()
    {
        return true;
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
    void Destroy_logcabin()
    {
        GetGame().ObjectDelete( this );
    }

    override void SetActions()
    {
        super.SetActions();
    }
};

