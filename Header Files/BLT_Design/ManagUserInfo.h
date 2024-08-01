#ifndef __MANAGEUSERINFO_H__
#define __MANAGEUSERINFO_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ManageUserInfo::ManageUserInfoTxt()
{
    static int x = 10;
	static int y = 15;
	 
	Design::TxtOutline(x-39,y-11,11,1);
	H::setcolor(7); H::gotoxy(x+1,y-8); cout << R"(                                                                _    _____        __       )";
	H::setcolor(7); H::gotoxy(x+1,y-7); cout << R"(  /\/\   __ _ _ __   __ _  __ _  ___   /\ /\  ___  ___ _ __ ___( )   \_   \_ __  / _| ___  )";
	H::setcolor(1); H::gotoxy(x+1,y-6); cout << R"( /    \ / _` | '_ \ / _` |/ _` |/ _ \ / / \ \/ __|/ _ \ '__/ __|/     / /\/ '_ \| |_ / _ \ )";
	H::setcolor(7); H::gotoxy(x+1,y-5); cout << R"(/ /\/\ \ (_| | | | | (_| | (_| |  __/ \ \_/ /\__ \  __/ |  \__ \   /\/ /_ | | | |  _| (_) |)";
	H::setcolor(7); H::gotoxy(x+1,y-4); cout << R"(\/    \/\__,_|_| |_|\__,_|\__, |\___|  \___/ |___/\___|_|  |___/   \____/ |_| |_|_|  \___/ )";
	H::setcolor(7); H::gotoxy(x+1,y-3); cout << R"(                          |___/                                                            )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ManageUserInfo::ManageUserInfo_Design()
{
    static int x = 10;
	static int y = 15;

    H::gotoxy(x+72,y);    cout << R"(        |\)";
	H::gotoxy(x+72,y+1);  cout << R"(        | | /|)";
	H::gotoxy(x+72,y+2);  cout << R"(        |  V |)";
	H::gotoxy(x+72,y+3);  cout << R"(        |    |)";
	H::gotoxy(x+72,y+4);  cout << R"(1       |    |       1)";
	H::gotoxy(x+72,y+5);  cout << R"(8b      |    |      d8)";
	H::gotoxy(x+72,y+6);  cout << R"(88b   ,%|    |%,   d88)";
	H::gotoxy(x+72,y+7);  cout << R"(888b%%%%|    |%%%%d888)";
	H::gotoxy(x+72,y+8);  cout << R"( "Y88888[[[]]]88888Y")";
	H::gotoxy(x+72,y+9);  cout << R"(        [[[]]])";
	H::gotoxy(x+72,y+10); cout << R"(        [[[]]]-.)";
	H::gotoxy(x+72,y+11); cout << R"(       _[[[]]]> "\   _____)";
	H::gotoxy(x+72,y+12); cout << R"(      (_______    "-( * * )----)";
	H::gotoxy(x+72,y+13); cout << R"(     (________       | Y |)";
	H::gotoxy(x+72,y+14); cout << R"(     (_________    _(_____)____)";
	H::gotoxy(x+72,y+15); cout << R"(      (________,_/")";
	H::gotoxy(x+72,y+16); cout << R"(        ||||||)";
	H::gotoxy(x+72,y+17); cout << R"(        {{{}}})";
	H::gotoxy(x+72,y+18); cout << R"(       {{{{}}}})";
	H::gotoxy(x+72,y+19); cout << R"(        {{{}}})";
	H::gotoxy(x+72,y+20); cout << R"(          ())";
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	H::gotoxy(x+100,y-6);    cout << R"(    XXXXXXXXXXXXXXXXXXXXXXXXXXXXX)";
	H::gotoxy(x+100,y-5);    cout << R"(  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX)";
	H::gotoxy(x+100,y-4);    cout << R"( XXXXXXXXXXXXXXXXXX         XXXXXXXX)";
	H::gotoxy(x+100,y-3);    cout << R"(XXXXXXXXXXXXXXXX              XXXXXXX)";
	H::gotoxy(x+100,y-2);    cout << R"(XXXXXXXXXXXXX                   XXXXX)";
	H::gotoxy(x+100,y-1);    cout << R"( XXX     _________ _________     XXX)";
	H::gotoxy(x+100,y  );    cout << R"(  XX    I  _xxxxx I xxxxx_  I    XX)";
	H::gotoxy(x+100,y+1);    cout << R"( ( X----I         I         I----X ))";
	H::gotoxy(x+100,y+2);    cout << R"(( +I    I      00 I 00      I    I+ ))";
	H::gotoxy(x+100,y+3);    cout << R"( ( I    I    __0  I  0__    I    I ))";
	H::gotoxy(x+100,y+4);    cout << R"(  (I    I______ /   \_______I    I))";
	H::gotoxy(x+100,y+5);    cout << R"(   I           ( ___ )           I)";
	H::gotoxy(x+100,y+6);    cout << R"(   I    _  :::::::::::::::  _    i)";
	H::gotoxy(x+100,y+7);    cout << R"(    \    \___ ::::::::: ___/    /)";
	H::gotoxy(x+100,y+8);    cout << R"(     \_      \_________/      _/)";
	H::gotoxy(x+100,y+9);    cout << R"(       \        \___,        /)";
	H::gotoxy(x+100,y+10);    cout << R"(         \                 /)";
	H::gotoxy(x+100,y+11);    cout << R"(          |\             /|)";
	H::gotoxy(x+100,y+12);    cout << R"(          |  \_________/  |)";
	H::gotoxy(x+100,y+13);    cout << R"(                  ||)";
	H::gotoxy(x+100,y+14);    cout << R"(                  ||)";
	H::gotoxy(x+100,y+15);    cout << R"(                 /  \)";
   
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif