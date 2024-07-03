#ifndef ___MG_USER_INFO_H___
#define ___MG_USER_INFO_H___

#include "HinsyOOPV2"

using namespace HinsyOOP;


class MgUserInfo{
	private:
		int muId;
	protected:
		char guestName[20];
		char username[20];
		char password[20];
		char time[6];
	public:
		int getID();
		void input();
		void output();
		double totalPrice();
		static void inputTime(char time[]);
		static int getHourFromTime(const char time[]);
		static int getMinuteFromTime(const char time[]);
		void setID(int id);
};

//int MgUserInfo::muId = 0;
//char MgUserInfo::guestName[20] = "";
//char MgUserInfo::username[20] = "";
//char MgUserInfo::password[20] = "";
//char MgUserInfo::time[6] = "";

int MgUserInfo::getID()
{
	return muId;
}

void MgUserInfo::setID(int id)
{
	muId = id;
}

void MgUserInfo::input()
{
	cout << "Enter Guest name : "; H::inputLetter(guestName,sizeof(guestName)); cout << endl;
	cout << "Enter Account username : "; H::inputAll(username,sizeof(username)); cout << endl;
	cout << "Enter Account password : "; H::inputAll(password,sizeof(password)); cout << endl;
	cout << "Enter Account Hours : "; inputTime(time); cout << endl;
}
void MgUserInfo::output()
{
	cout << left << setw(10) << muId << setw(25) << guestName << setw(25) << username << setw(25) << password <<setw(10) << time << totalPrice() << endl;
}
double MgUserInfo::totalPrice()
{
	return (5000) * (getHourFromTime(time) + (getMinuteFromTime(time) / 60));
}

void MgUserInfo::inputTime(char time[])
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
int MgUserInfo::getHourFromTime(const char time[])
{
    int hour = (time[0] - '0') * 10 + (time[1] - '0');
    return hour;
}

int MgUserInfo::getMinuteFromTime(const char time[])
{
    int minute = (time[3] - '0') * 10 + (time[4] - '0');
    return minute;
}

#endif