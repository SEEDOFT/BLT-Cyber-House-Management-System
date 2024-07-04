#ifndef __DELETEUSERINFO_H__
#define __DELETEUSERINFO_H__
#include "./Header/HinsyOOPV2"
using namespace HinsyOOP;
class DeleteUserInfo{
    public:
        static void deleteUserInfoAscii();
        static void deleteUserDesign();
};

void DeleteUserInfo::deleteUserInfoAscii(){
    H::foreColor(3); H::gotoxy(35,1); cout<<R"(________         .__          __            ____ ___                     .___        _____       )";
    H::foreColor(3); H::gotoxy(35,2); cout<<R"(\______ \   ____ |  |   _____/  |_  ____   |    |   \______ ___________  |   | _____/ ____\____  )";
    H::foreColor(3); H::gotoxy(35,3); cout<<R"( |    |  \_/ __ \|  | _/ __ \   __\/ __ \  |    |   /  ___// __ \_  __ \ |   |/    \   __\/  _ \ )";
    H::foreColor(4); H::gotoxy(35,4); cout<<R"( |    `   \  ___/|  |_\  ___/|  | \  ___/  |    |  /\___ \\  ___/|  | \/ |   |   |  \  | (  <_> ))";
    H::foreColor(4); H::gotoxy(35,5); cout<<R"(/_______  /\___  >____/\___  >__|  \___  > |______//____  >\___  >__|    |___|___|  /__|  \____/ )";
    H::foreColor(4); H::gotoxy(35,6); cout<<R"(        \/     \/          \/          \/               \/     \/                 \/             )";
    H::HLine(25,8,115,7,196);
}

void DeleteUserInfo::deleteUserDesign(){
    H::drawBoxSingleLineWithBG(20,10,120,1,179);
    H::VLine(70,12,3,7,221);
    H::VLine(90,12,3,7,221);
    H::drawBoxSingleLineWithBG(65,16,28,1,4);
    H::foreColor(199); H::gotoxy(74,17); cout<<"Delete ID: ";
    H::foreColor(7);
    //loading while searching
    for(int i=0; i<25; i++){
        H::setcursor(0,0);
        H::gotoxy(65,20); H::foreColor(3); cout<<"Deleting..."; 
        H::drawBoxSingleLine(65,21,28,1,3);
        H::gotoxy(89,20); H::foreColor(3); cout<<(i*4)+4<<"%";  H::delay(10);
        H::gotoxy(66+i,22); H::foreColor(3); cout<<">"; H::delay(10);
        H::foreColor(7);
    }
    H::clearBox(60,21,36,2,7);
    
    for(int i=0; i<7; i++){
        H::VLine(25,12,i+1,i+1,221); H::delay(100);
        H::VLine(135,12,i+1,i+1,221); H::delay(100);
    }
    //label
    H::drawBoxDoubleLine(20,19,120,15,4);
    H::drawBoxDoubleLine(20,19,120,1,3);
    H::drawBoxDoubleLine(20,33,120,1,3);
    H::gotoxy(30,20); H::foreColor(3); cout<<"ID\t\tName\t\tUSERNAME\t\tPASSWORD\t\tTIME\t\tPRICE";
    H::gotoxy(58,34); H::foreColor(3); cout<<"Press [ENTER] To Continues Or [ESC] To Exit";
    H::foreColor(7);
}

#endif