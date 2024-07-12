#ifndef __DELETEDESIGN_H__
#define __DELETEDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::DeleteDesign::DeleteTxt()
{
    H::foreColor(3); H::gotoxy(43,1); cout<<R"(________         .__          __           ________          __          )";
    H::foreColor(3); H::gotoxy(43,2); cout<<R"(\______ \   ____ |  |   _____/  |_  ____   \______ \ _____ _/  |______   )";
    H::foreColor(3); H::gotoxy(43,3); cout<<R"( |    |  \_/ __ \|  | _/ __ \   __\/ __ \   |    |  \\__  \\   __\__  \  )";
    H::foreColor(4); H::gotoxy(43,4); cout<<R"( |    `   \  ___/|  |_\  ___/|  | \  ___/   |    `   \/ __ \|  |  / __ \_)";
    H::foreColor(4); H::gotoxy(43,5); cout<<R"(/_______  /\___  >____/\___  >__|  \___  > /_______  (____  /__| (____  /)";
    H::foreColor(4); H::gotoxy(43,6); cout<<R"(        \/     \/          \/          \/          \/     \/          \/ )";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::DeleteDesign::Delete_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Delete By ID : ";
    H::foreColor(7);
    //loading while searching
    for(int i=0; i<25; i++)
    {
        H::setcursor(0,0);
        H::gotoxy(65,20); H::foreColor(3); cout<<"Deleting..."; 
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
    H::gotoxy(35,20); H::foreColor(3); cout<<"|ID|\t\t\t|Name|\t\t\t\t|QTY|\t\t\t\t|Price|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif