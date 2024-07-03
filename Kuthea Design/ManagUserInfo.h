#ifndef __MANAGEUSERINFO_H__
#define __MANAGEUSERINFO_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void THEA::ManageUserInfo::ManageUserInfoTxt(){
    H::foreColor(3); H::gotoxy(26,1); cout<<R"(   _____                                         ____ ___                     .___        _____       )";
    H::foreColor(3); H::gotoxy(26,2); cout<<R"(  /     \ _____    ____ _____     ____   ____   |    |   \______ ___________  |   | _____/ ____\____  )";
    H::foreColor(3); H::gotoxy(26,3); cout<<R"( /  \ /  \\__  \  /    \\__  \   / ___\_/ __ \  |    |   /  ___// __ \_  __ \ |   |/    \   __\/  _ \ )";
    H::foreColor(4); H::gotoxy(26,4); cout<<R"(/    Y    \/ __ \|   |  \/ __ \_/ /_/  >  ___/  |    |  /\___ \\  ___/|  | \/ |   |   |  \  | (  <_> ))";
    H::foreColor(4); H::gotoxy(26,5); cout<<R"(\____|__  (____  /___|  (____  /\___  / \___  > |______//____  >\___  >__|    |___|___|  /__|  \____/ )";
    H::foreColor(4); H::gotoxy(26,6); cout<<R"(        \/     \/     \/     \//_____/      \/               \/     \/                 \/             )";

    H::HLine(15,8,125,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void THEA::ManageUserInfo::ManageUserInfo_Design(){
    H::drawBoxDoubleLineWithBG(20,10,115,1,179);
    for(int i=0; i<3; i++){
        H::VLine(70,12,i+1,7,221); H::delay(100);
        H::VLine(90,12,i+1,7,221); H::delay(100);
    }
    H::drawBoxDoubleLineWithBG(25,16,105,20,196);
    H::drawBoxDoubleLineWithBG(70,17,19,18,179);
    H::VLine(75,18,16,183,219);
    H::VLine(85,18,16,183,219);
    H::foreColor(183); H::gotoxy(53,11); cout<<"==========>\3\3\3PRESS [UP] [DOWN] KEY\3\3\3<==========";
    int y=1;
    char press;
    do{
        H::drawBoxDoubleLineWithBG(30,17,30,1,183);
        H::drawBoxDoubleLineWithBG(30,25,30,1,183);
        H::drawBoxDoubleLineWithBG(30,33,30,1,183);
        H::drawBoxDoubleLineWithBG(96,17,30,1,183);
        H::drawBoxDoubleLineWithBG(96,25,30,1,183);
        H::drawBoxDoubleLineWithBG(96,33,30,1,183);

        H::foreColor(183); H::gotoxy(38,18); cout<<"SIGN UP USER";
        H::foreColor(183); H::gotoxy(38,26); cout<<"VIEW USER INFO";
        H::foreColor(183); H::gotoxy(38,34); cout<<"EDIT USER INFO";
        H::foreColor(183); H::gotoxy(103,18); cout<<"DELETE USER INFO";
        H::foreColor(183); H::gotoxy(102,26); cout<<"SORTING USER HOUR";
        H::foreColor(183); H::gotoxy(109,34); cout<<"BACK";
        if(y==1){
            H::drawBoxDoubleLineWithBG(30,17,30,1,135);
            H::foreColor(135);
            H::gotoxy(38,18); cout <<"SIGN UP USER";
        }
        else if(y==2){
            H::drawBoxDoubleLineWithBG(30,25,30,1,135);
            H::foreColor(135);
            H::gotoxy(38,26); cout <<"VIEW USER INFO";
        }
        else if(y==3){
            H::drawBoxDoubleLineWithBG(30,33,30,1,135);
            H::foreColor(135);
            H::gotoxy(38,34); cout <<"EDIT USER INFO";
        }
        else if(y==4){
            H::drawBoxDoubleLineWithBG(96,17,30,1,135);
            H::foreColor(135);
            H::gotoxy(103,18); cout <<"DELETE USER INFO";
        }
        else if(y==5){
            H::drawBoxDoubleLineWithBG(96,25,30,1,135);
            H::foreColor(135);
            H::gotoxy(102,26); cout <<"SORTING USER HOUR";
        }
        else if(y==6){
            H::drawBoxDoubleLineWithBG(96,33,30,1,135);
            H::foreColor(135);
            H::gotoxy(109,34); cout <<"BACK";
        }
        press = getch();
        
        switch(press){
            case 72:
                y--;
                if(y<1){

                    y=6;
                }
                break;
            case 80:
                y++;
                if(y>6){
                    y=1;
                }
                break;
        }
    }while(press!='6');
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                        END OF HEADER FILE              
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif