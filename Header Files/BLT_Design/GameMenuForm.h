#ifndef __GAMEMENUFORM_H__
#define __GAMEMENUFORM_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameMenu::GameMenuTxt()
{
    Design::TxtOutline(5,0,-11,1);
    H::foreColor(7); H::gotoxy(53,3); cout<<R"(   ___                                               )";
    H::foreColor(7); H::gotoxy(53,4); cout<<R"(  / _ \__ _ _ __ ___   ___    /\/\   ___ _ __  _   _ )";
    H::foreColor(1); H::gotoxy(53,5); cout<<R"( / /_\/ _` | '_ ` _ \ / _ \  /    \ / _ \ '_ \| | | |)";
    H::foreColor(7); H::gotoxy(53,6); cout<<R"(/ /_\\ (_| | | | | | |  __/ / /\/\ \  __/ | | | |_| |)";
    H::foreColor(7); H::gotoxy(53,7); cout<<R"(\____/\__,_|_| |_| |_|\___| \/    \/\___|_| |_|\__,_|)";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::GameMenu::GameMenu_Design()
{
    //Desigh
    H::setcolor(7); H::gotoxy(22,13); cout << R"(      ____  )";   H::setcolor(14); H::gotoxy(70,13); cout << R"( ____________________ )";   H::setcolor(7); H::gotoxy(128,13); cout << R"(  ____      )";
    H::setcolor(7); H::gotoxy(22,14); cout << R"(     ' |  ' )";   H::setcolor(14); H::gotoxy(70,14); cout << R"(' )"; H::setcolor(3); cout << R"( .______________. )"; H::setcolor(6); cout << R"( ')";   H::setcolor(7); H::gotoxy(128,14); cout << R"( '  | '     )";
    H::setcolor(7); H::gotoxy(22,15); cout << R"(     |=|  | )";   H::setcolor(14); H::gotoxy(70,15); cout << R"(| )"; H::setcolor(3); cout << R"(|/+------------+/|)"; H::setcolor(6); cout << R"( |)";   H::setcolor(7); H::gotoxy(128,15); cout << R"( |  |=|     )";
    H::setcolor(7); H::gotoxy(22,16); cout << R"(     |=|  | )";   H::setcolor(14); H::gotoxy(70,16); cout << R"(| )"; H::setcolor(3); cout << R"(|/|            |/|)"; H::setcolor(6); cout << R"( |)";   H::setcolor(7); H::gotoxy(128,16); cout << R"( |On|=|     )";
    H::setcolor(7); H::gotoxy(22,17); cout << R"(     |/|  | )";   H::setcolor(14); H::gotoxy(70,17); cout << R"(| )"; H::setcolor(3); cout << R"(|/|            |/|)"; H::setcolor(6); cout << R"( |)";   H::setcolor(7); H::gotoxy(128,17); cout << R"( |[]|\|     )";
    H::setcolor(7); H::gotoxy(22,18); cout << R"(    ;     | )";   H::setcolor(14); H::gotoxy(70,18); cout << R"(| )"; H::setcolor(3); cout << R"(|o|            |/|)"; H::setcolor(6); cout << R"( |)";   H::setcolor(7); H::gotoxy(128,18); cout << R"( |[]|  ;    )";
    H::setcolor(7); H::gotoxy(22,19); cout << R"(    ;/": E| )";   H::setcolor(14); H::gotoxy(70,19); cout << R"(| )"; H::setcolor(3); cout << R"(|/|            |/|)"; H::setcolor(6); cout << R"( |)";   H::setcolor(7); H::gotoxy(128,19); cout << R"( |Of|  ;    )";
    H::setcolor(7); H::gotoxy(22,20); cout << R"(    ;|:| X| )";   H::setcolor(14); H::gotoxy(70,20); cout << R"(| )"; H::setcolor(3); cout << R"(|/|            |/|)"; H::setcolor(6); cout << R"( |)";   H::setcolor(7); H::gotoxy(128,20); cout << R"( |f |  ;    )";
    H::setcolor(7); H::gotoxy(22,21); cout << R"(    .\_: T| )";   H::setcolor(14); H::gotoxy(70,21); cout << R"(| )"; H::setcolor(3); cout << R"(|/+------------+/|)"; H::setcolor(6); cout << R"( |)";   H::setcolor(7); H::gotoxy(128,21); cout << R"( |  |  .    )";
    H::setcolor(7); H::gotoxy(22,22); cout << R"(   ,'     | )";   H::setcolor(14); H::gotoxy(70,22); cout << R"(| )"; H::setcolor(3); cout << R"(|/              /|)"; H::setcolor(6); cout << R"( |)";   H::setcolor(7); H::gotoxy(128,22); cout << R"( |  |  ',   )";
    H::setcolor(7); H::gotoxy(22,23); cout << R"(   |   ||:| )";   H::setcolor(14); H::gotoxy(70,23); cout << R"(| )"; H::setcolor(3); cout << R"('----------------')"; H::setcolor(6); cout << R"( |)";   H::setcolor(7); H::gotoxy(128,23); cout << R"( |  |   |   )";
    H::setcolor(7); H::gotoxy(22,24); cout << R"(   |   ||:| )";   H::setcolor(14); H::gotoxy(70,24); cout << R"(|                    |)";   H::setcolor(7); H::gotoxy(128,24); cout << R"( |  |   |   )";
    H::setcolor(7); H::gotoxy(22,25); cout << R"(   ;   |V | )";   H::setcolor(14); H::gotoxy(70,25); cout << R"(|                    |)";   H::setcolor(7); H::gotoxy(128,25); cout << R"( |  |   ;   )";
    H::setcolor(7); H::gotoxy(22,26); cout << R"(|  ;   |O |])";   H::setcolor(14); H::gotoxy(70,26); cout << R"(| / ^ \          (A) |)";   H::setcolor(7); H::gotoxy(128,26); cout << R"([|  |   ;  |)";
    H::setcolor(7); H::gotoxy(22,27); cout << R"('> ;   |L |])";   H::setcolor(14); H::gotoxy(70,27); cout << R"(| <(o)>      (B)     |)";   H::setcolor(7); H::gotoxy(128,27); cout << R"([|  |   ; <')";
    H::setcolor(7); H::gotoxy(22,28); cout << R"(   |   ||\|])";   H::setcolor(14); H::gotoxy(70,28); cout << R"(| \ V /              |)";   H::setcolor(7); H::gotoxy(128,28); cout << R"([|  |   |   )";
    H::setcolor(7); H::gotoxy(22,29); cout << R"(   |   |'"| )";   H::setcolor(14); H::gotoxy(70,29); cout << R"(|                    |)";   H::setcolor(7); H::gotoxy(128,29); cout << R"( |  |   |   )";
    H::setcolor(7); H::gotoxy(22,30); cout << R"(   .   |  |))";   H::setcolor(14); H::gotoxy(70,30); cout << R"(|       == ==    .-. |)";   H::setcolor(7); H::gotoxy(128,30); cout << R"((|  |   .   )";
    H::setcolor(7); H::gotoxy(22,31); cout << R"(    ;  |  | )";   H::setcolor(14); H::gotoxy(70,31); cout << R"(|               ':::'|)";   H::setcolor(7); H::gotoxy(128,31); cout << R"( |  |  ;    )";
    H::setcolor(7); H::gotoxy(22,32); cout << R"(     \ |  | )";   H::setcolor(14); H::gotoxy(70,32); cout << R"('..__           '__..')";   H::setcolor(7); H::gotoxy(128,32); cout << R"( |  | /     )";
    H::setcolor(7); H::gotoxy(22,33); cout << R"(      "'--' )";   H::setcolor(14); H::gotoxy(70,33); cout << R"(     """"""""""""     )";   H::setcolor(1); H::gotoxy(128,33); cout << R"( '--'")";

    // //connect line
    // H::HLine(40,16,24,7,220);
    // H::HLine(40,24,24,7,220);

    // H::HLine(98,16,24,7,220);
    // H::HLine(98,24,24,7,220);

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif