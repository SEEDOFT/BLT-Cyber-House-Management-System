#ifndef __GAMEMENUFORM_H__
#define __GAMEMENUFORM_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameMenu::GameMenuTxt()
{
    H::foreColor(3); H::gotoxy(47,1); cout<<R"(  ________                           _____                       )";
    H::foreColor(3); H::gotoxy(47,2); cout<<R"( /  _____/_____    _____   ____     /     \   ____   ____  __ __ )";
    H::foreColor(3); H::gotoxy(47,3); cout<<R"(/   \  ___\__  \  /     \_/ __ \   /  \ /  \_/ __ \ /    \|  |  \)";
    H::foreColor(4); H::gotoxy(47,4); cout<<R"(\    \_\  \/ __ \|  Y Y  \  ___/  /    Y    \  ___/|   |  \  |  /)";
    H::foreColor(4); H::gotoxy(47,5); cout<<R"( \______  (____  /__|_|  /\___  > \____|__  /\___  >___|  /____/ )";
    H::foreColor(4); H::gotoxy(47,6); cout<<R"(        \/     \/      \/     \/          \/     \/     \/       )";

    H::HLine(35,8,90,7,220);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameMenu::CyberTxt()
{
    H::foreColor(199); H::gotoxy(61,21); cout<<R"(_________        ___.                 )";
    H::foreColor(199); H::gotoxy(61,22); cout<<R"(\_   ___ \___.__.\_ |__   ___________ )";
    H::foreColor(199); H::gotoxy(61,23); cout<<R"(/    \  \<   |  | | __ \_/ __ \_  __ \)";
    H::foreColor(199); H::gotoxy(61,24); cout<<R"(\     \___\___  | | \_\ \  ___/|  | \/)";
    H::foreColor(199); H::gotoxy(61,25); cout<<R"( \______  / ____| |___  /\___  >__|   )";
    H::foreColor(199); H::gotoxy(61,26); cout<<R"(        \/\/          \/     \/       )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameMenu::Header_Design()
{
    H::drawBoxDoubleLineWithBG(30,10,100,1,196);
    H::HLine(40,11,80,7,178);
    H::VLine(40,12,3,7,219);
    H::VLine(121,12,3,7,219);
    H::drawBoxDoubleLineWithBG(35,16,90,15,145);
    H::drawBoxDoubleLineWithBG(60,16,40,15,196);
    H::VLine(50,32,2,7,219);
    H::VLine(110,32,2,7,219);

    H::drawBoxDoubleLineWithBG(40,35,80,1,136);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameMenu::GameMenu_Design()
{
    H::drawBoxDoubleLineWithBG(37,18,18,1,23);
    H::drawBoxDoubleLineWithBG(37,23,18,1,23);
    H::drawBoxDoubleLineWithBG(37,28,18,1,23);

    H::drawBoxDoubleLineWithBG(105,18,18,1,23);
    H::drawBoxDoubleLineWithBG(105,23,18,1,23);

    H::foreColor(23); H::gotoxy(42,19); cout<<"ADD GAME";
    H::foreColor(23); H::gotoxy(42,24); cout<<"VIEW GAME";
    H::foreColor(23); H::gotoxy(40,29); cout<<"SEARCH GAME";
    
    H::foreColor(23); H::gotoxy(108,19); cout<<"REMOVE GAME";
    H::foreColor(23); H::gotoxy(112,24); cout<<"BACK";

    H::foreColor(135); H::gotoxy(53,36); cout<<"Press";H::setcolor(137);cout<<" [UP] [DOWN]";H::setcolor(135);cout<<" arrow key to move, ";H::setcolor(137);cout<<"[ENTER]";H::setcolor(135);cout<<" to select";
       
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif