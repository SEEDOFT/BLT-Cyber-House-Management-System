#ifndef ___GAME_H___
#define ___GAME_H___

#include "HinsyOOPV2"

using namespace HinsyOOP;

class Game {
	private:
		int gId;
	protected:
		char gName[20];
		char gameType[20];
		char releaseDate[11];
	public:
		int getID();
		void input();
		void output();
		void inputDate(char date[], int dateLength);
		void setID(int id);
};

//int Game::gId = 0;
//char Game::gName[20] = "";
//char Game::gameType[20] = "";
//char Game::releaseDate[11] = "";

int Game::getID()
{
	return gId;
}

void Game::setID(int id)
{
	gId = id;
}

void Game::input()
{
	cout << "Enter Game name : "; H::inputAll(gName,sizeof(gName)); cout << endl;
	cout << "Enter Game type : "; H::inputLetter(gameType,sizeof(gameType)); cout << endl;
	cout << "Enter Game release date : "; inputDate(releaseDate,sizeof(releaseDate)); cout << endl;
}

void Game::output()
{
	cout << left << setw(10) << gId << setw(25) << gName << setw(25) << gameType << releaseDate << endl;
}

void Game::inputDate(char date[], int dateLength)
{
    int index = 0;
    bool allowFourDigitInput = false;
    bool hasValidDate = false;
    bool enteredValidChar = false;

    while (true) {
        char ch = _getch();

        if (ch == 13) {
            if (index == 0 || !enteredValidChar || index < dateLength - 1) {
                continue;
            }
            break;
        }
        else if (ch == 8) {
            if (index > 0) {
                --index;
                date[index] = '\0';
                cout << "\b \b";
            }
            continue;
        }

        if (isdigit(ch)) {
            enteredValidChar = true;
            if (index < dateLength - 1) {
                if ((index == 2 || index == 5)) {
                    date[index++] = '/';
                    cout << "/";
                }

                if ((index == 3 || index == 6) && hasValidDate) {
                    allowFourDigitInput = true;
                }

                if (allowFourDigitInput && index < dateLength - 1) {
                    date[index++] = ch;
                    cout << ch;
                }
                else if (!allowFourDigitInput) {
                    date[index++] = ch;
                    cout << ch;

                    if (index == 5 && date[2] == '1' && date[3] == '0' && date[4] == '/') {
                        hasValidDate = true;
                    }
                }
            }
        }
    }

    date[index] = '\0';
    cout << endl;
}

#endif