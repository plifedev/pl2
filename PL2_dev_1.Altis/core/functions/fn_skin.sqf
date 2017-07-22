#include "..\..\script_macros.hpp"

// Civil
if(playerSide == civilian && {uniform player == "U_I_CombatUniform"}) then {
	player setObjectTextureGlobal [0,"textures\Tenues\Civil\costume.jpg"];
};
if(playerSide == civilian && {uniform player == "U_Rangemaster"}) then {
   	player setObjectTextureGlobal [0,"textures\Tenues\Civil\cravate.jpg"];
};
if(playerSide == civilian && {uniform player == "U_Marshal"}) then {
	player setObjectTextureGlobal [0,"textures\Tenues\Dep\recruit_uniform_adac.paa"];
};

//Armée
if(playerSide == west && {uniform player == "U_I_CombatUniform"}) then {
	player setObjectTextureGlobal [0,"textures\Tenues\Armee\combat.jpg"];
};
if(playerSide == west && {uniform player == "U_O_OfficerUniform_ocamo"}) then {
	player setObjectTextureGlobal [0,"textures\Tenues\Armee\sombre.jpg"];
};
if(playerSide == west && {uniform player == "U_B_survival_uniform"}) then {
	player setObjectTextureGlobal [0,"textures\Tenues\Armee\principal.jpg"];
};
if(playerSide == west && {uniform player == "U_B_CombatUniform_mcam"}) then {
	player setObjectTextureGlobal [0,"textures\Tenues\Armee\principal.jpg"];
};
if(playerSide == west && {uniform player == "U_B_CombatUniform_mcam_tshirt"}) then {
	player setObjectTextureGlobal [0,"textures\Tenues\Armee\principal.jpg"];
};
if(playerSide == west && {uniform player == "U_B_CombatUniform_mcam_vest"}) then {
	player setObjectTextureGlobal [0,"textures\Tenues\Armee\principal.jpg"];
};
if(playerSide == west && {uniform player == "U_BG_Guerrilla_6_1"}) then
{
	player setObjectTextureGlobal [0,"textures\Tenues\Armee\officiel.jpg"];
};

// Pompier
if(playerSide == independent && {uniform player == "U_B_CTRG_1"}) then {
	player setObjectTextureGlobal [0,"textures\Tenues\Pompier\pompier.jpg"];
};

/* Armée
if(playerSide == east && {uniform player == "U_B_CombatUniform_mcam"}) then {
	player setObjectTextureGlobal [0,"textures\Tenues\armer\Uniform126.jpg"];
};*/
