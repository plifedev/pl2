#include "..\..\script_macros.hpp"
if(deqr78tys4q2t < 5000) exitWith {hint format[localize "STR_NOTF_HS_NoCash",5000];};
if(!(player getVariable ["missingOrgan",FALSE])) exitWith {hint "Je connais mon metier et apparemment vous avez tout vos reins !"};
titleText["Bon j'ai le rein d'un mort qui traine ca devrait faire l'affaire...","PLAIN"]; 
uiSleep 15;
if(player distance (_this select 0) > 5) exitWith {titleText["Vous devez rester dans un rayon de 5 metres, de sorte que le medecin puisse vous traiter.","PLAIN"]};  //distance fail
titleText["Vous etes maintenant guerri !","PLAIN"]; 
player setVariable["missingOrgan",false,true];  
uiSleep 0.1; 
player setdamage 0; 
life_thirst = 100;
life_hunger = 100;
deqr78tys4q2t = deqr78tys4q2t - 5000; 