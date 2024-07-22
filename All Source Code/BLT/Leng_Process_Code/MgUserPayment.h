#ifndef __MG_USER_PAYMENT_H__
#define __MG_USER_PAYMENT_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "Food.h"
#include "Game.h"
#include "MgUserInfo.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class MgUserPayment : public FoodnDrink, public Game, public MgUserInfo
{
private:
    double buyedTime = 0;
    double remainTime = 0;

    static double loginHour;
    static double loginMn;
    static double logoutHour;
    static double logoutMn;

//    char buyedFoodnDrink[20] = "\0";
//    char fndPrice[5] = "\0";
//    char fndQty[5] = "\0";
//    double totalFnD = 0;

    double allTotal = 0;

public:
//    void setFnd(const char *foodnDrink, const char *price, const char *quantity);
//    const char *getFoodnDrink() const;
//    const char *getPrice() const;
//    const char *getQty() const;
//    double getFndTotal() const;
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
    double getRemainTime();
//    double totalPrice();
    ///////////////////////////////////////////////
//    void viewAll(int y);
    void update();
    void userProfile();
    void input(int id);
    void output(int y);
    void Invoutput(int y);
//    void income();
    ////////////////////////////////////////////////
    int getID() const;
    const char *getUsername() const;
    const char *getPassword() const;
    const char * getGuestname() const;
    void setID(int id);
    void setGuestname(const char *name);
    void setUsername(const char *name);

//    double totalIncome();

    void setAllTotal(double allTotal);
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double MgUserPayment::loginHour = 0;
double MgUserPayment::loginMn = 0;
double MgUserPayment::logoutHour = 0;
double MgUserPayment::logoutMn = 0;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char * MgUserPayment::getGuestname() const 
{
    return guestName;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::update()
{
    H::foreColor(4); H::gotoxy(96, 36);
    H::inputAll(password, sizeof(password));

    H::foreColor(4); H::gotoxy(116, 36);
    cout << (time / 60);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setnTime(double time)
{
    this->time += (time * 60);
    remainTime += (time * 60);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setRemainTime(double time)
{
    remainTime = time;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double MgUserPayment::getLoginHour()
{
    return loginHour;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setLoginHour(double hour)
{
    loginHour = hour;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double MgUserPayment::getRemainTime()
{
	return remainTime;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double MgUserPayment::getLoginMn()
{
    return loginMn;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setLoginMn(double minute)
{
    loginMn = minute;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double MgUserPayment::getLogoutHour()
{
    return logoutHour;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setLogoutHour(double hour)
{
    logoutHour = hour;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double MgUserPayment::getLogoutMn()
{
    return logoutMn;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setLogoutMn(double minute)
{
    logoutMn = minute;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setBuyingTime(double hours)
{
    buyedTime += hours;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setTime(double hours)
{
    time += hours;
    remainTime = time;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double MgUserPayment::getBuyedTime()
{
    return buyedTime;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double MgUserPayment::getTime()
{
    return time;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setGuestname(const char *name)
{
    strcpy(guestName, name);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setUsername(const char *name)
{
    strcpy(username, name);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::input(int id)
{
    char times[6];

    H::setcolor(135);
    H::gotoxy(65, 25);
    H::inputAll(password, sizeof(password));

    H::setcolor(135);
    H::gotoxy(65, 29);
    H::inputNumber(times, sizeof(times));

    time = atoi(times) * 60;
    H::gotoxy(65, 33);
    H::foreColor(135);
    cout << fixed << setprecision(0) << atoi(times) * 5000 << " KHR";
    remainTime = time;
    muId = id;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int MgUserPayment::getID() const
{
    return muId;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char *MgUserPayment::getUsername() const
{
    return username;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char *MgUserPayment::getPassword() const
{
    return password;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setID(int id)
{
    muId = id;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::setAllTotal(double allTotal)
{
    this->allTotal = allTotal;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::output(int y)
{
    H::foreColor(7);
    H::gotoxy(20, 14 + y);
    cout << left << setw(12) << muId << setw(16) << guestName << setw(24) << username << setw(20) << password
         << setw(15) << fixed << setprecision(0) << time / 60 << setw(21) << remainTime / 60 << (time/60) * 5000 << " KHR";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::Invoutput(int y)
{
	H::gotoxy(21, 14 + y);
    H::foreColor(7);
    cout << left << "IVU" << setw(7) << muId << setw(20) << guestName
         << setw(25) << "" << setw(20) << " " << setw(20) << time / 60 << (time/60) * 5000 << " KHR";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MgUserPayment::userProfile()
{
    H::setcolor(236); H::gotoxy(77, 14);
    cout << guestName;
    H::setcolor(236); H::gotoxy(77, 15);
    cout << username;
    H::setcolor(236); H::gotoxy(77, 16);
    cout << password;
    H::setcolor(236); H::gotoxy(71, 32);
    cout << "BLT " << muId;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif