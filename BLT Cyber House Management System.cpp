#include "Header Files/BLT_Program_Process/Admin_Process_Code/programProcess.h"

int main()
{
    system("MODE CON COLS=160 LINES=40");
    H::setFont(20, 700);
    H::setcursor(0, 0);
    Process::DisableMaximizeButton();
    // Process::DisableCloseButton();

    Process::BLT_Cyber_House_Management_System();
    // Process::Admin_And_User();

    // File::userSubMenu("a","a");
    // File::buyFood("a","a");  
    // File::buyMoreTime("a","a");  8
    // File::invoice("a","a");

    
    getch(); return 0;
}