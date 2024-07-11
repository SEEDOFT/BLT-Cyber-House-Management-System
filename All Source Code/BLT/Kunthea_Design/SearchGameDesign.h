#ifndef __SEARCHGAMEDESIGN_H__
#define __SEARCHGAMEDESIGN_H__
#include"kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchGameDesign::SearchGameTxt()
{
    H::foreColor(3); H::gotoxy(40,1); cout<<R"(  _________                           .__        ________                       )";
    H::foreColor(3); H::gotoxy(40,2); cout<<R"( /   _____/ ____ _____ _______   ____ |  |__    /  _____/_____    _____   ____  )";
    H::foreColor(3); H::gotoxy(40,3); cout<<R"( \_____  \_/ __ \\__  \\_  __ \_/ ___\|  |  \  /   \  ___\__  \  /     \_/ __ \ )";
    H::foreColor(4); H::gotoxy(40,4); cout<<R"( /        \  ___/ / __ \|  | \/\  \___|   Y  \ \    \_\  \/ __ \|  Y Y  \  ___/ )";
    H::foreColor(4); H::gotoxy(40,5); cout<<R"(/_______  /\___  >____  /__|    \___  >___|  /  \______  (____  /__|_|  /\___  >)";
    H::foreColor(4); H::gotoxy(40,6); cout<<R"(        \/     \/     \/            \/     \/          \/     \/      \/     \/ )";
    H::HLine(20,8,120,7,196);

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchGameDesign::SearchGame_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Search By ID: ";
    H::foreColor(7);
    //loading while searching
    for(int i=0; i<25; i++){
        H::setcursor(0,0);
        H::gotoxy(65,20); H::foreColor(3); cout<<"Searching..."; 
        H::drawBoxSingleLine(65,21,28,1,3);
        H::gotoxy(89,20); H::foreColor(3); cout<<(i*4)+4<<"%";  H::delay(10);
        H::gotoxy(66+i,22); H::foreColor(3); cout<<">"; H::delay(10);
        H::foreColor(7);
    }
    H::clearBox(60,21,36,2,7);
    for(int i=0; i<7; i++){
        H::VLine(25,12,i+1,i+1,221); H::delay(10);
        H::VLine(135,12,i+1,i+1,221); H::delay(10);
    }
    //label
    H::drawBoxDoubleLine(20,19,120,15,4);
    H::drawBoxDoubleLine(20,19,120,1,3);
    H::drawBoxDoubleLine(20,33,120,1,3);
    H::gotoxy(40,20); cout<<"|ID|\t\t\t|Name|\t\t\t|TYPE|\t\t\t|RELEASE DATE|";
    H::gotoxy(58,34); H::foreColor(3); cout<<"Press";H::setcolor(4);cout<<" [ENTER]";H::setcolor(3);cout<<" To Continues Or ";H::setcolor(4);cout<<"[ESC]";H::setcolor(3);cout<<" To Exit";
    H::foreColor(7);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif