#ifndef __DELETEUSERINFO_H__
#define __DELETEUSERINFO_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::DeleteUserInfo::DeleteUserInfoTxt()
{
    H::foreColor(3); H::gotoxy(31,1); cout<<R"(________         .__          __            ____ ___                     .___        _____       )";
    H::foreColor(3); H::gotoxy(31,2); cout<<R"(\______ \   ____ |  |   _____/  |_  ____   |    |   \______ ___________  |   | _____/ ____\____  )";
    H::foreColor(3); H::gotoxy(31,3); cout<<R"( |    |  \_/ __ \|  | _/ __ \   __\/ __ \  |    |   /  ___// __ \_  __ \ |   |/    \   __\/  _ \ )";
    H::foreColor(4); H::gotoxy(31,4); cout<<R"( |    `   \  ___/|  |_\  ___/|  | \  ___/  |    |  /\___ \\  ___/|  | \/ |   |   |  \  | (  <_> ))";
    H::foreColor(4); H::gotoxy(31,5); cout<<R"(/_______  /\___  >____/\___  >__|  \___  > |______//____  >\___  >__|    |___|___|  /__|  \____/ )";
    H::foreColor(4); H::gotoxy(31,6); cout<<R"(        \/     \/          \/          \/               \/     \/                 \/             )";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::DeleteUserInfo::DeleteUserInfo_Animation()
{
    //loading while searching
    for(int i=0; i<25; i++)
    {
        H::setcursor(0,0);
        H::gotoxy(65,20); H::foreColor(3); cout<<"Deleting..."; 
        H::drawBoxSingleLine(65,21,28,1,3);
        H::gotoxy(89,20); H::foreColor(3); cout<<(i*4)+4<<"%";  H::delay(5);
        H::gotoxy(66+i,22); H::foreColor(3); cout<<">"; H::delay(5);
        H::foreColor(7);
    }
    H::clearBox(60,21,36,2,7);
    
    for(int i=0; i<7; i++)
    {
        H::VLine(25,12,i+1,i+1,221); H::delay(10);
        H::VLine(136,12,i+1,i+1,221); H::delay(10);
    }
    //label
    H::drawBoxDoubleLine(20,19,120,15,4);
    H::drawBoxDoubleLine(20,19,120,1,3);
    H::drawBoxDoubleLine(20,33,120,1,3);
    H::foreColor(3);H::gotoxy(20,20); cout<<"|ID|\t|Name|\t\t|USERNAME|\t\t|PASSWORD|\t    |HOUR|\t   |REMAIN HOUR|   \t|PRICE|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::DeleteUserInfo::DeleteUserInfo_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Delete By ID : ";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif