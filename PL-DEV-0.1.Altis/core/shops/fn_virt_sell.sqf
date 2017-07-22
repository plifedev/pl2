#include "..\..\script_macros.hpp"
/*
	File: fn_virt_sell.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Sell a virtual item to the store / shop
*/
private["_type","_index","_price","_amount","_name"];
_sellAll = [_this, 0, false, [false]] call BIS_fnc_param;
if(EQUAL(lbCurSel 2402,-1)) exitWith {};
_type = lbData[2402,(lbCurSel 2402)];

_price = 0.0;
_itemNameToSearchFor = _type;
{
	_curItemName = _x select 0;
	_curItemPrice = _x select 1;
	if (_curItemName == _itemNameToSearchFor) then {_price=_curItemPrice};
} forEach DYNMARKET_prices;

//_price = [_type] call life_fnc_DYNMARKET_getPrice;
//_price = M_CONFIG(getNumber,"VirtualItems",_type,"sellPrice");
if(EQUAL(_price,-1)) exitWith {};
	if(_sellAll) then {
		_amount = (ITEM_VALUE(_type));
	} else {
		_amount = ctrlText 2405;
		if(!([_amount] call TON_fnc_isnumber)) exitWith {hint localize "STR_Shop_Virt_NoNum";};
		_amount = parseNumber (_amount);
		if(_amount > (ITEM_VALUE(_type))) exitWith {hint localize "STR_Shop_Virt_NotEnough"};
	};

_price = (_price * _amount);
_name = M_CONFIG(getText,"VirtualItems",_type,"displayName");
if(([false,_type,_amount] call life_fnc_handleInv)) then {
	hint format[localize "STR_Shop_Virt_SellItem",_amount,(localize _name),[_price] call life_fnc_numberText];
	ADD(uj748rtaz1,_price);
	[] call life_fnc_virt_update;
	DYNAMICMARKET_boughtItems pushBack [_type,_amount];

	_playerID = getPlayerUID player;
	_playerName = name player;
	_type = 3;
	[_playerID,_playerName,_name,_amount,_type,_price] remoteExecCall ["TON_fnc_buysellLog", (call life_fnc_HCC)];
    [] call life_fnc_virt_update;
};

if(EQUAL(life_shop_type,"drugdealer")) then {
	private["_array","_ind","_val"];
	_array = life_shop_npc getVariable["sellers",[]];
	_ind = [getPlayerUID player,_array] call TON_fnc_index;
	if(!(EQUAL(_ind,-1))) then {
		_val = SEL(SEL(_array,_ind),2);
		ADD(_val,_price);
		_array set[_ind,[getPlayerUID player,profileName,_val]];
		life_shop_npc setVariable["sellers",_array,true];
	} else {
		_array pushBack [getPlayerUID player,profileName,_price];
		life_shop_npc setVariable["sellers",_array,true];
	};
};

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
