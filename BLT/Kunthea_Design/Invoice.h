#ifndef __INVOICE_H__
#define __INVOICE_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::Invoice::Invoice_Design()
{
    H::drawBoxDoubleLine(50,5,55,30,3);
	H::drawBoxSingleLine(52,19,51,15,3);
	H::drawBoxSingleLine(54,20,47,1,3);
	H::drawBoxSingleLine(54,32,47,1,3);
	//drawBoxSingleLine(54,23,42,10,3);
	H::HLine(52,12,51,3,220);
	H::HLine(52,17,51,3,220);
	
	H::gotoxy(54,14); cout<<"Invoice No: 01";
	H::gotoxy(85,14); cout<<"Date: 27.05.2024";
	
	H::gotoxy(54,16); cout<<"Cashier   : Thea";
	H::gotoxy(85,16); cout<<"Time: 10:34:42PM";
	
	H::gotoxy(60,21); cout<<"No.";
	H::gotoxy(70,21); cout<<"Time";
	H::gotoxy(90,21); cout<<"Total";
	H::gotoxy(80,21); cout<<"Price";
	H::gotoxy(55,33); cout<<"TOTAL: ";
	
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::Invoice::InvoiceTxt()
{
	H::gotoxy(60,6); cout<<R"(_________        ___.                 )";
	H::gotoxy(60,7); cout<<R"(\_   ___ \___.__.\_ |__   ___________ )";
	H::gotoxy(60,8); cout<<R"(/    \  \<   |  | | __ \_/ __ \_  __ \)";
	H::gotoxy(60,9); cout<<R"(\     \___\___  | | \_\ \  ___/|  | \/)";
	H::gotoxy(60,10);cout<<R"( \______  / ____| |___  /\___  >__|   )";
	H::gotoxy(60,11);cout<<R"(        \/\/          \/     \/       )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif