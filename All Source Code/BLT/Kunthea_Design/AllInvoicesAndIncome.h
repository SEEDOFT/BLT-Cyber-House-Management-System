#ifndef __VIEWALLINVOICE_H__
#define __VIEWALLINVOICE_H__
 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::AllInvoice::AllInvoicesTxt()
{
    H::foreColor(3); H::gotoxy(20,1); cout<<R"(   _____  .__  .__    .___                  .__                        ____    .___                                    )";
    H::foreColor(3); H::gotoxy(20,2); cout<<R"(  /  _  \ |  | |  |   |   | _______  ______ |__| ____  ____   ______  /  _ \   |   | ____   ____  ____   _____   ____  )";
    H::foreColor(3); H::gotoxy(20,3); cout<<R"( /  /_\  \|  | |  |   |   |/    \  \/ /  _ \|  |/ ___\/ __ \ /  ___/  >  _ </\ |   |/    \_/ ___\/  _ \ /     \_/ __ \ )";
    H::foreColor(4); H::gotoxy(20,4); cout<<R"(/    |    \  |_|  |__ |   |   |  \   (  <_> )  \  \__\  ___/ \___ \  /  <_\ \/ |   |   |  \  \__(  <_> )  Y Y  \  ___/ )";
    H::foreColor(4); H::gotoxy(20,5); cout<<R"(\____|__  /____/____/ |___|___|  /\_/ \____/|__|\___  >___  >____  > \_____\ \ |___|___|  /\___  >____/|__|_|  /\___  >)";
    H::foreColor(4); H::gotoxy(20,6); cout<<R"(        \/                     \/                   \/    \/     \/         \/          \/     \/            \/     \/ )";
    H::HLine(20,8,120,7,196);
}
 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::AllInvoice::AllInvoices_Design()
{
    H::drawBoxDoubleLineWithBG(20,10,120,1,25);
    
    H::gotoxy(20,11); H::foreColor(23); cout << left << setw(10) << "|ID|" << setw(20) << "|NAME|" << setw(25) << "|FOOD & DRINK|" << setw(20) << "|QTY|" << setw(20) << "|HOUR|" << "|TOTAL PRICE|";
    H::drawBoxDoubleLineWithBG(16,11,1,25,179);
    H::VLine(17,11,25,183,219);
    H::drawBoxDoubleLineWithBG(143,11,1,25,179);
    H::VLine(144,11,25,183,219);

    H::drawBoxDoubleLineWithBG(20,35,59,1,55);

    H::drawBoxSingleLineWithBG(80,35,29,1,103);//USD
    H::drawBoxSingleLineWithBG(110,35,30,1,103);//KHR
}
 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif