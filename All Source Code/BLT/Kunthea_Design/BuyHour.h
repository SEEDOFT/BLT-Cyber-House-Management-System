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
    H::HLine(25,8,110,7,220);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::BuyHour::buyHour_Design()
{
    H::gotoxy(30,12); H::foreColor(6); cout<<R"( ___________________ )";
    H::gotoxy(30,13); H::foreColor(6); cout<<R"(|_|_______________|_|)";
    H::gotoxy(30,14); H::foreColor(6); cout<<R"(|  ,-------------.  |)";
    H::gotoxy(30,15); H::foreColor(6); cout<<R"(| |  .---------.  | |)";
    H::gotoxy(30,16); H::foreColor(6); cout<<R"(| |  |         |  | |)";
    H::gotoxy(30,17); H::foreColor(6); cout<<R"(| |  |         |  | |)";
    H::gotoxy(30,18); H::foreColor(6); cout<<R"(| |  |         |  | |)";
    H::gotoxy(30,19); H::foreColor(6); cout<<R"(| |  |         |  | |)";
    H::gotoxy(30,20); H::foreColor(6); cout<<R"(| |  `---------'  | |)";
    H::gotoxy(30,21); H::foreColor(6); cout<<R"(| `---------------' |)";
    H::gotoxy(30,22); H::foreColor(6); cout<<R"(|   _               |)";
    H::gotoxy(30,23); H::foreColor(6); cout<<R"(| _| |_         ,-. |)";
    H::gotoxy(30,24); H::foreColor(6); cout<<R"(||_ O _|   ,-. "._,"|)";
    H::gotoxy(30,25); H::foreColor(6); cout<<R"(|  |_|    "._,"   A |)";
    H::gotoxy(30,26); H::foreColor(6); cout<<R"(|    _  _    B      |)";
    H::gotoxy(30,27); H::foreColor(6); cout<<R"(|   // //           |)";
    H::gotoxy(30,28); H::foreColor(6); cout<<R"(|  // //    \\\\\\  |)";
    H::gotoxy(30,29); H::foreColor(6); cout<<R"(|  `  `      \\\\\\ ,)";
    H::gotoxy(30,30); H::foreColor(6); cout<<R"(|________...______," )";

    H::drawBoxSingleLine(90,15,40,1,3);H::setcolor(4);H::gotoxy(92,16);cout << "Add more hours  : ";
    H::drawBoxSingleLine(90,19,40,1,3);H::setcolor(4);H::gotoxy(92,20);cout << "Debit or Credit : ";

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif