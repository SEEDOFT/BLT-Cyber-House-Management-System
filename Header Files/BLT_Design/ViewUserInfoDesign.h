#ifndef __VIEWUSERINFODESIGN_H__
#define __VIEWUSERINFODESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewUserInfoDesign::ViewUserInfoTxt()
{
    Design::TxtOutline(-6,0,11,1);
    H::foreColor(7); H::gotoxy(42,3); cout << R"(       _                                             _____        __       )";
    H::foreColor(7); H::gotoxy(42,4); cout << R"(/\   /(_) _____      __  /\ /\  ___  ___ _ __ ___    \_   \_ __  / _| ___  )";
    H::foreColor(1); H::gotoxy(42,5); cout << R"(\ \ / / |/ _ \ \ /\ / / / / \ \/ __|/ _ \ '__/ __|    / /\/ '_ \| |_ / _ \ )";
    H::foreColor(7); H::gotoxy(42,6); cout << R"( \ V /| |  __/\ V  V /  \ \_/ /\__ \  __/ |  \__ \ /\/ /_ | | | |  _| (_) |)";
    H::foreColor(7); H::gotoxy(42,7); cout << R"(  \_/ |_|\___| \_/\_/    \___/ |___/\___|_|  |___/ \____/ |_| |_|_|  \___/ )";                                                                          
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
    H::foreColor(23);H::gotoxy(20,11); 
    cout<<"|ID|\t|Name|\t\t|USERNAME|\t\t|PASSWORD|\t    |HOUR|\t   |REMAIN (MIN)|   \t|PRICE|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif