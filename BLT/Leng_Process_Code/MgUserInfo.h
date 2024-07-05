#ifndef ___MG_USER_INFO_H___
#define ___MG_USER_INFO_H___

#include "HinsyOOPV2"

using namespace HinsyOOP;


class MgUserInfo{
//	private:
//		int muId;
	protected:
		int muId;
		char guestName[20];
		char username[20];
		char password[20];
		double time;
		double buyedTime = 0;
		
		static double loginHour;
		static double loginMn;
		static double logoutHour;
		static double logoutMn;
	public:
		int getID() const;
		void setTime(double hours);
		const char* getUsername() const;
		const char* getPassword() const;
		void input();
		void output();
		double totalPrice();
		void setID(int id);
		void setBuyingTime(double hours);
		int getBuyedTime();
		int getTime();
		///////////////////////////////////////////////
		static double getLoginHour();
        static void setLoginHour(double hour);

        static double getLoginMn();
        static void setLoginMn(double minute);

        static double getLogoutHour();
        static void setLogoutHour(double hour);

        static double getLogoutMn();
        static void setLogoutMn(double minute);
        
        void setnTime(double time);
};

double MgUserInfo::loginHour = 0;
double MgUserInfo::loginMn = 0;
double MgUserInfo::logoutHour = 0;
double MgUserInfo::logoutMn = 0;

void MgUserInfo::setnTime(double time)
{
	this->time = time;
}

double MgUserInfo::getLoginHour() 
{ 
	return loginHour; 
}
void MgUserInfo::setLoginHour(double hour) 
{ 
	loginHour = hour; 
}

double MgUserInfo::getLoginMn() 
{ 
	return loginMn; 
}
void MgUserInfo::setLoginMn(double minute) 
{ 
	loginMn = minute; 
}

double MgUserInfo::getLogoutHour() 
{ 
	return logoutHour; 
}
void MgUserInfo::setLogoutHour(double hour) 
{ 
	logoutHour = hour; 
}

double MgUserInfo::getLogoutMn() 
{ 
	return logoutMn; 
}
void MgUserInfo::setLogoutMn(double minute) 
{ 
	logoutMn = minute; 
}

void MgUserInfo::setBuyingTime(double hours) 
{
    buyedTime += hours;
}
void MgUserInfo::setTime(double hours)
{
	time += hours;
}
int MgUserInfo::getBuyedTime()
{
	return buyedTime;
}
int MgUserInfo::getID() const
{
	return muId;
}
int MgUserInfo::getTime()
{
	return time;
}

const char* MgUserInfo::getUsername() const
{
	return username;
}

const char* MgUserInfo::getPassword() const
{
	return password;
}

void MgUserInfo::setID(int id)
{
	muId = id;
}

void MgUserInfo::input()
{
	char times[6];
	cout << "Enter Guest name : "; H::inputLetter(guestName,sizeof(guestName)); cout << endl;
	cout << "Enter Account username : "; H::inputAll(username,sizeof(username)); cout << endl;
	cout << "Enter Account password : "; H::inputAll(password,sizeof(password)); cout << endl;
	cout << "Enter Account Hours : "; H::inputNumber(times,sizeof(times)); cout << endl;
	time = atoi(times) * 60;
}
void MgUserInfo::output()
{
	cout << left << setw(10) << muId << setw(25) << guestName << setw(25) << username << setw(25) << password << fixed << setprecision(2) << setw(10) << time << totalPrice() << endl;
}
double MgUserInfo::totalPrice()
{
//	return (5000) * ((getHourFromTime(time) + (getMinuteFromTime(time) / 60)));	
	return (5000*(time/60));
}

#endif