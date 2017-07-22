#include "..\..\script_macros.hpp"
/*
	File: fn_revivePlayer.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Starts the revive process on the player.
*/
private["_target","_revivable","_targetName","_ui","_progressBar","_titleText","_cP","_title","_reviveCost"];
_target = param [0,ObjNull,[ObjNull]];
if(isNull _target) exitWith {};
_reviveCost = (LIFE_SETTINGS(getNumber,"revive_fee") * 2);

_revivable = _target GVAR ["Revive",FALSE];
if(_revivable) exitWith {};
if(_target GVAR ["Reviving",ObjNull] == player) exitWith {hint localize "STR_Medic_AlreadyReviving";};
if(player distance _target > 5) exitWith {}; //Not close enough.

//Fetch their name so we can shout it.
_targetName = _target GVAR ["name","Unknown"];
_title = format[localize "STR_Medic_Progress",_targetName];
life_action_inUse = true; //Lockout the controls.

_target SVAR ["Reviving",player,TRUE];
//Setup our progress bar
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS ["life_progress",displayNull];
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

//Lets reuse the same thing!
while {true} do {
	if(animationState player != "AinvPknlMstpsnonWnonDnon_medic_1" ) then {
player action ["SwitchWeapon", player, player, 100];   //EDIT
player playMove "AinvPknlMstpsnonWnonDnon_medic_1"; //Durée action 6.5 secondes
player playActionNow "stop";
player playMove "AinvPknlMstpsnonWnonDnon_medic_1";
player playActionNow "stop";
player playMove "AinvPknlMstpsnonWnonDnon_medic_1";
};

sleep 0.195; // 3 fois 6.5 secondes = 19,5secondes
	_cP = _cP + .01;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	if(_cP >= 1 || !alive player) exitWith {};
	if(life_istazed) exitWith {}; //Tazed
	if(life_isknocked) exitWith {}; //Knocked
	if(life_interrupted) exitWith {};
	if((player GVAR ["restrained",false])) exitWith {};
	if(player distance _target > 4) exitWith {_badDistance = true;};
	if(_target GVAR ["Revive",FALSE]) exitWith {};
	if(_target GVAR ["Reviving",ObjNull] != player) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";

if(_target GVAR ["Reviving",ObjNull] != player) exitWith {hint localize "STR_Medic_AlreadyReviving"};
_target SVAR ["Reviving",NIL,TRUE];

if(!alive player || life_istazed || life_isknocked) exitWith {life_action_inUse = false;};
if(_target GVAR ["Revive",FALSE]) exitWith {hint localize "STR_Medic_RevivedRespawned"};
if((player GVAR ["restrained",false])) exitWith {life_action_inUse = false;};
if(!isNil "_badDistance") exitWith {titleText[localize "STR_Medic_TooFar","PLAIN"]; life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};

ADD(miol45a560g,_reviveCost);

life_action_inUse = false;
_target SVAR ["Revive",TRUE,TRUE];
[profileName] remoteExecCall ["life_fnc_revived",_target];
titleText[format[localize "STR_Medic_RevivePayReceive",_targetName,[_reviveCost] call life_fnc_numberText],"PLAIN"];

sleep .6;
player reveal _target;