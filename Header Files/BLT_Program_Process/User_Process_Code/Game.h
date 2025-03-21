#ifndef ___GAME_H___
#define ___GAME_H___
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../../ANT_Header/HinsyOOPV2"
using namespace HinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class Game
{
private:
    int gId;

protected:
    char gName[20];
    char gameType[20];
    char releaseDate[11];

public:
    int getID();
    void input();
    void update();
    void output(int y);
    void inputDate(char date[], int dateLength);
    void setID(int id);
    static int convertDateToInt(const char date[]);
    static int convertMonthToInt(const char date[]);
    static int convertYearToInt(const char date[]);
    static bool checkDate(const char *date);
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// int Game::gId = 0;
// char Game::gName[20] = "";
// char Game::gameType[20] = "";
// char Game::releaseDate[11] = "";
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int Game::getID()
{
    return gId;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Game::setID(int id)
{
    gId = id;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Game::update()
{
    bool isCorrect = false;
    H::setcolor(7);
    H::setcursor(1, 0);
    H::gotoxy(56, 36);
    H::inputAll(gName, sizeof(gName)); // name
    H::gotoxy(88, 36);
    H::inputLetter(gameType, sizeof(gameType));

    do
    {
        H::foreColor(7);
        H::gotoxy(112, 36);
        cout << "DD/MM/YEAR" << endl;
        H::gotoxy(112, 36);
        inputDate(releaseDate, sizeof(releaseDate));

        int year = convertYearToInt(releaseDate);
        int day = convertDateToInt(releaseDate);
        int month = convertMonthToInt(releaseDate);

        if (day > 31)
        {
            H::delay(1000);
            H::clearBox(112, 37, 18, 0, 7);
            H::foreColor(7);
            H::gotoxy(112, 36);
            cout << "Can't be Over 31" << endl;
            H::delay(1000);
            H::clearBox(112, 37, 18, 0, 7);
            isCorrect = false;
        }

        else if (day == 29 && month == 2)
        {

            if (year % 4 != 0)
            {
                if (year % 100 == 0 || year % 400 != 0)
                {
                    H::delay(1000);
                    H::clearBox(112, 37, 18, 0, 7);

                    H::foreColor(7);
                    H::gotoxy(112, 36);
                    cout << "only has 28 Days" << endl;
                    H::delay(1000);
                    H::clearBox(112, 37, 18, 0, 7);
                    isCorrect = false;
                }
            }
        }
        else if (day > 29 && month == 2)
        {
            H::delay(1000);
            H::clearBox(112, 37, 18, 0, 7);
            H::foreColor(7);
            H::gotoxy(112, 36);
            cout << "only has 29 Days" << endl;
            H::delay(1000);
            H::clearBox(112, 37, 18, 0, 7);
            isCorrect = false;
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
        {
            H::delay(1000);
            H::clearBox(112, 37, 18, 0, 7);
            H::foreColor(7);
            H::gotoxy(112, 36);
            cout << "Can't be over 30" << endl;
            H::delay(1000);
            H::clearBox(112, 37, 18, 0, 7);
            isCorrect = false;
        }

        else if (month > 12 || month < 1)
        {
            H::delay(1000);
            H::clearBox(112, 37, 18, 0, 7);
            H::foreColor(7);
            H::gotoxy(112, 36);
            cout << "Only 1-12 Months" << endl;
            H::delay(1000);
            H::clearBox(112, 37, 18, 0, 7);
            isCorrect = false;
        }
        else
        {
            isCorrect = true;
        }
    } while (!isCorrect);
    H::setcursor(0, 0);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Game::input()
{
    bool isCorrect = false;
    H::foreColor(176);
    H::gotoxy(99, 23);
    cout << ": ";
    H::inputAll(gName, sizeof(gName)); // name
    H::foreColor(176);
    H::gotoxy(99, 27);
    cout << ": ";
    H::inputLetter(gameType, sizeof(gameType)); // type4
    do
    {
        H::drawBoxDoubleLineWithBG(97, 30, 26, 1, 183);
        H::foreColor(176);
        H::gotoxy(101, 31);
        cout << "DD/MM/YEAR" << endl;
        H::gotoxy(99, 31);
        cout << ": ";
        inputDate(releaseDate, sizeof(releaseDate));

        int year = convertYearToInt(releaseDate);
        int day = convertDateToInt(releaseDate);
        int month = convertMonthToInt(releaseDate);

        if (day > 31)
        {
            H::delay(1000);
            H::clearBox(99, 31, 11, 0, 7);
            H::drawBoxDoubleLineWithBG(97, 30, 26, 1, 183);
            H::foreColor(176);
            Hinsy::gotoxy(99, 31);
            cout << "Can't be Over 31" << endl;
            H::delay(1000);
            H::clearBox(99, 31, 11, 0, 7);
            isCorrect = false;
        }

        else if (day == 29 && month == 2)
        {

            if (year % 4 != 0)
            {
                if (year % 100 == 0 || year % 400 != 0)
                {
                    H::delay(1000);
                    H::clearBox(99, 31, 11, 0, 7);
                    H::drawBoxDoubleLineWithBG(97, 30, 26, 1, 183);
                    H::foreColor(176);
                    Hinsy::gotoxy(99, 31);
                    cout << "only has 28 Days" << endl;
                    H::delay(1000);
                    H::clearBox(99, 31, 11, 0, 7);
                    isCorrect = false;
                }
            }
            else
            {
                isCorrect = true;
            }
        }
        else if (day > 29 && month == 2)
        {
            H::delay(1000);
            H::clearBox(99, 31, 11, 0, 7);
            H::drawBoxDoubleLineWithBG(97, 30, 26, 1, 183);
            H::foreColor(176);
            Hinsy::gotoxy(99, 31);
            cout << "only has 29 Days" << endl;
            H::delay(1000);
            H::clearBox(99, 31, 11, 0, 7);
            isCorrect = false;
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
        {
            H::delay(1000);
            H::clearBox(99, 31, 11, 0, 7);
            H::drawBoxDoubleLineWithBG(97, 30, 26, 1, 183);
            H::foreColor(176);
            Hinsy::gotoxy(99, 31);
            cout << "Can't be over 30" << endl;
            H::delay(1000);
            H::clearBox(99, 31, 11, 0, 7);
            isCorrect = false;
        }

        else if (month > 12 || month < 1)
        {
            H::delay(1000);
            H::clearBox(99, 31, 11, 0, 7);
            H::drawBoxDoubleLineWithBG(97, 30, 26, 1, 183);
            H::foreColor(176);
            Hinsy::gotoxy(99, 31);
            cout << "Only 1-12 Months" << endl;
            H::delay(1000);
            H::clearBox(99, 31, 11, 0, 7);
            isCorrect = false;
        }
        else
        {
            isCorrect = true;
        }
    } while (!isCorrect);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Game::output(int y)
{
    H::setcolor(7);
    H::gotoxy(36, 14 + y);
    cout << left << setw(21) << gId << setw(32) << gName << setw(24) << gameType << releaseDate;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Game::inputDate(char date[], int dateLength)
{
    int index = 0;
    bool allowFourDigitInput = false;
    bool hasValidDate = false;
    bool enteredValidChar = false;

    while (true)
    {
        char ch = _getch();

        if (ch == 13)
        {
            if (index == 0 || !enteredValidChar || index < dateLength - 1)
            {
                continue;
            }
            break;
        }
        else if (ch == 8)
        {
            if (index > 0)
            {
                --index;
                date[index] = '\0';
                cout << "\b \b";
            }
            continue;
        }

        if (isdigit(ch))
        {
            enteredValidChar = true;
            if (index < dateLength - 1)
            {
                if ((index == 2 || index == 5))
                {
                    date[index++] = '/';
                    cout << "/";
                }

                if ((index == 3 || index == 6) && hasValidDate)
                {
                    allowFourDigitInput = true;
                }

                if (allowFourDigitInput && index < dateLength - 1)
                {
                    date[index++] = ch;
                    cout << ch;
                }
                else if (!allowFourDigitInput)
                {
                    date[index++] = ch;
                    cout << ch;

                    if (index == 5 && date[2] == '1' && date[3] == '0' && date[4] == '/')
                    {
                        hasValidDate = true;
                    }
                }
            }
        }
    }

    date[index] = '\0';
    cout << endl;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int Game::convertDateToInt(const char date[])
{
    int day = (date[0] - '0') * 10 + (date[1] - '0');
    return day;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int Game::convertMonthToInt(const char date[])
{
    int month = (date[3] - '0') * 10 + (date[4] - '0');
    return month;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int Game::convertYearToInt(const char date[])
{
    int year = (date[6] - '0') * 1000 + (date[7] - '0') * 100 + (date[8] - '0') * 10 + (date[9] - '0');
    return year;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool Game::checkDate(const char *date)
{
    int month = convertMonthToInt(date);
    int day = convertDateToInt(date);
    int year = convertYearToInt(date);

    if (day < 1 || day > 31)
    {
        H::delay(500);
        H::gotoxy(116, 17);
        cout << "Invalid day. Must be between 1 and 31." << endl;
        H::delay(500);
        H::clearBox(116, 17, 18, 1, 7);
        return false;
    }

    if (month < 1 || month > 12)
    {
        H::delay(500);
        H::gotoxy(116, 17);
        cout << "Invalid month. Must be between 1 and 12." << endl;
        H::delay(500);
        H::clearBox(116, 17, 18, 1, 7);
        return false;
    }

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        H::delay(500);
        H::gotoxy(116, 17);
        cout << "Invalid day. This month has only 30 days." << endl;
        H::delay(500);
        H::clearBox(116, 17, 18, 1, 7);
        return false;
    }

    if (month == 2)
    {
        bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
        if ((isLeapYear && day > 29) || (!isLeapYear && day > 28))
        {
            H::delay(500);
            H::gotoxy(116, 17);
            cout << "Invalid day. February " << (isLeapYear ? "only has 29 days in a leap year." : "only has 28 days.") << endl;
            H::delay(500);
            H::clearBox(116, 17, 18, 1, 7);
            return false;
        }
    }

    return true;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif