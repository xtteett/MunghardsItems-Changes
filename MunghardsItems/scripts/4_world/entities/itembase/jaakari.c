class jaakari_Colorbase_mung extends Clothing
{
    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}    
        
        if (!this.IsEmpty())
        {
            return false;
        }
        
        return true;
    }
}