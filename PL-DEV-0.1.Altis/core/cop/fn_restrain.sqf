#include "..\..\script_macros.hpp"
/*
	File: fn_restrain.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Retrains the client.
*/
private["_cop","_player","_vehicle"];
_cop = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_player = player;
_vehicle = vehicle player;
if(isNull _cop) exitWith {};

//Monitor excessive restrainment
[] spawn {
	private "_time";
	while {true} do {
		_time = time;
		waitUntil {(time - _time) > (5 * 60)};
		if(!([west,getPosWorld player,30] call life_fnc_nearUnits) && (player GVAR ["restrained",FALSE]) && isNull objectParent player) exitWith {
			player SVAR ["restrained",FALSE,TRUE];
			player SVAR ["Escorting",FALSE,TRUE];
			player SVAR ["transporting",false,true];
			detach player;
			titleText[localize "STR_Cop_ExcessiveRestrain","PLAIN"];
		};
	};
};


[] spawn {
	while {true} do {
		waitUntil {(time - _time) > (5 * 60)};
		if(!(player GVAR ["restrained",false]) && (player GVAR ["cagoule",true])) then {
			[] call life_fnc_enleverCagoule;
		};
	};
};

[] spawn {
	while {true} do {
		waitUntil {(time - _time) > (5 * 60)};
		if(!(player GVAR ["restrained",false]) && (player GVAR ["baillon",true])) then {
			[] call life_fnc_enleverBaillon;
		};
	};
};

titleText[format[localize "STR_Cop_Retrained",_cop GVAR ["realname",name _cop]],"PLAIN"];
player say3D "menottes";

life_disable_getIn = true;
life_disable_getOut = false;

while {player GVAR  "restrained"} do {
	if(isNull objectParent player) then {
		player playMove "AmovPercMstpSnonWnonDnon_Ease";
	};

	_state = vehicle player;
	waitUntil {animationState player != "AmovPercMstpSnonWnonDnon_Ease" || !(player GVAR "restrained") || vehicle player != _state};

	if(!alive player) exitWith {
		player SVAR ["restrained",false,true];
		player SVAR ["Escorting",false,true];
		player SVAR ["transporting",false,true];
		detach _player;
	};

	if(!alive _cop) then {
		player SVAR ["Escorting",false,true];
		detach player;
	};

	if(vehicle player != player && life_disable_getIn) then {
		player action["eject",vehicle player];
	};

	if((vehicle player != player) && (vehicle player != _vehicle)) then {
		_vehicle = vehicle player;
	};

	if(isNull objectParent player && life_disable_getOut) then {
		player moveInCargo _vehicle;
	};

	if((vehicle player != player) && life_disable_getOut && (driver (vehicle player) == player)) then {
		player action["eject",vehicle player];
		player moveInCargo _vehicle;
	};
};

//disableUserInput false;

if(alive player) then {
	player switchMove "AmovPercMstpSlowWrflDnon_SaluteIn";
	player SVAR ["Escorting",false,true];
	player SVAR ["transporting",false,true];
	detach player;
	player say3D "menottes";

	_playerID = getPlayerUID _cop;
	_playerName = name _cop;
	_byPlayerID = getPlayerUID player;
	_byPlayerName = name player;
	_type = 1;
	[_playerID,_playerName,_byPlayerID,_byPlayerName,_type,""] remoteExecCall ["TON_fnc_copLog", (call life_fnc_HCC)];
};
