#include<iostream>
#include<conio.h>
#include "./Header/HinsyOOPV2"
using namespace HinsyOOP;
void Design(){
    H::foreColor(3); H::gotoxy(53,2); cout<<R"(   ___   _              __             __    __       )"; 
    H::foreColor(3); H::gotoxy(53,3); cout<<R"(  / _ \ /_\    /\/\    /__\   /\/\    /__\/\ \ \/\ /\ )"; 
    H::foreColor(3); H::gotoxy(53,4); cout<<R"( / /_\///_\\  /    \  /_\    /    \  /_\ /  \/ / / \ \)"; 
    H::foreColor(4); H::gotoxy(53,5); cout<<R"(/ /_\\/  _  \/ /\/\ \//__   / /\/\ \//__/ /\  /\ \_/ /)"; 
    H::foreColor(4); H::gotoxy(53,6); cout<<R"(\____/\_/ \_/\/    \/\__/   \/    \/\__/\_\ \/  \___/ )"; 
}

void Ascii(){


H::setcolor(1); H::gotoxy(23,10); cout << R"(       ____  )";   H::setcolor(1); H::gotoxy(70,10); cout << R"( ____________________ )";   H::setcolor(1); H::gotoxy(128,10); cout << R"(  ____)";
H::setcolor(1); H::gotoxy(23,11); cout << R"(      ' |  ' )";   H::setcolor(1); H::gotoxy(70,11); cout << R"('  .______________.  ')";   H::setcolor(1); H::gotoxy(128,11); cout << R"( '  | ')";
H::setcolor(1); H::gotoxy(23,12); cout << R"(      |=|  | )";   H::setcolor(1); H::gotoxy(70,12); cout << R"(| |/+------------+/| |)";   H::setcolor(1); H::gotoxy(128,12); cout << R"( |  |=| )";
H::setcolor(1); H::gotoxy(23,13); cout << R"(      |=|  | )";   H::setcolor(1); H::gotoxy(70,13); cout << R"(| |/|            |/| |)";   H::setcolor(1); H::gotoxy(128,13); cout << R"( |On|=|    )";
H::setcolor(1); H::gotoxy(23,14); cout << R"(      |/|  | )";   H::setcolor(1); H::gotoxy(70,14); cout << R"(| |/|            |/| |)";   H::setcolor(1); H::gotoxy(128,14); cout << R"( |[]|\|    )";
H::setcolor(1); H::gotoxy(23,15); cout << R"(     ;     | )";   H::setcolor(1); H::gotoxy(70,15); cout << R"(| |o|            |/| |)";   H::setcolor(1); H::gotoxy(128,15); cout << R"( |[]|  ;   )";
H::setcolor(1); H::gotoxy(23,16); cout << R"(     ;/": E| )";   H::setcolor(1); H::gotoxy(70,16); cout << R"(| |/|            |/| |)";   H::setcolor(1); H::gotoxy(128,16); cout << R"( |Of|  ;   )";
H::setcolor(1); H::gotoxy(23,17); cout << R"(     ;|:| X| )";   H::setcolor(1); H::gotoxy(70,17); cout << R"(| |/|            |/| |)";   H::setcolor(1); H::gotoxy(128,17); cout << R"( |f |  ;   )";
H::setcolor(1); H::gotoxy(23,18); cout << R"(     .\_: T| )";   H::setcolor(1); H::gotoxy(70,18); cout << R"(| |/+------------+/| |)";   H::setcolor(1); H::gotoxy(128,18); cout << R"( |  |  .   )";
H::setcolor(1); H::gotoxy(23,19); cout << R"(    ,'     | )";   H::setcolor(1); H::gotoxy(70,19); cout << R"(| |/              /| |)";   H::setcolor(1); H::gotoxy(128,19); cout << R"( |  |  ',  )";
H::setcolor(1); H::gotoxy(23,20); cout << R"(    |   ||:| )";   H::setcolor(1); H::gotoxy(70,20); cout << R"(| '----------------' |)";   H::setcolor(1); H::gotoxy(128,20); cout << R"( |  |   |   )";
H::setcolor(1); H::gotoxy(23,21); cout << R"(    |   ||:| )";   H::setcolor(1); H::gotoxy(70,21); cout << R"(|                    |)";   H::setcolor(1); H::gotoxy(128,21); cout << R"( |  |   |  )";
H::setcolor(1); H::gotoxy(23,22); cout << R"(    ;   |V | )";   H::setcolor(1); H::gotoxy(70,22); cout << R"(|                    |)";   H::setcolor(1); H::gotoxy(128,22); cout << R"( |  |   ;)";
H::setcolor(1); H::gotoxy(23,23); cout << R"( |  ;   |O |])";   H::setcolor(1); H::gotoxy(70,23); cout << R"(| / ^ \          (A) |)";   H::setcolor(1); H::gotoxy(128,23); cout << R"([|  |   ;  |)";
H::setcolor(1); H::gotoxy(23,24); cout << R"( '> ;   |L |])";   H::setcolor(1); H::gotoxy(70,24); cout << R"(| <(o)>      (B)     |)";   H::setcolor(1); H::gotoxy(128,24); cout << R"([|  |   ; <')";
H::setcolor(1); H::gotoxy(23,25); cout << R"(    |   ||\|])";   H::setcolor(1); H::gotoxy(70,25); cout << R"(| \ V /              |)";   H::setcolor(1); H::gotoxy(128,25); cout << R"([|  |   |)";
H::setcolor(1); H::gotoxy(23,26); cout << R"(    |   |'"| )";   H::setcolor(1); H::gotoxy(70,26); cout << R"(|                    |)";   H::setcolor(1); H::gotoxy(128,26); cout << R"( |  |   |)";
H::setcolor(1); H::gotoxy(23,27); cout << R"(    .   |  |))";   H::setcolor(1); H::gotoxy(70,27); cout << R"(|       == ==    .-. |)";   H::setcolor(1); H::gotoxy(128,27); cout << R"((|  |   .)";
H::setcolor(1); H::gotoxy(23,28); cout << R"(     ;  |  | )";   H::setcolor(1); H::gotoxy(70,28); cout << R"(|               ':::'|)";   H::setcolor(1); H::gotoxy(128,28); cout << R"( |  |  ;)";
H::setcolor(1); H::gotoxy(23,29); cout << R"(      \ |  | )";   H::setcolor(1); H::gotoxy(70,29); cout << R"('..__           '__..')";   H::setcolor(1); H::gotoxy(128,29); cout << R"( |  | /)";
H::setcolor(1); H::gotoxy(23,30); cout << R"(       "'--' )";   H::setcolor(1); H::gotoxy(70,30); cout << R"(     """"""""""""     )";   H::setcolor(1); H::gotoxy(128,30); cout << R"( '--'")";

H::drawBoxDoubleLine(40,11,25,1,3);
H::drawBoxDoubleLine(40,19,25,1,3);
H::drawBoxDoubleLine(40,27,25,1,3);

H::drawBoxDoubleLine(98,11,25,1,3);
H::drawBoxDoubleLine(98,19,25,1,3);
H::drawBoxDoubleLine(98,27,25,1,3);

H::HLine(40,16,24,7,220);
H::HLine(40,24,24,7,220);

H::HLine(98,16,24,7,220);
H::HLine(98,24,24,7,220);
}

int main(){
    system("mode con cols=160 lines=40");
    H::setFont(20,700);
    Design();
    Ascii();
    H::gotoxy(1,1000);
    getch();
}