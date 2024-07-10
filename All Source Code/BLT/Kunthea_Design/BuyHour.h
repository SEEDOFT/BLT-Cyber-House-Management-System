#ifndef __BUYHOUR_H__
#define __BUYHOUR_H__
#include "./Header/HinsyOOPV2"
using namespace HinsyOOP;
class BuyHour{
    public:
        static void buyHourAscii();
        static void buyHourDesign();
};

void BuyHour::buyHourAscii(){
    H::foreColor(3); H::gotoxy(40,1); cout<<R"(__________                     .__                             ___ ___                      )";
    H::foreColor(3); H::gotoxy(40,2); cout<<R"(\______   \__ _________   ____ |  |__ _____    ______ ____    /   |   \  ____  __ _________ )";
    H::foreColor(3); H::gotoxy(40,3); cout<<R"( |     ___/  |  \_  __ \_/ ___\|  |  \\__  \  /  ___// __ \  /    ~    \/  _ \|  |  \_  __ \)";
    H::foreColor(4); H::gotoxy(40,4); cout<<R"( |    |   |  |  /|  | \/\  \___|   Y  \/ __ \_\___ \\  ___/  \    Y    (  <_> )  |  /|  | \/)";
    H::foreColor(4); H::gotoxy(40,5); cout<<R"( |____|   |____/ |__|    \___  >___|  (____  /____  >\___  >  \___|_  / \____/|____/ |__|   )";
    H::foreColor(4); H::gotoxy(40,6); cout<<R"(                             \/     \/     \/     \/     \/         \/                      )";
    H::HLine(30,8,110,7,196);
}

void BuyHour::buyHourDesign(){
    H::drawBoxSingleLineWithBG(20,10,130,1,179);
    H::VLine(80,12,3,7,221);
    H::VLine(100,12,3,7,221);
    H::drawBoxSingleLineWithBG(75,16,28,1,4);
    H::foreColor(199); H::gotoxy(80,17); cout<<"BUY HOUR: ";
    H::foreColor(7);
    //loading while searching
    for(int i=0; i<25; i++){
        H::setcursor(0,0);
        H::gotoxy(75,20); H::foreColor(3); cout<<"PROCESSING..."; 
        H::drawBoxSingleLine(75,21,28,1,3);
        H::gotoxy(99,20); H::foreColor(3); cout<<(i*4)+4<<"%";  H::delay(50);
        H::gotoxy(76+i,22); H::foreColor(3); cout<<">"; H::delay(50);
        H::foreColor(7);
    }
    H::clearBox(70,21,36,2,7);
    H::foreColor(7); H::gotoxy(77,35); cout<<"\3\3SUCCESFULLY PURCHAES\3\3";
    H::drawBoxDoubleLineWithBG(25,19,120,1,196);
    H::gotoxy(39,20); H::foreColor(199); cout<<"|ID|  |  |Name|  |  |USERNAME|  |  |PASSWORD|  |  |TIME|  |  |REMAIN TIME|  |  |TOTAL PRICE|";
    H::drawBoxDoubleLineWithBG(16,11,1,25,179);
    H::VLine(17,11,25,183,219);
    H::drawBoxDoubleLineWithBG(153,11,1,25,179);
    H::VLine(154,11,25,183,219);
    H::foreColor(7);
    for(int i=0; i<6; i++){
        H::VLine(35,12,i+1,6,221); H::delay(100);
        H::VLine(135,12,i+1,6,221); H::delay(100);
    }
}

#endif