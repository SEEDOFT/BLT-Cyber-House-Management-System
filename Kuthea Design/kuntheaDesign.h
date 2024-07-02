#ifndef ______ALL_Design______
#define ______ALL_Design______

//Kunthea Design
#include"UpdateDesign.h"
#include"SearchDesign.h"
#include"InputDesign.h"
#include"GameMenuForm.h"
#include"FoodMenuForm.h"
#include"DeleteDesign.h"
#include"ViewDesign.h"

class Kunthea
{
    public:
        static void Main();
};
void Kunthea::Main()
{
    // UpdateDesign::updateAscii();
    // UpdateDesign::updateDesign();

    SearchDesign::searchAscii();
    SearchDesign::searchDesign();

    // InputDesign::Design();

    // GameMenu::ascii();
    // GameMenu::header();
    // GameMenu::AssciiBox();
    // GameMenu::Boxoption();

    // Menu::ascii();
    // Menu::header();

    // DeleteDesign::deleteAscii();
    // DeleteDesign::deleteDesign();

    // ViewDesign::viewAscii();
    // ViewDesign::viewDesignBox();
}



#endif