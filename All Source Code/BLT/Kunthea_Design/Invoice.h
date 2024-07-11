#ifndef __INVOICE_H__
#define __INVOICE_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::Invoice::Invoice_Design()
{
    H::drawBoxDoubleLine(52,5,55,30,3);
	H::drawBoxSingleLine(54,19,51,15,3);
	H::drawBoxSingleLine(56,20,47,1,3);
	H::drawBoxSingleLine(56,32,47,1,3);
	//drawBoxSingleLine(54,23,42,10,3);
	H::HLine(54,12,51,3,220);
	H::HLine(54,17,51,3,220);
	
	H::gotoxy(56,14); cout<<"Invoice No: 01";
	H::gotoxy(87,14); cout<<"Date: 27.05.2024";
	
	H::gotoxy(56,16); cout<<"Cashier   : Thea";
	H::gotoxy(87,16); cout<<"Time: 10:34:42PM";
	
	H::gotoxy(62,21); cout<<"No.";
	H::gotoxy(72,21); cout<<"Time";
	H::gotoxy(92,21); cout<<"Total";
	H::gotoxy(82,21); cout<<"Price";
	H::gotoxy(57,33); cout<<"TOTAL: ";
	
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::Invoice::InvoiceTxt()
{
	H::gotoxy(66,6); cout<<R"(__________.____  ___________)";
	H::gotoxy(66,7); cout<<R"(\______   \    | \__    ___/)";
	H::gotoxy(66,8); cout<<R"( |    |  _/    |   |    |   )";
	H::gotoxy(66,9); cout<<R"( |    |   \    |___|    |   )";
	H::gotoxy(66,10);cout<<R"( |______  /_______ \____|   )";
	H::gotoxy(66,11);cout<<R"(        \/        \/        )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif