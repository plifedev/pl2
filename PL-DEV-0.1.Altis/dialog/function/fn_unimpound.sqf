#include "..\..\script_macros.hpp"
/*
	File: fn_unimpound.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Yeah... Gets the vehicle from the garage.
*/
private["_vehicle","_vehicleLife","_vid","_pid","_unit","_price"];
disableSerialization;
if(EQUAL(lbCurSel 2802,-1)) exitWith {hint localize "STR_Global_NoSelection"};
_vehicle = lbData[2802,(lbCurSel 2802)];
_vehicle = (call compile format["%1",_vehicle]) select 0;
_vehicleLife = _vehicle;
_vid = lbValue[2802,(lbCurSel 2802)];
_pid = steamid;
_unit = player;

if(isNil "_vehicle") exitWith {hint localize "STR_Garage_Selection_Error"};
if(!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _vehicleLife)) then {
	_vehicleLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_vehicle];
};

_price = switch(playerSide) do {
	case civilian: {SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_vehicleLife,"storageFee"),0)};
	case west: {SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_vehicleLife,"storageFee"),1)};
	case independent: {SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_vehicleLife,"storageFee"),2)};
	case east: {SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_vehicleLife,"storageFee"),3)};
};

if(!(EQUAL(typeName _price,typeName 0)) || _price < 1) then {_price = 1000};
if(miol45a560g < _price) exitWith {hint format[(localize "STR_Garage_CashError"),[_price] call life_fnc_numberText];};

if(EQUAL(typeName life_garage_sp,typeName [])) then {
	[_vid,_pid,SEL(life_garage_sp,0),_unit,_price,SEL(life_garage_sp,1)] remoteExec ["TON_fnc_spawnVehicle",RSERV];
} else {
	if(life_garage_sp in ["medic_spawn_1","medic_spawn_2","medic_spawn_3"]) then {
		[_vid,_pid,life_garage_sp,_unit,_price] remoteExec ["TON_fnc_spawnVehicle",RSERV];
	} else {
		[_vid,_pid,(getMarkerPos life_garage_sp),_unit,_price,markerDir life_garage_sp] remoteExec ["TON_fnc_spawnVehicle",RSERV];
	};
};

hint localize "STR_Garage_SpawningVeh";

_playerName = name player;
_vehicleName = getText(configFile >> "CfgVehicles" >> _vehicle >> "displayName");
_type = 2;
_className = lbData[2302,(lbCurSel 2302)];
[_pid,_playerName,_className,_vehicleName,_type,_price] remoteExecCall ["TON_fnc_vehicleLog", (call life_fnc_HCC)];

SUB(miol45a560g,_price);
closeDialog 0;