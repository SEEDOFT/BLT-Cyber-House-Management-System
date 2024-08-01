#ifndef __INPUTFOODNDRINKDESIGN_H__
#define __INPUTFOODNDRINKDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::InputDesign::InputTxt()
{
    Design::TxtOutline(-15,-1,30,1);
    H::foreColor(7); H::gotoxy(33,2); cout<<R"(  _____                   _       ___               _                   ___      _       _    )";
    H::foreColor(7); H::gotoxy(33,3); cout<<R"(  \_   \_ __  _ __  _   _| |_    / __\__   ___   __| |   ___  _ __     /   \_ __(_)_ __ | | __)";
    H::foreColor(1); H::gotoxy(33,4); cout<<R"(   / /\/ '_ \| '_ \| | | | __|  / _\/ _ \ / _ \ / _` |  / _ \| '__|   / /\ / '__| | '_ \| |/ /)";
    H::foreColor(7); H::gotoxy(33,5); cout<<R"(/\/ /_ | | | | |_) | |_| | |_  / / | (_) | (_) | (_| | | (_) | |     / /_//| |  | | | | |   < )";
    H::foreColor(7); H::gotoxy(33,6); cout<<R"(\____/ |_| |_| .__/ \__,_|\__| \/   \___/ \___/ \__,_|  \___/|_|    /___,' |_|  |_|_| |_|_|\_\)";
    H::foreColor(7); H::gotoxy(33,7); cout<<R"(             |_|                                                                              )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::InputDesign::Input_Design()
{
    H::drawBoxDoubleLineWithBG(30,10,100,1,196);

    for(int i=0; i<3; i++)
    {
        H::VLine(70,12,i+1,7,221); H::delay(10);
        H::VLine(90,12,i+1,7,221); H::delay(10);
    }

    H::foreColor(199); H::gotoxy(54,11); cout<<"\3\3 Welcome to BTL Cyber House Food or Drink Input \3\3";

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
    H::foreColor(185); H::gotoxy(39,27); cout<<"QTY   ";
    H::foreColor(185); H::gotoxy(39,31); cout<<"Price ($) ";

    H::foreColor(185); H::gotoxy(39,18); cout<<">.<";
    H::foreColor(185); H::gotoxy(39,22); cout<<">.<";
    H::foreColor(185); H::gotoxy(39,26); cout<<">.<";
    H::foreColor(185); H::gotoxy(39,30); cout<<">.<";

    H::foreColor(185); H::gotoxy(99,18); cout<<">.<";
    H::foreColor(185); H::gotoxy(99,22); cout<<">.<";
    H::foreColor(185); H::gotoxy(99,26); cout<<">.<";
    H::foreColor(185); H::gotoxy(99,30); cout<<">.<";

    H::HLine(50,35,60,183,205);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif