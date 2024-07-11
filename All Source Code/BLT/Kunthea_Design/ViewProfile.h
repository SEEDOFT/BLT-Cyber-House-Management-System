#ifndef __VIEWUSERDESIGN_H__
#define __VIEWUSERDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewProfile::ViewProfileTxt()
{
    H::foreColor(3); H::gotoxy(41,1); cout<<R"(____   ____.__                __________                _____.__.__          )";
    H::foreColor(3); H::gotoxy(41,2); cout<<R"(\   \ /   /|__| ______  _  __ \______   \_______  _____/ ____\__|  |   ____  )";
    H::foreColor(3); H::gotoxy(41,3); cout<<R"( \   Y   / |  |/ __ \ \/ \/ /  |     ___/\_  __ \/  _ \   __\|  |  | _/ __ \ )";
    H::foreColor(4); H::gotoxy(41,4); cout<<R"(  \     /  |  \  ___/\     /   |    |     |  | \(  <_> )  |  |  |  |_\  ___/ )";
    H::foreColor(4); H::gotoxy(41,5); cout<<R"(   \___/   |__|\___  >\/\_/    |____|     |__|   \____/|__|  |__|____/\___  >)";
    H::foreColor(4); H::gotoxy(41,6); cout<<R"(                   \/                                                     \/ )";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewProfile::ViewProfile_Design()
{
    H::drawBoxDoubleLineWithBG(20,10,120,1,196);
    H::HLine(22,11,117,199,221);
    for(int i=0; i<3; i++)
    {
        H::VLine(70,12,i+1,7,221); H::delay(10);
        H::VLine(90,12,i+1,7,221); H::delay(10);
    }
    H::drawBoxDoubleLineWithBG(20,15,120,1,25);
    H::gotoxy(25,16); H::foreColor(23); cout<<"|ID|\t|Name|\t\t|USERNAME|\t   |PASSWORD|\t\t|HOUR|\t     |REMAIN TIME|\t     |TOTAL PRICE|";
    H::drawBoxDoubleLineWithBG(16,11,1,25,179);
    H::VLine(17,11,25,183,219);
    H::drawBoxDoubleLineWithBG(143,11,1,25,179);
    H::VLine(144,11,25,183,219);
    H::foreColor(7);

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif