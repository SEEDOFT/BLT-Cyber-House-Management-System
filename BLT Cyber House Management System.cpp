#include"All Source Code/BLT/BLT_Process/BLT.h"
#include"All Source Code/BLT/BLT_Process/programProcess.h"

using namespace BLT;

int main()
{

    
    system("MODE CON COLS=160 LINES=40");
    H::setFont(20,700);
    H::setcursor(0,0);
    Process::DisableMaximizeButton();
    
    // Process::Admin_And_User();
    // Process::Admin_Option();
    // B::DeleteUserInfoTxt();
    // B::DeleteUser_Design();
    
    // Process::FoodAndDrinkLst();

    // Process::AboutUsTxt();
    // Process::AboutUs_Design();

    // Process::A_Letter_from_UsTxt();
    // Process::A_Letter_from_Us_Animation();
    // Process::A_Letter_from_Us_Design();

    // Process::AdminProfileInfoTxt();
    // Process::AdminProfileInfo_Design();
    // Process::AdminProfileInfo_Animation();

    B::InputGameTxt();
    B::InputGame_Design();

   getch(); return 0;
}

