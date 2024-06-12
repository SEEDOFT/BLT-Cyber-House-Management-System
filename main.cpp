#include"designConsole.h"
int main()
{
    system("MODE CON COLS=160 LINES=40");
    H::setFont(20,700);

    Design::InterfaceDesign();
    Design::login_design();
    Design::AdminMenuDesign();

    getch();return 0;
}