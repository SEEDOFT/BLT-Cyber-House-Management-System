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
        H::HLine(10+10,5+16,i,7,205);
        H::HLine(10+130-i,5+16,1,7,205);
    }

    //connect ascii code
    H::gotoxy(10+10,5+5);cout<<char(201);//left to down
    H::gotoxy(10+10,5+16);cout<<char(200);//down to right
    H::gotoxy(10+130,5+5);cout<<char(187);//right to down
    H::gotoxy(10+130,5+16);cout<<char(188);//down to left

    for(int i = 1 ; i <= 5 ; i ++)
    {
        //left
        H::VLine(10+11,5+5,i,7,186);H::delay(10);
        H::VLine(10+11,5+15-i,1,7,186);H::delay(10);

        //right
        H::VLine(10+131,5+5,i,7,186);H::delay(10);
        H::VLine(10+131,5+15-i,1,7,186);H::delay(10);
    }

    char exit1[] = "Thank you for using our application.";
    char exit2[] ="We are here to make your experience even better.";
    char exit3[] = "Wishing you endless enjoyment and productivity as you continue using our application.";

    Design::charLoop(sizeof(exit1), 62, 13, 1, exit1, 5);
    Design::charLoop(sizeof(exit2), 56, 15, 4, exit2, 5);
    Design::charLoop(sizeof(exit3), 37, 17, 23, exit3, 5);

    H::setcolor(1);
    H::gotoxy(70, 38);cout << "Press ";
    H::setcolor(4);cout << "[ANY]";
    H::setcolor(1);cout << " key to exit";H::delay(999);

    int i = 100;

    while(!kbhit())
    {
        H::setcolor(6); H::gotoxy(i, 26); cout << R"(      \ | / )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 27); cout << R"(     -- o -- )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 28); cout << R"(      / | \ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 29); cout << R"(   _      _      _      _      _      _      _ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 30); cout << R"(\/'-'\/\/'-'\/\/'-'\/\/'-'\/\/'_'\/\/'-'\/\/'-'\/ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 31); cout << R"( \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 32); cout << R"(  / \    / \    / \    / \    / \    / \    / \ )"; H::setcolor(7); cout << "    ";
        H::delay(200);
        H::setcolor(6); H::gotoxy(i, 26); cout << R"(      \ | / )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 27); cout << R"(     -- o -- )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 28); cout << R"(      / | \ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 29); cout << R"(   _      _      _      _      _      _      _ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 30); cout << R"(\/'-'\/\/'-'\/\/'-'\/\/'-'\/\/'_'\/\/'-'\/\/'-'\/ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 31); cout << R"( \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 32); cout << R"(  | \    | \    | \    | \    | \    | \    | \ )"; H::setcolor(7); cout << "    ";
        H::delay(200);
        H::setcolor(6); H::gotoxy(i, 26); cout << R"(      \ | / )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 27); cout << R"(     -- o -- )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 28); cout << R"(      / | \ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 29); cout << R"(   _      _      _      _      _      _      _ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 30); cout << R"(\/'-'\/\/'-'\/\/'-'\/\/'-'\/\/'_'\/\/'-'\/\/'-'\/ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 31); cout << R"( \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 32); cout << R"(  | |    | |    | |    | |    | |    | |    | | )"; H::setcolor(7); cout << "    ";
        H::delay(200);
        H::setcolor(6); H::gotoxy(i, 26); cout << R"(      \ | / )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 27); cout << R"(     -- o -- )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 28); cout << R"(      / | \ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 29); cout << R"(   _      _      _      _      _      _      _ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 30); cout << R"(\/'-'\/\/'-'\/\/'-'\/\/'-'\/\/'_'\/\/'-'\/\/'-'\/ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 31); cout << R"( \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/ )"; H::setcolor(7); cout << "    ";
        H::setcolor(6); H::gotoxy(i, 32); cout << R"(  / |    / |    / |    / |    / |    / |    / | )"; H::setcolor(7); cout << "    ";
        H::delay(200);

        i-=3; 
        if(i < 10 )
        {
            H::clearBox(10,26,50,7,7);
            i = 100;
        } 
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif