/*---------------------------------------------------------------------------
	File: fn_ticketAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the ticketing process.
---------------------------------------------------------------------------*/

private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
disableSerialization;
if(!(createDialog "adaclife_ticket_give")) exitWith {hint localize "STR_Cop_TicketFail"};
if(isNull _unit OR !isPlayer _unit) exitwith {};
ctrlSetText[3651,format[localize "STR_Cop_Ticket",_unit getVariable["realname",name _unit]]];
adaclife_ticket_unit = _unit;
life_ticket_unit = _unit;