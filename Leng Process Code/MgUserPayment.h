#ifndef __MG_USER_PAYMENT_H__
#define __MG_USER_PAYMENT_H__

#include "Food.h"
#include "Game.h"
#include "MgUserInfo.h"

class MgUserPayment : public FoodnDrink, public Game, public MgUserInfo{
	public:
		void viewAll();
};

void MgUserPayment::viewAll()
{
	cout << left << setw(10) << muId << setw(25) << guestName << setw(25) << username << setw(25) << password << setw(8) << time << setw(25) << fdName << setw(8) << fdPrice << setw(8) << fdQty << endl;
}

#endif