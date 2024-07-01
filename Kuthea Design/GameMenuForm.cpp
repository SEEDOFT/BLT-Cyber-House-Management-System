//#ifndef __GAMEMENUFORM_H__
//#define __GAMEMENUFORM_H__
#include<iostream>
#include<conio.h>
#include "../ANT_Header/HinsyOOPV2"
using namespace std;
using namespace HinsyOOP;
class GameMenu{
    public:
        static void ascii();
        static void header(); 
        static void AssciiBox();
        static void Boxoption();
};

void GameMenu::ascii(){
    H::foreColor(4); H::gotoxy(38,1); cout<<R"(  ________                           _____                       )";
    H::foreColor(4); H::gotoxy(38,2); cout<<R"( /  _____/_____    _____   ____     /     \   ____   ____  __ __ )";
    H::foreColor(4); H::gotoxy(38,3); cout<<R"(/   \  ___\__  \  /     \_/ __ \   /  \ /  \_/ __ \ /    \|  |  \)";
    H::foreColor(2); H::gotoxy(38,4); cout<<R"(\    \_\  \/ __ \|  Y Y  \  ___/  /    Y    \  ___/|   |  \  |  /)";
    H::foreColor(2); H::gotoxy(38,5); cout<<R"( \______  (____  /__|_|  /\___  > \____|__  /\___  >___|  /____/ )";
    H::foreColor(2); H::gotoxy(38,6); cout<<R"(        \/     \/      \/     \/          \/     \/     \/       )";

    H::HLine(35,8,70,4,178);
}

void GameMenu::AssciiBox(){
    H::foreColor(199); H::gotoxy(52,21); cout<<R"(_________        ___.                 )";
    H::foreColor(199); H::gotoxy(52,22); cout<<R"(\_   ___ \___.__.\_ |__   ___________ )";
    H::foreColor(199); H::gotoxy(52,23); cout<<R"(/    \  \<   |  | | __ \_/ __ \_  __ \)";
    H::foreColor(199); H::gotoxy(52,24); cout<<R"(\     \___\___  | | \_\ \  ___/|  | \/)";
    H::foreColor(199); H::gotoxy(52,25); cout<<R"( \______  / ____| |___  /\___  >__|   )";
    H::foreColor(199); H::gotoxy(52,26); cout<<R"(        \/\/          \/     \/       )";
}

void GameMenu::header(){
    H:: drawBoxDoubleLineWithBG(20,10,100,1,196);
    H::VLine(30,12,3,7,219);
    H::VLine(110,12,3,7,219);
    H::drawBoxDoubleLineWithBG(25,16,90,15,145);
    H::drawBoxDoubleLineWithBG(49,16,42,15,196);
    H::VLine(40,32,2,7,219);
    H::VLine(100,32,2,7,219);
    H::drawBoxDoubleLineWithBG(30,35,80,1,196);
}

void GameMenu::Boxoption(){
    int y=1;
    char press;
    do{
        H::drawBoxDoubleLineWithBG(27,18,18,1,23);
        H::drawBoxDoubleLineWithBG(27,23,18,1,23);
        H::drawBoxDoubleLineWithBG(27,28,18,1,23);

        H::drawBoxDoubleLineWithBG(95,18,18,1,23);
        H::drawBoxDoubleLineWithBG(95,23,18,1,23);

        
        H::foreColor(23); H::gotoxy(32,19); cout<<"ADD GAME";
        H::foreColor(23); H::gotoxy(31,24); cout<<"VIEW GAME";
        H::foreColor(23); H::gotoxy(31,29); cout<<"SEARCH GAME";

        
        H::foreColor(23); H::gotoxy(98,19); cout<<"REMOVE GAME";
        H::foreColor(23); H::gotoxy(102,24); cout<<"BACK";
        H::foreColor(151); H::gotoxy(94,29); cout<<"PRESS [UP] [DOWN] KEY";
        if(y==1){
            H::drawBoxDoubleLineWithBG(27,18,18,1,196);
            H::foreColor(199);
			H::gotoxy(32,19); cout <<"ADD GAME";
        }
        else if(y==2){
            H::drawBoxDoubleLineWithBG(27,23,18,1,196);
            H::foreColor(199);
			H::gotoxy(31,24); cout <<"VIEW GAME";
        }
        else if(y==3){
            H::drawBoxDoubleLineWithBG(27,28,18,1,196);
            H::foreColor(199);
            H::gotoxy(31,29); cout <<"SEARCH GAME";
        }
        else if(y==4){
            H::drawBoxDoubleLineWithBG(95,18,18,1,196);
            H::foreColor(199);
			H::gotoxy(98,19); cout <<"REMOVE GAME";
        }
        else if(y==5){
            H::drawBoxDoubleLineWithBG(95,23,18,1,196);
            H::foreColor(199);
			H::gotoxy(102,24); cout <<"BACK";
        }
        press=getch();
        switch (press)
        {
            case 72:
                y--;
                if(y<1){
                    y=5;
                }
                break;
            case 80:
                y++;
                if(y>5){
                    y=1;
                }
                break;
        }
    }while (press!='5');
}

int main(){
    system("mode con cols=160 lines=40");
    H::setFont(20,700);
    GameMenu::ascii();
    GameMenu::header();
    GameMenu::AssciiBox();
    GameMenu::Boxoption();
    H::gotoxy(1,1000);
    getch();
}