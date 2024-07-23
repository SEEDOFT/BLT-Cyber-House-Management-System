#ifndef __INVOICE_H__
#define __INVOICE_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::Invoice::Invoice_Design()
{
	H::setcolor(7);H::gotoxy(10,10);cout << R"(                               )";H::setcolor(255); cout << R"( ________________________________________________________________________________ )";
	H::setcolor(7);H::gotoxy(10,11);cout << R"(                               )";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(7);H::gotoxy(10,12);cout << R"(                    _.---------|.--.)";H::setcolor(255); cout << R"(                                                                            |)";
	H::setcolor(7);H::gotoxy(10,13);cout << R"(                 .-'  `       .'/  ``)";H::setcolor(255); cout << R"(                                                                           |)";
	H::setcolor(7);H::gotoxy(10,14);cout << R"(              .-'           .' |    /)";H::setcolor(255); cout << R"(|                                                                          |)";
	H::setcolor(7);H::gotoxy(10,15);cout << R"(           .-'         |   /   `.__//)";H::setcolor(255); cout << R"(                                                                           |)";
	H::setcolor(7);H::gotoxy(10,16);cout << R"(        .-'           _.--/        /)";H::setcolor(255); cout << R"(                                                                            |)";
	H::setcolor(7);H::gotoxy(10,17);cout << R"(       |        _  .-'   /        /)";H::setcolor(255); cout << R"(                                                                             |)";
	H::setcolor(7);H::gotoxy(10,18);cout << R"(       |     ._  \      /     `  /)";H::setcolor(255); cout << R"(                                                                              |)";
	H::setcolor(7);H::gotoxy(10,19);cout << R"(       |        ` .    /     `  /)";H::setcolor(255); cout << R"(                                                                               |)";
	H::setcolor(7);H::gotoxy(10,20);cout << R"(       |         \ \ '/        /)";H::setcolor(255); cout << R"(                                                                                |)";
	H::setcolor(7);H::gotoxy(10,21);cout << R"(       |        - \  /        /)";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(7);H::gotoxy(10,22);cout << R"(       |        '  .'        / )";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(7);H::gotoxy(10,23);cout << R"(       |          '         |.')";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(7);H::gotoxy(10,24);cout << R"(       |                    |  )";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(7);H::gotoxy(10,25);cout << R"(       |                    |  )";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(7);H::gotoxy(10,26);cout << R"(       |                    |.')";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(7);H::gotoxy(10,27);cout << R"(       |                    /  )";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(7);H::gotoxy(10,28);cout << R"(       |                   /   )";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(7);H::gotoxy(10,29);cout << R"(       |                  /    )";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(7);H::gotoxy(10,30);cout << R"(       )                 /|    )";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(4);H::gotoxy(10,31);cout << R"(    .A/)";H::setcolor(1); cout << R"(`-.             )";H::setcolor(7); cout << R"( / |    )";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(4);H::gotoxy(10,32);cout << R"(   AMMMA.)";H::setcolor(1); cout << R"( `-._        )";H::setcolor(7); cout << R"( / /     )";H::setcolor(255); cout << R"(|                                                                                |)";
	H::setcolor(4);H::gotoxy(10,33);cout << R"(  AMMMMMMMMA.)";H::setcolor(1); cout << R"( `-.     )";H::setcolor(7); cout << R"(/ /      )";H::setcolor(255); cout << R"(|________________________________________________________________________________|)";
	H::setcolor(4);H::gotoxy(10,34);cout << R"( AMMMMMMMMMMMMA.)";H::setcolor(1); cout << R"( `.   )";H::setcolor(7); cout << R"( /                                                                                         )";
	H::setcolor(4);H::gotoxy(10,35);cout << R"(AMMMMMMMMMMMMMMMMA.)";H::setcolor(1); cout << R"(`. )";H::setcolor(7); cout << R"(/                                                                                          )";
	H::setcolor(4);H::gotoxy(10,36);cout << R"(MMMMMMMMMMMMMMMMMMMA.)";H::setcolor(1); cout << R"(`.                                                                                          )";
	H::setcolor(4);H::gotoxy(10,37);cout << R"(MMMMMMMMMMMMMMMMMMMMMA.)";H::setcolor(1); cout << R"(`.                                                                                        )";

	H::HLine(50,11,66,248,196);
	H::setcolor(249);H::gotoxy(53,12);cout << R"(___   \ / _ ___ __ __   ___    __ _  _     _ ______ _    )";
	H::setcolor(249);H::gotoxy(53,13);cout << R"( | |\| V / \ | /  |_     | |\||_ / \|_)|V||_| |  | / \|\|)";
	H::setcolor(249);H::gotoxy(53,14);cout << R"(_|_| |   \_/_|_\__|__   _|_| ||  \_/| \| || | | _|_\_/| |)";
	H::HLine(50,15,66,248,196);

	H::setcolor(249);H::gotoxy(53,16); cout << "ID          : ";
	H::setcolor(249);H::gotoxy(53,17); cout << "NAME        : ";
	H::setcolor(249);H::gotoxy(53,18); cout << "USERNAME    : ";
	H::setcolor(249);H::gotoxy(53,19); cout << "ISSUE DATE  : ";
	H::HLine(50,20,66,248,196);

	H::setcolor(249);H::gotoxy(53,21); cout << "FOOD OR DRINK";
	H::setcolor(249);H::gotoxy(83,21); cout << "QTY";
	H::setcolor(249);H::gotoxy(103,21); cout << "ADDED HOURS";
	H::HLine(50,22,66,248,196);

	H::HLine(50,29,66,248,196);
	H::setcolor(249);H::gotoxy(53,30); cout << "ASSIGNED BY CASHIER : ";
	H::HLine(50,31,66,248,196);

	H::setcolor(249);H::gotoxy(53,32); cout << "TOTAL PRICE ";
	H::setcolor(249);H::gotoxy(83,32); cout << "USD : ";
	H::setcolor(249);H::gotoxy(103,32); cout << "KHR : ";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::Invoice::InvoiceTxt()
{
	H::setcolor(3); H::gotoxy(41,1); cout <<  R"(   _____            _________                         .___.__                )";
	H::setcolor(3); H::gotoxy(41,2); cout <<  R"(  /     \ ___.__.  /   _____/_____   ____   ____    __| _/|__| ____    ____  )";
	H::setcolor(3); H::gotoxy(41,3); cout <<  R"( /  \ /  <   |  |  \_____  \\____ \_/ __ \ /    \  / __ | |  |/    \  / ___\ )";
	H::setcolor(4); H::gotoxy(41,4); cout <<  R"(/    Y    \___  |  /        \  |_> >  ___/|   |  \/ /_/ | |  |   |  \/ /_/  >)";
	H::setcolor(4); H::gotoxy(41,5); cout <<  R"(\____|__  / ____| /_______  /   __/ \___  >___|  /\____ | |__|___|  /\___  / )";
	H::setcolor(4); H::gotoxy(41,6); cout <<  R"(        \/\/              \/|__|        \/     \/      \/         \//_____/  )";
	H::HLine(20,7,120,7,220);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif