#include"All Source Code/BLT/BLT_Process/BLT.h"
#include"All Source Code/BLT/BLT_Process/programProcess.h"
#include"All Source Code/BLT/Leng_Design/manage_user_info.h"
#include"All Source Code/BLT/Leng_Design/sub_manage_user_info.h"

using namespace BLT;

int main()
{
    system("MODE CON COLS=160 LINES=40");
    H::setFont(20,700);
    H::setcursor(0,0);
    Process::DisableMaximizeButton();
    
    // Process::Admin_Option();
    // Process::Admin_And_User();


    // Process::AdminProfileInfo();
    
    // Process::GamesLst();
    Process::FoodAndDrinkLst();
    // /**/Process::ManageUserPayment();
    // Process::ManageUserInfo();



    // LENG::manage_user_info();

   getch(); return 0;
}

