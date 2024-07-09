#ifndef ___MG_USER_INFO_H___
#define ___MG_USER_INFO_H___

#include "HinsyOOPV2"

using namespace HinsyOOP;

class MgUserInfo {
    // private:
    //     int muId;
    protected:
        int muId;
        char guestName[20];
        char username[20];
        char password[20];
        double time;
        double buyedTime = 0;
        double remainTime = 0;

        static double loginHour;
        static double loginMn;
        static double logoutHour;
        static double logoutMn;

        char buyedFoodnDrink[20];
        char fndPrice[5];
        char fndQty[5];
        double totalFnD;
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
        double getBuyedTime();
        double getTime();
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
        /////////////////////////////////////////////
//        void setFoodnDrink(const char* foodnDrink);
        void setFnd(const char* foodnDrink, const char* price,const char* quantity);
//        void setPrice(const char* price);
//        void setQty(const char* quantity);
        const char* getFoodnDrink() const;
        const char* getPrice() const;
        const char* getQty() const;
        double getFndTotal() const;
};

double MgUserInfo::loginHour = 0;
double MgUserInfo::loginMn = 0;
double MgUserInfo::logoutHour = 0;
double MgUserInfo::logoutMn = 0;

//void MgUserInfo::setFoodnDrink(const char* foodnDrink) 
//{
//    strncpy(buyedFoodnDrink, foodnDrink, sizeof(buyedFoodnDrink) - 1);
//}
//
//void MgUserInfo::setPrice(const char* price) 
//{
//    strncpy(fndPrice, price, sizeof(fndPrice) - 1);
//}
//
//void MgUserInfo::setQty(const char* quantity) 
//{
//    strncpy(fndQty, quantity, sizeof(fndQty) - 1);
//}

void MgUserInfo::setFnd(const char* foodnDrink, const char* price,const char* quantity)
{
	strncpy(fndQty, quantity, sizeof(fndQty) - 1);
	strncpy(fndPrice, price, sizeof(fndPrice) - 1);
	strncpy(buyedFoodnDrink, foodnDrink, sizeof(buyedFoodnDrink) - 1);
	totalFnD = atoi(fndQty) * atof(fndPrice);
}

const char* MgUserInfo::getFoodnDrink() const 
{
    return buyedFoodnDrink;
}

const char* MgUserInfo::getPrice() const 
{
    return fndPrice;
}

const char* MgUserInfo::getQty() const 
{
    return fndQty;
}
double MgUserInfo::getFndTotal() const
{
	return totalFnD;
}
/////////////////////////////////

void MgUserInfo::setnTime(double time) 
{
    this->time += (time * 60);
    remainTime += (time * 60);
}

void MgUserInfo::setRemainTime(double time) 
{
    remainTime = time;
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
    remainTime = time;
}

double MgUserInfo::getBuyedTime() 
{
    return buyedTime;
}

int MgUserInfo::getID() const 
{
    return muId;
}

double MgUserInfo::getTime() 
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
    cout << "Enter Guest name : "; H::inputLetter(guestName, sizeof(guestName)); cout << endl;
    cout << "Enter Account username : "; H::inputAll(username, sizeof(username)); cout << endl;
    cout << "Enter Account password : "; H::inputAll(password, sizeof(password)); cout << endl;
    cout << "Enter Account Hours : "; H::inputNumber(times, sizeof(times)); cout << endl;
    time = atoi(times) * 60;
    remainTime = time;
}

void MgUserInfo::output() 
{
    cout << left << setw(10) << muId << setw(25) << guestName << setw(25) << username << setw(25) << password << fixed << setprecision(2) << setw(10) << time << setw(10) << remainTime << totalPrice() << endl;
}

double MgUserInfo::totalPrice() 
{
    return (5000 * (time / 60));
}

#endif
