#ifndef __MG_USER_PAYMENT_H__
#define __MG_USER_PAYMENT_H__

#include "Food.h"
#include "Game.h"
#include "MgUserInfo.h"

class MgUserPayment : public FoodnDrink, public Game, public MgUserInfo{
	private:
		double buyedTime = 0;
        double remainTime = 0;

        static double loginHour;
        static double loginMn;
        static double logoutHour;
        static double logoutMn;

        char buyedFoodnDrink[20] = "\0";
        char fndPrice[5] = "\0";
        char fndQty[5] = "\0";
        double totalFnD = 0;
        double totalIncome();
	public:
		void setFnd(const char* foodnDrink, const char* price,const char* quantity);
        const char* getFoodnDrink() const;
        const char* getPrice() const;
        const char* getQty() const;
        double getFndTotal() const;
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
        void setRemainTime(double time);
        
        void setBuyingTime(double hours);
        double getBuyedTime();
        double getTime();
        void setTime(double hours);
        double totalPrice();
        ///////////////////////////////////////////////
		void viewAll();
		void input();
		void output();
		void income();
		////////////////////////////////////////////////
		int getID() const;
        const char* getUsername() const;
        const char* getPassword() const;
        void setID(int id);
        void setGuestname(const char * name);
        void setUsername(const char * name);
};

double MgUserPayment::loginHour = 0;
double MgUserPayment::loginMn = 0;
double MgUserPayment::logoutHour = 0;
double MgUserPayment::logoutMn = 0;

void MgUserPayment::setFnd(const char* foodnDrink, const char* price,const char* quantity)
{
	strncpy(fndQty, quantity, sizeof(fndQty) - 1);
	strncpy(fndPrice, price, sizeof(fndPrice) - 1);
	strncpy(buyedFoodnDrink, foodnDrink, sizeof(buyedFoodnDrink) - 1);
	totalFnD = atoi(fndQty) * atof(fndPrice);
}

const char* MgUserPayment::getFoodnDrink() const 
{
    return buyedFoodnDrink;
}

const char* MgUserPayment::getPrice() const 
{
    return fndPrice;
}

const char* MgUserPayment::getQty() const 
{
    return fndQty;
}
double MgUserPayment::getFndTotal() const
{
	return totalFnD;
}
/////////////////////////////////

void MgUserPayment::setnTime(double time) 
{
    this->time += (time * 60);
    remainTime += (time * 60);
}

void MgUserPayment::setRemainTime(double time) 
{
    remainTime = time;
}

double MgUserPayment::getLoginHour() 
{
    return loginHour;
}

void MgUserPayment::setLoginHour(double hour) 
{
    loginHour = hour;
}

double MgUserPayment::getLoginMn() 
{
    return loginMn;
}

void MgUserPayment::setLoginMn(double minute) 
{
    loginMn = minute;
}

double MgUserPayment::getLogoutHour() 
{
    return logoutHour;
}

void MgUserPayment::setLogoutHour(double hour) 
{
    logoutHour = hour;
}

double MgUserPayment::getLogoutMn() 
{
    return logoutMn;
}

void MgUserPayment::setLogoutMn(double minute) 
{
    logoutMn = minute;
}

void MgUserPayment::setBuyingTime(double hours) 
{
    buyedTime += hours;
}

void MgUserPayment::setTime(double hours) 
{
    time += hours;
    remainTime = time;
}

double MgUserPayment::getBuyedTime() 
{
    return buyedTime;
}

double MgUserPayment::getTime() 
{
    return time;
}

double MgUserPayment::totalPrice() 
{
    return (5000 * (time / 60));
}

void MgUserPayment::setGuestname(const char * name)
{
	strcpy(guestName,name);
}

void MgUserPayment::setUsername(const char * name)
{
	strcpy(username,name);
}
        
void MgUserPayment::input() 
{
    char times[6];
//    cout << "Enter Guest name : "; H::inputLetter(guestName, sizeof(guestName)); cout << endl;
//    cout << "Enter Account username : "; H::inputAll(username, sizeof(username)); cout << endl;
    cout << "Enter Account password : "; H::inputAll(password, sizeof(password)); cout << endl;
    cout << "Enter Account Hours : "; H::inputNumber(times, sizeof(times)); cout << endl;
    time = atoi(times) * 60;
    remainTime = time;
}

int MgUserPayment::getID() const 
{
    return muId;
}

const char* MgUserPayment::getUsername() const 
{
    return username;
}

const char* MgUserPayment::getPassword() const 
{
    return password;
}

void MgUserPayment::setID(int id) 
{
    muId = id;
}

double MgUserPayment::totalIncome()
{
	return totalPrice() + getFndTotal();
}

void MgUserPayment::output() 
{
    cout << left << setw(10) << muId << setw(25) << guestName << setw(25) << username << setw(25) << password << fixed << setprecision(2) << setw(10) << time << setw(10) << remainTime << totalPrice() << endl;
}

void MgUserPayment::viewAll()
{
	cout << left << setw(10) << muId << setw(25) << guestName << setw(25) << username << setw(25) << password << setw(8) << time << setw(25) << buyedFoodnDrink << setw(8) << setw(8) << fdQty << endl;
}
void MgUserPayment::income()
{
	cout << left << setw(10) << muId << setw(25) << guestName << setw(25) << username << setw(25) << password << setw(8) << time << totalPrice() 
	<< setw(8) << "$" << setw(25) << buyedFoodnDrink << setw(8) << fndQty << setw(8) << getFndTotal() << totalIncome() << "$" << endl;
}

#endif