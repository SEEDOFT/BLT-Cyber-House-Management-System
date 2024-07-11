#ifndef __VIEWALLINVOICE_H__
#define __VIEWALLINVOICE_H__
 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::AllInvoice::AllInvoicesTxt()
{
    H::foreColor(3); H::gotoxy(31,1); cout<<R"(____   ____.__                   _____  .__  .__    .___                  .__                     )";
    H::foreColor(3); H::gotoxy(31,2); cout<<R"(\   \ /   /|__| ______  _  __   /  _  \ |  | |  |   |   | _______  ______ |__| ____  ____  ______ )";
    H::foreColor(3); H::gotoxy(31,3); cout<<R"( \   Y   / |  |/ __ \ \/ \/ /  /  /_\  \|  | |  |   |   |/    \  \/ /  _ \|  |/ ___\/ __ \ /  ___/)";
    H::foreColor(4); H::gotoxy(31,4); cout<<R"(  \     /  |  \  ___/\     /  /    |    \  |_|  |__ |   |   |  \   (  <_> )  \  \__\  ___/ \___ \ )";
    H::foreColor(4); H::gotoxy(31,5); cout<<R"(   \___/   |__|\___  >\/\_/   \____|__  /____/____/ |___|___|  /\_/ \____/|__|\___  >___  >____  >)";
    H::foreColor(4); H::gotoxy(31,6); cout<<R"(                   \/                 \/                     \/                   \/    \/     \/ )";
    H::HLine(20,8,120,7,196);
}
 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::AllInvoice::AllInvoices_Design()
{
    H::drawBoxDoubleLineWithBG(20,10,120,1,196);
    H::HLine(22,11,117,199,221);
    for(int i=0; i<3; i++)
    {
        H::VLine(70,12,i+1,7,221); H::delay(10);
        H::VLine(90,12,i+1,7,221); H::delay(10);
    }
    H::drawBoxDoubleLineWithBG(30,15,100,1,25);
    H::gotoxy(34,16); H::foreColor(23); cout<<"|ID|     |     |Name|     |     |FOOD & DRINK|     |     |HOUR|     |      |TOTAL PRICE|";
    H::drawBoxDoubleLineWithBG(16,11,1,25,179);
    H::VLine(17,11,25,183,219);
    H::drawBoxDoubleLineWithBG(143,11,1,25,179);
    H::VLine(144,11,25,183,219);
    H::foreColor(7);
}
 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif