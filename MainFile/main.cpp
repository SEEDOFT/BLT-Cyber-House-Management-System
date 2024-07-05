#include"../BLT_Process/BTL"
#include"../BLT_Process/programProcess.h"
using namespace BLT;

int main()
{
    system("MODE CON COLS=160 LINES=40");
    H::setFont(20,700);
    Process::DisableMaximizeButton();
    
    Process::Admin_And_User();
    

    return 0;
}