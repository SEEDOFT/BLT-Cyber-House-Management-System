#ifndef __VIEWGAMEDESIGN_H__
#define __VIEWGAMEDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewGameListDesign::ViewGameTxt(){
    H::foreColor(3); H::gotoxy(50,1); cout<<R"(____   ____.__                ________          __          )";
    H::foreColor(3); H::gotoxy(50,2); cout<<R"(\   \ /   /|__| ______  _  __ \______ \ _____ _/  |______   )";
    H::foreColor(3); H::gotoxy(50,3); cout<<R"( \   Y   / |  |/ __ \ \/ \/ /  |    |  \\__  \\   __\__  \  )";
    H::foreColor(4); H::gotoxy(50,4); cout<<R"(  \     /  |  \  ___/\     /   |    `   \/ __ \|  |  / __ \_)";
    H::foreColor(4); H::gotoxy(50,5); cout<<R"(   \___/   |__|\___  >\/\_/   /_______  (____  /__| (____  /)";
    H::foreColor(4); H::gotoxy(50,6); cout<<R"(                   \/                 \/     \/          \/ )";
    H::HLine(40,8,83,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewGameListDesign::ViewGame_Design(){
    H::drawBoxSingleLine(20,10,120,1,4);
    H::drawBoxDoubleLineWithBG(16,11,1,25,196);
    H::VLine(17,11,25,199,219);
    H::drawBoxDoubleLineWithBG(143,11,1,25,196);
    H::VLine(144,11,25,199,219);
    H::foreColor(7);
    //laebel
    H::gotoxy(40,11); cout<<"ID\t\t\tName\t\t\tTYPE\t\t\tRELEASE DATE";
    
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif