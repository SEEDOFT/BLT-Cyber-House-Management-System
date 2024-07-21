#ifndef __INVOICE__
#define __INVOICE__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "MgUserPayment.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class myInvoice {
	private:
		int id;
		char guestName[20] = "";
		char username[20] = "";
		
		char buyedFoodnDrink[20] = "\0";
	    char fndPrice[5] = "\0";
	    char fndQty[5] = "\0";
	    double totalFnD = 0;
	    
	    int time;
	    int buyedTime = 0;
	    
//	    static MgUserPayment mg;
	    
	    int rmTime = 0;
	public:
		void setRmTime(int rm);
		void setName(const char * name);
		void setUsername(const char * username);
		void setBuyedTime(int hours);
		void setFnd(const char *foodnDrink, const char *price, const char *quantity);
		const char * getName();
		const char * getUsername();
		int getBuyedTime();
		const char *getFoodnDrink() const;
	    const char *getPrice() const;
	    const char *getQty() const;
	    double getFndTotal() const;
	    
	    void viewAll(int y);
	    void income();
	    double totalIncome();
	    double totalPrice();
	    int getRmTime();
	    
	    void setTime(int time);
    	int getTime() const;
    	
    	void setId(int id);
    	int getId() const;
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//MgUserPayment myInvoice::mg;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void myInvoice::setRmTime(int rm)
{
	rmTime = rm;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void myInvoice::setName(const char * name)
{
	strcpy(this->guestName,name);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void myInvoice::setUsername(const char * username)
{
	strcpy(this->username,username);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char * myInvoice::getName()
{
	return guestName;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char * myInvoice::getUsername()
{
	return username;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int myInvoice::getBuyedTime()
{
	return buyedTime;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void myInvoice::setBuyedTime(int hours)
{
	buyedTime = hours;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void myInvoice::setFnd(const char *foodnDrink, const char *price, const char *quantity)
{
    strncpy(fndQty, quantity, sizeof(fndQty) - 1);
    strncpy(fndPrice, price, sizeof(fndPrice) - 1);
    strncpy(buyedFoodnDrink, foodnDrink, sizeof(buyedFoodnDrink) - 1);
    totalFnD = atoi(fndQty) * atof(fndPrice);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char *myInvoice::getFoodnDrink() const
{
    return buyedFoodnDrink;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char *myInvoice::getPrice() const
{
    return fndPrice;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char *myInvoice::getQty() const
{
    return fndQty;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double myInvoice::getFndTotal() const
{
    return totalFnD;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int myInvoice::getRmTime()
{
	return rmTime;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double myInvoice::totalIncome()
{
    return totalPrice() + (getFndTotal() * 4000);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void myInvoice::setTime(int t) 
{
    time = t;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int myInvoice::getTime() const 
{
    return time;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void myInvoice::setId(int id) 
{
    this->id = id;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int myInvoice::getId() const 
{
    return id;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void myInvoice::viewAll(int y)
{
	H::gotoxy(21, 14 + y);
    H::foreColor(7);
    cout << left << setw(10) << id << setw(20) << guestName
         << setw(25) << buyedFoodnDrink << setw(20) << getQty() << setw(20) << buyedTime << totalIncome() << " KHR";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//void MgUserPayment::income()
//{
//    cout << left << setw(10) << muId << setw(25) << guestName << setw(25) << username << setw(25) << password << setw(8) << time << totalPrice()
//         << setw(8) << "$" << setw(25) << buyedFoodnDrink << setw(8) << fndQty << setw(8) << getFndTotal() << totalIncome() << "$" << endl;
//}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
double myInvoice::totalPrice()
{
    return (atoi(fndQty) * atof(fndPrice) + (5000 * buyedTime));
}

#endif