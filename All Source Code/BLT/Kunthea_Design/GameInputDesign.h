#ifndef __GAMEINPUTDESIGN_H__
#define __GAMEINPUTDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameInputDesign::InputGameTxt()
{
    H::foreColor(3); H::gotoxy(32,1); cout<<R"(.___                      __      ________                        ________          __          )";
    H::foreColor(3); H::gotoxy(32,2); cout<<R"(|   | ____ ______  __ ___/  |_   /  _____/_____    _____   ____   \______ \ _____ _/  |______   )";
    H::foreColor(3); H::gotoxy(32,3); cout<<R"(|   |/    \\____ \|  |  \   __\ /   \  ___\__  \  /     \_/ __ \   |    |  \\__  \\   __\__  \  )";
    H::foreColor(4); H::gotoxy(32,4); cout<<R"(|   |   |  \  |_> >  |  /|  |   \    \_\  \/ __ \|  Y Y  \  ___/   |    `   \/ __ \|  |  / __ \_)";
    H::foreColor(4); H::gotoxy(32,5); cout<<R"(|___|___|  /   __/|____/ |__|    \______  (____  /__|_|  /\___  > /_______  (____  /__| (____  /)";
    H::foreColor(4); H::gotoxy(32,6); cout<<R"(         \/|__|                         \/     \/      \/     \/          \/     \/          \/ )";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameInputDesign::InputGame_Design()
{
    H::drawBoxDoubleLineWithBG(30,10,100,1,196);

    for(int i=0; i<3; i++)
    {
        H::VLine(70,12,i+1,7,221); H::delay(10);
        H::VLine(90,12,i+1,7,221); H::delay(10);
    }

    H::foreColor(199); H::gotoxy(58,11); cout<<"\3\3";H::setcolor(203);cout<<" Welcome to BTL Cyber House Game Input ";H::setcolor(199);cout<<"\3\3";

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
    H::foreColor(183); H::gotoxy(39,19); cout<<"ID    ";
    H::foreColor(183); H::gotoxy(39,23); cout<<"Name  ";
    H::foreColor(183); H::gotoxy(39,27); cout<<"Type   ";
    H::foreColor(183); H::gotoxy(39,31); cout<<"Release Date ";

    H::foreColor(183); H::gotoxy(99,19); cout<<": ";
    H::foreColor(183); H::gotoxy(99,23); cout<<": ";
    H::foreColor(183); H::gotoxy(99,27); cout<<": ";
    H::foreColor(183); H::gotoxy(99,31); cout<<": ";

    H::foreColor(183); H::gotoxy(39,18); cout<<">.<";
    H::foreColor(183); H::gotoxy(39,22); cout<<">.<";
    H::foreColor(183); H::gotoxy(39,26); cout<<">.<";
    H::foreColor(183); H::gotoxy(39,30); cout<<">.<";

    H::foreColor(183); H::gotoxy(99,18); cout<<">.<";
    H::foreColor(183); H::gotoxy(99,22); cout<<">.<";
    H::foreColor(183); H::gotoxy(99,26); cout<<">.<";
    H::foreColor(183); H::gotoxy(99,30); cout<<">.<";

    H::HLine(50,35,60,183,205);
    H::gotoxy(58,36); H::foreColor(185); cout<<"Press ";H::foreColor(180); cout<<"[ENTER]";H::foreColor(185); cout<<" To Continues Or ";H::foreColor(180); cout<<"[ESC]";H::foreColor(185); cout<<" To Exit";
    H::foreColor(7);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif
