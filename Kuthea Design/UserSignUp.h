#ifndef __USERSIGNUP_H__
#define __USERSIGNUP_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void THEA::UserSignUp::SignUpTxt(){
    H::foreColor(3); H::gotoxy(40,1); cout<<R"( ____ ___                       _________.__                 ____ ___         )";
    H::foreColor(3); H::gotoxy(40,2); cout<<R"(|    |   \______ ___________   /   _____/|__| ____   ____   |    |   \______  )";
    H::foreColor(3); H::gotoxy(40,3); cout<<R"(|    |   /  ___// __ \_  __ \  \_____  \ |  |/ ___\ /    \  |    |   /\____ \ )";
    H::foreColor(4); H::gotoxy(40,4); cout<<R"(|    |  /\___ \\  ___/|  | \/  /        \|  / /_/  >   |  \ |    |  / |  |_> >)";
    H::foreColor(4); H::gotoxy(40,5); cout<<R"(|______//____  >\___  >__|    /_______  /|__\___  /|___|  / |______/  |   __/ )";
    H::foreColor(4); H::gotoxy(40,6); cout<<R"(             \/     \/                \/   /_____/      \/            |__|    )";

    H::HLine(30,8,100,7,196);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void THEA::UserSignUp::SignUp_Design(){
    H::drawBoxDoubleLineWithBG(30,10,100,1,179);
    H::drawBoxDoubleLineWithBG(35,13,90,25,196);
    H::drawBoxDoubleLineWithBG(30,38,100,1,179);

    //box label
    H::drawBoxDoubleLineWithBG(63,14,35,1,135);
    H::drawBoxDoubleLineWithBG(63,18,35,1,135);
    H::drawBoxDoubleLineWithBG(63,22,35,1,135);
    H::drawBoxDoubleLineWithBG(63,26,35,1,135);
    H::drawBoxDoubleLineWithBG(63,30,35,1,135);
    H::drawBoxDoubleLineWithBG(63,34,35,1,135);

    //label
    H::gotoxy(64,14); H::foreColor(135); cout<<"ID";
    H::gotoxy(64,18); H::foreColor(135); cout<<"NAME";
    H::gotoxy(64,22); H::foreColor(135); cout<<"USERNAME";
    H::gotoxy(64,26); H::foreColor(135); cout<<"PASSWORD";
    H::gotoxy(64,30); H::foreColor(135); cout<<"TIME";
    H::gotoxy(64,34); H::foreColor(135); cout<<"PRICE";

    H::gotoxy(55,11); H::foreColor(183); cout<<"===========>\3\3\3SIGN UP USER ACCOUNT\3\3\3<===========";
    H::gotoxy(55,38); H::foreColor(183); cout<<"===========>\3\3\3PLEASE FILL THE INFO\3\3\3<===========";

    H::VLine(42,14,20,199,219);
    H::VLine(47,14,20,199,219);
    H::VLine(52,14,20,199,219);

    H::VLine(107,14,20,199,219);
    H::VLine(112,14,20,199,219);
    H::VLine(117,14,20,199,219);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif