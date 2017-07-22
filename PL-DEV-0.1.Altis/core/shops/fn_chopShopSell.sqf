#include "..\..\script_macros.hpp"
/*
	File: fn_chopShopSell.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Sells the selected vehicle off.
*/
if(life_action_inUse) exitWith {}; //Action is in use, exit to prevent spamming.
life_action_inUse = true;
disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_price2"];
_control = CONTROL(39400,39402);
_price = _control lbValue (lbCurSel _control);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [getMarkerPos life_chopShop,["Car","Truck","Air"],20];
_vehicle = SEL(_nearVehicles,_vehicle);
if(isNull _vehicle) exitWith {life_action_inUse = false;};

hint localize "STR_Shop_ChopShopSelling";

_price2 = uj748rtaz1 + _price;
[player,_vehicle,_price,_price2] remoteExecCall ["TON_fnc_chopShopSell",RSERV];
life_action_inUse = false;
closeDialog 0;