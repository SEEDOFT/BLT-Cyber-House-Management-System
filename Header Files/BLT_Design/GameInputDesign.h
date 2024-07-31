#ifndef __GAMEINPUTDESIGN_H__
#define __GAMEINPUTDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameInputDesign::InputGameTxt()
{
    Design::TxtOutline(-9,-1,19,1);
    H::foreColor(7); H::gotoxy(39,2); cout<<R"(  _____                   _       ___                          ___      _        )";
    H::foreColor(7); H::gotoxy(39,3); cout<<R"(  \_   \_ __  _ __  _   _| |_    / _ \__ _ _ __ ___   ___     /   \__ _| |_ __ _ )";
    H::foreColor(1); H::gotoxy(39,4); cout<<R"(   / /\/ '_ \| '_ \| | | | __|  / /_\/ _` | '_ ` _ \ / _ \   / /\ / _` | __/ _` |)";
    H::foreColor(7); H::gotoxy(39,5); cout<<R"(/\/ /_ | | | | |_) | |_| | |_  / /_\\ (_| | | | | | |  __/  / /_// (_| | || (_| |)";
    H::foreColor(7); H::gotoxy(39,6); cout<<R"(\____/ |_| |_| .__/ \__,_|\__| \____/\__,_|_| |_| |_|\___| /___,' \__,_|\__\__,_|)";
    H::foreColor(7); H::gotoxy(39,7); cout<<R"(             |_|                                                                 )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameInputDesign::InputGame_Design()
{
    H::drawBoxDoubleLineWithBG(30,10,100,1,196);

    for(int i=0; i<3; i++)
    {
        H::VLine(70,12,i+1,7,221); H::delay(20);
        H::VLine(90,12,i+1,7,221); H::delay(20);
    }

    H::foreColor(199); H::gotoxy(58,11); cout<<"\3\3 Welcome to BTL Cyber House Game Input \3\3";

    H::drawBoxDoubleLineWithBG(30,16,100,20,187);
    H::drawBoxDoubleLineWithBG(35,17,30,15,196);
    H::drawBoxDoubleLineWithBG(95,17,30,15,196);

    H::drawBoxDoubleLineWithBG(37,18,26,1,183);
    H::drawBoxDoubleLineWithBG(37,22,26,1,183);
    H::drawBoxDoubleLineWithBG(37,26,26,1,183);
    H::drawBoxDoubleLineWithBG(37,30,26,1,183);

    H::drawBoxDoubleLineWithBG(97,18,26,1,183);
    H::drawBoxDoubleLineWithBG(97,22,26,1,183);
    H::drawBoxDoubleLineWithBG(97,26,26,1,183);
    H::drawBoxDoubleLineWithBG(97,30,26,1,183);

    //label
    H::foreColor(185); H::gotoxy(39,19); cout<<"ID    ";
    H::foreColor(185); H::gotoxy(39,23); cout<<"Name  ";
    H::foreColor(185); H::gotoxy(39,27); cout<<"Type   ";
    H::foreColor(185); H::gotoxy(39,31); cout<<"Release Date ";

    H::foreColor(183); H::gotoxy(39,18); cout<<">.<";
    H::foreColor(183); H::gotoxy(39,22); cout<<">.<";
    H::foreColor(183); H::gotoxy(39,26); cout<<">.<";
    H::foreColor(183); H::gotoxy(39,30); cout<<">.<";

    H::foreColor(183); H::gotoxy(99,18); cout<<">.<";
    H::foreColor(183); H::gotoxy(99,22); cout<<">.<";
    H::foreColor(183); H::gotoxy(99,26); cout<<">.<";
    H::foreColor(183); H::gotoxy(99,30); cout<<">.<";

    H::HLine(50,35,60,183,205);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif
