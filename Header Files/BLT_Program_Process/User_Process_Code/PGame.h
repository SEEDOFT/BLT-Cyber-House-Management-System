#ifndef __PGAME_H__
#define __PGAME_H__
//###################################################################################
#include "../../ANT_Header/HinsyOOPV2"
#include "../../BLT_Design/designConsole.h"

using namespace HinsyOOP;
//###################################################################################
class PGame
{

	private:

		#define SCREEN_WIDTH 90
		#define SCREEN_HEIGHT 26
		#define WIN_WIDTH 70
		#define MENU_WIDTH 20
		#define GAP_SIZE 7
		#define PIPE_DIF 45

		static int pipePos[3];
		static int gapPos[3];
		static int pipeFlag[3];
		static char bird[2][6];

		static int birdPos;
		static int score;

		static int offsetX;
		static int offsetY;

	public:
		/// Floppy Bird
		static void Art();
		static void HeaderTxt();
		static void drawBorder();
		static void genPipe(int ind);
		static void drawPipe(int ind);
		static void erasePipe(int ind);
		static void drawBird();
		static void eraseBird();
		static int collision();
		static void gameover();
		static void updateScore();
		static void instructions();
		static void play();
		static void menu();
};
void PGame::Art()
{
	H::setcolor(6); H::gotoxy(61,12); cout << R"( _______________________________)";
	H::setcolor(6); H::gotoxy(61,13); cout << R"(|                               |\)";
	H::setcolor(6); H::gotoxy(61,14); cout << R"(|                               |__\)";
	H::setcolor(6); H::gotoxy(61,15); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,16); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,17); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,18); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,19); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,20); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,21); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,22); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,23); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,24); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,25); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,26); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,27); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,28); cout << R"(|                                   |)";
	H::setcolor(6); H::gotoxy(61,29); cout << R"(|___________________________________|)";
}
void PGame::HeaderTxt()
{                         
	Design::TxtOutline(10,0,-20,1);              
	H::setcolor(3); H::gotoxy(58,3); cout << R"( _____ _                    _____ _       _ )";
	H::setcolor(3); H::gotoxy(58,4); cout << R"(|   __| |___ ___ ___ _ _   | __  |_|___ _| |)";
	H::setcolor(4); H::gotoxy(58,5); cout << R"(|   __| | .'| . | . | | |  | __ -| |  _| . |)";
	H::setcolor(4); H::gotoxy(58,6); cout << R"(|__|  |_|__,|  _|  _|_  |  |_____|_|_| |___|)";
	H::setcolor(4); H::gotoxy(58,7); cout << R"(            |_| |_| |___|                   )";
}
//###################################################################################
int PGame::pipePos[3] = {0,0,0};
int PGame::gapPos[3] = {0,0,0};
int PGame::pipeFlag[3] = {0,0,0};
char PGame::bird[2][6] = {'/', '-', '-', 'o', '\\', ' ',
						'|', '_', '_', '_', ' ', '>'};
