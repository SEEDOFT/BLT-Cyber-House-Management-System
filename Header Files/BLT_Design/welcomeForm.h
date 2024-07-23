#ifndef __WELCOMEFORM_H__
#define __WELCOMEFORM_H__
#include "./Header/HinsyOOPV2"
using namespace HinsyOOP;
class WelcomeForm{
    public:
        static void ascii();
        
};

void WelcomeForm::ascii(){
    H::setcursor(0,0);
    for (int i = 0; i < 147; i++)
    {
        H::drawBoxDoubleLineWithBG(5,2,i+1,1,196); H::delay(10);
        H::HLine(6,3,i+1,199,196);
    }
    H::foreColor(3); H::gotoxy(43,10); cout<<R"( __      _____________.____   _________  ________      _____  ___________)"; H::delay(500);
    H::foreColor(3); H::gotoxy(43,11); cout<<R"(/  \    /  \_   _____/|    |  \_   ___ \ \_____  \    /     \ \_   _____/)"; H::delay(500);
    H::foreColor(3); H::gotoxy(43,12); cout<<R"(\   \/\/   /|    __)_ |    |  /    \  \/  /   |   \  /  \ /  \ |    __)_ )"; H::delay(500);
    H::foreColor(4); H::gotoxy(43,13); cout<<R"( \        / |        \|    |__\     \____/    |    \/    Y    \|        \)"; H::delay(500);
    H::foreColor(4); H::gotoxy(43,14); cout<<R"(  \__/\  / /_______  /|_______ \______  /\_______  /\____|__  /_______  /)"; H::delay(500);
    H::foreColor(4); H::gotoxy(43,15); cout<<R"(       \/          \/         \/      \/         \/         \/        \/ )"; H::delay(500);

    H::foreColor(3); H::gotoxy(70,17); cout<<R"(___________________   )"; H::delay(500);
    H::foreColor(3); H::gotoxy(70,18); cout<<R"(\__    ___/\_____  \  )"; H::delay(500);
    H::foreColor(3); H::gotoxy(70,19); cout<<R"(  |    |    /   |   \ )"; H::delay(500);
    H::foreColor(4); H::gotoxy(70,20); cout<<R"(  |    |   /    |    \)"; H::delay(500);
    H::foreColor(4); H::gotoxy(70,21); cout<<R"(  |____|   \_______  /)"; H::delay(500);
    H::foreColor(4); H::gotoxy(70,22); cout<<R"(                   \/ )"; H::delay(500);

    H::foreColor(3); H::gotoxy(34,23); cout<<R"(______________.___._______________________________  _________     _____  ______________________)"; H::delay(500);
    H::foreColor(3); H::gotoxy(34,24); cout<<R"(\_   ___ \__  |   |\______   \_   _____/\______   \ \_   ___ \   /  _  \ \_   _____/\_   _____/)"; H::delay(500);
    H::foreColor(3); H::gotoxy(34,25); cout<<R"(/    \  \//   |   | |    |  _/|    __)_  |       _/ /    \  \/  /  /_\  \ |    __)   |    __)_ )"; H::delay(500);
    H::foreColor(4); H::gotoxy(34,26); cout<<R"(\     \___\____   | |    |   \|        \ |    |   \ \     \____/    |    \|     \    |        \)"; H::delay(500);
    H::foreColor(4); H::gotoxy(34,27); cout<<R"( \______  / ______| |______  /_______  / |____|_  /  \______  /\____|__  /\___  /   /_______  /)"; H::delay(500);
    H::foreColor(4); H::gotoxy(34,28); cout<<R"(        \/\/               \/        \/         \/          \/         \/     \/            \/ )"; H::delay(500);

    H::drawBoxDoubleLineWithBG(1,1,1,35,179);
    H::VLine(2,2,34,183,221);
    H::drawBoxDoubleLineWithBG(155,1,1,35,179);
    H::VLine(156,2,34,183,221);

    H::drawBoxDoubleLineWithBG(5,6,35,1,55);
    H::drawBoxDoubleLineWithBG(5,30,25,1,55);

    H::drawBoxDoubleLineWithBG(117,6,35,1,55);
    H::drawBoxDoubleLineWithBG(127,30,25,1,55);
    for (int i = 0; i < 147; i++)
    {
        H::drawBoxDoubleLineWithBG(5,34,i+1,1,196); H::delay(10);
        H::HLine(6,35,i+1,199,3);
    }
    
}

#endif