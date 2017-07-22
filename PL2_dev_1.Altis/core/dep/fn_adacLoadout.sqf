/*---------------------------------------------------------------------------
	File: fn_adadLoadout.sqf
	Auteur: Skrow & Skyfezzer
---------------------------------------------------------------------------*/
private ["_handle"];
_mode = [_this,3,0,[0]] call BIS_fnc_param;
if(_mode == 1) then {

[] call life_fnc_saveGear;
Life_adacsavegear = life_gear;
life_adac_onDuty = true;
Life_adacsavegear set [16,[]];
RemoveAllWeapons player;
{player removeMagazine _x;} foreach (magazines player);
removeUniform player;
removeVest player;
removeBackpack player;
removeGoggles player;
removeHeadGear player;
{
player unassignItem _x;
player removeItem _x;
} foreach (assignedItems player);

if(hmd player != "") then {
player unlinkItem (hmd player);
};

sleep 0.4;
	player addItem "Itemradio";
	player assignItem "Itemradio";
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player forceAddUniform "U_Marshal";
	player additem "NVGoggles";
	player assignitem "NVGoggles";
	player addHeadgear "h_cap_blk";
	player addItem "ItemGPS";
	player assignItem "ItemGPS";
	player addBackpack "B_AssaultPack_blk";
	hint "Votre inventaire viens d'être changé";
	player addItem "Itemradio";
	player assignItem "Itemradio";
	player setVariable ["job",1,true];
sleep 0.4;	
	[] call life_fnc_skin;

}else{
	life_gear = Life_adacsavegear;
	[] spawn life_fnc_Loadgear;
	life_adac_onDuty = false;
	hint "Votre inventaire à été rechargé.";
	player setVariable ["job",0,true];
sleep 0.4;	
	[] call life_fnc_skin;
};

[] call life_fnc_skin;