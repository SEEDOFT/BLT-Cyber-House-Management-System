#ifndef __VIEWUSERINFODESIGN_H__
#define __VIEWUSERINFODESIGN_H__
#include "./Header/HinsyOOPV2"
using namespace HinsyOOP;
class CalculateIncome{
    public:
        static void calculateIncomeAscii();
        static void calculateIncomeDesign();
};

void CalculateIncome::calculateIncomeAscii(){
    H::foreColor(3); H::gotoxy(30,1); cout<<R"(_________        .__               .__          __           .___                                    )";
    H::foreColor(3); H::gotoxy(30,2); cout<<R"(\_   ___ \_____  |  |   ____  __ __|  | _____ _/  |_  ____   |   | ____   ____  ____   _____   ____  )";
    H::foreColor(3); H::gotoxy(30,3); cout<<R"(/    \  \/\__  \ |  | _/ ___\|  |  \  | \__  \\   __\/ __ \  |   |/    \_/ ___\/  _ \ /     \_/ __ \ )";
    H::foreColor(4); H::gotoxy(30,4); cout<<R"(\     \____/ __ \|  |_\  \___|  |  /  |__/ __ \|  | \  ___/  |   |   |  \  \__(  <_> )  Y Y  \  ___/ )";
    H::foreColor(4); H::gotoxy(30,5); cout<<R"( \______  (____  /____/\___  >____/|____(____  /__|  \___  > |___|___|  /\___  >____/|__|_|  /\___  >)";
    H::foreColor(4); H::gotoxy(30,6); cout<<R"(        \/     \/          \/                \/          \/           \/     \/            \/     \/ )";
    H::HLine(20,8,120,7,196);
}

void CalculateIncome::calculateIncomeDesign(){
    H::drawBoxSingleLine(20,10,120,1,4);
    H::drawBoxDoubleLineWithBG(16,11,1,25,196);
    H::VLine(17,11,25,199,3);
    H::drawBoxDoubleLineWithBG(143,11,1,25,196);
    H::VLine(144,11,25,199,3);
    H::foreColor(7);
    //laebel
    H::gotoxy(30,11); cout<<"No.\t\tDATE\t\tCASHIER\t\tSNACK & DRINK\t\tTIME\t\tTOTAL";
    H::drawBoxSingleLine(65,35,30,1,4);
    H::gotoxy(67,36); H::foreColor(199); cout<<"Total Income: "; 
}
#endif