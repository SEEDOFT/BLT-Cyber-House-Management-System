#ifndef __LOGOUTDESIGN_H__
#define __LOGOUTDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ExitDesign::ExitTxt()
{
    int delay = 50;
    Design::TxtOutline(-7,-1,14,1);
    H::foreColor(7); H::gotoxy(41,2); cout<<R"(   __      _ _     _   _              ___                                     )"; H::delay(delay);
    H::foreColor(7); H::gotoxy(41,3); cout<<R"(  /__\_  _(_) |_  | |_| |__   ___    / _ \_ __ ___   __ _ _ __ __ _ _ __ ___  )"; H::delay(delay);
    H::foreColor(1); H::gotoxy(41,4); cout<<R"( /_\ \ \/ / | __| | __| '_ \ / _ \  / /_)/ '__/ _ \ / _` | '__/ _` | '_ ` _ \ )"; H::delay(delay);
    H::foreColor(7); H::gotoxy(41,5); cout<<R"(//__  >  <| | |_  | |_| | | |  __/ / ___/| | | (_) | (_| | | | (_| | | | | | |)"; H::delay(delay);
    H::foreColor(7); H::gotoxy(41,6); cout<<R"(\__/ /_/\_\_|\__|  \__|_| |_|\___| \/    |_|  \___/ \__, |_|  \__,_|_| |_| |_|)"; H::delay(delay);
    H::foreColor(7); H::gotoxy(41,7); cout<<R"(                                                    |___/                     )"; H::delay(delay);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ExitDesign::Exit_Design()
{
    for(int i = 1 ; i <= 60 ; i ++)
    {
        //top
        H::HLine(10+10,5+5,i,7,205);
        H::HLine(10+130-i,5+5,1,7,205);

        //bot
        H::HLine(10+10,5+19,i,7,205);
        H::HLine(10+130-i,5+19,1,7,205);
    }

    //connect ascii code
    H::gotoxy(10+10,5+5);cout<<char(201);//left to down
    H::gotoxy(10+10,5+19);cout<<char(200);//down to right
    H::gotoxy(10+130,5+5);cout<<char(187);//right to down
    H::gotoxy(10+130,5+19);cout<<char(188);//down to left

    for(int i = 1 ; i <= 7 ; i ++)
    {
        //left
        H::VLine(10+11,5+5,i,7,186);H::delay(10);
        H::VLine(10+11,5+18-i,1,7,186);H::delay(10);

        //right
        H::VLine(10+131,5+5,i,7,186);H::delay(10);
        H::VLine(10+131,5+18-i,1,7,186);H::delay(10);
    }

    char exit1[] = "Thank you for using our application.";
    char exit2[] ="We are here to make your experience even better.";
    char exit3[] = "Wishing you endless enjoyment and productivity as you continue using our application.";

    Design::charLoop(sizeof(exit1), 62, 13, 1, exit1, 5);
    Design::charLoop(sizeof(exit2), 56, 15, 4, exit2, 5);
    Design::charLoop(sizeof(exit3), 37, 17, 23, exit3, 5);

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif