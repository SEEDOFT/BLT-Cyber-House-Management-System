#ifndef __VIEWUSERINFODESIGN_H__
#define __VIEWUSERINFODESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewUserInfoDesign::ViewUserInfoTxt()
{
    H::foreColor(3); H::gotoxy(36,1); cout<<R"(____   ____.__                 ____ ___  _________              .___        _____       )";
    H::foreColor(3); H::gotoxy(36,2); cout<<R"(\   \ /   /|__| ______  _  __ |    |   \/   _____/ ___________  |   | _____/ ____\____  )";
    H::foreColor(3); H::gotoxy(36,3); cout<<R"( \   Y   / |  |/ __ \ \/ \/ / |    |   /\_____  \_/ __ \_  __ \ |   |/    \   __\/  _ \ )";
    H::foreColor(4); H::gotoxy(36,4); cout<<R"(  \     /  |  \  ___/\     /  |    |  / /        \  ___/|  | \/ |   |   |  \  | (  <_> ))";
    H::foreColor(4); H::gotoxy(36,5); cout<<R"(   \___/   |__|\___  >\/\_/   |______/ /_______  /\___  >__|    |___|___|  /__|  \____/ )";
    H::foreColor(4); H::gotoxy(36,6); cout<<R"(                   \/                          \/     \/                 \/             )";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewUserInfoDesign::ViewUserInfo_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,23);
    H::drawBoxDoubleLineWithBG(16,11,1,25,179);
    H::VLine(17,11,25,183,219);
    H::drawBoxDoubleLineWithBG(143,11,1,25,179);
    H::VLine(144,11,25,183,219);
    //laebel
    H::foreColor(28);H::gotoxy(20,11); cout<<"|ID|\t|Name|\t\t|USERNAME|\t\t|PASSWORD|\t    |HOUR|\t   |REMAIN HOUR|   \t|PRICE|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif