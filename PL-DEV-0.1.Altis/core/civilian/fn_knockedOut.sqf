#include "..\..\script_macros.hpp"
/*
	File: fn_knockedOut.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Starts and monitors the knocked out state.
*/
private "_obj";
params [
	["_target",objNull,[objNull]],
	["_who","",[""]]
];

if(isNull _target) exitWith {};
if(_target != player) exitWith {};
if(EQUAL(_who,"")) exitWith {};

titleText[format[localize "STR_Civ_KnockedOut",_who],"PLAIN"];
player playMoveNow "Incapacitated";
disableUserInput true;

_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(getPosWorld player);
_obj setPosATL ASLTOATL(getPosWorld player);

life_isknocked = true;
player attachTo [_obj,[0,0,0]];
player say3D "kovictime";
sleep 15;
player playMoveNow "AmovPpneMstpSrasWrflDnon";
disableUserInput false;
detach player;
deleteVehicle _obj;
life_isknocked = false;
player SVAR ["robbed",FALSE,TRUE];
