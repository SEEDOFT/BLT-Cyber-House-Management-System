#ifndef __UPDATEUSERINFO_H__
#define __UPDATEUSERINFO_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"All_Design.h"
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
void BLT::UpdateUserInfo::UpdateUserInfo_Animation()
{
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
        H::VLine(136,12,i+1,i+1,221); H::delay(10);
    }
    H::drawBoxDoubleLine(20,19,120,4,3);
    H::foreColor(3);H::gotoxy(20,20); cout<<"|ID|\t|Name|\t\t|USERNAME|\t\t|PASSWORD|\t    |HOUR|\t   |REMAIN HOUR|   \t|PRICE|";
    H::HLine(20,21,120,7,196);
    
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
        H::VLine(126,24,i+1,i+1,221); H::delay(10);
    }
    H::drawBoxDoubleLine(20,33,120,4,3);
    H::foreColor(3);H::gotoxy(20,34); cout<<"\t\t|ID|\t\t|Name|\t\t\t|USERNAME|\t\t|PASSWORD|\t    |HOUR|";
    H::HLine(30,35,100,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UpdateUserInfo::UpdateUserInfo_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Editing By ID : ";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif