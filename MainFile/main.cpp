#include"../Kuthea Design/kuntheaDesign.h"
#include"../BLT_Process/programProcess.h"

int main()
{
    system("MODE CON COLS=160 LINES=40");
    H::setFont(20,700);
   
    // Kunthea::Main();
    Process::login_design();

    return 0;
}