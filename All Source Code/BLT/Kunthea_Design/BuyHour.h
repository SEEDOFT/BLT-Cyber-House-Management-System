#ifndef __BUYHOUR_H__
#define __BUYHOUR_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::BuyHour::buyHourTxt()
{
    H::foreColor(3); H::gotoxy(34,1); cout<<R"(__________                     .__                             ___ ___                      )";
    H::foreColor(3); H::gotoxy(34,2); cout<<R"(\______   \__ _________   ____ |  |__ _____    ______ ____    /   |   \  ____  __ _________ )";
    H::foreColor(3); H::gotoxy(34,3); cout<<R"( |     ___/  |  \_  __ \_/ ___\|  |  \\__  \  /  ___// __ \  /    ~    \/  _ \|  |  \_  __ \)";
    H::foreColor(4); H::gotoxy(34,4); cout<<R"( |    |   |  |  /|  | \/\  \___|   Y  \/ __ \_\___ \\  ___/  \    Y    (  <_> )  |  /|  | \/)";
    H::foreColor(4); H::gotoxy(34,5); cout<<R"( |____|   |____/ |__|    \___  >___|  (____  /____  >\___  >  \___|_  / \____/|____/ |__|   )";
    H::foreColor(4); H::gotoxy(34,6); cout<<R"(                             \/     \/     \/     \/     \/         \/                      )";
    H::HLine(25,8,110,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::BuyHour::buyHour_Design()
{
    H::drawBoxSingleLineWithBG(15,10,130,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(66,16,28,1,4);
    H::foreColor(4); H::gotoxy(71,17); cout<<"BUY HOUR : ";
    H::foreColor(7);
    //loading while searching
    for(int i=0; i<25; i++)
    {
        H::setcursor(0,0);
        H::gotoxy(70,20); H::foreColor(3); cout<<"PROCESSING..."; 
        H::drawBoxSingleLine(66,21,28,1,3);
        H::gotoxy(90,20); H::foreColor(3); cout<<(i*4)+4<<"%";  H::delay(10);
        H::gotoxy(67+i,22); H::foreColor(3); cout<<">"; H::delay(10);
        H::foreColor(7);
    }
    H::clearBox(65,21,36,2,7);//cls loading animation
    
    H::foreColor(7); H::gotoxy(67,33); cout<<"\3\3";H::setcolor(4);cout<<" Successfully purchases";H::setcolor(7);cout<<" \3\3";
    H::HLine(40,35,80,7,205);
    H::foreColor(7); H::gotoxy(55,36); cout<<"\3\3 ";H::setcolor(1);cout<<"Press ";H::setcolor(4);cout<<"[ENTER]";H::setcolor(1);cout<<" To Continues Or ";H::setcolor(4);cout<<"[ESC]";H::setcolor(1);cout<<" To Exit";H::setcolor(7);cout<<" \3\3";
    H::drawBoxDoubleLineWithBG(20,19,120,1,196);
    H::gotoxy(23,20); H::foreColor(199); cout<<"|ID|  |    |Name|    |     |USERNAME|     |    |PASSWORD|    |   |Food&Drink|   |  |REMAIN TIME|  |  |TOTAL PRICE|";

    H::drawBoxDoubleLineWithBG(10,11,1,25,179);
    H::VLine(11,11,25,183,219);
    H::drawBoxDoubleLineWithBG(149,11,1,25,179);
    H::VLine(150,11,25,183,219);
    H::foreColor(7);

    for(int i=0; i<6; i++)
    {
        H::VLine(25,12,i+1,6,221); H::delay(10);
        H::VLine(135,12,i+1,6,221); H::delay(10);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif