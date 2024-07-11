#ifndef __VIEWGAMEDESIGN_H__
#define __VIEWGAMEDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewGameListDesign::ViewGameTxt()
{
    H::foreColor(3); H::gotoxy(48,1); cout<<R"(____   ____.__                  ________                       )";
    H::foreColor(3); H::gotoxy(48,2); cout<<R"(\   \ /   /|__| ______  _  __  /  _____/_____    _____   ____  )";
    H::foreColor(3); H::gotoxy(48,3); cout<<R"( \   Y   / |  |/ __ \ \/ \/ / /   \  ___\__  \  /     \_/ __ \ )";
    H::foreColor(4); H::gotoxy(48,4); cout<<R"(  \     /  |  \  ___/\     /  \    \_\  \/ __ \|  Y Y  \  ___/ )";
    H::foreColor(4); H::gotoxy(48,5); cout<<R"(   \___/   |__|\___  >\/\_/    \______  (____  /__|_|  /\___  >)";
    H::foreColor(4); H::gotoxy(48,6); cout<<R"(                   \/                 \/     \/      \/     \/ )";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewGameListDesign::ViewGame_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,183);
    H::drawBoxDoubleLineWithBG(16,11,1,25,196);
    H::VLine(17,11,25,199,219);
    H::drawBoxDoubleLineWithBG(143,11,1,25,196);
    H::VLine(144,11,25,199,219);
    //laebel
    H::setcolor(183);H::gotoxy(35,11); cout<<"|ID|\t\t\t|Name|\t\t\t\t|TYPE|\t\t\t|RELEASE DATE|";
    H::setcolor(7);
    
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif