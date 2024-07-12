#ifndef __USERSIGNUP_H__
#define __USERSIGNUP_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UserSignUp::SignUpTxt()
{
    H::foreColor(3); H::gotoxy(40,1); cout<<R"( ____ ___                       _________.__                 ____ ___         )";
    H::foreColor(3); H::gotoxy(40,2); cout<<R"(|    |   \______ ___________   /   _____/|__| ____   ____   |    |   \______  )";
    H::foreColor(3); H::gotoxy(40,3); cout<<R"(|    |   /  ___// __ \_  __ \  \_____  \ |  |/ ___\ /    \  |    |   /\____ \ )";
    H::foreColor(4); H::gotoxy(40,4); cout<<R"(|    |  /\___ \\  ___/|  | \/  /        \|  / /_/  >   |  \ |    |  / |  |_> >)";
    H::foreColor(4); H::gotoxy(40,5); cout<<R"(|______//____  >\___  >__|    /_______  /|__\___  /|___|  / |______/  |   __/ )";
    H::foreColor(4); H::gotoxy(40,6); cout<<R"(             \/     \/                \/   /_____/      \/            |__|    )";

    H::HLine(20,8,120,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::UserSignUp::SignUp_Design()
{
    H::drawBoxDoubleLineWithBG(30,10,100,-1,179);
    H::drawBoxDoubleLineWithBG(35,11,90,23,196);
    H::drawBoxDoubleLineWithBG(30,36,100,-1,179);

    //box label
    H::drawBoxDoubleLineWithBG(63,12,35,1,135);
    H::drawBoxDoubleLineWithBG(63,16,35,1,135);
    H::drawBoxDoubleLineWithBG(63,20,35,1,135);
    H::drawBoxDoubleLineWithBG(63,24,35,1,135);
    H::drawBoxDoubleLineWithBG(63,28,35,1,135);
    H::drawBoxDoubleLineWithBG(63,32,35,1,135);

    H::gotoxy(53,10); H::foreColor(183); cout<<"===========>\3\3\3 ";H::setcolor(176);cout<<" SIGN UP USER ACCOUNT ";H::setcolor(183);cout<<"\3\3\3<===========";
    //label
    H::gotoxy(64,12); H::foreColor(135); cout<<"ID";
    H::gotoxy(64,16); H::foreColor(135); cout<<"NAME";
    H::gotoxy(64,20); H::foreColor(135); cout<<"USERNAME";
    H::gotoxy(64,24); H::foreColor(135); cout<<"PASSWORD";
    H::gotoxy(64,28); H::foreColor(135); cout<<"HOUR";
    H::gotoxy(64,32); H::foreColor(135); cout<<"PRICE";

    H::gotoxy(53,36); H::foreColor(183); cout<<"===========>\3\3\3 ";H::setcolor(176);cout<<"PLEASE FILL THE INFO ";H::setcolor(183);cout<<"\3\3\3<===========";

    H::VLine(42,12,21,199,219);
    H::VLine(47,12,21,199,219);
    H::VLine(52,12,21,199,219);

    H::VLine(107,12,21,199,219);
    H::VLine(112,12,21,199,219);
    H::VLine(117,12,21,199,219);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif