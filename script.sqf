/*

Antoine Lodene

*/

//pan addAction ["panneau action :", "script_1.sqf", '', 0];
player addAction [format["Action 1 :", ""], {
	_ok = createDialog "RscDisplayGame";
	if (!_ok) then {hint "Dialog couldn't be opened!"};
}, "", 1, false, false, "", ""];


