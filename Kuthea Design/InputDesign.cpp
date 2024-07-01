//#ifndef __INPUTDESIGN_H__
//#define __INPUTDESIGN_H__
#include<iostream>
#include<conio.h>
#include "./Header/HinsyOOPV2"
using namespace std;
using namespace HinsyOOP;
class InputDesign{
    public:
        static void Design();
};

void InputDesign::Design(){
    H::foreColor(3); H::gotoxy(40,1); cout<<R"(.___                      __    ________          __          )";
    H::foreColor(3); H::gotoxy(40,2); cout<<R"(|   | ____ ______  __ ___/  |_  \______ \ _____ _/  |______   )";
    H::foreColor(3); H::gotoxy(40,3); cout<<R"(|   |/    \\____ \|  |  \   __\  |    |  \\__  \\   __\__  \  )";
    H::foreColor(4); H::gotoxy(40,4); cout<<R"(|   |   |  \  |_> >  |  /|  |    |    `   \/ __ \|  |  / __ \_)";
    H::foreColor(4); H::gotoxy(40,5); cout<<R"(|___|___|  /   __/|____/ |__|   /_______  (____  /__| (____  /)";
    H::foreColor(4); H::gotoxy(40,6); cout<<R"(         \/|__|                         \/     \/          \/ )";

    H::HLine(30,8,83,7,196);

    //header
    H::drawBoxDoubleLineWithBG(25,10,93,1,196);
    H::VLine(30,12,3,7,221);
    H::VLine(115,12,3,7,221);

    H::drawBoxDoubleLineWithBG(25,16,93,20,187);
    H::drawBoxDoubleLineWithBG(30,19,30,15,196);
    H::drawBoxDoubleLineWithBG(84,19,30,15,196);

    H::drawBoxDoubleLineWithBG(32,20,26,1,183);
    H::drawBoxDoubleLineWithBG(32,24,26,1,183);
    H::drawBoxDoubleLineWithBG(32,28,26,1,183);
    H::drawBoxDoubleLineWithBG(32,32,26,1,183);

    H::drawBoxDoubleLineWithBG(86,20,26,1,183);
    H::drawBoxDoubleLineWithBG(86,24,26,1,183);
    H::drawBoxDoubleLineWithBG(86,28,26,1,183);
    H::drawBoxDoubleLineWithBG(86,32,26,1,183);

    //label
    H::foreColor(183); H::gotoxy(34,21); cout<<"ID    ";
    H::foreColor(183); H::gotoxy(34,25); cout<<"Name  ";
    H::foreColor(183); H::gotoxy(34,29); cout<<"QTY   ";
    H::foreColor(183); H::gotoxy(34,33); cout<<"PRICE ";

    H::foreColor(183); H::gotoxy(88,21); cout<<": ";
    H::foreColor(183); H::gotoxy(88,25); cout<<": ";
    H::foreColor(183); H::gotoxy(88,29); cout<<": ";
    H::foreColor(183); H::gotoxy(88,33); cout<<": ";

    H::foreColor(183); H::gotoxy(34,20); cout<<">.<";
    H::foreColor(183); H::gotoxy(34,24); cout<<">.<";
    H::foreColor(183); H::gotoxy(34,28); cout<<">.<";
    H::foreColor(183); H::gotoxy(34,32); cout<<">.<";

    H::foreColor(183); H::gotoxy(88,20); cout<<">.<";
    H::foreColor(183); H::gotoxy(88,24); cout<<">.<";
    H::foreColor(183); H::gotoxy(88,28); cout<<">.<";
    H::foreColor(183); H::gotoxy(88,32); cout<<">.<";

    H::foreColor(199); H::gotoxy(55,11); cout<<"\3\3Welcome to BTL Cyber Food Stock\3\3";

    H::VLine(70,16,20,183,219);
    H::VLine(75,16,20,183,219);
}

int main(){
    system("mode con cols=160 lines=40");
    H::setFont(20,700);
    InputDesign::Design();
    H::gotoxy(1,1000);
    getch();
}
//#endif