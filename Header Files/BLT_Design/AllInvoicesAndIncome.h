#ifndef __VIEWALLINVOICE_H__
#define __VIEWALLINVOICE_H__
 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::AllInvoice::AllInvoicesTxt()
{
    Design::TxtOutline(-19,0,37,1);
    H::foreColor(7); H::gotoxy(29,3); cout<<R"(   _   _ _    _____                 _                  ___      _____                                )";
    H::foreColor(7); H::gotoxy(29,4); cout<<R"(  /_\ | | |   \_   \_ ____   _____ (_) ___ ___  ___   ( _ )     \_   \_ __   ___ ___  _ __ ___   ___ )";
    H::foreColor(1); H::gotoxy(29,5); cout<<R"( //_\\| | |    / /\/ '_ \ \ / / _ \| |/ __/ _ \/ __|  / _ \/\    / /\/ '_ \ / __/ _ \| '_ ` _ \ / _ \)";
    H::foreColor(7); H::gotoxy(29,6); cout<<R"(/  _  \ | | /\/ /_ | | | \ V / (_) | | (_|  __/\__ \ | (_>  < /\/ /_ | | | | (_| (_) | | | | | |  __/)";
    H::foreColor(7); H::gotoxy(29,7); cout<<R"(\_/ \_/_|_| \____/ |_| |_|\_/ \___/|_|\___\___||___/  \___/\/ \____/ |_| |_|\___\___/|_| |_| |_|\___|)";
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