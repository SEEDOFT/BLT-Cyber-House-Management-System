#ifndef ___FOOD_H___
#define ___FOOD_H___
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"../ANT_Header/HinsyOOPV2"
using namespace HinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class FoodnDrink {
    private:
        int fdId;
    protected:
        char fdName[20];
        char fdPrice[5];
        char fdQty[13];
    public:
        int getFndID();
        const char* getName() const;
        const char* getPrice() const;
        const char* getQty() const;
        void setQty(const char* qty);
        void update();
        void input();
        void output(int y);
        void setID(int id);
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int FoodnDrink::getFndID() 
{
    return fdId;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void FoodnDrink::setID(int id) 
{
    fdId = id;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char* FoodnDrink::getName() const 
{
    return fdName;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char* FoodnDrink::getPrice() const 
{
    return fdPrice;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char* FoodnDrink::getQty() const 
{
    return fdQty;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void FoodnDrink::setQty(const char * qty)
{
	strcpy(fdQty,qty);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void FoodnDrink::update()
{
    H::gotoxy(35,36); H::foreColor(4); cout << "\t\t\t"; H::inputAll(fdName, sizeof(fdName)); cout << "\t\t\t\t"; H::inputNumber(fdPrice, sizeof(fdPrice));
    cout << "\t\t\t\t";H::inputNumber(fdQty, sizeof(fdQty));
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void FoodnDrink::input() 
{
    H::foreColor(176); H::gotoxy(99,23); cout<<": ";H::inputAll(fdName, sizeof(fdName));
    H::foreColor(176); H::gotoxy(99,27); cout<<": "; H::inputNumber(fdPrice, sizeof(fdPrice));
    H::foreColor(176); H::gotoxy(99,31); cout<<": "; H::inputNumber(fdQty, sizeof(fdQty));
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void FoodnDrink::output(int y) 
{
    double price = atof (getPrice());

	if(strlen(fdQty) == 0)
	{
		H::setcolor(4);H::gotoxy(61,25); strcpy(fdQty, "...Food and Drink are out of stock...");
	}
    H::setcolor(1);H::gotoxy(35,14+y);cout << fdId << "\t\t\t"<< fdName << "\t\t\t\t" << fdQty << "\t\t\t\t$"  << fixed << setprecision(2) << price ;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif