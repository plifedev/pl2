#include "..\..\script_macros.hpp"
/*
	File: fn_ticketPay.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Pays the ticket.
*/
if(isNil "life_ticket_val" || isNil "life_ticket_cop") exitWith {};
if(uj748rtaz1 < life_ticket_val) exitWith {
	if(miol45a560g < life_ticket_val) exitWith {
		sleep 1;
		hint localize "STR_Cop_Ticket_NotEnough";
		[1,"STR_Cop_Ticket_NotEnoughNOTF",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_ticket_cop];
		closeDialog 0;
	};

	hint format[localize "STR_Cop_Ticket_Paid",[life_ticket_val] call life_fnc_numberText];
	SUB(miol45a560g,life_ticket_val);
	[1] call SOCK_fnc_updatePartial;
	life_ticket_paid = true;

	[0,"STR_Cop_Ticket_PaidNOTF",true,[profileName,[life_ticket_val] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",west];
	[1,"STR_Cop_Ticket_PaidNOTF_2",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_ticket_cop];
	[life_ticket_val,player,life_ticket_cop] remoteExecCall ["life_fnc_ticketPaid",life_ticket_cop];
	[getPlayerUID player] remoteExecCall ["life_fnc_wantedRemove",RSERV];
	closeDialog 0;
};

SUB(uj748rtaz1,life_ticket_val);
[0] call SOCK_fnc_updatePartial;
life_ticket_paid = true;

[getPlayerUID player] remoteExecCall ["life_fnc_wantedRemove",RSERV];
[0,"STR_Cop_Ticket_PaidNOTF",true,[profileName,[life_ticket_val] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",west];
closeDialog 0;
[1,"STR_Cop_Ticket_PaidNOTF_2",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_ticket_cop];
[life_ticket_val,player,life_ticket_cop] remoteExecCall ["life_fnc_ticketPaid",life_ticket_cop];