#ifndef __FOODMENUFORM_H__
#define __FOODMENUFORM_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::FoodMenu::FoodMenu_Design(int color)
{
    H::drawBoxSingleLine(18,13,34,22,color+2);
    H::drawBoxSingleLine(20,14,30,20,color++);

    H::drawBoxSingleLine(108,13,34,22,color+2);
    H::drawBoxSingleLine(110,14,30,20,color++);

    H::gotoxy(22,22); H::foreColor(color); cout<< R"( _____________,-.___   _)";
    H::gotoxy(22,23); H::foreColor(color); cout<< R"(|____        { {]_]_] [_])";
    H::gotoxy(22,24); H::foreColor(color); cout<< R"(|___ `-----.__\ \_]_]_  . `)";
    H::gotoxy(22,25); H::foreColor(color); cout<< R"(|   `-----.____} }]_]_]_ ,)";
    H::gotoxy(22,26); H::foreColor(color); cout<< R"(|_____________/ {_]_]_]_] ,)";
    H::gotoxy(22,27); H::foreColor(color); cout<< R"(                   `-')";

    H::gotoxy(112,16); H::foreColor(color); cout<< R"(     ()      ()    /)"; 
    H::gotoxy(112,17); H::foreColor(color); cout<< R"(          ()  ()  /)"; 
    H::gotoxy(112,18); H::foreColor(color); cout<< R"(   ______________/___)"; 
    H::gotoxy(112,19); H::foreColor(color); cout<< R"(   \            /   /)"; 
    H::gotoxy(112,20); H::foreColor(color); cout<< R"(    \^^^^^^^^^^/^^^/)";
    H::gotoxy(112,21); H::foreColor(color); cout<< R"(     \     ___/   /)"; 
    H::gotoxy(112,22); H::foreColor(color); cout<< R"(      \   (   )  /)"; 
    H::gotoxy(112,23); H::foreColor(color); cout<< R"(       \  (___) /)"; 
    H::gotoxy(112,24); H::foreColor(color); cout<< R"(        \ /    /)"; 
    H::gotoxy(112,25); H::foreColor(color); cout<< R"(         \    /)"; 
    H::gotoxy(112,26); H::foreColor(color); cout<< R"(          \  /)"; 
    H::gotoxy(112,27); H::foreColor(color); cout<< R"(           \/)"; 
    H::gotoxy(112,28); H::foreColor(color); cout<< R"(           ||)"; 
    H::gotoxy(112,29); H::foreColor(color); cout<< R"(           ||)"; 
    H::gotoxy(112,30); H::foreColor(color); cout<< R"(           /\)"; 
    H::gotoxy(112,31); H::foreColor(color); cout<< R"(          /;;\)"; 
    H::gotoxy(112,32); H::foreColor(color); cout<< R"(     ==============)"; 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::FoodMenu::FoodMenuTxt()
{
    Design::TxtOutline(-5,0,10,1);
    H::foreColor(7); H::gotoxy(43,3); cout<<R"(   ___               _                   _      ___      _       _        )";
    H::foreColor(7); H::gotoxy(43,4); cout<<R"(  / __\__   ___   __| |   __ _ _ __   __| |    /   \_ __(_)_ __ | | _____ )";
    H::foreColor(1); H::gotoxy(43,5); cout<<R"( / _\/ _ \ / _ \ / _` |  / _` | '_ \ / _` |   / /\ / '__| | '_ \| |/ / __|)";
    H::foreColor(7); H::gotoxy(43,6); cout<<R"(/ / | (_) | (_) | (_| | | (_| | | | | (_| |  / /_//| |  | | | | |   <\__ \)";
    H::foreColor(7); H::gotoxy(43,7); cout<<R"(\/   \___/ \___/ \__,_|  \__,_|_| |_|\__,_| /___,' |_|  |_|_| |_|_|\_\___/)";                        
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif