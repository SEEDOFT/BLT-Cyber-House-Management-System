#ifndef __SORTDESIGN_H__
#define __SORTDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SortUserDesign::SortUserTxt()
{
    H::foreColor(3); H::gotoxy(35,1); cout<<R"(  _________              __     ____ ___                     .___        _____       )";
    H::foreColor(3); H::gotoxy(35,2); cout<<R"( /   _____/ ____________/  |_  |    |   \______ ___________  |   | _____/ ____\____  )";
    H::foreColor(3); H::gotoxy(35,3); cout<<R"( \_____  \ /  _ \_  __ \   __\ |    |   /  ___// __ \_  __ \ |   |/    \   __\/  _ \ )";
    H::foreColor(4); H::gotoxy(35,4); cout<<R"( /        (  <_> )  | \/|  |   |    |  /\___ \\  ___/|  | \/ |   |   |  \  | (  <_> ))";
    H::foreColor(4); H::gotoxy(35,5); cout<<R"(/_______  /\____/|__|   |__|   |______//____  >\___  >__|    |___|___|  /__|  \____/ )";
    H::foreColor(4); H::gotoxy(35,6); cout<<R"(        \/                                  \/     \/                 \/             )";
    H::HLine(25,8,110,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SortUserDesign::SortUser_Design()
{
    H::drawBoxSingleLine(20,10,120,1,3);
    H::drawBoxDoubleLineWithBG(16,11,1,25,179);
    H::VLine(17,11,25,183,219);
    H::drawBoxDoubleLineWithBG(143,11,1,25,179);
    H::VLine(144,11,25,183,219);
    H::foreColor(7);
    //laebel
    H::gotoxy(30,11); cout<<"|ID|\t\t|Name|\t\t|USERNAME|\t\t|PASSWORD|\t\t|TIME|\t\t|PRICE|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif