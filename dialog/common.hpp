class RscText {
    x = 0;
    y = 0;
    h = 0.037;
    w = 0.3;
    type = 0;
    style = 0;
    shadow = 1;
    colorShadow[] = {0, 0, 0, 0.5};
    font = "RobotoCondensed";
    SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    text = "";
    colorText[] = {1, 1, 1, 1.0};
    colorBackground[] = {0, 0, 0, 0};
    linespacing = 1;
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {1,1,1,1};
    tooltipColorShade[] = {0,0,0,0.65};
};

class RscStructuredText {
    type = 13;
    style = 0;
    x = 0;
    y = 0;
    h = 0.035;
    w = 0.1;
    text = "";
    size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    colorText[] = {1, 1, 1, 1.0};
    shadow = 1;

    class Attributes {
        font = "RobotoCondensed";
        color = "#ffffff";
        align = "left";
        shadow = 1;
    };
};

class RscButtonMenu
{
    style = 2;
    x = 0;
    y = 0;
    w = 0.095589;
    h = 0.039216;
    shadow = 2;
    font = "RobotoCondensed";
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    colorText[] = {1,1,1,1.0};
    colorDisabled[] = {0.4,0.4,0.4,1};
    colorBackground[] = {0,0.24,0.87,1};
    colorBackgroundActive[] = {0,0.24,0.87,1};
    colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    colorFocusedd[] = {0,0.24,0.87,1};
    colorShadow[] = {0,0,0,1};
    colorBorder[] = {0,0,0,1};
    borderSize = 0.0;
    soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
    soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};



