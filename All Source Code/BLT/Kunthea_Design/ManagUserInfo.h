#ifndef __MANAGEUSERINFO_H__
#define __MANAGEUSERINFO_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ManageUserInfo::ManageUserInfoTxt()
{
    H::foreColor(3); H::gotoxy(29,1); cout<<R"(   _____                                         ____ ___                     .___        _____       )";
    H::foreColor(3); H::gotoxy(29,2); cout<<R"(  /     \ _____    ____ _____     ____   ____   |    |   \______ ___________  |   | _____/ ____\____  )";
    H::foreColor(3); H::gotoxy(29,3); cout<<R"( /  \ /  \\__  \  /    \\__  \   / ___\_/ __ \  |    |   /  ___// __ \_  __ \ |   |/    \   __\/  _ \ )";
    H::foreColor(4); H::gotoxy(29,4); cout<<R"(/    Y    \/ __ \|   |  \/ __ \_/ /_/  >  ___/  |    |  /\___ \\  ___/|  | \/ |   |   |  \  | (  <_> ))";
    H::foreColor(4); H::gotoxy(29,5); cout<<R"(\____|__  (____  /___|  (____  /\___  / \___  > |______//____  >\___  >__|    |___|___|  /__|  \____/ )";
    H::foreColor(4); H::gotoxy(29,6); cout<<R"(        \/     \/     \/     \//_____/      \/               \/     \/                 \/             )";

    H::HLine(15,8,125,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ManageUserInfo::ManageUserInfo_Design()
{
    H::drawBoxDoubleLineWithBG(20,10,115,1,179);
    for(int i=0; i<3; i++)
    {
        H::VLine(70,12,i+1,7,221); H::delay(100);
        H::VLine(90,12,i+1,7,221); H::delay(100);
    }
    H::drawBoxDoubleLineWithBG(25,16,105,20,196);
    H::drawBoxDoubleLineWithBG(70,17,19,18,179);
    H::VLine(75,18,16,183,219);
    H::VLine(85,18,16,183,219);
    H::foreColor(183);H::gotoxy(35,11);cout<<"==========>\3\3\3 ";H::setcolor(180);cout<<"Press ";
    H::setcolor(185);cout<<"[UP]";H::setcolor(180);cout<<" & ";H::setcolor(185);cout<<"[DOWN]";
    H::setcolor(180);cout<<" arrow key to move, ";H::setcolor(185);cout<<"[ENTER]";H::setcolor(180);
    cout<<" key to select";H::setcolor(183);cout<<" \3\3\3<==========";
   
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                        END OF HEADER FILE              
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif