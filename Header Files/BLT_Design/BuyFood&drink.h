#ifndef __BUYFOODnDRINK_H__
#define __BUYFOODnDRINK_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::BuyFoodnDrink::BuyFoodnDrinkTxt()
{
    Design::TxtOutline(-12,-1,23,1);
    H::foreColor(7); H::gotoxy(36,2); cout<<R"(   ___                 ___               _                   ___      _       _        )";
    H::foreColor(7); H::gotoxy(36,3); cout<<R"(  / __\_   _ _   _    / __\__   ___   __| |   ___  _ __     /   \_ __(_)_ __ | | _____ )";
    H::foreColor(1); H::gotoxy(36,4); cout<<R"( /__\// | | | | | |  / _\/ _ \ / _ \ / _` |  / _ \| '__|   / /\ / '__| | '_ \| |/ / __|)";
    H::foreColor(7); H::gotoxy(36,5); cout<<R"(/ \/  \ |_| | |_| | / / | (_) | (_) | (_| | | (_) | |     / /_//| |  | | | | |   <\__ \)";
    H::foreColor(7); H::gotoxy(36,6); cout<<R"(\_____/\__,_|\__, | \/   \___/ \___/ \__,_|  \___/|_|    /___,' |_|  |_|_| |_|_|\_\___/)";
    H::foreColor(7); H::gotoxy(36,7); cout<<R"(             |___/                                                                     )";
} 
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void  BLT::BuyFoodnDrink::buyFoodnDrink_Design()
{
    H::foreColor(4); H::gotoxy(64,15); cout<<R"(/\     __)";
    H::foreColor(4); H::gotoxy(64,16); cout<<R"(  \ .-':::.)";
    H::foreColor(4); H::gotoxy(64,17); cout<<R"(   \ :::::|\)";
    H::foreColor(4); H::gotoxy(64,18); cout<<R"(  |,\:::'/  \)";
    H::foreColor(4); H::gotoxy(64,19); cout<<R"(  `.:::-'    \)";
    H::foreColor(4); H::gotoxy(64,20); cout<<R"(    `-.       \   )";H::foreColor(6); cout<<R"(      ___)";
    H::foreColor(4); H::gotoxy(64,21); cout<<R"(       `-.     |  )";H::foreColor(6); cout<<R"(   .-'';:::.)";
    H::foreColor(4); H::gotoxy(64,22); cout<<R"(          `-.-'   )";H::foreColor(6); cout<<R"(  / ',''.;;;\)";
    H::foreColor(6); H::gotoxy(64,23); cout<<R"(                   |  ','','.''|)";
    H::foreColor(6); H::gotoxy(64,24); cout<<R"(                   |\  ' ,',' /)";
    H::foreColor(6); H::gotoxy(64,25); cout<<R"(                   `.`-.___.-;')";
    H::foreColor(6); H::gotoxy(64,26); cout<<R"(                     `--._.-')";

    H::drawBoxSingleLineWithBG(10,20,24,1,153);//id
    H::drawBoxSingleLineWithBG(10,24,24,1,153);//qty

    H::setcolor(151); H::gotoxy(10,21);
    cout << "Food or Drink ID :";
    H::setcolor(151); H::gotoxy(10,25);
    cout << "QTY of Item      :";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::BuyFoodnDrink::buyFoodnDrink_Animation(int color)
{
    for (int i = 1 ; i <= color ; i ++)
    {
// 
        H::HLine(40,12,60,i,223);

        H::HLine(60,13,50,i+1,223);

        H::HLine(70,14,50,i,223);

        H::HLine(80,15,50,i+1,223);

        H::HLine(90,16,50,i,223);

        H::HLine(100,17,50,i+1,223);

        H::HLine(110,18,40,i,223);
//
        H::HLine(110,28,40,i,223);

        H::HLine(100,29,50,i+1,223);

        H::HLine(90,30,50,i,223);

        H::HLine(80,31,50,i+1,223);

        H::HLine(70,32,50,i,223);

        H::HLine(60,33,50,i+1,223);

        H::HLine(40,34,60,i,223);
        
        H::delay(100);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif