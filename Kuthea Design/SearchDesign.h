#ifndef __SEARCHDESIGN_H__
#define __SEARCHDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void THEA::SearchDesign::SearchTxt()
{
    H::foreColor(3); H::gotoxy(40,1); cout<<R"(  _________                           .__      ________          __          )";
    H::foreColor(3); H::gotoxy(40,2); cout<<R"( /   _____/ ____ _____ _______   ____ |  |__   \______ \ _____ _/  |______   )";
    H::foreColor(3); H::gotoxy(40,3); cout<<R"( \_____  \_/ __ \\__  \\_  __ \_/ ___\|  |  \   |    |  \\__  \\   __\__  \  )";
    H::foreColor(4); H::gotoxy(40,4); cout<<R"( /        \  ___/ / __ \|  | \/\  \___|   Y  \  |    `   \/ __ \|  |  / __ \_)";
    H::foreColor(5); H::gotoxy(40,5); cout<<R"(/_______  /\___  >____  /__|    \___  >___|  / /_______  (____  /__| (____  /)";
    H::foreColor(6); H::gotoxy(40,6); cout<<R"(        \/     \/     \/            \/     \/          \/     \/          \/ )";
    H::HLine(30,8,100,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void THEA::SearchDesign::Search_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(199); H::gotoxy(75,17); cout<<"Search: ";
    H::foreColor(7);
    //loading while searching
    for(int i=0; i<25; i++){
        H::setcursor(0,0);
        H::gotoxy(65,20); H::foreColor(3); cout<<"Searching..."; 
        H::drawBoxSingleLine(65,21,28,1,3);
        H::gotoxy(89,20); H::foreColor(3); cout<<(i*4)+4<<"%";  H::delay(100);
        H::gotoxy(66+i,22); H::foreColor(3); cout<<">"; H::delay(100);
        H::foreColor(7);
    }
    H::clearBox(60,21,36,2,7);
    for(int i=0; i<7; i++){
        H::VLine(25,12,i+1,i+1,221); H::delay(100);
        H::VLine(135,12,i+1,i+1,221); H::delay(100);
    }
    //label
    H::drawBoxDoubleLine(20,19,120,15,4);
    H::drawBoxDoubleLine(20,19,120,1,3);
    H::drawBoxDoubleLine(20,33,120,1,3);
    H::gotoxy(40,20); H::foreColor(3); cout<<"ID\t\t\t Name \t\t\t QTY \t\t\t      Price";
    H::gotoxy(58,34); H::foreColor(3); cout<<"Press [ENTER] To Continues Or [ESC] To Exit";
    H::foreColor(7);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif