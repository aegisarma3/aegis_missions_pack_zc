class CfgPatches
{
	class MyAddonClass
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgMissions
{
	class MPMissions
	{
		class Zargabad_Down
		{
			directory = "Zargabad_Down\Zargabad_Down.Zargabad";
		};
	};
};

class CfgMarkers
{
	class ISIS
	{
		name="ISIS FLAG";
		icon="\Zargabad_Down\Zargabad_Down.Zargabad\signs\isis_flag.paa";
		shadow=1;
		scope=2;
		color[]={1,1,1,1};
		size=32;
		author="AEGIS TEAM";
	};
	class AEGIS_FLAG
	{
		name="AEGIS Flag";
		icon="\Zargabad_Down\Zargabad_Down.Zargabad\signs\aegis_icon.paa";
		shadow=1;
		scope=2;
		color[]={1,1,1,1};
		size=32;
	};
	class Circle
	{
		name="Circulo";
		icon="\Zargabad_Down\Zargabad_Down.Zargabad\signs\marker_circle_drawn_ca.paa";
		color[]={1,0,0,1};
		size=128;
		shadow="false";
		scope=2;
	};
};
