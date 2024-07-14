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

    H::HLine(15,8,130,7,196);
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
/*
                        END OF HEADER FILE              
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif