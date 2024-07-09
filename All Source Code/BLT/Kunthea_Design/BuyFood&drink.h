#ifndef __BUYHOUR_H__
#define __BUYHOUR_H__
#include "./Header/HinsyOOPV2"
using namespace HinsyOOP;
class BuyFoodnDrink{
    public:
        static void buyFoodnDrinkAscii();
        static void buyFoodnDrinkDesign();
};

void BuyFoodnDrink::buyFoodnDrinkAscii(){
    H::foreColor(3); H::gotoxy(20,1); cout<<R"(__________                     .__                           ___________               ._______   ________        .__        __    )";
    H::foreColor(3); H::gotoxy(20,2); cout<<R"(\______   \__ _________   ____ |  |__ _____    ______ ____   \_   _____/___   ____   __| _/  _ \  \______ \_______|__| ____ |  | __)";
    H::foreColor(3); H::gotoxy(20,3); cout<<R"( |     ___/  |  \_  __ \_/ ___\|  |  \\__  \  /  ___// __ \   |    __)/  _ \ /  _ \ / __ |>  _ </\ |    |  \_  __ \  |/    \|  |/ /)";
    H::foreColor(4); H::gotoxy(20,4); cout<<R"( |    |   |  |  /|  | \/\  \___|   Y  \/ __ \_\___ \\  ___/   |     \(  <_> |  <_> ) /_/ /  <_\ \/ |    `   \  | \/  |   |  \    < )";
    H::foreColor(4); H::gotoxy(20,4); cout<<R"( |____|   |____/ |__|    \___  >___|  (____  /____  >\___  >  \___  / \____/ \____/\____ \_____\ \/_______  /__|  |__|___|  /__|_ \)";
    H::foreColor(4); H::gotoxy(20,4); cout<<R"(                             \/     \/     \/     \/     \/       \/                    \/      \/        \/              \/     \/)";
    H::HLine(10,8,130,7,196);
} 

void BuyFoodnDrink::buyFoodnDrinkDesign(){
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
    H::foreColor(7); H::gotoxy(77,34); cout<<"\3\3SUCCESFULLY PURCHAES\3\3";
    H::foreColor(7); H::gotoxy(70,34); cout<<"\3\3Press [ENTER] To Continues Or [ESC] To Exit\3\3";
    H::drawBoxDoubleLineWithBG(25,19,120,1,196);
    H::gotoxy(39,20); H::foreColor(199); cout<<"|ID|  |  |Name|  |  |USERNAME|  |  |PASSWORD|  |  |Food&Drink|  |  |REMAIN TIME|  |  |TOTAL PRICE|";
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