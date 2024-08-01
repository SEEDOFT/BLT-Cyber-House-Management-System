#ifndef __USERSIGNUP_H__
#define __USERSIGNUP_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UserSignUp::SignUpTxt()
{
    Design::TxtOutline(4,-1,-9,1);
    H::foreColor(7); H::gotoxy(52,2); cout<<R"( __ _                                                  )";
    H::foreColor(7); H::gotoxy(52,3); cout<<R"(/ _(_) __ _ _ __    /\ /\ _ __    /\ /\  ___  ___ _ __ )";
    H::foreColor(1); H::gotoxy(52,4); cout<<R"(\ \| |/ _` | '_ \  / / \ \ '_ \  / / \ \/ __|/ _ \ '__|)";
    H::foreColor(7); H::gotoxy(52,5); cout<<R"(_\ \ | (_| | | | | \ \_/ / |_) | \ \_/ /\__ \  __/ |   )";
    H::foreColor(7); H::gotoxy(52,6); cout<<R"(\__/_|\__, |_| |_|  \___/| .__/   \___/ |___/\___|_|   )";
    H::foreColor(7); H::gotoxy(52,7); cout<<R"(      |___/              |_|                           )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UserSignUp::SignUp_Design()
{
    H::drawBoxDoubleLineWithBG(30,10,100,-1,25);
    H::drawBoxDoubleLineWithBG(35,11,90,23,196);
    H::drawBoxDoubleLineWithBG(30,36,100,-1,25);

    //box label
    H::drawBoxDoubleLineWithBG(63,12,35,1,135);
    H::drawBoxDoubleLineWithBG(63,16,35,1,135);
    H::drawBoxDoubleLineWithBG(63,20,35,1,135);
    H::drawBoxDoubleLineWithBG(63,24,35,1,135);
    H::drawBoxDoubleLineWithBG(63,28,35,1,135);
    H::drawBoxDoubleLineWithBG(63,32,35,1,135);

    H::gotoxy(53,10); H::foreColor(23); cout<<"===========>\3\3\3 SIGN UP USER ACCOUNT \3\3\3<===========";
    //label
    H::gotoxy(64,12); H::foreColor(135); cout<<"ID";
    H::gotoxy(64,16); H::foreColor(135); cout<<"NAME";
    H::gotoxy(64,20); H::foreColor(135); cout<<"USERNAME";
    H::gotoxy(64,24); H::foreColor(135); cout<<"PASSWORD";
    H::gotoxy(64,28); H::foreColor(135); cout<<"HOUR";
    H::gotoxy(64,32); H::foreColor(135); cout<<"TOTAL PRICE";

    H::gotoxy(53,36); H::foreColor(23); cout<<"===========>\3\3\3 PLEASE FILL THE INFO \3\3\3<===========";

    H::VLine(42,12,21,199,219);
    H::VLine(47,12,21,199,219);
    H::VLine(52,12,21,199,219);

    H::VLine(107,12,21,199,219);
    H::VLine(112,12,21,199,219);
    H::VLine(117,12,21,199,219);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif