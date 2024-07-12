#ifndef __INPUTFOODNDRINKDESIGN_H__
#define __INPUTFOODNDRINKDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::InputDesign::InputTxt()
{
    H::foreColor(3); H::gotoxy(29,1); cout<<R"(.___                      __    ___________               ._______   ________        .__        __    )";
    H::foreColor(3); H::gotoxy(29,2); cout<<R"(|   | ____ ______  __ ___/  |_  \_   _____/___   ____   __| _/  _ \  \______ \_______|__| ____ |  | __)";
    H::foreColor(3); H::gotoxy(29,3); cout<<R"(|   |/    \\____ \|  |  \   __\  |    __)/  _ \ /  _ \ / __ |>  _ </\ |    |  \_  __ \  |/    \|  |/ /)";
    H::foreColor(4); H::gotoxy(29,4); cout<<R"(|   |   |  \  |_> >  |  /|  |    |     \(  <_> |  <_> ) /_/ /  <_\ \/ |    `   \  | \/  |   |  \    < )";
    H::foreColor(4); H::gotoxy(29,5); cout<<R"(|___|___|  /   __/|____/ |__|    \___  / \____/ \____/\____ \_____\ \/_______  /__|  |__|___|  /__|_ \)";
    H::foreColor(4); H::gotoxy(29,6); cout<<R"(         \/|__|                      \/                    \/      \/        \/              \/     \/)";
    H::HLine(20,8,120,7,196);
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

    H::foreColor(199); H::gotoxy(54,11); cout<<"\3\3";H::setcolor(203);cout<<" Welcome to BTL Cyber House Food & Drink Input ";H::setcolor(199);cout<<"\3\3";

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
    H::foreColor(183); H::gotoxy(39,27); cout<<"QTY   ";
    H::foreColor(183); H::gotoxy(39,31); cout<<"Price ($) ";

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
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif