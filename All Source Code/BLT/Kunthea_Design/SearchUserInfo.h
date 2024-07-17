#ifndef __SearchUser__
#define __SearchUser__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchUser::SearchUserTxt()
{
    H::foreColor(3); H::gotoxy(42,1); cout<<R"(  _________                           .__       ____ ___                    )";
    H::foreColor(3); H::gotoxy(42,2); cout<<R"( /   _____/ ____ _____ _______   ____ |  |__   |    |   \______ ___________ )";
    H::foreColor(3); H::gotoxy(42,3); cout<<R"( \_____  \_/ __ \\__  \\_  __ \_/ ___\|  |  \  |    |   /  ___// __ \_  __ \)";
    H::foreColor(4); H::gotoxy(42,4); cout<<R"( /        \  ___/ / __ \|  | \/\  \___|   Y  \ |    |  /\___ \\  ___/|  | \/)";
    H::foreColor(4); H::gotoxy(42,5); cout<<R"(/_______  /\___  >____  /__|    \___  >___|  / |______//____  >\___  >__|  )";
    H::foreColor(4); H::gotoxy(42,6); cout<<R"(        \/     \/     \/            \/     \/               \/     \/       )";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchUser::SearchUser_Animation()
{
    //loading while searching
    for(int i=0; i<25; i++)
    {
        H::setcursor(0,0);
        H::gotoxy(65,20); H::foreColor(3); cout<<"Searching..."; 
        H::drawBoxSingleLine(65,21,28,1,3);
        H::gotoxy(89,20); H::foreColor(3); cout<<(i*4)+4<<"%";  H::delay(10);
        H::gotoxy(66+i,22); H::foreColor(3); cout<<">"; H::delay(10);
        H::foreColor(7);
    }
    H::clearBox(60,21,36,2,7);
    for(int i=0; i<7; i++)
    {
        H::VLine(25,12,i+1,i+1,221); H::delay(10);
        H::VLine(135,12,i+1,i+1,221); H::delay(10);
    }
    //label
    H::drawBoxDoubleLine(20,19,120,15,4);
    H::drawBoxDoubleLine(20,19,120,1,3);
    H::drawBoxDoubleLine(20,33,120,1,3);
    H::foreColor(3);H::gotoxy(20,20); cout<<"|ID|\t|Name|\t\t|USERNAME|\t\t|PASSWORD|\t    |HOUR|\t   |REMAIN HOUR|   \t|PRICE|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchUser::SearchUser_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Search By ID : ";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif