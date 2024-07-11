#ifndef __UPDATEUSERINFO_H__
#define __UPDATEUSERINFO_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UpdateUserInfo::UpdateUserInfoTxt()
{
    H::foreColor(3); H::gotoxy(30,1); cout<<R"( ____ ___            .___       __            ____ ___                     .___        _____       )";
    H::foreColor(3); H::gotoxy(30,2); cout<<R"(|    |   \______   __| _/____ _/  |_  ____   |    |   \______ ___________  |   | _____/ ____\____  )";
    H::foreColor(3); H::gotoxy(30,3); cout<<R"(|    |   /\____ \ / __ |\__  \\   __\/ __ \  |    |   /  ___// __ \_  __ \ |   |/    \   __\/  _ \ )";
    H::foreColor(4); H::gotoxy(30,4); cout<<R"(|    |  / |  |_> > /_/ | / __ \|  | \  ___/  |    |  /\___ \\  ___/|  | \/ |   |   |  \  | (  <_> ))";
    H::foreColor(4); H::gotoxy(30,5); cout<<R"(|______/  |   __/\____ |(____  /__|  \___  > |______//____  >\___  >__|    |___|___|  /__|  \____/ )";
    H::foreColor(4); H::gotoxy(30,6); cout<<R"(          |__|        \/     \/          \/               \/     \/                 \/             )";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UpdateUserInfo::UpdateUserInfo_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::gotoxy(58,11); H::foreColor(185); cout<<"Press";H::setcolor(186);cout<<" [ENTER]";H::setcolor(185);cout<<" To Continues Or ";H::setcolor(186);cout<<"[ESC]";H::setcolor(185);cout<<" To Exit";
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Editing By ID : ";
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
    H::gotoxy(30,20); H::foreColor(3); cout<<"|ID|\t\t|Name|\t\t|USERNAME|\t\t|PASSWORD|\t\t|TIME|\t\t|PRICE|";
    H::HLine(30,21,100,7,196);
    H::gotoxy(30,22); H::foreColor(3); cout<<"1\t\t\tThea\t\tScott\t\t\t123123\t\t\t5\t\t2.5$";
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
    H::gotoxy(30,34); H::foreColor(3); cout<<"|ID|\t\t|Name|\t\t|USERNAME|\t\t|PASSWORD|\t\t|TIME|\t\t|PRICE|";
    H::HLine(30,35,100,7,196);
    H::gotoxy(30,36); H::foreColor(3); cout<<"New\t\tNew\t\tNew\t\t\tNew\t\t\tNew\t\tNew";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif