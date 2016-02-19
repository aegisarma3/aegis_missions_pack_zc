class CfgPatches
{
	class MyAddonClass
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.4;
		requiredAddons[] = {};
	};
};
class CfgMissions
{
	class MPMissions
	{
		class Zargabad_Down
		{
			directory = "aegis_missions_pack_zc\missions\Zargabad_Down.Zargabad";
		};
	};
};

class CfgMarkers
{
	class ISIS
	{
		name="ISIS FLAG";
		icon="aegis_missions_pack_zc\images\isis_flag.paa";
		shadow=1;
		scope=2;
		color[]={1,1,1,1};
		size=32;
		author="AEGIS TEAM";
	};
	class AEGIS_FLAG
	{
		name="AEGIS Flag";
		icon="aegis_missions_pack_zc\images\aegis_icon.paa";
		shadow=1;
		scope=2;
		color[]={1,1,1,1};
		size=32;
	};
	class Circle
	{
		name="Circulo";
		icon="aegis_missions_pack_zc\images\marker_circle_drawn_ca.paa";
		color[]={1,0,0,1};
		size=128;
		shadow="false";
		scope=2;
	};
};

class CfgSFX {
	sounds[] = {};

  	class sfxsound {
			name = "sfxsound";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfxsound.ogg",15,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound2	{
			name = "sfxsound2";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfxsound2.ogg",10,1,50,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound3 {
			name = "sfxsound3";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfxsound3.ogg",15,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound4	{
			name = "sfxsound4";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfxsound4.ogg",15,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound5	{
			name = "sfxsound5";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfxsound5.ogg",15,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound6 {
			name = "sfxsound6";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfxsound2.ogg",15,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound7 {
			name = "sfxsound7";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfxsound3.ogg",20,1,50,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound8 {
			name = "sfxsound8";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfxsound4.ogg",15,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound9 {
			name = "news1";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\news1.ogg",15,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound10 {
			name = "sfx_music_arab_1";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfx_music_arab_1.ogg",15,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound11 {
			name = "sfx_music_arab_2";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfx_music_arab_2.ogg",10,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound12 {
			name = "kunduznews";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\kunduznews.ogg",15,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound13 {
			name = "SanginnewsBBC";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\SanginnewsBBC.ogg",15,1,18,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound14 {
			name = "nuke-som";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\nuke.ogg",60,1,2500,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound15 {
			name = "alarme_bomba";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\alarme_bomba.ogg",40,1,1000,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};

		class sfxsound16 {
			name = "sfx_radio_1";
			sounds[]={sfxsound};
			sfxsound[]={"aegis_missions_pack_zc\sounds\sfx_radio_1.ogg",2,1,20,1,1,1,0};
			empty[]= {"",0,0,0,0,0,0,0};
		};
	};

class CfgMusic
	{
		tracks[]={};
    class intro_music_arab
	  {
			name = "intro_music_arab";
	    sound[] = {"aegis_missions_pack_zc\sounds\intro_music_arab.ogg", db+0, 1.0};
	  };
};
