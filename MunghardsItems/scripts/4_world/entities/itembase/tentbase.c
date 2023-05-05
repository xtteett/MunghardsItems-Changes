modded class TentBase extends ItemBase
{

bool CanPutAsAttachment( EntityAI parent )
	{
		if ( GetState() == PITCHED )
		{ 
		return false;
		}
	return true;
	}
	
}
