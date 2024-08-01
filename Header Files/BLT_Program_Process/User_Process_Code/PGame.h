#ifndef __PGAME_H__
#define __PGAME_H__
//###################################################################################
#include "../../ANT_Header/HinsyOOPV2"

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
	H::setcolor(1); H::gotoxy(10,20); cout << R"( ______)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|      |\)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|      |__\)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|          |)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|          |)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|          |)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|          |)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|          |)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|__________|)";
}
void PGame::HeaderTxt()
{                                       
	H::setcolor(1); H::gotoxy(10,20); cout << R"( _____ _                    _____ _       _ )";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|   __| |___ ___ ___ _ _   | __  |_|___ _| |)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|   __| | .'| . | . | | |  | __ -| |  _| . |)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(|__|  |_|__,|  _|  _|_  |  |_____|_|_| |___|)";
	H::setcolor(1); H::gotoxy(10,20); cout << R"(            |_| |_| |___|                   )";

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

	system("cls");
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
	system("cls");
	cout << "Instructions";
	cout << "\n----------------";
	cout << "\n Press spacebar to make bird fly";
	cout << "\n\nPress any key to go back to menu";
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
	system("cls");
	cout << endl;
	cout << "\t\t--------------------------" << endl;
	cout << "\t\t-------- Game Over -------" << endl;
	cout << "\t\t--------------------------" << endl
		 << endl;
	cout << "\t\tPress any key to go back to menu.";
	getch();
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
	while (true)
	{
		system("cls");
		H::gotoxy(10 + offsetX, 5 + offsetY);
		cout << " ----------------------------";
		H::gotoxy(10 + offsetX, 6 + offsetY);
		cout << " |       Flappy Bird        | ";
		H::gotoxy(10 + offsetX, 7 + offsetY);
		cout << " ----------------------------";
		H::gotoxy(10 + offsetX, 9 + offsetY);
		cout << "1. Start Game";
		H::gotoxy(10 + offsetX, 10 + offsetY);
		cout << "2. Instructions";
		H::gotoxy(10 + offsetX, 11 + offsetY);
		cout << "3. Quit";
		H::gotoxy(10 + offsetX, 13 + offsetY);
		cout << "Select option: ";

		char op = getche();

		if (op == '1')
			play();
		else if (op == '2')
			instructions();
		else if (op == '3')
			break;
	} 
}
//###################################################################################
#endif
