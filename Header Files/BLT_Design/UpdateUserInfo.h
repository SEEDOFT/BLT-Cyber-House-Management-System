#ifndef __UPDATEUSERINFO_H__
#define __UPDATEUSERINFO_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UpdateUserInfo::UpdateUserInfoTxt()
{
    Design::TxtOutline(-3,0,5,1);
    H::foreColor(7); H::gotoxy(45,3); cout << R"(   __   _ _ _                          _       _____        __       )";
    H::foreColor(7); H::gotoxy(45,4); cout << R"(  /__\_| (_) |_   /\ /\  ___  ___ _ __( )__    \_   \_ __  / _| ___  )";
    H::foreColor(1); H::gotoxy(45,5); cout << R"( /_\/ _` | | __| / / \ \/ __|/ _ \ '__|/ __|    / /\/ '_ \| |_ / _ \ )";
    H::foreColor(7); H::gotoxy(45,6); cout << R"(//_| (_| | | |_  \ \_/ /\__ \  __/ |   \__ \ /\/ /_ | | | |  _| (_) |)";
    H::foreColor(7); H::gotoxy(45,7); cout << R"(\__/\__,_|_|\__|  \___/ |___/\___|_|   |___/ \____/ |_| |_|_|  \___/ )";
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