#ifndef __BUYFOODnDRINK_H__
#define __BUYFOODnDRINK_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::BuyFoodnDrink::BuyFoodnDrinkTxt()
{
    H::foreColor(3); H::gotoxy(28,1); cout<<R"(__________               ___________               .___                ________        .__        __    )";
    H::foreColor(3); H::gotoxy(28,2); cout<<R"(\______   \__ __ ___.__. \_   _____/___   ____   __| _/   ___________  \______ \_______|__| ____ |  | __)";
    H::foreColor(3); H::gotoxy(28,3); cout<<R"( |    |  _/  |  <   |  |  |    __)/  _ \ /  _ \ / __ |   /  _ \_  __ \  |    |  \_  __ \  |/    \|  |/ /)";
    H::foreColor(4); H::gotoxy(28,4); cout<<R"( |    |   \  |  /\___  |  |     \(  <_> |  <_> ) /_/ |  (  <_> )  | \/  |    `   \  | \/  |   |  \    < )";
    H::foreColor(4); H::gotoxy(28,5); cout<<R"( |______  /____/ / ____|  \___  / \____/ \____/\____ |   \____/|__|    /_______  /__|  |__|___|  /__|_ \)";
    H::foreColor(4); H::gotoxy(28,6); cout<<R"(        \/       \/           \/                    \/                         \/              \/     \/)";
    H::HLine(20,8,120,7,220);

} 
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void  BLT::BuyFoodnDrink::buyFoodnDrink_Design()
{
    H::foreColor(7); H::gotoxy(30,12); cout<<R"(                // )";
    H::foreColor(7); H::gotoxy(30,13); cout<<R"(               //  )";
    H::foreColor(7); H::gotoxy(30,14); cout<<R"(              //   )";
    H::foreColor(7); H::gotoxy(30,15); cout<<R"(             //    )";
    H::foreColor(1); H::gotoxy(30,16); cout<<R"(      _______)";H::setcolor(7);cout << R"(||    )";
    H::foreColor(1); H::gotoxy(30,17); cout<<R"( ,-'''       )";H::setcolor(7);cout << R"(||)";H::setcolor(1);cout << R"(`-. )";
    H::foreColor(1); H::gotoxy(30,18); cout<<R"((            )";H::setcolor(7);cout << R"(||   )";H::setcolor(1);cout << R"())";
    H::foreColor(1); H::gotoxy(30,19); cout<<R"(|`-..._______,..-'|)";
    H::foreColor(1); H::gotoxy(30,20); cout<<R"(|            )";H::setcolor(7);cout << R"(||   )";H::setcolor(1);cout << R"(|)";
    H::foreColor(1); H::gotoxy(30,21); cout<<R"(|)";H::setcolor(2);cout << R"(     _______)";H::setcolor(7);cout << R"(||   )";H::setcolor(1);cout << R"(|)";
    H::foreColor(1); H::gotoxy(30,22); cout<<R"(|)";H::setcolor(2);cout << R"(,-'''_ _  ~ )";H::setcolor(7);cout << R"(||)";H::setcolor(2);cout << R"(`-.)";H::setcolor(1);cout << R"(|)";
    H::foreColor(1); H::gotoxy(30,21); cout<<R"(|)";H::setcolor(2);cout << R"(  ~ / `-.\ ,-'\ ~)";H::setcolor(1);cout << R"(|)";
    H::foreColor(1); H::gotoxy(30,24); cout<<R"(|)";H::setcolor(2);cout << R"(`-...___/___,..-')";H::setcolor(1);cout << R"(|)";
    H::foreColor(1); H::gotoxy(30,25); cout<<R"(|)";H::setcolor(2);cout << R"(    `-./-'_ \/_| )";H::setcolor(1);cout << R"(|)";
    H::foreColor(1); H::gotoxy(30,26); cout<<R"(|)";H::setcolor(2);cout << R"( -'  ~~     || -.)";H::setcolor(1);cout << R"(|)";
    H::foreColor(1); H::gotoxy(30,27); cout<<R"(()";H::setcolor(2);cout << R"(   ~      ~   ~~ )";H::setcolor(1);cout << R"())";
    H::foreColor(1); H::gotoxy(30,28); cout<<R"( `-..._______,..-' )";

    H::foreColor(3); H::gotoxy(86,12); cout<<R"(  ___             ___        ___ ___  )";    
    H::foreColor(3); H::gotoxy(86,13); cout<<R"( | _ )_  _ _  _  | _ )_  _  |_ _|   \ )";    
    H::foreColor(4); H::gotoxy(86,14); cout<<R"( | _ \ || | || | | _ \ || |  | || |) |)";    
    H::foreColor(4); H::gotoxy(86,15); cout<<R"( |___/\_,_|\_, | |___/\_, | |___|___/ )";    
    H::foreColor(4); H::gotoxy(86,16); cout<<R"(           |__/       |__/            )";    

    H::drawBoxSingleLine(88,18,36,1,3); H::setcolor(4);H::gotoxy(90,19);cout << "Buy Food or Drink By ID : ";
    H::drawBoxSingleLine(88,22,36,1,3); H::setcolor(4);H::gotoxy(90,23);cout << "Amount of Food or Drink : ";

    for(int i = 1 ; i <= 26 ; i ++ )
    {
        H::HLine(15,11,i,7,220);
        H::HLine(66-i,11,1,7,220);

        H::HLine(15,32,i,7,220);
        H::HLine(66-i,32,1,7,220);

        H::delay(10);

        if(i == 26)
        {
            for(int i = 1 ; i <= 11 ; i ++)
            {
                H::VLine(16,10+i,1,7,219);
                H::VLine(16,32-i,1,7,219);

                H::VLine(66,10+i,1,7,219);
                H::VLine(66,32-i,1,7,219);

                H::delay(5);
            }
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif