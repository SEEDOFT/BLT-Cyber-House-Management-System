#ifndef ___FOOD_H___
#define ___FOOD_H___
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../../ANT_Header/HinsyOOPV2"
using namespace HinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class FoodnDrink
{
private:
    int fdId;

protected:
    char fdName[20];
    char fdPrice[5];
    char fdQty[13];

public:
    int getFndID() const;
    const char *getName() const;
    const char *getPrice() const;
    const char *getQty() const;
    void setQty(const char *qty);
    void update();
    void input();
    void output(int y);
    void setID(int id);
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int FoodnDrink::getFndID() const
{
    return fdId;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void FoodnDrink::setID(int id)
{
    fdId = id;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char *FoodnDrink::getName() const
{
    return fdName;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char *FoodnDrink::getPrice() const
{
    return fdPrice;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char *FoodnDrink::getQty() const
{
    return fdQty;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void FoodnDrink::setQty(const char *qty)
{
    strcpy(fdQty, qty);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void FoodnDrink::update()
{
    int tempQty;
    char tmpQty[13];
    H::foreColor(4);
    H::gotoxy(56, 36);
    H::inputAll(fdName, sizeof(fdName));
    H::gotoxy(88, 36);
    H::inputNumber(tmpQty, sizeof(tmpQty));
    H::gotoxy(120, 36);
    H::inputNumber(fdPrice, sizeof(fdPrice));

    tempQty = atoi(tmpQty);
    sprintf(fdQty, "%d", tempQty);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void FoodnDrink::input()
{
    int tempQty;
    char tmpQty[13];
    H::foreColor(176);
    H::gotoxy(99, 23);
    cout << ": ";
    H::inputAll(fdName, sizeof(fdName));
    H::foreColor(176);
    H::gotoxy(99, 27);
    cout << ": ";
    H::inputNumber(tmpQty, sizeof(tmpQty));
    H::foreColor(176);
    H::gotoxy(99, 31);
    cout << ": ";
    H::inputNumber(fdPrice, sizeof(fdPrice));
    tempQty = atoi(tmpQty);
    sprintf(fdQty, "%d", tempQty);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void FoodnDrink::output(int y)
{
    double price = atof(getPrice());

    if (strcmp(fdQty, "0") == 0)
    {
        H::setcolor(4);
        H::gotoxy(61, 25);
        strcpy(fdQty, "OUT OF STOCK");
    }
    H::setcolor(7);
    H::gotoxy(35, 14 + y);
    cout << left << setw(21) << fdId
         << setw(32) << fdName << setw(32) << fdQty << fixed << setprecision(2)
         << "$ " << price;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif