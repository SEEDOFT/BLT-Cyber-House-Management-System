#ifndef __UPDATEGAMEDESIGN_H__
#define __UPDATEGAMEDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UpdateGameDesign::UpdateGameTxt()
{
    Design::TxtOutline(-10,-1,20,1);
    H::foreColor(7); H::gotoxy(38,2); cout<<R"(                 _       _           ___                          ___      _        )";
    H::foreColor(7); H::gotoxy(38,3); cout<<R"( /\ /\ _ __   __| | __ _| |_ ___    / _ \__ _ _ __ ___   ___     /   \__ _| |_ __ _ )";
    H::foreColor(1); H::gotoxy(38,4); cout<<R"(/ / \ \ '_ \ / _` |/ _` | __/ _ \  / /_\/ _` | '_ ` _ \ / _ \   / /\ / _` | __/ _` |)";
    H::foreColor(7); H::gotoxy(38,5); cout<<R"(\ \_/ / |_) | (_| | (_| | ||  __/ / /_\\ (_| | | | | | |  __/  / /_// (_| | || (_| |)";
    H::foreColor(7); H::gotoxy(38,6); cout<<R"( \___/| .__/ \__,_|\__,_|\__\___| \____/\__,_|_| |_| |_|\___| /___,' \__,_|\__\__,_|)";
    H::foreColor(7); H::gotoxy(38,7); cout<<R"(      |_|                                                                           )";
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