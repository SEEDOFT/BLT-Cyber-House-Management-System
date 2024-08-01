#ifndef __BUYHOUR_H__
#define __BUYHOUR_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::BuyHour::buyHourTxt()
{
    Design::TxtOutline(17,-1,8,1);
    H::foreColor(7); H::gotoxy(65,2); cout<<R"(   ___                                                                  )";
    H::foreColor(7); H::gotoxy(65,3); cout<<R"(  / __\_   _ _   _    /\/\   ___  _ __ ___    /\  /\___  _   _ _ __ ___ )";
    H::foreColor(1); H::gotoxy(65,4); cout<<R"( /__\// | | | | | |  /    \ / _ \| '__/ _ \  / /_/ / _ \| | | | '__/ __|)";
    H::foreColor(7); H::gotoxy(65,5); cout<<R"(/ \/  \ |_| | |_| | / /\/\ \ (_) | | |  __/ / __  / (_) | |_| | |  \__ \)";
    H::foreColor(7); H::gotoxy(65,6); cout<<R"(\_____/\__,_|\__, | \/    \/\___/|_|  \___| \/ /_/ \___/ \__,_|_|  |___/)";
    H::foreColor(7); H::gotoxy(65,7); cout<<R"(             |___/                                                      )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::BuyHour::buyHour_Design()
{
    H::drawBoxDoubleLine(40,11,116,19,6);//box
    H::HLine(40,12,116,2,205);//topLN
    H::HLine(45,13,106,3,205);//topLN
    H::HLine(50,14,96,4,205);//topLN

    H::gotoxy(14,12); H::foreColor(6); cout<<R"(       _.-"""-._)";
    H::gotoxy(14,13); H::foreColor(6); cout<<R"(  _.-""         ""-._)";
    H::gotoxy(14,14); H::foreColor(6); cout<<R"(:"-.               .-":)";
    H::gotoxy(14,15); H::foreColor(6); cout<<R"('"-_"-._       _.-".-"')";
    H::gotoxy(14,16); H::foreColor(6); cout<<R"(  ||T+._"-._.-"_.-"|)";
    H::gotoxy(14,17); H::foreColor(6); cout<<R"(  ||:   "-.|.-" : ||)";
    H::gotoxy(14,18); H::foreColor(6); cout<<R"(  || .   ' :|  .  ||)";
    H::gotoxy(14,19); H::foreColor(6); cout<<R"(  ||  .   '|| .   ||)";
    H::gotoxy(14,20); H::foreColor(6); cout<<R"(  ||   ';.:||'    ||)";
    H::gotoxy(14,21); H::foreColor(6); cout<<R"(  ||    '::||     ||)";
    H::gotoxy(14,22); H::foreColor(6); cout<<R"(  ||      )||     ||)";
    H::gotoxy(14,23); H::foreColor(6); cout<<R"(  ||     ':||     ||)";
    H::gotoxy(14,24); H::foreColor(6); cout<<R"(  ||   .' :||.    ||)";
    H::gotoxy(14,25); H::foreColor(6); cout<<R"(  ||  ' . :||.'   ||)";
    H::gotoxy(14,26); H::foreColor(6); cout<<R"(  ||.'-  .:|| -'._||)";
    H::gotoxy(14,27); H::foreColor(6); cout<<R"(.-'": .::::||:. : "'-. )";
    H::gotoxy(14,28); H::foreColor(6); cout<<R"(:"-.'::::::||::'  .-": )";
    H::gotoxy(14,29); H::foreColor(6); cout<<R"( "-."-._"--:"  .-".-"  )";
    H::gotoxy(14,30); H::foreColor(6); cout<<R"(    "-._"-._.-".-"   )";
    H::gotoxy(14,31); H::foreColor(6); cout<<R"(        "-.|.-" )";

    H::drawBoxSingleLineWithBG(77,18,20,1,153);
    H::setcolor(151);H::gotoxy(79,19);
    cout << "Number of Hours  :";

    H::drawBoxSingleLineWithBG(77,22,20,1,153);
    H::setcolor(151);H::gotoxy(79,23);
    cout << "Debit or Credit  :";

    H::HLine(40,30,116,4,205);//botLN
    H::HLine(45,29,106,3,205);//botLN
    H::HLine(50,28,96,2,205);//botLN
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::BuyHour::buyHour_Animation(int color)
{
    for(int i = 1 ; i <= color ; i ++)
    {
        //@@@@@@@@@@@@@@@@@@@
        H::VLine(41,20,1,i+1,222);//r
        H::VLine(42,20,1,i,221);//l

        H::VLine(43,19,3,i+1,222);//r
        H::VLine(44,19,3,i,221);//l

        H::VLine(45,18,5,i+1,222);//r
        H::VLine(46,18,5,i,221);//l

        H::VLine(47,17,7,i+1,222);//r
        H::VLine(48,17,7,i,221);//l

        H::VLine(49,16,9,i+1,222);//r
        H::VLine(50,16,9,i,221);//l

        H::VLine(51,15,11,i+1,222);//r
        H::VLine(52,15,11,i,221);//l

        H::VLine(53,16,9,i+1,222);//r
        H::VLine(54,16,9,i,221);//l

        H::VLine(55,17,7,i+1,222);//r
        H::VLine(56,17,7,i,221);//l

        H::VLine(57,18,5,i+1,222);//r
        H::VLine(58,18,5,i,221);//l

        H::VLine(59,18,5,i+1,222);//r
        H::VLine(60,18,5,i,221);//l

        H::VLine(61,17,7,i+1,222);//r
        H::VLine(62,17,7,i,221);//l

        H::VLine(63,16,9,i+1,222);//r
        H::VLine(64,16,9,i,221);//l

        H::VLine(65,15,11,i+1,222);//r
        H::VLine(66,15,11,i,221);//l

        H::VLine(67,16,9,i+1,222);//r
        H::VLine(68,16,9,i,221);//l

        H::VLine(69,17,7,i+1,222);//r
        H::VLine(70,17,7,i,221);//l

        H::VLine(71,18,5,i+1,222);//r
        H::VLine(72,18,5,i,221);//l

        H::VLine(73,19,3,i+1,222);//r
        H::VLine(74,19,3,i,221);//l

        H::VLine(75,20,1,i+1,222);//r
        H::VLine(76,20,1,i,221);//l
    //@@@@@@@@@@@@@@@@@@@

    //@@@@@@@@@@@@@@@@@@@
        H::VLine(121,20,1,i,222);//r
        H::VLine(122,20,1,i+1,221);//l

        H::VLine(123,19,3,i,222);//r
        H::VLine(124,19,3,i+1,221);//l

        H::VLine(125,18,5,i,222);//r
        H::VLine(126,18,5,i+1,221);//l

        H::VLine(127,17,7,i,222);//r
        H::VLine(128,17,7,i+1,221);//l

        H::VLine(129,16,9,i,222);//r
        H::VLine(130,16,9,i+1,221);//l

        H::VLine(131,15,11,i,222);//r
        H::VLine(132,15,11,i+1,221);//l

        H::VLine(133,16,9,i,222);//r
        H::VLine(134,16,9,i+1,221);//l

        H::VLine(135,17,7,i,222);//r
        H::VLine(136,17,7,i+1,221);//l

        H::VLine(137,18,5,i,222);//r
        H::VLine(138,18,5,i+1,221);//l

        H::VLine(139,18,5,i,222);//r
        H::VLine(140,18,5,i+1,221);//l

        H::VLine(141,17,7,i,222);//r
        H::VLine(142,17,7,i+1,221);//l

        H::VLine(143,16,9,i,222);//r
        H::VLine(144,16,9,i+1,221);//l

        H::VLine(145,15,11,i,222);//r
        H::VLine(146,15,11,i+1,221);//l

        H::VLine(147,16,9,i,222);//r
        H::VLine(148,16,9,i+1,221);//l

        H::VLine(149,17,7,i,222);//r
        H::VLine(150,17,7,i+1,221);//l

        H::VLine(151,18,5,i,222);//r
        H::VLine(152,18,5,i+1,221);//l

        H::VLine(153,19,3,i,222);//r
        H::VLine(154,19,3,i+1,221);//l

        H::VLine(155,20,1,i,222);//r
        H::VLine(156,20,1,i+1,221);//l
        //@@@@@@@@@@@@@@@@@@@
        H::delay(100);
    }

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif