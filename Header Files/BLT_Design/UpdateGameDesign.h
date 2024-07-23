#ifndef __UPDATEGAMEDESIGN_H__
#define __UPDATEGAMEDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UpdateGameDesign::UpdateGameTxt()
{
    H::foreColor(3); H::gotoxy(41,1); cout<<R"( ____ ___            .___       __             ________                       )";
    H::foreColor(3); H::gotoxy(41,2); cout<<R"(|    |   \______   __| _/____ _/  |_  ____    /  _____/_____    _____   ____  )";
    H::foreColor(3); H::gotoxy(41,3); cout<<R"(|    |   /\____ \ / __ |\__  \\   __\/ __ \  /   \  ___\__  \  /     \_/ __ \ )";
    H::foreColor(4); H::gotoxy(41,4); cout<<R"(|    |  / |  |_> > /_/ | / __ \|  | \  ___/  \    \_\  \/ __ \|  Y Y  \  ___/ )";
    H::foreColor(4); H::gotoxy(41,5); cout<<R"(|______/  |   __/\____ |(____  /__|  \___  >  \______  (____  /__|_|  /\___  >)";
    H::foreColor(4); H::gotoxy(41,6); cout<<R"(          |__|        \/     \/          \/          \/     \/      \/     \/ )";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UpdateGameDesign::UpdateGame_Animation()
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

    H::HLine(30,21,100,7,196);
    H::drawBoxDoubleLine(20,19,120,4,3);
    H::drawBoxDoubleLine(20,33,120,1,3);

    H::gotoxy(35,20); H::foreColor(3); cout<<"|ID|\t\t\t|Name|\t\t\t\t|TYPE|\t\t\t|RELEASE DATE|";

    for(int i=0; i<7; i++)
    {
        H::VLine(70,24,3,i+1,221); H::delay(10);
        H::VLine(90,24,3,i+1,221); H::delay(10);
    }
    H::drawBoxSingleLineWithBG(65,28,28,1,4);
    H::foreColor(199); H::gotoxy(75,29); cout<<"New DATA";
    for(int i=0; i<9; i++){
        H::VLine(35,24,i+1,i+1,221); H::delay(10);
        H::VLine(125,24,i+1,i+1,221); H::delay(10);
    }

    H::drawBoxDoubleLine(20,33,120,4,3);
    H::gotoxy(35,34); H::foreColor(3); cout<<"|ID|\t\t\t|Name|\t\t\t\t|TYPE|\t\t\t|RELEASE DATE|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UpdateGameDesign::UpdateGame_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Update By ID : ";
    
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif