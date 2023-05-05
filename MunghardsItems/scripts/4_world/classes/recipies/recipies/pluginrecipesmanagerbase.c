modded class PluginRecipesManager 
{
   /* 
    override void ReadCacheFromFile(string filename) 
    {
       // m_CacheItemMap.Clear();
        m_CachedItems = new array<string>;
        GenerateRecipeCache(m_CachedItems);
        m_CachedItems.Clear();
    }
    */

    override void RegisterRecipies()
    {
        super.RegisterRecipies();
        
        RegisterRecipe(new craftsandwich);
        RegisterRecipe(new CraftJointMung);
        RegisterRecipe(new CraftGunwallMung);
        RegisterRecipe(new CraftGunwallMetalMung);
        RegisterRecipe(new CraftMakeshiftsheltermung);
        RegisterRecipe(new CraftMakeshiftshelter2mung);
        RegisterRecipe(new Dismantle_makeshifttent_mung_Deployed);
        RegisterRecipe(new Dismantle_makeshifttent2_mung_Deployed);        
        RegisterRecipe(new Dismantle_gunwalldisplay_mung);
        RegisterRecipe(new Dismantle_gunwalldisplay_metal_mung);
        RegisterRecipe(new CraftMolotovMung);
        RegisterRecipe(new CraftBulletCanGrenade_mung);
        RegisterRecipe(new craft_trap_tripwire_mung);
        RegisterRecipe(new SawoffShotgunIzh54);
        RegisterRecipe(new CraftBaseBallBatBarbed_mung);
        RegisterRecipe(new craftghillieponcho_mung);
        RegisterRecipe(new craftWolfcowl_mung);
        RegisterRecipe(new craftBearcowl_mung);
    }
};