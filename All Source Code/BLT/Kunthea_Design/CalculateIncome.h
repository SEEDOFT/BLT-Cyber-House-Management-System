#ifndef __CalculateIncome__
#define __CalculateIncome__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::CalculateIncome::CalculateIncomeTxt(){
    H::foreColor(3); H::gotoxy(29,1); cout<<R"(_________        .__               .__          __           .___                                    )";
    H::foreColor(3); H::gotoxy(29,2); cout<<R"(\_   ___ \_____  |  |   ____  __ __|  | _____ _/  |_  ____   |   | ____   ____  ____   _____   ____  )";
    H::foreColor(3); H::gotoxy(29,3); cout<<R"(/    \  \/\__  \ |  | _/ ___\|  |  \  | \__  \\   __\/ __ \  |   |/    \_/ ___\/  _ \ /     \_/ __ \ )";
    H::foreColor(4); H::gotoxy(29,4); cout<<R"(\     \____/ __ \|  |_\  \___|  |  /  |__/ __ \|  | \  ___/  |   |   |  \  \__(  <_> )  Y Y  \  ___/ )";
    H::foreColor(4); H::gotoxy(29,5); cout<<R"( \______  (____  /____/\___  >____/|____(____  /__|  \___  > |___|___|  /\___  >____/|__|_|  /\___  >)";
    H::foreColor(4); H::gotoxy(29,6); cout<<R"(        \/     \/          \/                \/          \/           \/     \/            \/     \/ )";
    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::CalculateIncome::CalculateIncome_Design()
{
    H::drawBoxSingleLine(20,10,120,1,4);
    H::drawBoxDoubleLineWithBG(15,11,1,25,196);
    H::VLine(16,11,25,199,3);
    H::drawBoxDoubleLineWithBG(144,11,1,25,196);
    H::VLine(145,11,25,199,3);
    H::foreColor(7);
    //laebel
    H::gotoxy(30,11); cout<<"|No.|\t\t|DATE|\t\t|CASHIER|\t\t|FOOD&DRINK|\t\t|TIME|\t\t|TOTAL|";
    H::drawBoxSingleLine(65,35,30,1,4);
    H::gotoxy(67,36); H::foreColor(199); cout<<"Total Income: "; 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif