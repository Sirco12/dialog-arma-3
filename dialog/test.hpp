class test {
	idd = 150121;
	name = "test";
	author = "@Lodene le bg";

	class controlsBackground {
		class Life_DA3F_Background: RscText
		{
			idc = 1000;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.242 * safezoneH;
			colorBackground[] = {0,0.2,0.3,0.85};
			tooltip = "Backgroud"; //--- ToDo: Localize;
		};
		class DA3F_txt_Info: RscStructuredText
		{
			idc = 1100;
			text = "<t color='#F31400' size='1.3' align='center' > En attente des infos<t/>"; //--- ToDo: Localize;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.121 * safezoneH;
		};
		class DA3f_Txt_header: RscStructuredText
		{
			idc = 1101;
			text = "<t color='#F31400' size='1.3' align='center' > Titre test <t/>"; //--- ToDo: Localize;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
	}
	class controls {
		class DA3F_Btn_Act_01: RscButtonMenu
		{
			idc = 5000;
			OnButtonClick = "hint str (name player) ";

			text = "Action 1"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.055 * safezoneH;
			tooltip = "Info de la cible"; //--- ToDo: Localize;
		};
		class DA3F_Btn_Act_02: RscButtonMenu
		{
			idc = 2401;
			text = "Action 2"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.055 * safezoneH;
			tooltip = "Heal ou mort de la cible"; //--- ToDo: Localize;
		};
	}
}