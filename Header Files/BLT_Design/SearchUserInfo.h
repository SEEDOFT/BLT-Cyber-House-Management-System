#ifndef __SearchUser__
#define __SearchUser__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchUser::SearchUserTxt()
{
    Design::TxtOutline(-10,0,19,1);
    H::foreColor(7); H::gotoxy(38,3); cout << R"( __                     _                            _       _____        __       )";
    H::foreColor(7); H::gotoxy(38,4); cout << R"(/ _\ ___  __ _ _ __ ___| |__    /\ /\  ___  ___ _ __( )__    \_   \_ __  / _| ___  )";
    H::foreColor(1); H::gotoxy(38,5); cout << R"(\ \ / _ \/ _` | '__/ __| '_ \  / / \ \/ __|/ _ \ '__|/ __|    / /\/ '_ \| |_ / _ \ )";
    H::foreColor(7); H::gotoxy(38,6); cout << R"(_\ \  __/ (_| | | | (__| | | | \ \_/ /\__ \  __/ |   \__ \ /\/ /_ | | | |  _| (_) |)";
    H::foreColor(7); H::gotoxy(38,7); cout << R"(\__/\___|\__,_|_|  \___|_| |_|  \___/ |___/\___|_|   |___/ \____/ |_| |_|_|  \___/ )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchUser::SearchUser_Animation()
{
    //loading while searching
    for(int i=0; i<25; i++)
    {
        H::setcursor(0,0);
        H::gotoxy(65,20); H::foreColor(3); cout<<"Searching..."; 
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
    //label
    H::drawBoxDoubleLine(20,19,120,15,4);
    H::drawBoxDoubleLine(20,19,120,1,3);
    H::drawBoxDoubleLine(20,33,120,1,3);
    H::foreColor(3);H::gotoxy(20,20); 
    cout<<"|ID|\t|Name|\t\t|USERNAME|\t\t|PASSWORD|\t    |HOUR|\t   |REMAIN HOUR|   \t|PRICE|";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::SearchUser::SearchUser_Design()
{
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(4); H::gotoxy(70,17); cout<<"Search By ID : ";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif