#ifndef __VIEWUSERINFODESIGN_H__
#define __VIEWUSERINFODESIGN_H__
#include "./Header/HinsyOOPV2"
using namespace HinsyOOP;
class ViewUserInfoDesign{
    public:
        static void viewUserInfoAscii();
        static void viewUserInfoDesign();
};

void ViewUserInfoDesign::viewUserInfoAscii(){
    H::foreColor(3); H::gotoxy(35,1); cout<<R"(____   ____.__                 ____ ___  _________              .___        _____       )";
    H::foreColor(3); H::gotoxy(35,2); cout<<R"(\   \ /   /|__| ______  _  __ |    |   \/   _____/ ___________  |   | _____/ ____\____  )";
    H::foreColor(3); H::gotoxy(35,3); cout<<R"( \   Y   / |  |/ __ \ \/ \/ / |    |   /\_____  \_/ __ \_  __ \ |   |/    \   __\/  _ \ )";
    H::foreColor(4); H::gotoxy(35,4); cout<<R"(  \     /  |  \  ___/\     /  |    |  / /        \  ___/|  | \/ |   |   |  \  | (  <_> ))";
    H::foreColor(4); H::gotoxy(35,5); cout<<R"(   \___/   |__|\___  >\/\_/   |______/ /_______  /\___  >__|    |___|___|  /__|  \____/ )";
    H::foreColor(4); H::gotoxy(35,6); cout<<R"(                   \/                          \/     \/                 \/             )";
    H::HLine(25,8,110,7,196);
}

void ViewUserInfoDesign::viewUserInfoDesign(){
    H::drawBoxSingleLine(20,10,120,1,3);
    H::drawBoxDoubleLineWithBG(16,11,1,25,179);
    H::VLine(17,11,25,183,219);
    H::drawBoxDoubleLineWithBG(143,11,1,25,179);
    H::VLine(144,11,25,183,219);
    H::foreColor(7);
    //laebel
    H::gotoxy(30,11); cout<<"ID\t\tName\t\tUSERNAME\t\tPASSWORD\t\tTIME\t\tPRICE";
}

#endif