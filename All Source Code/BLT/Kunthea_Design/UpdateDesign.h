#ifndef __UPDATEFOODNDRINKDESIGN_H__
#define __UPDATEFOODNDRINKDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UpdateDesign::UpdateTxt()
{
    H::foreColor(3); H::gotoxy(22,1); cout<<R"( ____ ___            .___       __           ___________               ._______   ________        .__        __    )";
    H::foreColor(3); H::gotoxy(22,2); cout<<R"(|    |   \______   __| _/____ _/  |_  ____   \_   _____/___   ____   __| _/  _ \  \______ \_______|__| ____ |  | __)";
    H::foreColor(3); H::gotoxy(22,3); cout<<R"(|    |   /\____ \ / __ |\__  \\   __\/ __ \   |    __)/  _ \ /  _ \ / __ |>  _ </\ |    |  \_  __ \  |/    \|  |/ /)";
    H::foreColor(4); H::gotoxy(22,4); cout<<R"(|    |  / |  |_> > /_/ | / __ \|  | \  ___/   |     \(  <_> |  <_> ) /_/ /  <_\ \/ |    `   \  | \/  |   |  \    < )";
    H::foreColor(4); H::gotoxy(22,5); cout<<R"(|______/  |   __/\____ |(____  /__|  \___  >  \___  / \____/ \____/\____ \_____\ \/_______  /__|  |__|___|  /__|_ \)";
    H::foreColor(4); H::gotoxy(22,6); cout<<R"(          |__|        \/     \/          \/       \/                    \/      \/        \/              \/     \/)";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UpdateDesign::Update_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Update By ID : ";
    for(int i=0; i<25; i++)
    {
        H::setcursor(0,0);
        H::gotoxy(65,20); H::foreColor(3); cout<<"Searching Data..."; 
        H::drawBoxSingleLine(65,21,28,1,3);
        H::gotoxy(89,20); H::foreColor(3); cout<<(i*4)+4<<"%";  H::delay(10);
        H::gotoxy(66+i,22); H::foreColor(3); cout<<">"; H::delay(10);
        H::foreColor(7);
    }
    H::clearBox(60,21,36,2,7);
    for(int i=0; i<7; i++)
    {
        H::VLine(25,12,i+1,i+1,221); H::delay(10);
        H::VLine(135,12,i+1,i+1,221); H::delay(10);
    }
    H::drawBoxDoubleLine(20,19,120,4,3);
    H::gotoxy(35,20); H::foreColor(3); cout<<"|ID|\t\t\t|Name|\t\t\t\t|QTY|\t\t\t\t|Price|";
    H::HLine(30,21,100,7,196);
    for(int i=0; i<7; i++)
    {
        H::VLine(70,24,3,i+1,221); H::delay(10);
        H::VLine(90,24,3,i+1,221); H::delay(10);
    }
    H::drawBoxSingleLineWithBG(65,28,28,1,4);
    H::foreColor(4); H::gotoxy(75,29); cout<<"New DATA";
    for(int i=0; i<9; i++)
    {
        H::VLine(35,24,i+1,i+1,221); H::delay(10);
        H::VLine(125,24,i+1,i+1,221); H::delay(10);
    }
    H::drawBoxDoubleLine(20,33,120,4,3);
    H::gotoxy(35,34); H::foreColor(3); cout<<"|ID|\t\t\t|Name|\t\t\t\t|QTY|\t\t\t\t|Price|";
    H::HLine(30,35,100,7,196);
   
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                END
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif