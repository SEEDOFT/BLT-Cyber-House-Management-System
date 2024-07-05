#ifndef __GAMEMENUFORM_H__
#define __GAMEMENUFORM_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameMenu::GameMenuTxt()
{
    H::foreColor(4); H::gotoxy(38,1); cout<<R"(  ________                           _____                       )";
    H::foreColor(4); H::gotoxy(38,2); cout<<R"( /  _____/_____    _____   ____     /     \   ____   ____  __ __ )";
    H::foreColor(4); H::gotoxy(38,3); cout<<R"(/   \  ___\__  \  /     \_/ __ \   /  \ /  \_/ __ \ /    \|  |  \)";
    H::foreColor(2); H::gotoxy(38,4); cout<<R"(\    \_\  \/ __ \|  Y Y  \  ___/  /    Y    \  ___/|   |  \  |  /)";
    H::foreColor(2); H::gotoxy(38,5); cout<<R"( \______  (____  /__|_|  /\___  > \____|__  /\___  >___|  /____/ )";
    H::foreColor(2); H::gotoxy(38,6); cout<<R"(        \/     \/      \/     \/          \/     \/     \/       )";

    H::HLine(35,8,70,4,178);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameMenu::CyberTxt()
{
    H::foreColor(199); H::gotoxy(52,21); cout<<R"(_________        ___.                 )";
    H::foreColor(199); H::gotoxy(52,22); cout<<R"(\_   ___ \___.__.\_ |__   ___________ )";
    H::foreColor(199); H::gotoxy(52,23); cout<<R"(/    \  \<   |  | | __ \_/ __ \_  __ \)";
    H::foreColor(199); H::gotoxy(52,24); cout<<R"(\     \___\___  | | \_\ \  ___/|  | \/)";
    H::foreColor(199); H::gotoxy(52,25); cout<<R"( \______  / ____| |___  /\___  >__|   )";
    H::foreColor(199); H::gotoxy(52,26); cout<<R"(        \/\/          \/     \/       )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameMenu::Header_Design()
{
    H:: drawBoxDoubleLineWithBG(20,10,100,1,196);
    H::VLine(30,12,3,7,219);
    H::VLine(110,12,3,7,219);
    H::drawBoxDoubleLineWithBG(25,16,90,15,145);
    H::drawBoxDoubleLineWithBG(49,16,42,15,196);
    H::VLine(40,32,2,7,219);
    H::VLine(100,32,2,7,219);
    H::drawBoxDoubleLineWithBG(30,35,80,1,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameMenu::GameMenu_Design()
{
    H::drawBoxDoubleLineWithBG(27,18,18,1,23);
    H::drawBoxDoubleLineWithBG(27,23,18,1,23);
    H::drawBoxDoubleLineWithBG(27,28,18,1,23);

    H::drawBoxDoubleLineWithBG(95,18,18,1,23);
    H::drawBoxDoubleLineWithBG(95,23,18,1,23);

    H::foreColor(23); H::gotoxy(32,19); cout<<"ADD GAME";
    H::foreColor(23); H::gotoxy(31,24); cout<<"VIEW GAME";
    H::foreColor(23); H::gotoxy(31,29); cout<<"SEARCH GAME";
    
    H::foreColor(23); H::gotoxy(98,19); cout<<"REMOVE GAME";
    H::foreColor(23); H::gotoxy(102,24); cout<<"BACK";
    H::foreColor(151); H::gotoxy(94,29); cout<<"PRESS [UP] [DOWN] KEY";
       
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif