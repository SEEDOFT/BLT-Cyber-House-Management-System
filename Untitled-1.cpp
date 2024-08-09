#include<iostream>
#include "Header Files/ANT_Header/HinsyOOPV2"
using namespace HinsyOOP;
using namespace std;
int main()
{
    int i = 100;
    while(!kbhit())
    {
    H::gotoxy(i, 1); cout << R"(                 \ | / )"; cout << " ";
    H::gotoxy(i, 2); cout << R"(                -- o -- )"; cout << " ";
    H::gotoxy(i, 3); cout << R"(                 / | \ )"; cout << " ";
    H::gotoxy(i, 4); cout << R"(              _      _      _      _      _      _      _ )"; cout << " ";
    H::gotoxy(i, 5); cout << R"(           \/'-'\/\/'-'\/\/'-'\/\/'-'\/\/'_'\/\/'-'\/\/'-'\/ )"; cout << " ";
    H::gotoxy(i, 6); cout << R"(            \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/ )"; cout << " ";
    H::gotoxy(i, 7); cout << R"(             / \    / \    / \    / \    / \    / \    / \ )"; cout << " ";
    H::delay(200);

    H::gotoxy(i, 1); cout << R"(                 \ | / )"; cout << " ";
    H::gotoxy(i, 2); cout << R"(                -- o -- )"; cout << " ";
    H::gotoxy(i, 3); cout << R"(                 / | \ )"; cout << " ";
    H::gotoxy(i, 4); cout << R"(              _      _      _      _      _      _      _ )"; cout << " ";
    H::gotoxy(i, 5); cout << R"(           \/'-'\/\/'-'\/\/'-'\/\/'-'\/\/'_'\/\/'-'\/\/'-'\/ )"; cout << " ";
    H::gotoxy(i, 6); cout << R"(            \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/ )"; cout << " ";
    H::gotoxy(i, 7); cout << R"(             | \    | \    | \    | \    | \    | \    | \ )"; cout << " ";
    H::delay(200);
    H::gotoxy(i, 1); cout << R"(                 \ | / )"; cout << " ";
    H::gotoxy(i, 2); cout << R"(                -- o -- )"; cout << " ";
    H::gotoxy(i, 3); cout << R"(                 / | \ )"; cout << " ";
    H::gotoxy(i, 4); cout << R"(              _      _      _      _      _      _      _ )"; cout << " ";
    H::gotoxy(i, 5); cout << R"(           \/'-'\/\/'-'\/\/'-'\/\/'-'\/\/'_'\/\/'-'\/\/'-'\/ )"; cout << " ";
    H::gotoxy(i, 6); cout << R"(            \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/ )"; cout << " ";
    H::gotoxy(i, 7); cout << R"(             | |    | |    | |    | |    | |    | |    | | )"; cout << " ";
    H::delay(200);
    H::gotoxy(i, 1); cout << R"(                 \ | / )"; cout << " ";
    H::gotoxy(i, 2); cout << R"(                -- o -- )"; cout << " ";
    H::gotoxy(i, 3); cout << R"(                 / | \ )"; cout << " ";
    H::gotoxy(i, 4); cout << R"(              _      _      _      _      _      _      _ )"; cout << " ";
    H::gotoxy(i, 5); cout << R"(           \/'-'\/\/'-'\/\/'-'\/\/'-'\/\/'_'\/\/'-'\/\/'-'\/ )"; cout << " ";
    H::gotoxy(i, 6); cout << R"(            \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/  \_;_/ )"; cout << " ";
    H::gotoxy(i, 7); cout << R"(             / |    / |    / |    / |    / |    / |    / | )"; cout << " ";
    H::delay(200);

    i-=3; 
    if(i < 10 ) i = 100;
    }

    getch(); return 0;
}