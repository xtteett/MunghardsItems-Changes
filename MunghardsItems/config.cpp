class CfgPatches
{
	class MunghardsItems
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class Munghardsitems
	{
		dir = "Munghardsitems";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Munghardsitems";
		credits = "munghard";
		author = "munghard";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World","Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"MunghardsItems/scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"MunghardsItems/scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"MunghardsItems/scripts/5_Mission"};
			};
			class imageSets
            {
                files[]=
                {
                    "MunghardsItems/gui/imagesets/mung_inventory.imageset"
                };
            };
		};
	};
};
