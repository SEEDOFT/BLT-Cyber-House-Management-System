#include "All Source Code/BLT/BLT_Process/BLT.h"
#include "All Source Code/BLT/BLT_Process/programProcess.h"
#include "All Source Code/BLT/Leng_Process_Code/File.h"

using namespace BLT;

int main()
{
    system("MODE CON COLS=160 LINES=40");
    H::setFont(20, 700);
    H::setcursor(0, 0);
    Process::DisableMaximizeButton();
    
    Process::Admin_And_User();
    // Process::AboutUs_Design();
    // Process::A_LetterFromUs();

    return 0;
}