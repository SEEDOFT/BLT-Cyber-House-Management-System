#include "manage_user_info.h"

void Design::tp(int colorCode, int width, int height)
{
    H::setcolor(colorCode);H::gotoxy(width,height);
}
void Design::manage_user_info()
{
	H::setConsoleTitle(TEXT("Manage User's Information"));
	int lineColor = 4; 
    H::setcursor(0,0);
	
	tp(7,x+40,y);   cout << R"(.-. .-. .----..----..----.    .-..-. .-..----..----. )" << endl;
	tp(7,x+40,y+1); cout << R"(| { } |{ {__  | {_  | {}  }   | ||  `| || {_ /  {}  \)" << endl;
	tp(7,x+40,y+2); cout << R"(| {_} |.-._} }| {__ | .-. \   | || |\  || |  \      /)" << endl;
	tp(7,x+40,y+3); cout << R"(`-----'`----' `----'`-' `-'   `-'`-' `-'`-'   `----' )" << endl;
	

	tp(1,x+20,y); cout << R"(   __   _)" << endl;
	tp(7,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
	tp(7,x+20,y+2); cout << R"((_   _    _))" << endl;
	tp(1,x+20,y+3); cout << R"(  (_) (__))" << endl;
	
	tp(1,x+101,y); cout << R"(   __   _)" << endl;
	tp(7,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
	tp(7,x+101,y+2); cout << R"((_   _    _))" << endl;
	tp(1,x+101,y+3); cout << R"(  (_) (__))" << endl;
	
	H::drawBoxDoubleLine(x+14,y+6,105,19,lineColor);
	H::drawBoxDoubleLine(x+16,y+7,101,17,3);
	H::drawBoxDoubleLine(x+18,y+8,35,15,lineColor);
	
	
	
	H::drawBoxDoubleLineWithBG(x+57,y+9,57,13,179);
    
    H::setcolor(181);
	H::gotoxy(x+75,y+11);cout << R"(               __)" << endl;
	H::gotoxy(x+75,y+12);cout << R"(    ..=====.. |==|)" << endl;
	H::gotoxy(x+75,y+13);cout << R"(    ||     || |= |)" << endl;
	H::gotoxy(x+75,y+14);cout << R"( _  ||     || |^*| _)" << endl;
	H::gotoxy(x+75,y+15);cout << R"(|=| o=,===,=o |__||=|)" << endl;
	H::gotoxy(x+75,y+16);cout << R"(|_|  _______)~`)  |_|)" << endl;
	H::gotoxy(x+75,y+17);cout << R"(    [=======]  ()     )" << endl;
	H::gotoxy(x+73,y+19); cout << "MANAGE USER'S INFORMAION!!" << endl;
	
	static char press;
	static int selectedColor = 1;
	static int n = 0;
	static int posistion = x + 20;
	
	do
	{
		press = 0;
		
		H::drawBoxSingleLineWithBG(x+20,y+9,31,1,1);
		H::drawBoxSingleLineWithBG(x+20,y+12,31,1,1);
		H::drawBoxSingleLineWithBG(x+20,y+15,31,1,1);
		H::drawBoxSingleLineWithBG(x+20,y+18,31,1,1);
		H::drawBoxSingleLineWithBG(x+20,y+21,31,1,1);
		
		
		tp(7,x+22,y+10); cout << "SIGN UP USER" << endl;
		H::gotoxy(x+22,y+13); cout << "VIEW ALL USER" << endl;
		H::gotoxy(x+22,y+16); cout << "EDIT USER" << endl;
		H::gotoxy(x+22,y+19); cout << "DELETE USER" << endl;
		H::gotoxy(x+22,y+22); cout << "SORT LIST" << endl;
		
		if(n == 1)
		{
			design(n);
		}
		else if(n == 2)
		{
			design(n);
		}
		else if(n == 3)
		{
			design(n);
		}
		else if(n == 4)
		{
			design(n);
		}
		else if(n == 5)
		{
			design(n);
		}
		press = getch();
		switch(press)
		{
			case 75:
				n--;
				if(n < 1)
				{
					n = 5;
				}
				posistion -= 10;
				if(posistion < (x+20))
				{
					posistion = x + 20;
				}
				break;
			case 72:
				n--;
				if(n < 1)
				{
					n = 5;
				}
				break;
			case 77:
				n++;
				if(n > 5)
				{
					n = 1;
				}
				if(posistion < (x+20))
				{
					posistion = x + 20;
				}
				break;
			case 80:
				n++;
				if(n > 5)
				{
					n = 1;
				}
				break;
		}
	}
	while(press != 13);
}
void Design::design(int a)
{
	if(a == 1)
	{
		tp(0,x+20,y); cout << R"(   __   _)" << endl;
		tp(0,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(0,x+20,y+2); cout << R"((_   _    _))" << endl;
		tp(0,x+20,y+3); cout << R"(  (_) (__))" << endl;
		tp(7,x+20,y+4); cout << R"(  / |  | \)" << endl;
		
		tp(0,x+101,y); cout << R"(   __   _)" << endl;
		tp(0,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(0,x+101,y+2); cout << R"((_   _    _))" << endl;
		tp(0,x+101,y+3); cout << R"(  (_) (__))" << endl;
		tp(7,x+101,y+4); cout << R"(  / |  | \)" << endl;
		
		H::drawBoxSingleLineWithBG(x+20,y+9,31,1,230);
		tp(229,x+22,y+10); cout << "SIGN UP USER" << endl;
		H::clearBox(x+58,y+10,55,13,179);
		H::setcolor(181);
		H::gotoxy(x+72,y+10);cout << R"((\ )" << endl;
		H::gotoxy(x+72,y+11);cout << R"(\'\ )" << endl;
		H::gotoxy(x+72,y+12);cout << R"( \'\     __________  )" << endl;
		H::gotoxy(x+72,y+13);cout << R"( / '|   ()_________))" << endl;
		H::gotoxy(x+72,y+14);cout << R"( \ '/    \ ~~~~~~~~ \)" << endl;
		H::gotoxy(x+72,y+15);cout << R"(   \       \ ~~~~~~   \)" << endl;
		H::gotoxy(x+72,y+16);cout << R"(   ==).      \__________\)" << endl;
		H::gotoxy(x+72,y+17);cout << R"(  (__)       ()__________))" << endl;
		H::gotoxy(x+79,y+20);cout << "SIGN UP USER\3\2" << endl;
		
		Sleep(30);
		H::clearBox(x+101,y+5,9,0,7);
		H::clearBox(x+20,y+5,9,0,7);
		////
		tp(1,x+20,y); cout << R"(   __   _)" << endl;
		tp(7,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(7,x+20,y+2); cout << R"((_   _    _))" << endl;
		tp(1,x+20,y+3); cout << R"(  (_) (__))" << endl;
		
		tp(1,x+101,y); cout << R"(   __   _)" << endl;
		tp(7,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(7,x+101,y+2); cout << R"((_   _    _))" << endl;
		tp(1,x+101,y+3); cout << R"(  (_) (__))" << endl;
	}
	else if( a == 2)
	{
		tp(0,x+20,y); cout << R"(   __   _)" << endl;
		tp(0,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(0,x+20,y+2); cout << R"((_   _    _))" << endl;
		tp(0,x+20,y+3); cout << R"(  (_) (__))" << endl;
		tp(7,x+20,y+4); cout << R"(  / |  | \)" << endl;
		
		tp(0,x+101,y); cout << R"(   __   _)" << endl;
		tp(0,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(0,x+101,y+2); cout << R"((_   _    _))" << endl;
		tp(0,x+101,y+3); cout << R"(  (_) (__))" << endl;
		tp(7,x+101,y+4); cout << R"(  / |  | \)" << endl;
		Sleep(30);
		H::clearBox(x+101,y+5,9,0,7);
		H::clearBox(x+20,y+5,9,0,7);
		////
		tp(1,x+20,y); cout << R"(   __   _)" << endl;
		tp(7,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(7,x+20,y+2); cout << R"((_   _    _))" << endl;
		tp(1,x+20,y+3); cout << R"(  (_) (__))" << endl;
		
		tp(1,x+101,y); cout << R"(   __   _)" << endl;
		tp(7,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(7,x+101,y+2); cout << R"((_   _    _))" << endl;
		tp(1,x+101,y+3); cout << R"(  (_) (__))" << endl;
		
		H::drawBoxSingleLineWithBG(x+20,y+12,31,1,230);
		tp(229,x+22,y+13); cout << "VIEW ALL USER" << endl;
		H::clearBox(x+58,y+10,55,13,179);
		H::setcolor(181);
		H::gotoxy(x+68,y+10);cout << R"(______________________     Q)" << endl;
		H::gotoxy(x+68,y+11);cout << R"(|                    |  ___|\_.-,)" << endl;
		H::gotoxy(x+68,y+12);cout << R"(|       V I E W      S\ Q~\___ \|)" << endl;
		H::gotoxy(x+68,y+13);cout << R"(|                    |(   )o 5) Q)" << endl;
		H::gotoxy(x+68,y+14);cout << R"(|        A L L         |\\  \_ ())" << endl;
		H::gotoxy(x+68,y+15);cout << R"(|                    | \'. _'/'.)" << endl;
		H::gotoxy(x+68,y+16);cout << R"(|       U S E R     .-. '-(  x< \)" << endl;
		H::gotoxy(x+68,y+17);cout << R"(|       ,o         /\, '.  )  /'\\)" << endl;
		H::gotoxy(x+68,y+18);cout << R"(|______ \'.__.----/ .'\  '.-'/   \\)" << endl;
		H::gotoxy(x+68,y+19);cout << R"(         '---'q__/.'__ ;    /     \\_)" << endl;
		H::gotoxy(x+68,y+20);cout << R"(              '---'     '--'       `"')" << endl;
		H::gotoxy(x+80,y+22);cout << "VIEW ALL USER" << endl;
	}
	else if( a == 3)
	{
		tp(0,x+20,y); cout << R"(   __   _)" << endl;
		tp(0,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(0,x+20,y+2); cout << R"((_   _    _))" << endl;
		tp(0,x+20,y+3); cout << R"(  (_) (__))" << endl;
		tp(7,x+20,y+4); cout << R"(  / |  | \)" << endl;
		
		tp(0,x+101,y); cout << R"(   __   _)" << endl;
		tp(0,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(0,x+101,y+2); cout << R"((_   _    _))" << endl;
		tp(0,x+101,y+3); cout << R"(  (_) (__))" << endl;
		tp(7,x+101,y+4); cout << R"(  / |  | \)" << endl;
		Sleep(30);
		H::clearBox(x+101,y+5,9,0,7);
		H::clearBox(x+20,y+5,9,0,7);
		////
		tp(1,x+20,y); cout << R"(   __   _)" << endl;
		tp(7,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(7,x+20,y+2); cout << R"((_   _    _))" << endl;
		tp(1,x+20,y+3); cout << R"(  (_) (__))" << endl;
		
		tp(1,x+101,y); cout << R"(   __   _)" << endl;
		tp(7,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(7,x+101,y+2); cout << R"((_   _    _))" << endl;
		tp(1,x+101,y+3); cout << R"(  (_) (__))" << endl;
		
		H::drawBoxSingleLineWithBG(x+20,y+15,31,1,230);
		tp(229,x+22,y+16); cout << "EDIT USER" << endl;
		H::clearBox(x+58,y+10,55,13,179);
		H::setcolor(181);
		H::gotoxy(x+62,y+10);cout << R"(  __)" << endl;
		H::gotoxy(x+62,y+11);cout << R"( (`/\)" << endl;
		H::gotoxy(x+62,y+12);cout << R"( `=\/\ __...--~~~~~-._   _.-~~~~~--...__)" << endl;
		H::gotoxy(x+62,y+13);cout << R"(  `=\/\               \ /               \\)" << endl;
		H::gotoxy(x+62,y+14);cout << R"(   `=\/                V                 \\)" << endl;
		H::gotoxy(x+62,y+15);cout << R"(   //_\___--~~~~~~-._  |  _.-~~~~~~--...__\\)" << endl;
		H::gotoxy(x+62,y+16);cout << R"(  //  ) (..----~~~~._\ | /_.~~~~----.....__\\)" << endl;
		H::gotoxy(x+62,y+17);cout << R"( ===( INK )==========\\|//====================)" << endl;
		H::gotoxy(x+62,y+18);cout << R"(_____\___/___________`---`______________________)" << endl;
		H::gotoxy(x+80,y+21);cout << "\3EDIT USER\3" << endl;
	}
	else if( a == 4)
	{
		tp(0,x+20,y); cout << R"(   __   _)" << endl;
		tp(0,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(0,x+20,y+2); cout << R"((_   _    _))" << endl;
		tp(0,x+20,y+3); cout << R"(  (_) (__))" << endl;
		tp(7,x+20,y+4); cout << R"(  / |  | \)" << endl;
		
		tp(0,x+101,y); cout << R"(   __   _)" << endl;
		tp(0,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(0,x+101,y+2); cout << R"((_   _    _))" << endl;
		tp(0,x+101,y+3); cout << R"(  (_) (__))" << endl;
		tp(7,x+101,y+4); cout << R"(  / |  | \)" << endl;
		Sleep(30);
		H::clearBox(x+101,y+5,9,0,7);
		H::clearBox(x+20,y+5,9,0,7);
		////
		tp(1,x+20,y); cout << R"(   __   _)" << endl;
		tp(7,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(7,x+20,y+2); cout << R"((_   _    _))" << endl;
		tp(1,x+20,y+3); cout << R"(  (_) (__))" << endl;
		
		tp(1,x+101,y); cout << R"(   __   _)" << endl;
		tp(7,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(7,x+101,y+2); cout << R"((_   _    _))" << endl;
		tp(1,x+101,y+3); cout << R"(  (_) (__))" << endl;
		
		H::drawBoxSingleLineWithBG(x+20,y+18,31,1,230);
		tp(229,x+22,y+19); cout << "DELETE USER" << endl;
		H::clearBox(x+58,y+10,55,13,179);
		H::setcolor(181);
		H::gotoxy(x+68,y+10);cout << R"(             .--.   _)" << endl;
		H::gotoxy(x+68,y+11);cout << R"(         .---|__| .((\=.)" << endl;
		H::gotoxy(x+68,y+12);cout << R"(      .--|===|--|/    ,(,)" << endl;
		H::gotoxy(x+68,y+13);cout << R"(      |  |===|  |\      y)" << endl;
		H::gotoxy(x+68,y+14);cout << R"(      |%%|   |  | `.__,')" << endl;
		H::gotoxy(x+68,y+15);cout << R"(      |%%|   |  | /  \\\)" << endl;
		H::gotoxy(x+68,y+16);cout << R"(      |  |   |  |/|  | \`----.)" << endl;
		H::gotoxy(x+68,y+17);cout << R"(      |  |   |  ||\  \  |___.'_)" << endl;
		H::gotoxy(x+68,y+18);cout << R"(     _|  |   |__||,\  \-+-._.' )_)" << endl;
		H::gotoxy(x+68,y+19);cout << R"(    / |  |===|--|\  \  \      /  \)" << endl;
		H::gotoxy(x+68,y+20);cout << R"(   /  `--^---'--' `--`-'---^-'    \)" << endl;
		H::gotoxy(x+68,y+21);cout << R"(  '================================`)" << endl;
		H::gotoxy(x+80,y+23);cout << "\3DELETE USER\3" << endl;
	}
	else if( a == 5)
	{
		tp(0,x+20,y); cout << R"(   __   _)" << endl;
		tp(0,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(0,x+20,y+2); cout << R"((_   _    _))" << endl;
		tp(0,x+20,y+3); cout << R"(  (_) (__))" << endl;
		tp(7,x+20,y+4); cout << R"(  / |  | \)" << endl;
		
		tp(0,x+101,y); cout << R"(   __   _)" << endl;
		tp(0,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(0,x+101,y+2); cout << R"((_   _    _))" << endl;
		tp(0,x+101,y+3); cout << R"(  (_) (__))" << endl;
		tp(7,x+101,y+4); cout << R"(  / |  | \)" << endl;
		Sleep(30);
		H::clearBox(x+101,y+5,9,0,7);
		H::clearBox(x+20,y+5,9,0,7);
		////
		tp(1,x+20,y); cout << R"(   __   _)" << endl;
		tp(7,x+20,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(7,x+20,y+2); cout << R"((_   _    _))" << endl;
		tp(1,x+20,y+3); cout << R"(  (_) (__))" << endl;
		
		tp(1,x+101,y); cout << R"(   __   _)" << endl;
		tp(7,x+101,y+1); cout << R"( _(  )_( )_)" << endl;
		tp(7,x+101,y+2); cout << R"((_   _    _))" << endl;
		tp(1,x+101,y+3); cout << R"(  (_) (__))" << endl;
		
		H::drawBoxSingleLineWithBG(x+20,y+21,31,1,230);
		tp(229,x+22,y+22); cout << "SORT LIST" << endl;
		H::clearBox(x+58,y+10,55,13,179);
		H::setcolor(181);
		H::gotoxy(x+67,y+10);cout << R"(       .--.                   .---.)" << endl;
		H::gotoxy(x+67,y+11);cout << R"(   .---|__|           .-.     |~~~|)" << endl;
		H::gotoxy(x+67,y+12);cout << R"(.--|===|--|_          |_|     |~~~|--.)" << endl;
		H::gotoxy(x+67,y+13);cout << R"(|  |===|  |'\     .---!~|  .--|   |--|)" << endl;
		H::gotoxy(x+67,y+14);cout << R"(|%%|   |  |.'\    |===| |--|%%|   |  |)" << endl;
		H::gotoxy(x+67,y+15);cout << R"(|%%|   |  |\.'\   |   | |__|  |   |  |)" << endl;
		H::gotoxy(x+67,y+16);cout << R"(|  |   |  | \  \  |===| |==|  |   |  |)" << endl;
		H::gotoxy(x+67,y+17);cout << R"(|  |   |__|  \.'\ |   |_|__|  |~~~|__|)" << endl;
		H::gotoxy(x+67,y+18);cout << R"(|  |===|--|   \.'\|===|~|--|%%|~~~|--|)" << endl;
		H::gotoxy(x+67,y+19);cout << R"(^--^---'--^    `-'`---^-^--^--^---'--')" << endl;
		H::gotoxy(x+81,y+21);cout << "\3SORT LIST\3" << endl;
	}		
}