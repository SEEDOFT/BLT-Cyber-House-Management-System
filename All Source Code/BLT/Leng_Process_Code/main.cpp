#include "File.h"

int main() 
{
    system("MODE CON COLS=160 LINES=40");
    H::setFont(20, 700);

    // Design::InterfaceDesign();
    // Design::login_design();
    // Design::AdminMenuDesign();

//	File::logTimeToFile();
/*	for(int i = 1; i < 4; i++)
	{
//		if(i == 2)
//		{
//			continue;
//		}
		File::insertFile(i);	
	}*/
//	for(int i = 1; i < 4; i++)
//	{
////		if(i == 2)
////		{
////			continue;
////		}
//		File::viewFile(i);
//	}
/*	for(int i = 1; i < 4; i++)
	{
//		if(i == 2)
//		{
//			continue;
//		}
		File::deleteFile(i);	
	}*/
//	File::viewFile(3);
	File::insertFile(3);
//	File::viewFile(3);
//    File::searchFile(1);
//	File::updateFile(1);
//	File::deleteFile(1);
//	File::user_login();
//	File::viewFile(3);
//	File::readLogin();
//	File::viewAllUserInvoice();
//	File::viewIncome();

    getch();
    return 0;
}