#ifndef __BUYFOODnDRINK_H__
#define __BUYFOODnDRINK_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::BuyFoodnDrink::BuyFoodnDrinkTxt()
{
    H::foreColor(3); H::gotoxy(14,1); cout<<R"(__________                     .__                           ___________               ._______   ________        .__        __    )";
    H::foreColor(3); H::gotoxy(14,2); cout<<R"(\______   \__ _________   ____ |  |__ _____    ______ ____   \_   _____/___   ____   __| _/  _ \  \______ \_______|__| ____ |  | __)";
    H::foreColor(3); H::gotoxy(14,3); cout<<R"( |     ___/  |  \_  __ \_/ ___\|  |  \\__  \  /  ___// __ \   |    __)/  _ \ /  _ \ / __ |>  _ </\ |    |  \_  __ \  |/    \|  |/ /)";
    H::foreColor(4); H::gotoxy(14,4); cout<<R"( |    |   |  |  /|  | \/\  \___|   Y  \/ __ \_\___ \\  ___/   |     \(  <_> |  <_> ) /_/ /  <_\ \/ |    `   \  | \/  |   |  \    < )";
    H::foreColor(4); H::gotoxy(14,5); cout<<R"( |____|   |____/ |__|    \___  >___|  (____  /____  >\___  >  \___  / \____/ \____/\____ \_____\ \/_______  /__|  |__|___|  /__|_ \)";
    H::foreColor(4); H::gotoxy(14,6); cout<<R"(                             \/     \/     \/     \/     \/       \/                    \/      \/        \/              \/     \/)";
    H::HLine(10,8,140,7,220);
} 
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void  BLT::BuyFoodnDrink::buyFoodnDrink_Design()
{
    H::foreColor(7); H::gotoxy(20,12); cout<<R"(                        // )";
    H::foreColor(7); H::gotoxy(20,13); cout<<R"(                       //  )";
    H::foreColor(7); H::gotoxy(20,14); cout<<R"(                      //   )";
    H::foreColor(7); H::gotoxy(20,15); cout<<R"(                     //    )";
    H::foreColor(3); H::gotoxy(20,16); cout<<R"(              _______||    )";
    H::foreColor(3); H::gotoxy(20,17); cout<<R"(         ,-'''       ||`-. )";
    H::foreColor(3); H::gotoxy(20,18); cout<<R"(        (            ||   ))";
    H::foreColor(3); H::gotoxy(20,19); cout<<R"(        |`-..._______,..-'|)";
    H::foreColor(3); H::gotoxy(20,20); cout<<R"(        |            ||   |)";
    H::foreColor(3); H::gotoxy(20,21); cout<<R"(        |     _______||   |)";
    H::foreColor(3); H::gotoxy(20,22); cout<<R"(        |,-'''_ _  ~ ||`-.|)";
    H::foreColor(3); H::gotoxy(20,23); cout<<R"(        |  ~ / `-.\ ,-'\ ~|)";
    H::foreColor(3); H::gotoxy(20,24); cout<<R"(        |`-...___/___,..-'|)";
    H::foreColor(3); H::gotoxy(20,25); cout<<R"(        |    `-./-'_ \/_| |)";
    H::foreColor(3); H::gotoxy(20,26); cout<<R"(        | -'  ~~     || -.|)";
    H::foreColor(3); H::gotoxy(20,27); cout<<R"(        (   ~      ~   ~~ ))";
    H::foreColor(3); H::gotoxy(20,28); cout<<R"(         `-..._______,..-' )";

    H::foreColor(3); H::gotoxy(86,12); cout<<R"(  ___             ___        ___ ___  )";    
    H::foreColor(3); H::gotoxy(86,13); cout<<R"( | _ )_  _ _  _  | _ )_  _  |_ _|   \ )";    
    H::foreColor(4); H::gotoxy(86,14); cout<<R"( | _ \ || | || | | _ \ || |  | || |) |)";    
    H::foreColor(4); H::gotoxy(86,15); cout<<R"( |___/\_,_|\_, | |___/\_, | |___|___/ )";    
    H::foreColor(4); H::gotoxy(86,16); cout<<R"(           |__/       |__/            )";    


    for(int i = 1 ; i < 8 ; i ++)
    {
        H::VLine(72,15+i,1,7,221);H::delay(10);//left down
        H::VLine(140,30-i,1,7,221);H::delay(10);//right up

        H::VLine(72,30-i,1,7,221);H::delay(10);//left up
        H::VLine(140,15+i,1,7,221);H::delay(10);//right down
    }

    H::drawBoxSingleLine(88,18,36,1,3); H::setcolor(4);H::gotoxy(92,19);cout << "Buy Food or Drink By ID : ";
    H::drawBoxSingleLine(88,22,36,1,3); H::setcolor(4);H::gotoxy(92,23);cout << "Amount of Food or Drink : ";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif