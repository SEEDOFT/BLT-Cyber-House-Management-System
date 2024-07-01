#ifndef __FOODMENUFORM_H__
#define __FOODMENUFORM_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../ANT_Header/HinsyOOPV2"
using namespace HinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class Menu{
    public:
        static void header();
        static void ascii();
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Menu::header(){
     //box
    H::drawBoxDoubleLineWithBG(33,10,85,25,71);
    H::drawBoxDoubleLineWithBG(35,11,81,23,55);
    H::drawBoxDoubleLineWithBG(37,18,77,10,103);

    H::HLine(38,19,75,23,178);
    H::HLine(38,28,75,23,178);

    H::VLine(39,18,10,23,178);
    H::VLine(113,18,10,23,178);

    H::foreColor(103); H::gotoxy(48,21); cout<<R"(_________        ___.                 ________  ________ )";
    H::foreColor(103); H::gotoxy(48,22); cout<<R"(\_   ___ \___.__.\_ |__   ___________/   __   \/   __   \)";
    H::foreColor(103); H::gotoxy(48,23); cout<<R"(/    \  \<   |  | | __ \_/ __ \_  __ \____    /\____    /)";
    H::foreColor(103); H::gotoxy(48,24); cout<<R"(\     \___\___  | | \_\ \  ___/|  | \/  /    /    /    / )";
    H::foreColor(103); H::gotoxy(48,25); cout<<R"( \______  / ____| |___  /\___  >__|    /____/    /____/  )";
    H::foreColor(103); H::gotoxy(48,26); cout<<R"(        \/\/          \/     \/                          )";


    int y=1;
    char press;
    do
    {
        //option
        H::drawBoxDoubleLineWithBG(37,13,20,1,23);
        H::drawBoxDoubleLineWithBG(65,13,20,1,23);
        H::drawBoxDoubleLineWithBG(94,13,20,1,23);

        H::drawBoxDoubleLineWithBG(37,31,20,1,23);
        H::foreColor(55); H::gotoxy(63,32); cout<<"PRESS [<-] [->] TO SELECT";
        H::drawBoxDoubleLineWithBG(94,31,20,1,23);
        //label
        H::foreColor(151);
        H::foreColor(23); H::gotoxy(38,14); cout<<"INSERT FOOD N DRINK";
        H::foreColor(23); H::gotoxy(66,14); cout<<"VIEW FOOD N DRINK";
        H::foreColor(23); H::gotoxy(95,14); cout<<"SEARCH FOOD N DRINK";

        
        H::foreColor(23); H::gotoxy(37,32); cout<<"REMOVE FOOD N DRINK";
        H::foreColor(23); H::gotoxy(102,32); cout<<"BACK";
        if(y==1){
            H::drawBoxDoubleLineWithBG(37,13,20,1,196);
            H::foreColor(199);
			H::gotoxy(38,14); cout <<"INSERT FOOD N DRINK";
        }
        else if(y==2){
            H::drawBoxDoubleLineWithBG(65,13,20,1,196);
            H::foreColor(199);
			H::gotoxy(66,14); cout <<"VIEW FOOD N DRINK";
        }
        else if(y==3){
            H::drawBoxDoubleLineWithBG(94,13,20,1,196);
            H::foreColor(199);
            H::gotoxy(95,14); cout <<"SEARCH FOOD N DRINK";
        }
        else if(y==4){
            H::drawBoxDoubleLineWithBG(37,31,20,1,196);
            H::foreColor(199);
			H::gotoxy(37,32); cout <<"REMOVE FOOD N DRINK";
        }
        else if(y==5){
            H::drawBoxDoubleLineWithBG(94,31,20,1,196);
            H::foreColor(199);
			H::gotoxy(102,32); cout <<"BACK";
        }
        press = getch();
        
        switch(press){
            case 75:
                y--;
                if(y<1){
                    y=5;
                }
                break;
            case 77:
                y++;
                if(y>5){
                    y=1;
                }
                break;
        }
    } while (press!='5');
    
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Menu::ascii(){
    H::foreColor(3); H::gotoxy(43,1); cout<<R"(___________               .___    _____                       )";
    H::foreColor(3); H::gotoxy(43,2); cout<<R"(\_   _____/___   ____   __| _/   /     \   ____   ____  __ __ )";
    H::foreColor(3); H::gotoxy(43,3); cout<<R"( |    __)/  _ \ /  _ \ / __ |   /  \ /  \_/ __ \ /    \|  |  \)";
    H::foreColor(4); H::gotoxy(43,4); cout<<R"( |     \(  <_> |  <_> ) /_/ |  /    Y    \  ___/|   |  \  |  /)";
    H::foreColor(4); H::gotoxy(43,5); cout<<R"( \___  / \____/ \____/\____ |  \____|__  /\___  >___|  /____/ )";
    H::foreColor(4); H::gotoxy(43,6); cout<<R"(     \/                    \/          \/     \/     \/       )";

    H::HLine(40,8,70,7,178);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif