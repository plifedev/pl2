#include "..\..\script_macros.hpp"
/*
	File: fn_bankDeposit.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Figure it out.
*/
private ["_value"];
_value = parseNumber(ctrlText 2702);

//Series of stupid checks
if (_value > 999999) exitWith {hint localize "STR_ATM_GreaterThan";};
if (_value < 0) exitWith {};
if (!([str(_value)] call TON_fnc_isnumber)) exitWith {hint localize "STR_ATM_notnumeric"};
if (_value > uj748rtaz1) exitWith {hint localize "STR_ATM_NotEnoughCash"};

uj748rtaz1 = uj748rtaz1 - _value;
miol45a560g = miol45a560g + _value;

hint format [localize "STR_ATM_DepositSuccess",[_value] call life_fnc_numberText];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;

_playerID = getPlayerUID player;
_playerName = name player;
_type = 0;
_amount = _value;
_cashAct = [uj748rtaz1]call life_fnc_numberText;
_bankAct = [miol45a560g] call life_fnc_numberText;
[_playerID,_playerName,"","",_type,_amount,_cashAct,_bankAct] remoteExecCall ["TON_fnc_moneyLog", (call life_fnc_HCC)];