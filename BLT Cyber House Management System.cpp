#include "Header Files/BLT_Program_Process/Admin_Process_Code/programProcess.h"

int main()
{
    system("MODE CON COLS=160 LINES=40");
    H::setFont(20, 700);
    H::setcursor(0, 0);
    Process::DisableMaximizeButton();
    Process::DisableCloseButton();
    
    Process::Admin_And_User();  

    return 0;
}