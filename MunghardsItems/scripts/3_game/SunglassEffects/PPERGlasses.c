class PPERequester_Glasses_galaxy_mung extends PPERequester_GameplayBase
{
	override protected void OnStart(Param par = null)
	{
		super.OnStart();
		
		SetTargetValueFloat(PostProcessEffectType.GodRays,PPEGodRays.PARAM_INTENSITY,true,0,PPEGodRays.L_0_GLASSES,PPOperators.LOWEST);
		SetTargetValueColor(PostProcessEffectType.Glow,PPEGlow.PARAM_COLORIZATIONCOLOR,{0.15,0.3,0.0,0.0},PPEGlow.L_23_GLASSES,PPOperators.SUBSTRACT);
	}
};

class PPERequester_Glasses_yellow_mung extends PPERequester_GameplayBase
{
	override protected void OnStart(Param par = null)
	{
		super.OnStart();
		
		SetTargetValueFloat(PostProcessEffectType.GodRays,PPEGodRays.PARAM_INTENSITY,true,0,PPEGodRays.L_0_GLASSES,PPOperators.LOWEST);
		SetTargetValueColor(PostProcessEffectType.Glow,PPEGlow.PARAM_COLORIZATIONCOLOR,{0.0,0.0,0.3,0.0},PPEGlow.L_23_GLASSES,PPOperators.SUBSTRACT);
	}
};

class PPERequester_Glasses_pink_mung extends PPERequester_GameplayBase
{
	override protected void OnStart(Param par = null)
	{
		super.OnStart();
		
		SetTargetValueFloat(PostProcessEffectType.GodRays,PPEGodRays.PARAM_INTENSITY,true,0,PPEGodRays.L_0_GLASSES,PPOperators.LOWEST);
		SetTargetValueColor(PostProcessEffectType.Glow,PPEGlow.PARAM_COLORIZATIONCOLOR,{0.0,0.3,0.0,0.0},PPEGlow.L_23_GLASSES,PPOperators.SUBSTRACT);
	}
};