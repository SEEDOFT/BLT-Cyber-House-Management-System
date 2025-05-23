#ifndef __SEARCHDESIGN_H__
#define __SEARCHDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchDesign::SearchTxt()
{
    Design::TxtOutline(-15,0,30,1);
    H::foreColor(7); H::gotoxy(33,3); cout<<R"( __                     _         ___               _                   ___      _       _    )";
    H::foreColor(7); H::gotoxy(33,4); cout<<R"(/ _\ ___  __ _ _ __ ___| |__     / __\__   ___   __| |   ___  _ __     /   \_ __(_)_ __ | | __)";
    H::foreColor(1); H::gotoxy(33,5); cout<<R"(\ \ / _ \/ _` | '__/ __| '_ \   / _\/ _ \ / _ \ / _` |  / _ \| '__|   / /\ / '__| | '_ \| |/ /)";
    H::foreColor(7); H::gotoxy(33,6); cout<<R"(_\ \  __/ (_| | | | (__| | | | / / | (_) | (_) | (_| | | (_) | |     / /_//| |  | | | | |   < )";
    H::foreColor(7); H::gotoxy(33,7); cout<<R"(\__/\___|\__,_|_|  \___|_| |_| \/   \___/ \___/ \__,_|  \___/|_|    /___,' |_|  |_|_| |_|_|\_\)";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchDesign::Search_Animation()
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
    H::gotoxy(35,20); H::foreColor(3); cout<<"|ID|\t\t\t|Name|\t\t\t\t|QTY|\t\t\t\t|Price|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchDesign::Search_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Search By ID : ";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif