#ifndef ___FOOD_H___
#define ___FOOD_H___

#include "HinsyOOPV2"

using namespace HinsyOOP;

class FoodnDrink {
    private:
        int fdId;
    protected:
        char fdName[20];
        char fdPrice[5];
        char fdQty[5];
    public:
        int getID();
        const char* getName() const;
        const char* getPrice() const;
        const char* getQty() const;
        void setQty(const char* qty);
        void input();
        void output();
        void setID(int id);
};

int FoodnDrink::getID() 
{
    return fdId;
}

void FoodnDrink::setID(int id) 
{
    fdId = id;
}

const char* FoodnDrink::getName() const 
{
    return fdName;
}

const char* FoodnDrink::getPrice() const 
{
    return fdPrice;
}

const char* FoodnDrink::getQty() const 
{
    return fdQty;
}

void FoodnDrink::setQty(const char * qty)
{
	strcpy(fdQty,qty);
}
void FoodnDrink::input() 
{
    cout << "Enter Food nor Drink name : "; H::inputAll(fdName, sizeof(fdName)); cout << endl;
    cout << "Enter Food nor Drink price : "; H::inputNumber(fdPrice, sizeof(fdPrice)); cout << endl;
    cout << "Enter Food nor Drink quantity : "; H::inputNumber(fdQty, sizeof(fdQty)); cout << endl;
}

void FoodnDrink::output() 
{
    cout << left << setw(10) << fdId << setw(25) << fdName << setw(10) << fdPrice << fdQty << endl;
}

#endif