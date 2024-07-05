#ifndef __GAMEINPUTDESIGN_H__
#define __GAMEINPUTDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameInputDesign::InputGameTxt()
{
    H::foreColor(3); H::gotoxy(50,1); cout<<R"(.___                      __    ________          __          )";
    H::foreColor(3); H::gotoxy(50,2); cout<<R"(|   | ____ ______  __ ___/  |_  \______ \ _____ _/  |______   )";
    H::foreColor(3); H::gotoxy(50,3); cout<<R"(|   |/    \\____ \|  |  \   __\  |    |  \\__  \\   __\__  \  )";
    H::foreColor(4); H::gotoxy(50,4); cout<<R"(|   |   |  \  |_> >  |  /|  |    |    `   \/ __ \|  |  / __ \_)";
    H::foreColor(4); H::gotoxy(50,5); cout<<R"(|___|___|  /   __/|____/ |__|   /_______  (____  /__| (____  /)";
    H::foreColor(4); H::gotoxy(50,6); cout<<R"(         \/|__|                         \/     \/          \/ )";

    H::HLine(40,8,83,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameInputDesign::InputGame_Design()
{
    H::drawBoxDoubleLineWithBG(30,10,100,1,196);
    for(int i=0; i<3; i++){
        H::VLine(70,12,i+1,7,221); H::delay(100);
        H::VLine(90,12,i+1,7,221); H::delay(100);
    }
    H::drawBoxDoubleLineWithBG(30,16,100,20,187);
    H::drawBoxDoubleLineWithBG(35,19,30,15,196);
    H::drawBoxDoubleLineWithBG(89,19,30,15,196);

    H::drawBoxDoubleLineWithBG(37,20,26,1,183);
    H::drawBoxDoubleLineWithBG(37,24,26,1,183);
    H::drawBoxDoubleLineWithBG(37,28,26,1,183);
    H::drawBoxDoubleLineWithBG(37,32,26,1,183);

    H::drawBoxDoubleLineWithBG(91,20,26,1,183);
    H::drawBoxDoubleLineWithBG(91,24,26,1,183);
    H::drawBoxDoubleLineWithBG(91,28,26,1,183);
    H::drawBoxDoubleLineWithBG(91,32,26,1,183);

    //label
    H::foreColor(183); H::gotoxy(39,21); cout<<"ID    ";
    H::foreColor(183); H::gotoxy(39,25); cout<<"Name  ";
    H::foreColor(183); H::gotoxy(39,29); cout<<"Type   ";
    H::foreColor(183); H::gotoxy(39,33); cout<<"Release Date ";

    H::foreColor(183); H::gotoxy(93,21); cout<<": ";
    H::foreColor(183); H::gotoxy(93,25); cout<<": ";
    H::foreColor(183); H::gotoxy(93,29); cout<<": ";
    H::foreColor(183); H::gotoxy(93,33); cout<<": ";

    H::foreColor(183); H::gotoxy(39,20); cout<<">.<";
    H::foreColor(183); H::gotoxy(39,24); cout<<">.<";
    H::foreColor(183); H::gotoxy(39,28); cout<<">.<";
    H::foreColor(183); H::gotoxy(39,32); cout<<">.<";

    H::foreColor(183); H::gotoxy(93,20); cout<<">.<";
    H::foreColor(183); H::gotoxy(93,24); cout<<">.<";
    H::foreColor(183); H::gotoxy(93,28); cout<<">.<";
    H::foreColor(183); H::gotoxy(93,32); cout<<">.<";

    H::foreColor(199); H::gotoxy(60,11); cout<<"\3\3Welcome to BTL Cyber Game Display\3\3";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif
