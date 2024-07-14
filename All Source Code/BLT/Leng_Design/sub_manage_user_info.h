#ifndef __LENG__
#define __LENG__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "manage_user_info.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const int LENG::x = 13;
const int LENG::y = 5;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void LENG::tp(int colorCode, int width, int height)
{
    H::setcolor(colorCode);H::gotoxy(width,height);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void LENG::UserMenu_Design()
{
	int lineColor = 4; 

	tp(1,x+16,y-3); cout << R"(   __   _   )";
	tp(7,x+16,y-2); cout << R"( _(  )_( )_ )";
	tp(7,x+16,y-1); cout << R"((_   _    _))";
	tp(1,x+16,y  ); cout << R"(  (_) (__)  )";
	
	tp(1,x+106,y-3); cout << R"(   __   _   )";
	tp(7,x+106,y-2); cout << R"( _(  )_( )_ )";
	tp(7,x+106,y-1); cout << R"((_   _    _))";
	tp(1,x+106,y  ); cout << R"(  (_) (__)  )";
	
	H::drawBoxDoubleLine(x+14,y+6,105,19,lineColor);
	H::drawBoxDoubleLine(x+16,y+7,101,17,3);
	H::drawBoxDoubleLine(x+18,y+8,35,15,lineColor);

	H::drawBoxDoubleLineWithBG(x+57,y+9,57,13,179);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void LENG::UserMenu_Art(int a)
{
	if(a == 1)
	{
		tp(0,x+16,y-3); cout << R"(   __   _)";
		tp(0,x+16,y-2); cout << R"( _(  )_( )_)";
		tp(0,x+16,y-1); cout << R"((_   _    _))";
		tp(0,x+16,y  ); cout << R"(  (_) (__))";
		tp(7,x+16,y+1); cout << R"(  / |  | \)";
		
		tp(0,x+106,y-3); cout << R"(   __   _)";
		tp(0,x+106,y-2); cout << R"( _(  )_( )_)";
		tp(0,x+106,y-1); cout << R"((_   _    _))";
		tp(0,x+106,y  ); cout << R"(  (_) (__))";
		tp(7,x+106,y+1); cout << R"(  / |  | \)";
		
		H::drawBoxSingleLineWithBG(x+20,y+9,31,1,230);
		tp(229,x+22,y+10); cout << "MY INFORMATION";
		H::clearBox(x+58,y+10,55,13,179);
		H::setcolor(181);
		H::gotoxy(x+68,y+10);cout << R"(______________________     Q)";
		H::gotoxy(x+68,y+11);cout << R"(|                    |  ___|\_.-,)";
		H::gotoxy(x+68,y+12);cout << R"(|       V I E W      S\ Q~\___ \|)";
		H::gotoxy(x+68,y+13);cout << R"(|                    |(   )o 5) Q)";
		H::gotoxy(x+68,y+14);cout << R"(|       Y O U R      |\\  \_ ())";
		H::gotoxy(x+68,y+15);cout << R"(|                    | \'. _'/'.)";
		H::gotoxy(x+68,y+16);cout << R"(|       I N F O     .-. '-(  x< \)";
		H::gotoxy(x+68,y+17);cout << R"(|       ,o         /\, '.  )  /'\\)";
		H::gotoxy(x+68,y+18);cout << R"(|______ \'.__.----/ .'\  '.-'/   \\)";
		H::gotoxy(x+68,y+19);cout << R"(         '---'q__/.'__ ;    /     \\_)";
		H::gotoxy(x+68,y+20);cout << R"(              '---'     '--'       `"')";
		H::gotoxy(x+80,y+22);cout << "My Information";
		
		Sleep(30);
		H::clearBox(x+101,y+5,9,0,7);
		H::clearBox(x+20,y+5,9,0,7);
		////
		tp(1,x+16,y-3); cout << R"(   __   _   )";
		tp(7,x+16,y-2); cout << R"( _(  )_( )_ )";
		tp(7,x+16,y-1); cout << R"((_   _    _))";
		tp(1,x+16,y  ); cout << R"(  (_) (__)  )";
		
		tp(1,x+106,y-3); cout << R"(   __   _   )";
		tp(7,x+106,y-2); cout << R"( _(  )_( )_ )";
		tp(7,x+106,y-1); cout << R"((_   _    _))";
		tp(1,x+106,y  ); cout << R"(  (_) (__)  )";
	}

	else if( a == 2)
	{
		tp(0,x+16,y-3); cout << R"(   __   _)";
		tp(0,x+16,y-2); cout << R"( _(  )_( )_)";
		tp(0,x+16,y-1); cout << R"((_   _    _))";
		tp(0,x+16,y  ); cout << R"(  (_) (__))";
		tp(7,x+16,y+1); cout << R"(  / |  | \)";
		
		tp(0,x+106,y-3); cout << R"(   __   _)";
		tp(0,x+106,y-2); cout << R"( _(  )_( )_)";
		tp(0,x+106,y-1); cout << R"((_   _    _))";
		tp(0,x+106,y  ); cout << R"(  (_) (__))";
		tp(7,x+106,y+1); cout << R"(  / |  | \)";
		Sleep(30);
		H::clearBox(x+101,y+5,9,0,7);
		H::clearBox(x+20,y+5,9,0,7);
		////
		tp(1,x+16,y-3); cout << R"(   __   _   )";
		tp(7,x+16,y-2); cout << R"( _(  )_( )_ )";
		tp(7,x+16,y-1); cout << R"((_   _    _))";
		tp(1,x+16,y  ); cout << R"(  (_) (__)  )";
		
		tp(1,x+106,y-3); cout << R"(   __   _   )";
		tp(7,x+106,y-2); cout << R"( _(  )_( )_ )";
		tp(7,x+106,y-1); cout << R"((_   _    _))";
		tp(1,x+106,y  ); cout << R"(  (_) (__)  )";
		
		H::drawBoxSingleLineWithBG(x+20,y+12,31,1,230);
		tp(229,x+22,y+13); cout << "Buy Hour to Play";
		H::clearBox(x+58,y+10,55,13,179);
		H::setcolor(181);
		H::setcolor(181);
		H::gotoxy(x+75,y+11);cout << R"(               __)";
		H::gotoxy(x+75,y+12);cout << R"(    ..=====.. |==|)";
		H::gotoxy(x+75,y+13);cout << R"(    ||     || |= |)";
		H::gotoxy(x+75,y+14);cout << R"( _  ||     || |^*| _)";
		H::gotoxy(x+75,y+15);cout << R"(|=| o=,===,=o |__||=|)";
		H::gotoxy(x+75,y+16);cout << R"(|_|  _______)~`)  |_|)";
		H::gotoxy(x+75,y+17);cout << R"(    [=======]  ()     )";
		H::gotoxy(x+80,y+19);cout << "Buy Hour to Play";
	}
	else if( a == 3)
	{
		tp(0,x+16,y-3); cout << R"(   __   _)";
		tp(0,x+16,y-2); cout << R"( _(  )_( )_)";
		tp(0,x+16,y-1); cout << R"((_   _    _))";
		tp(0,x+16,y  ); cout << R"(  (_) (__))";
		tp(7,x+16,y+1); cout << R"(  / |  | \)";
		
		tp(0,x+106,y-3); cout << R"(   __   _)";
		tp(0,x+106,y-2); cout << R"( _(  )_( )_)";
		tp(0,x+106,y-1); cout << R"((_   _    _))";
		tp(0,x+106,y  ); cout << R"(  (_) (__))";
		tp(7,x+106,y+1); cout << R"(  / |  | \)";
		Sleep(30);
		H::clearBox(x+101,y+5,9,0,7);
		H::clearBox(x+20,y+5,9,0,7);
		////
		tp(1,x+16,y-3); cout << R"(   __   _   )";
		tp(7,x+16,y-2); cout << R"( _(  )_( )_ )";
		tp(7,x+16,y-1); cout << R"((_   _    _))";
		tp(1,x+16,y  ); cout << R"(  (_) (__)  )";
		
		tp(1,x+106,y-3); cout << R"(   __   _   )";
		tp(7,x+106,y-2); cout << R"( _(  )_( )_ )";
		tp(7,x+106,y-1); cout << R"((_   _    _))";
		tp(1,x+106,y  ); cout << R"(  (_) (__)  )";
		
		H::drawBoxSingleLineWithBG(x+20,y+15,31,1,230);
		tp(229,x+22,y+16); cout << "Buy Food & Drink";
		H::clearBox(x+58,y+10,55,13,179);
		H::setcolor(181);
		H::gotoxy(x+60,y+10);cout << R"(                                       .-'''''-. )";
		H::gotoxy(x+60,y+11);cout << R"(                                       |'-----'| )";
		H::gotoxy(x+60,y+12);cout << R"(                                      /`-.....-`\)";
		H::gotoxy(x+60,y+13);cout << R"(                                      | <_}     |)";
		H::gotoxy(x+60,y+14);cout << R"(                                      |  .-\-.  |)";
		H::gotoxy(x+60,y+15);cout << R"(                   _,._               | /# `  \ |)";
		H::gotoxy(x+60,y+16);cout << R"(              __.-`    `"""-.         | \     / |)";
		H::gotoxy(x+60,y+17);cout << R"(         ..--'   `"-.        `)_,._   \  '-'-'  /)";
		H::gotoxy(x+60,y+18);cout << R"(       (`            )--.-"```     `"-.`'-----'`)";
		H::gotoxy(x+60,y+19);cout << R"(        '-----------'  (               )        )";
		H::gotoxy(x+60,y+20);cout << R"(                        `-------------`         )";
		H::gotoxy(x+70,y+23);cout << "\3 Buy Food & Drink \3";

	}
	else if( a == 4)
	{
		tp(0,x+16,y-3); cout << R"(   __   _)";
		tp(0,x+16,y-2); cout << R"( _(  )_( )_)";
		tp(0,x+16,y-1); cout << R"((_   _    _))";
		tp(0,x+16,y  ); cout << R"(  (_) (__))";
		tp(7,x+16,y+1); cout << R"(  / |  | \)";
		
		tp(0,x+106,y-3); cout << R"(   __   _)";
		tp(0,x+106,y-2); cout << R"( _(  )_( )_)";
		tp(0,x+106,y-1); cout << R"((_   _    _))";
		tp(0,x+106,y  ); cout << R"(  (_) (__))";
		tp(7,x+106,y+1); cout << R"(  / |  | \)";
		Sleep(30);
		H::clearBox(x+101,y+5,9,0,7);
		H::clearBox(x+20,y+5,9,0,7);
		////
		tp(1,x+16,y-3); cout << R"(   __   _   )";
		tp(7,x+16,y-2); cout << R"( _(  )_( )_ )";
		tp(7,x+16,y-1); cout << R"((_   _    _))";
		tp(1,x+16,y  ); cout << R"(  (_) (__)  )";
		
		tp(1,x+106,y-3); cout << R"(   __   _   )";
		tp(7,x+106,y-2); cout << R"( _(  )_( )_ )";
		tp(7,x+106,y-1); cout << R"((_   _    _))";
		tp(1,x+106,y  ); cout << R"(  (_) (__)  )";
		
		H::drawBoxSingleLineWithBG(x+20,y+18,31,1,230);
		tp(229,x+22,y+19); cout << "View Spending";
		H::clearBox(x+58,y+10,55,13,179);
		H::setcolor(181);
		H::gotoxy(x+72,y+10);cout << R"((\ )";
		H::gotoxy(x+72,y+11);cout << R"(\'\ )";
		H::gotoxy(x+72,y+12);cout << R"( \'\     __________  )";
		H::gotoxy(x+72,y+13);cout << R"( / '|   ()_________))";
		H::gotoxy(x+72,y+14);cout << R"( \ '/    \ ~~~~~~~~ \)";
		H::gotoxy(x+72,y+15);cout << R"(   \       \ ~~~~~~   \)";
		H::gotoxy(x+72,y+16);cout << R"(   ==).      \__________\)";
		H::gotoxy(x+72,y+17);cout << R"(  (__)       ()__________))";
		H::gotoxy(x+79,y+20);cout << "View Spending \3\2";
	}
	else if( a == 5)
	{
		tp(0,x+16,y-3); cout << R"(   __   _)";
		tp(0,x+16,y-2); cout << R"( _(  )_( )_)";
		tp(0,x+16,y-1); cout << R"((_   _    _))";
		tp(0,x+16,y  ); cout << R"(  (_) (__))";
		tp(7,x+16,y+1); cout << R"(  / |  | \)";
		
		tp(0,x+106,y-3); cout << R"(   __   _)";
		tp(0,x+106,y-2); cout << R"( _(  )_( )_)";
		tp(0,x+106,y-1); cout << R"((_   _    _))";
		tp(0,x+106,y  ); cout << R"(  (_) (__))";
		tp(7,x+106,y+1); cout << R"(  / |  | \)";
		Sleep(30);
		H::clearBox(x+101,y+5,9,0,7);
		H::clearBox(x+20,y+5,9,0,7);
		////
		tp(1,x+16,y-3); cout << R"(   __   _   )";
		tp(7,x+16,y-2); cout << R"( _(  )_( )_ )";
		tp(7,x+16,y-1); cout << R"((_   _    _))";
		tp(1,x+16,y  ); cout << R"(  (_) (__)  )";
		
		tp(1,x+106,y-3); cout << R"(   __   _   )";
		tp(7,x+106,y-2); cout << R"( _(  )_( )_ )";
		tp(7,x+106,y-1); cout << R"((_   _    _))";
		tp(1,x+106,y  ); cout << R"(  (_) (__)  )";
		
		H::drawBoxSingleLineWithBG(x+20,y+21,31,1,230);
		tp(229,x+22,y+22); cout << "Log Out";
		H::clearBox(x+58,y+10,55,13,179);
		H::setcolor(181);
		H::gotoxy(x+67,y+10);cout << R"(                   ())";
		H::gotoxy(x+67,y+11);cout << R"(                 __/\__         )";
		H::gotoxy(x+67,y+12);cout << R"(        |\   .-"`      `"-.   /|)";
		H::gotoxy(x+67,y+13);cout << R"(        | \.'( ') (' ) (. )`./ |)";
		H::gotoxy(x+67,y+14);cout << R"(         \_                  _/)";
		H::gotoxy(x+67,y+15);cout << R"(           \  `~"'=::='"~`  /)";
		H::gotoxy(x+67,y+16);cout << R"(    ,       `-.__      __.-'       ,)";
		H::gotoxy(x+67,y+17);cout << R"(.---'\________( `""~~""` )________/'---.)";
		H::gotoxy(x+67,y+18);cout << R"( >   )       / `""~~~~""` \       (   <)";
		H::gotoxy(x+67,y+19);cout << R"('----`--..__/        -(-)- \__..--`----')";
		H::gotoxy(x+81,y+21);cout << "\3 Log Out \3";
	}		
}
#endif
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@