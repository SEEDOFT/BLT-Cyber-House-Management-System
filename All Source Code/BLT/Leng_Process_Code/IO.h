#ifndef ___IO_H___
#define ___IO_H___

#include "HinsyOOPV2"

using namespace HinsyOOP;

class IO{
	public:
		virtual void input() = 0;
		virtual void output() = 0;
		virtual int getID() const = 0;
		virtual int getPrice() const = 0;
		static void inputDate(char date[], int dateLength);
		static void inputTime(char time[]);
		static int getHourFromTime(const char time[]);
		static int getMinuteFromTime(const char time[]);
		virtual ~IO();
};

void IO::inputDate(char date[], int dateLength) 
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

void IO::inputTime(char time[]) 
{
    int index = 0;
    bool allowTwoDigitInput = true;
    bool hasValidTime = false;
    bool enteredValidChar = false;

    while (true) {
        char ch = _getch();

        if (ch == 13) {
            if (index == 0 || !enteredValidChar || index < strlen(time)) {
                continue;
            }
            break;
        } else if (ch == 8) {
            if (index > 0) {
                --index;
                time[index] = '\0';
                cout << "\b \b";
            }
            continue;
        }

        if (isdigit(ch) || ch == ':') {
            enteredValidChar = true;
            if (index < 5) {
                if ((index == 2)) {
                    time[index++] = ':';
                    cout << ":";
                }


                if (allowTwoDigitInput && index < 5) {
                    time[index++] = ch;
                    cout << ch;
                    if (index == 1 && ch > '1') {
                        allowTwoDigitInput = false;
                    } else if (index == 3 && time[0] == '1' && ch > '2') {
                        allowTwoDigitInput = false;
                    }
                } else if (!allowTwoDigitInput) {
                    time[index++] = ch;
                    cout << ch;

                    if (index == 4 && (time[0] == '1' || time[0] == '2') && (time[1] >= '0' && time[1] <= '9')) {
                        hasValidTime = true;
                    }
                }
            }
        }
    }

    time[index] = '\0';
    cout << endl;
}
int IO::getHourFromTime(const char time[]) 
{
    int hour = (time[0] - '0') * 10 + (time[1] - '0');
    return hour;
}

int IO::getMinuteFromTime(const char time[]) 
{
    int minute = (time[3] - '0') * 10 + (time[4] - '0');
    return minute;
}

IO::~IO(){}

#endif