#ifndef __MANAGEUSERINFO_H__
#define __MANAGEUSERINFO_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ManageUserInfo::ManageUserInfoTxt()
{
    Design::TxtOutline(-25,-1,50,1);
    H::foreColor(7); H::gotoxy(18,2); cout<<R"(                                                               _____        __                            _   _             )";
    H::foreColor(7); H::gotoxy(18,3); cout<<R"(  /\/\   __ _ _ __   __ _  __ _  ___   /\ /\  ___  ___ _ __    \_   \_ __  / _| ___  _ __ _ __ ___   __ _| |_(_) ___  _ __  )";
    H::foreColor(1); H::gotoxy(18,4); cout<<R"( /    \ / _` | '_ \ / _` |/ _` |/ _ \ / / \ \/ __|/ _ \ '__|    / /\/ '_ \| |_ / _ \| '__| '_ ` _ \ / _` | __| |/ _ \| '_ \ )";
    H::foreColor(7); H::gotoxy(18,5); cout<<R"(/ /\/\ \ (_| | | | | (_| | (_| |  __/ \ \_/ /\__ \  __/ |    /\/ /_ | | | |  _| (_) | |  | | | | | | (_| | |_| | (_) | | | |)";
    H::foreColor(7); H::gotoxy(18,6); cout<<R"(\/    \/\__,_|_| |_|\__,_|\__, |\___|  \___/ |___/\___|_|    \____/ |_| |_|_|  \___/|_|  |_| |_| |_|\__,_|\__|_|\___/|_| |_|)";
    H::foreColor(7); H::gotoxy(18,7); cout<<R"(                          |___/                                                                                             )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ManageUserInfo::ManageUserInfo_Design()
{
    H::drawBoxDoubleLineWithBG(20,10,120,1,179);
    for(int i=0; i<3; i++)
    {
        H::VLine(70,12,i+1,7,221); H::delay(10);
        H::VLine(91,12,i+1,7,221); H::delay(10);
    }
    H::drawBoxDoubleLineWithBG(25,16,110,19,196);
    H::drawBoxDoubleLineWithBG(70,17,20,17,179);
    H::VLine(75,18,15,183,219);
    H::VLine(86,18,15,183,219);
    
    H::foreColor(183);H::gotoxy(35,11);cout<<"==========>\3\3\3 ";H::setcolor(185);cout<<"Press ";
    H::setcolor(188);cout<<"[UP]";H::setcolor(185);cout<<" & ";H::setcolor(188);cout<<"[DOWN]";
    H::setcolor(185);cout<<" arrow key to move, ";H::setcolor(188);cout<<"[ENTER]";H::setcolor(185);
    cout<<" key to select";H::setcolor(183);cout<<" \3\3\3<==========";
   
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif