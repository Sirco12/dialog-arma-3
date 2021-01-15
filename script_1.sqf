/*

Antoine lodene
_mcf=this execVM"script_1.sqf"
*/

ListArme = ["srifle_DMR_01_F", "srifle_DMR_06_olive_F", "srifle_DMR_03_multicam_F"];

{
	_this Addaction [format ["prendre : %1", _x], format["
	if (cash < 200) exitWith {hint 'Tu as pas d argent'};
	player addWeapon '%1'; hint 'Arme ajouté';
	cash = cash - 200; ", _x]];

}forEach ListArme;
