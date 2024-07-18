#ifndef __LOGOUTDESIGN_H__
#define __LOGOUTDESIGN_H__


#include<iostream>
#include<conio.h>
#include "./Header/HinsyOOPV2"
using namespace std;
using namespace HinsyOOP;
class LogoutDesign{
    public:
        static void ascii();
};

void LogoutDesign::ascii(){
    H::foreColor(3); H::gotoxy(40,10); cout<<R"(______________ ___    _____    _______   ____  __. _____.___.________   ____ ___  )"; H::delay(500);
    H::foreColor(3); H::gotoxy(40,11); cout<<R"(\__    ___/   |   \  /  _  \   \      \ |    |/ _| \__  |   |\_____  \ |    |   \ )"; H::delay(500);
    H::foreColor(3); H::gotoxy(40,12); cout<<R"(  |    | /    ~    \/  /_\  \  /   |   \|      <    /   |   | /   |   \|    |   / )"; H::delay(500);
    H::foreColor(4); H::gotoxy(40,13); cout<<R"(  |    | \    Y    /    |    \/    |    \    |  \   \____   |/    |    \    |  /  )"; H::delay(500);
    H::foreColor(4); H::gotoxy(40,14); cout<<R"(  |____|  \___|_  /\____|__  /\____|__  /____|__ \  / ______|\_______  /______/   )"; H::delay(500);
    H::foreColor(4); H::gotoxy(40,15); cout<<R"(                \/         \/         \/        \/  \/               \/           )"; H::delay(500);

    H::foreColor(3); H::gotoxy(65,17); cout<<R"(   _____    _______  ________   )"; H::delay(500);
    H::foreColor(3); H::gotoxy(65,18); cout<<R"(  /  _  \   \      \ \______ \  )"; H::delay(500);
    H::foreColor(3); H::gotoxy(65,19); cout<<R"( /  /_\  \  /   |   \ |    |  \ )"; H::delay(500);
    H::foreColor(4); H::gotoxy(65,20); cout<<R"(/    |    \/    |    \|    `   \)"; H::delay(500);
    H::foreColor(4); H::gotoxy(65,21); cout<<R"(\____|__  /\____|__  /_______  /)"; H::delay(500);
    H::foreColor(4); H::gotoxy(65,22); cout<<R"(        \/         \/        \/ )"; H::delay(500);

    H::foreColor(3); H::gotoxy(20,24); cout<<R"(  ________ ________   ________  ________    .____     ____ ____________  ____  __.   ________ ____ ________.___. _________)"; H::delay(500);
    H::foreColor(3); H::gotoxy(20,25); cout<<R"( /  _____/ \_____  \  \_____  \ \______ \   |    |   |    |   \_   ___ \|    |/ _|  /  _____/|    |   \__  |   |/   _____/)"; H::delay(500); 
    H::foreColor(3); H::gotoxy(20,26); cout<<R"(/   \  ___  /   |   \  /   |   \ |    |  \  |    |   |    |   /    \  \/|      <   /   \  ___|    |   //   |   |\_____  \ )"; H::delay(500);
    H::foreColor(4); H::gotoxy(20,27); cout<<R"(\    \_\  \/    |    \/    |    \|    `   \ |    |___|    |  /\     \___|    |  \  \    \_\  \    |  / \____   |/        \)"; H::delay(500);
    H::foreColor(4); H::gotoxy(20,28); cout<<R"( \______  /\_______  /\_______  /_______  / |_______ \______/  \______  /____|__ \  \______  /______/  / ______/_______  /)"; H::delay(500);
    H::foreColor(4); H::gotoxy(20,29); cout<<R"(        \/         \/         \/        \/          \/                \/        \/         \/          \/              \/ )"; H::delay(500);

}

int main(){
    system("mode con cols=160 lines=40");
    H::setFont(20,700); 
    LogoutDesign::ascii();
    H::gotoxy(1,1000);
    getch();
}
#endif