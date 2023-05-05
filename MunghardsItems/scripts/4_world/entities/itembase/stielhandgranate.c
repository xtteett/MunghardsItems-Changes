class stielhandgranate_Mung extends Grenade_Base
{
	void stielhandgranate_Mung()
	{
		SetAmmoType("M67Grenade_Ammo");
		SetFuseDelay(4);
		SetParticleExplosion(ParticleList.M67);
	}

	void ~stielhandgranate_Mung() {}
}