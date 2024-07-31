#ifndef __VIEWGAMEDESIGN_H__
#define __VIEWGAMEDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewGameListDesign::ViewGameTxt()
{
    Design::TxtOutline(-8,0,15,1);
    H::foreColor(7); H::gotoxy(40,3); cout<<R"(       _                   ___                               ___      _        )";
    H::foreColor(7); H::gotoxy(40,4); cout<<R"(/\   /(_) _____      __   / _ \__ _ _ __ ___   ___  ___     /   \__ _| |_ __ _ )";
    H::foreColor(1); H::gotoxy(40,5); cout<<R"(\ \ / / |/ _ \ \ /\ / /  / /_\/ _` | '_ ` _ \ / _ \/ __|   / /\ / _` | __/ _` |)";
    H::foreColor(7); H::gotoxy(40,6); cout<<R"( \ V /| |  __/\ V  V /  / /_\\ (_| | | | | | |  __/\__ \  / /_// (_| | || (_| |)";
    H::foreColor(7); H::gotoxy(40,7); cout<<R"(  \_/ |_|\___| \_/\_/   \____/\__,_|_| |_| |_|\___||___/ /___,' \__,_|\__\__,_|)";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewGameListDesign::ViewGame_Design()
{
    H::drawBoxDoubleLineWithBG(20,10,120,1,183);
    H::drawBoxDoubleLineWithBG(16,11,1,25,196);
    H::VLine(17,11,25,199,219);
    H::drawBoxDoubleLineWithBG(143,11,1,25,196);
    H::VLine(144,11,25,199,219);
    //laebel
    H::setcolor(185);H::gotoxy(35,11); cout<<"|ID|\t\t\t|Name|\t\t\t\t|TYPE|\t\t\t|RELEASE DATE|";
    H::setcolor(7);
    
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif