#ifndef __VIEWUSERINFODESIGN_H__
#define __VIEWUSERINFODESIGN_H__
#include "./Header/HinsyOOPV2"
using namespace HinsyOOP;
class ViewuserInvoice{
    public: 
        static void ViewInvoiceAscii();
        static void ViewinvoiceDesign();
};
void ViewuserInvoice::ViewInvoiceAscii(){
    H::foreColor(3); H::gotoxy(20,1); cout<<R"(____   ____.__                   _____  .__  .__     ____ ___                     .___                  .__              )";
    H::foreColor(3); H::gotoxy(20,2); cout<<R"(\   \ /   /|__| ______  _  __   /  _  \ |  | |  |   |    |   \______ ___________  |   | _______  ______ |__| ____  ____  )";
    H::foreColor(3); H::gotoxy(20,3); cout<<R"( \   Y   / |  |/ __ \ \/ \/ /  /  /_\  \|  | |  |   |    |   /  ___// __ \_  __ \ |   |/    \  \/ /  _ \|  |/ ___\/ __ \ )";
    H::foreColor(4); H::gotoxy(20,4); cout<<R"(  \     /  |  \  ___/\     /  /    |    \  |_|  |__ |    |  /\___ \\  ___/|  | \/ |   |   |  \   (  <_> )  \  \__\  ___/ )";
    H::foreColor(4); H::gotoxy(20,5); cout<<R"(   \___/   |__|\___  >\/\_/   \____|__  /____/____/ |______//____  >\___  >__|    |___|___|  /\_/ \____/|__|\___  >___  >)";
    H::foreColor(4); H::gotoxy(20,6); cout<<R"(                   \/                 \/                         \/     \/                 \/                   \/    \/ )";
    H::HLine(10,8,140,7,196);
}

void ViewuserInvoice::ViewinvoiceDesign(){
    H::drawBoxSingleLine(20,10,120,1,3);
    H::drawBoxDoubleLineWithBG(16,11,1,25,179);
    H::VLine(17,11,25,183,3);
    H::drawBoxDoubleLineWithBG(143,11,1,25,179);
    H::VLine(144,11,25,183,3);
    H::foreColor(7);
    //laebel
    H::gotoxy(30,11); cout<<"No.\t\tDATE\t\tCASHIER\t\tSNACK & DRINK\t\tTIME\t\tTOTAL";
}

#endif