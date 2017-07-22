#include "..\script_macros.hpp"

private["_spawnPos"];

if(str(player) in ["civ_71","civ_72","civ_73","civ_74","civ_75","civ_76","civ_77","civ_78","civ_79","civ_80","civ_81","civ_82","civ_83","civ_84","civ_85","civ_86","civ_87","civ_88","civ_89","civ_90","civ_91","civ_92","civ_93","civ_94","civ_95","civ_96","civ_97","civ_98","civ_99","civ_100","civ_101","civ_102","civ_103","civ_104","civ_105","civ_106","civ_107","civ_108","civ_109","civ_110"]) then {
	if((FETCH_CONST(life_donator) < 1) && (FETCH_CONST(life_adminlevel) == 0)) then {
		player enableSimulation false;
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 35;
	};
};

civ_spawn_1 = nearestObjects[getMarkerPos  "civ_spawn_1", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
civ_spawn_2 = nearestObjects[getMarkerPos  "civ_spawn_2", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
civ_spawn_3 = nearestObjects[getMarkerPos  "civ_spawn_3", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
civ_spawn_4 = nearestObjects[getMarkerPos  "civ_spawn_4", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
waitUntil {!(isNull (findDisplay 46))};

if(life_is_arrested) then {
	life_is_arrested = false;
	[player,true] spawn life_fnc_jail;
} else {
	[] call life_fnc_spawnMenu;
	waitUntil{!isNull (findDisplay 38500)};
	waitUntil{isNull (findDisplay 38500)};
};

0 enableChannel false;
1 enableChannel false;
2 enableChannel false;

player addRating 9999999;

if(life_job > 0) then {
	_igiload = execVM "core\dep\remorque\IgiLoadInit.sqf";
	[] spawn life_fnc_placeablesInit;
};

[] call life_fnc_skin;