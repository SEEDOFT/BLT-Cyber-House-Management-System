#ifndef __SEARCHGAMEDESIGN_H__
#define __SEARCHGAMEDESIGN_H__
#include"All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchGameDesign::SearchGameTxt()
{
    Design::TxtOutline(-9,0,16,1);
    H::foreColor(7); H::gotoxy(39,3); cout<<R"( __                     _         ___                          ___      _        )";
    H::foreColor(7); H::gotoxy(39,4); cout<<R"(/ _\ ___  __ _ _ __ ___| |__     / _ \__ _ _ __ ___   ___     /   \__ _| |_ __ _ )";
    H::foreColor(1); H::gotoxy(39,5); cout<<R"(\ \ / _ \/ _` | '__/ __| '_ \   / /_\/ _` | '_ ` _ \ / _ \   / /\ / _` | __/ _` |)";
    H::foreColor(7); H::gotoxy(39,6); cout<<R"(_\ \  __/ (_| | | | (__| | | | / /_\\ (_| | | | | | |  __/  / /_// (_| | || (_| |)";
    H::foreColor(7); H::gotoxy(39,7); cout<<R"(\__/\___|\__,_|_|  \___|_| |_| \____/\__,_|_| |_| |_|\___| /___,' \__,_|\__\__,_|)";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchGameDesign::SearchGame_Animation()
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

    H::gotoxy(35,20); cout<<"|ID|\t\t\t|Name|\t\t\t\t|TYPE|\t\t\t|RELEASE DATE|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchGameDesign::SearchGame_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Search By ID : ";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif