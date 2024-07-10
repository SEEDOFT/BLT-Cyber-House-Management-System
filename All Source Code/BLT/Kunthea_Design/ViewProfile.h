#ifndef __VIEWUSERINFODESIGN_H__
#define __VIEWUSERINFODESIGN_H__
#include "./Header/HinsyOOPV2"
using namespace HinsyOOP;
class ViewProfile{
    public:
        static void viewProfileAscii();
        static void viewProfileDeisign();
};

void ViewProfile::viewProfileAscii(){
    H::foreColor(3); H::gotoxy(40,1); cout<<R"(____   ____.__                __________                _____.__.__          )";
    H::foreColor(3); H::gotoxy(40,2); cout<<R"(\   \ /   /|__| ______  _  __ \______   \_______  _____/ ____\__|  |   ____  )";
    H::foreColor(3); H::gotoxy(40,3); cout<<R"( \   Y   / |  |/ __ \ \/ \/ /  |     ___/\_  __ \/  _ \   __\|  |  | _/ __ \ )";
    H::foreColor(4); H::gotoxy(40,4); cout<<R"(  \     /  |  \  ___/\     /   |    |     |  | \(  <_> )  |  |  |  |_\  ___/ )";
    H::foreColor(4); H::gotoxy(40,5); cout<<R"(   \___/   |__|\___  >\/\_/    |____|     |__|   \____/|__|  |__|____/\___  >)";
    H::foreColor(4); H::gotoxy(40,6); cout<<R"(                   \/                                                     \/ )";
    H::HLine(30,8,100,7,196);
}

void ViewProfile::viewProfileDeisign(){
    H::drawBoxDoubleLineWithBG(20,10,120,1,196);
    H::HLine(22,11,117,199,221);
    for(int i=0; i<3; i++){
        H::VLine(70,12,i+1,7,221); H::delay(100);
        H::VLine(90,12,i+1,7,221); H::delay(100);
    }
    H::drawBoxDoubleLineWithBG(30,15,100,1,179);
    H::gotoxy(34,16); H::foreColor(183); cout<<"|ID|  |  |Name|  |  |USERNAME|  |  |PASSWORD|  |  |TIME|  |  |REMAIN TIME|  |  |TOTAL PRICE|";
    H::drawBoxDoubleLineWithBG(16,11,1,25,179);
    H::VLine(17,11,25,183,219);
    H::drawBoxDoubleLineWithBG(143,11,1,25,179);
    H::VLine(144,11,25,183,219);
    H::foreColor(7);
    H::foreColor(55); H::gotoxy(46,35); cout<<"use ";H::setcolor(52);cout<<" [<-] [->]";H::setcolor(55);cout<<" arrow key to move between option and ";
    H::setcolor(52);cout<<"[ENTER]";H::setcolor(55);cout<<" to select";

}


#endif