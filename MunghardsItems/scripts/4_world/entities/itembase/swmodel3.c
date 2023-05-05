class swmodel3_mung extends Pistol_Base
{

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
		HideAllSelections();
		checkdrum();
	}

	void checkdrum()
	{
		Magazine mag = GetMagazine(0);
		Print( mag);
		if(mag != NULL)
		{
			Print( mag.GetAmmoCount() );

			if(mag.GetAmmoCount() == 6)
			{
			HideUnhideSelection("six", 1);
			HideUnhideSelection("five", 1);
			HideUnhideSelection("four", 1);
			HideUnhideSelection("three", 1);
			HideUnhideSelection("two", 1);
			HideUnhideSelection("one", 1);			
			}
			else if(mag.GetAmmoCount() == 5)
			{ 
			HideUnhideSelection("six", 0);
			HideUnhideSelection("five", 1);
			HideUnhideSelection("four", 1);
			HideUnhideSelection("three", 1);
			HideUnhideSelection("two", 1);
			HideUnhideSelection("one", 1);	
			}
			else if(mag.GetAmmoCount() == 4)
			{
			HideUnhideSelection("six", 0);
			HideUnhideSelection("five", 0);
			HideUnhideSelection("four", 1);
			HideUnhideSelection("three", 1);
			HideUnhideSelection("two", 1);
			HideUnhideSelection("one", 1);	
			}
			else if(mag.GetAmmoCount() == 3)
			{
			HideUnhideSelection("six", 0);
			HideUnhideSelection("five", 0);
			HideUnhideSelection("four", 0);
			HideUnhideSelection("three", 1);
			HideUnhideSelection("two", 1);
			HideUnhideSelection("one", 1);	
			}
			else if(mag.GetAmmoCount() == 2)
			{
			HideUnhideSelection("six", 0);
			HideUnhideSelection("five", 0);
			HideUnhideSelection("four", 0);
			HideUnhideSelection("three", 0);
			HideUnhideSelection("two", 1);
			HideUnhideSelection("one", 1);	
			}
			else if(mag.GetAmmoCount() == 1)
			{
			HideUnhideSelection("six", 0);
			HideUnhideSelection("five", 0);
			HideUnhideSelection("four", 0);
			HideUnhideSelection("three", 0);
			HideUnhideSelection("two", 0);
			HideUnhideSelection("one", 1);	
			}
			else if(mag.GetAmmoCount() == 0)
			{
			HideAllSelections();
			}
		}
	}

	void HideAllSelections()
	{
		HideUnhideSelection("six", 0);
		HideUnhideSelection("one", 0);	
		HideUnhideSelection("five", 0);
		HideUnhideSelection("four", 0);
		HideUnhideSelection("three", 0);
		HideUnhideSelection("two", 0);
	}

	override void EEItemAttached( EntityAI item, string slot_name )
	{
		super.EEItemAttached(item, slot_name);
		checkdrum();
		Print("mag in");
	}
	override void EEItemDetached( EntityAI item, string slot_name )
	{
		super.EEItemDetached(item, slot_name);
		HideAllSelections();
		Print("mag out");
	}
	override void EEFired (int muzzleType, int mode, string ammoType)
	{
		super.EEFired(muzzleType, mode, ammoType);
		checkdrum();
		Print( "shot_mung" );

	}
};