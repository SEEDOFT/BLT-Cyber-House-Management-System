#ifndef __DELETEUSERINFO_H__
#define __DELETEUSERINFO_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::DeleteUserInfo::DeleteUserInfoTxt()
{
    Design::TxtOutline(-19,0,38,1);
    H::foreColor(7); H::gotoxy(29,3); cout<<R"(   __                                                      _        _                             _   )";
    H::foreColor(7); H::gotoxy(29,4); cout<<R"(  /__\ ___ _ __ ___   _____   _____   /\ /\  ___  ___ _ __( )__    /_\   ___ ___ ___  _   _ _ __ | |_ )";
    H::foreColor(1); H::gotoxy(29,5); cout<<R"( / \/// _ \ '_ ` _ \ / _ \ \ / / _ \ / / \ \/ __|/ _ \ '__|/ __|  //_\\ / __/ __/ _ \| | | | '_ \| __|)";
    H::foreColor(7); H::gotoxy(29,6); cout<<R"(/ _  \  __/ | | | | | (_) \ V /  __/ \ \_/ /\__ \  __/ |   \__ \ /  _  \ (_| (_| (_) | |_| | | | | |_ )";
    H::foreColor(7); H::gotoxy(29,7); cout<<R"(\/ \_/\___|_| |_| |_|\___/ \_/ \___|  \___/ |___/\___|_|   |___/ \_/ \_/\___\___\___/ \__,_|_| |_|\__|)";                                                                                                                                                                                                              
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::DeleteUserInfo::DeleteUserInfo_Animation()
{
    //loading while searching
    for(int i=0; i<25; i++)
    {
        H::setcursor(0,0);
        H::gotoxy(65,20); H::foreColor(3); cout<<"Removing..."; 
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
    H::foreColor(3);H::gotoxy(20,20); 
    cout<<"|ID|\t|Name|\t\t|USERNAME|\t\t|PASSWORD|\t    |HOUR|\t   |REMAIN HOUR|   \t|PRICE|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::DeleteUserInfo::DeleteUserInfo_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Remove By ID : ";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif