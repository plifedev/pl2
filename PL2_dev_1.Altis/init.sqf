StartProgress = false;
if (hasInterface) then {
    [] execVM "briefing.sqf";
};
[] execVM "KRON_Strings.sqf";
[] execVM "core\functions\statusbar.sqf";
StartProgress = true;

0 setOvercast 0;
0 setRain 0;
0 setFog 0;

[] spawn
{
	while {true} do
	{
		0 setfog 0;
		sleep 1;
	};  
};