int PGame::birdPos = 6;
int PGame::score = 0;
int PGame::offsetX = 35;
int PGame::offsetY = 7;
//###################################################################################
void PGame::drawPipe(int ind)
{
	H::foreColor(162);
	if (pipeFlag[ind] == true)
	{
		for (int i = 0; i < gapPos[ind]; i++)
		{
			H::gotoxy(WIN_WIDTH - pipePos[ind] + offsetX, i + 1 + offsetY);
			cout << "***";
		}
		for (int i = gapPos[ind] + GAP_SIZE; i < SCREEN_HEIGHT - 1; i++)
		{
			H::gotoxy(WIN_WIDTH - pipePos[ind] + offsetX, i + 1 + offsetY);
			cout << "***";
		}
	}
	H::foreColor(7);
}
//###################################################################################
void PGame::genPipe(int ind)
{
	gapPos[ind] = 3 + rand() % 14;
}
//###################################################################################
void PGame::drawBorder()
{
	H::foreColor(128);
	for (int i = 0; i < SCREEN_WIDTH; i++)
	{
		H::gotoxy(i + offsetX, 0 + offsetY);
		cout << " ";
		H::gotoxy(i + offsetX, SCREEN_HEIGHT + offsetY);
		cout << " ";
	}

	for (int i = 0; i < SCREEN_HEIGHT; i++)
	{
		H::gotoxy(0 + offsetX, i + offsetY);
		cout << " ";
		H::gotoxy(SCREEN_WIDTH + offsetX, i + offsetY);
		cout << "?";
	}
	for (int i = 0; i < SCREEN_HEIGHT; i++)
	{
		H::gotoxy(WIN_WIDTH + offsetX, i + offsetY);
		cout << " ";
	}
	H::foreColor(7);
}
//###################################################################################
void PGame::play()
{
	birdPos = 6;
	score = 0;
	pipeFlag[0] = 1;
	pipeFlag[1] = 0;
	pipePos[0] = pipePos[1] = 4;

	H::cls();
	H::setcolor(7);
	H::setcursor(0,0);
	Design::outline();
	
	drawBorder();
	genPipe(0);
	updateScore();

	H::gotoxy(WIN_WIDTH + 5 + offsetX, 2 + offsetY);
	cout << "FLAPPY BIRD";
	H::gotoxy(WIN_WIDTH + 6 + offsetX, 4 + offsetY);
	cout << "----------";
	H::gotoxy(WIN_WIDTH + 6 + offsetX, 6 + offsetY);
	cout << "----------";
	H::gotoxy(WIN_WIDTH + 7 + offsetX, 12 + offsetY);
	cout << "Control ";
	H::gotoxy(WIN_WIDTH + 7 + offsetX, 13 + offsetY);
	cout << "-------- ";
	H::gotoxy(WIN_WIDTH + 2 + offsetX, 14 + offsetY);
	cout << " Spacebar = jump";

	H::gotoxy(10 + offsetX, 5 + offsetY);
	cout << "Press any key to start";
	getch();
	H::gotoxy(10 + offsetX, 5 + offsetY);
	cout << "                      ";

	while (1)
	{

		if (kbhit())
		{
			char ch = getch();
			if (ch == 32)
			{
				if (birdPos > 3)
					birdPos -= 3;
			}
			if (ch == 27)
			{
				break;
			}
		}

		drawBird();
		drawPipe(0);
		drawPipe(1);
		//    debug();
		if (collision() == 1)
		{
			gameover();
			return;
		}
		Sleep(100);
		eraseBird();
		erasePipe(0);
		erasePipe(1);
		birdPos += 1;

		if (birdPos > SCREEN_HEIGHT - 2)
		{
			gameover();
			return;
		}

		if (pipeFlag[0] == 1)
			pipePos[0] += 2;

		if (pipeFlag[1] == 1)
			pipePos[1] += 2;

		if (pipePos[0] >= 40 && pipePos[0] < 42)
		{
			pipeFlag[1] = 1;
			pipePos[1] = 4;
			genPipe(1);
		}
		if (pipePos[0] > 68)
		{
			score++;
			updateScore();
			pipeFlag[1] = 0;
			pipePos[0] = pipePos[1];
			gapPos[0] = gapPos[1];
		}
	}
}
//###################################################################################
void PGame::updateScore()
{
	H::gotoxy(WIN_WIDTH + 7 + offsetX, 5 + offsetY);
	cout << "Score: " << score << endl;
}
//###################################################################################
void PGame::instructions()
{                     
	H::setcursor(0,0);
	H::cls();
	H::setcolor(7);
	Design::outline();

	H::setcolor(3); H::gotoxy(55,5); cout << R"( _____         _               _   _             )";
	H::setcolor(3); H::gotoxy(55,6); cout << R"(|     |___ ___| |_ ___ _ _ ___| |_|_|___ ___ ___ )";
	H::setcolor(4); H::gotoxy(55,7); cout << R"(|-   -|   |_ -|  _|  _| | |  _|  _| | . |   |_ -|)";
	H::setcolor(4); H::gotoxy(55,8); cout << R"(|_____|_|_|___|_| |_| |___|___|_| |_|___|_|_|___|)";

	Art();
	H::setcolor(1); H::gotoxy(78,16);
	cout << "Use";
	H::setcolor(4); H::gotoxy(74,18);
	cout << "[SPACEBAR]";
	H::setcolor(1); H::gotoxy(69,20);
	cout << "to make the bird fly";  
	 
	H::setcolor(1); H::gotoxy(66,28);    
	cout << "Press"; H::setcolor(4); cout << " [ANY]"; H::setcolor(1); cout << " key to go back";

	getch();                                     
}
//###################################################################################
int PGame::collision()
{
	if (pipePos[0] >= 61)
	{
		if (birdPos < gapPos[0] || birdPos > gapPos[0] + GAP_SIZE)
		{
			return 1;
		}
	}
	return 0;
}
//###################################################################################
void PGame::gameover()
{			
	H::setcursor(0,0);
	H::cls();
	H::setcolor(7);
	Design::outline();

	H::setcolor(4); H::gotoxy(59,5); cout << R"( _____                  _____             )";
	H::setcolor(4); H::gotoxy(59,6); cout << R"(|   __|___ _____ ___   |     |_ _ ___ ___ )";
	H::setcolor(4); H::gotoxy(59,7); cout << R"(|  |  | .'|     | -_|  |  |  | | | -_|  _|)";
	H::setcolor(4); H::gotoxy(59,8); cout << R"(|_____|__,|_|_|_|___|  |_____|\_/|___|_|  )";										
	
	Art();
	H::setcolor(1); H::gotoxy(71,16);
	cout << "Your Score : ";H::setcolor(4); cout << score;//score
	H::setcolor(1); H::gotoxy(71,24);
	cout << "Press "; H::setcolor(4); cout << "[ENTER] "; H::setcolor(1); cout << "key"; 
	H::setcolor(1); H::gotoxy(70,26);
	cout << "to continue playing";
	H::setcolor(4); H::gotoxy(71,28); 
    cout << "[ESC]"; H::setcolor(1); cout << " to go back"; 

}
//###################################################################################
void PGame::drawBird()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			H::gotoxy(j + 2 + offsetX, i + birdPos + offsetY);
			cout << bird[i][j];
		}
	}
}
//###################################################################################
void PGame::eraseBird()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			H::gotoxy(j + 2 + offsetX, i + birdPos + offsetY);
			cout << " ";
		}
	}
}
//###################################################################################
void PGame::erasePipe(int ind)
{
	H::foreColor(7);
	if (pipeFlag[ind] == true)
	{
		for (int i = 0; i < gapPos[ind]; i++)
		{
			H::gotoxy(WIN_WIDTH - pipePos[ind] + offsetX, i + 1 + offsetY);
			cout << "   ";
		}
		for (int i = gapPos[ind] + GAP_SIZE; i < SCREEN_HEIGHT - 1; i++)
		{
			H::gotoxy(WIN_WIDTH - pipePos[ind] + offsetX, i + 1 + offsetY);
			cout << "   ";
		}
	}
}
//###################################################################################
void PGame::menu()
{
	char press = ' ';
	while (true)
	{
		H::cls();
		H::setcolor(7);
    	H::setcursor(0,0);
		Design::outline();
		
		HeaderTxt();

		H::HLine(50,14,60,7,205);
		H::HLine(50,18,60,7,205);
		H::HLine(50,22,60,7,205);
		H::HLine(50,26,60,7,205);
		H::HLine(50,30,60,7,205);

		H::VLine(60,12,20,7,186);
		H::VLine(100,12,20,7,186);

		H::setcolor(3);
		H::gotoxy(68,16);
		cout << "1. Start Game";
		H::gotoxy(68,20);
		cout << "2. Instructions";
		H::gotoxy(68,24);
		cout << "3. Quit Game";
		H::gotoxy(68,28);
		cout << "Select option: ";

		H::setcursor(1,0);
		H::setcolor(4);
		char op = getche();
		H::delay(200);

		if (op == '1')
		{
			play();

			while(1)
			{
				press =  getch();

				if(press == 27)
				{
					break;
				}
				else if(press == 13)
				{
					play();
				}
			}
		}
		else if(op == '2')
		{
			instructions();
		}
		else if(op == '3')
		{
			break;
		}
			
	} 
}
//###################################################################################
#endif
