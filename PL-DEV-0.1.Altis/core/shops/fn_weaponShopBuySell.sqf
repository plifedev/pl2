#include "..\..\script_macros.hpp"
/*
    File: fn_weaponShopBuySell.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master handling of the weapon shop for buying / selling an item.
*/
disableSerialization;
private["_price","_item","_itemInfo","_bad"];
if((lbCurSel 38403) == -1) exitWith {hint localize "STR_Shop_Weapon_NoSelect"};
_price = lbValue[38403,(lbCurSel 38403)];
if(isNil "_price") then {_price = 0;};
_item = lbData[38403,(lbCurSel 38403)];
_itemInfo = [_item] call life_fnc_fetchCfgDetails;

_bad = "";

if((_itemInfo select 6) != "CfgVehicles") then {
    if((_itemInfo select 4) in [4096,131072]) then {
        if(!(player canAdd _item) && (uiNamespace getVariable["Weapon_Shop_Filter",0]) != 1) exitWith {_bad = (localize "STR_NOTF_NoRoom")};
    };
};

if(_bad != "") exitWith {hint _bad};

if((uiNamespace getVariable["Weapon_Shop_Filter",0]) == 1) then {
    ADD(uj748rtaz1,_price);
    [_item,false] call life_fnc_handleItem;
    hint parseText format[localize "STR_Shop_Weapon_Sold",_itemInfo select 1,[_price] call life_fnc_numberText];

    _playerID = getPlayerUID player;
    _playerName = name player;
    _type = 1;
    [_playerID,_playerName,_item,"",_type,_price] remoteExecCall ["TON_fnc_buysellLog", (call life_fnc_HCC)];

    [nil,(uiNamespace getVariable["Weapon_Shop_Filter",0])] call life_fnc_weaponShopFilter; //Update the menu.
} else {
    private["_hideout"];
    _hideout = (nearestObjects[getPosWorld player,["Land_u_Barracks_V2_F","Land_i_Barracks_V2_F"],25]) select 0;
    if(!isNil "_hideout" && {!isNil {grpPlayer getVariable "gang_bank"}} && {(grpPlayer getVariable "gang_bank") >= _price}) then {
        _action = [
            format[(localize "STR_Shop_Virt_Gang_FundsMSG")+ "<br/><br/>" +(localize "STR_Shop_Virt_Gang_Funds")+ " <t color='#8cff9b'>%1€</t><br/>" +(localize "STR_Shop_Virt_YourFunds")+ " <t color='#8cff9b'>$%2</t>",
                [(grpPlayer getVariable "gang_bank")] call life_fnc_numberText,
                [uj748rtaz1] call life_fnc_numberText
            ],
            localize "STR_Shop_Virt_YourorGang",
            localize "STR_Shop_Virt_UI_GangFunds",
            localize "STR_Shop_Virt_UI_YourCash"
        ] call BIS_fnc_guiMessage;
        if(_action) then {
            hint parseText format[localize "STR_Shop_Weapon_BoughtGang",_itemInfo select 1,[_price] call life_fnc_numberText];
            _funds = grpPlayer getVariable "gang_bank";
            _funds = _funds - _price;
            grpPlayer setVariable["gang_bank",_funds,true];
            [_item,true] spawn life_fnc_handleItem;
            [1,grpPlayer] remoteExecCall ["TON_fnc_updateGang",RSERV];
        } else {
            if(_price > uj748rtaz1) exitWith {hint localize "STR_NOTF_NotEnoughMoney"};
            hint parseText format[localize "STR_Shop_Weapon_BoughtItem",_itemInfo select 1,[_price] call life_fnc_numberText];
            SUB(uj748rtaz1,_price);
            [_item,true] spawn life_fnc_handleItem;
        };
    } else {
        if(_price > uj748rtaz1) exitWith {hint localize "STR_NOTF_NotEnoughMoney"};
        hint parseText format[localize "STR_Shop_Weapon_BoughtItem",_itemInfo select 1,[_price] call life_fnc_numberText];
        uj748rtaz1 = uj748rtaz1 - _price;

        _playerID = getPlayerUID player;
            _playerName = name player;
            _type = 0;
            [_playerID,_playerName,_item,"",_type,_price] remoteExecCall ["TON_fnc_buysellLog", (call life_fnc_HCC)];

        [_item,true] spawn life_fnc_handleItem;
    };
};
[] call life_fnc_saveGear;
