#include"All Source Code/BLT/BLT_Process/BLT.h"
#include"All Source Code/BLT/BLT_Process/programProcess.h"

using namespace BLT;

int main()
{

    
    system("MODE CON COLS=160 LINES=40");
    H::setFont(20,700);
    Process::DisableMaximizeButton();
    
    // Process::Admin_And_User();
    // Process::Admin_Option();
    // B::DeleteUserInfoTxt();
    // B::DeleteUser_Design();

    Process::FoodAndDrinkLst();
    

    return 0;
}

