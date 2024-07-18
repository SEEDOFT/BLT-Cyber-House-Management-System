#ifndef __VIEWUSERDESIGN_H__
#define __VIEWUSERDESIGN_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "kuntheaDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewProfile::ViewProfileTxt()
{
    H::foreColor(3); H::gotoxy(41,1); cout<<R"(____   ____.__                __________                _____.__.__          )";
    H::foreColor(3); H::gotoxy(41,2); cout<<R"(\   \ /   /|__| ______  _  __ \______   \_______  _____/ ____\__|  |   ____  )";
    H::foreColor(3); H::gotoxy(41,3); cout<<R"( \   Y   / |  |/ __ \ \/ \/ /  |     ___/\_  __ \/  _ \   __\|  |  | _/ __ \ )";
    H::foreColor(4); H::gotoxy(41,4); cout<<R"(  \     /  |  \  ___/\     /   |    |     |  | \(  <_> )  |  |  |  |_\  ___/ )";
    H::foreColor(4); H::gotoxy(41,5); cout<<R"(   \___/   |__|\___  >\/\_/    |____|     |__|   \____/|__|  |__|____/\___  >)";
    H::foreColor(4); H::gotoxy(41,6); cout<<R"(                   \/                                                     \/ )";
    H::HLine(20,8,120,7,220);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ViewProfile::ViewProfile_Design()
{   
    H::drawBoxSingleLineWithBG(27,11,106,22,238);//background

    H::gotoxy(29,12); H::foreColor(224); cout<<R"(,--------------------------------------------------------------------++++----------------------------.)";H::foreColor(224); cout<<R"()";
    H::gotoxy(29,13); H::foreColor(224); cout<<R"(| ,-------------------.                                                                     )";H::foreColor(224); cout<<R"(`T$b. PL |)";
    H::gotoxy(29,14); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"(     ,_.----...    )";H::foreColor(224); cout<<R"(|      )";H::foreColor(233); cout<<R"(NAME        :                                                    )";H::foreColor(224); cout<<R"(`T$b.  |)";
    H::gotoxy(29,15); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"(  .''        ''\   )";H::foreColor(224); cout<<R"(|      )";H::foreColor(233); cout<<R"(USERNAME    :                                                      )";H::foreColor(224); cout<<R"(`T$b.|)";
    H::gotoxy(29,16); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"( ;      .-."""> \  )";H::foreColor(224); cout<<R"(|      )";H::foreColor(233); cout<<R"(PASSWROD    :                                                        )";H::foreColor(224); cout<<R"(`T$l)";
    H::gotoxy(29,17); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"(:    /;' ;'   ;  ] )";H::foreColor(224); cout<<R"(|                                                                             )";H::foreColor(224); cout<<R"(`l)";
    H::gotoxy(29,18); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"(;  ;"    '     \ ; )";H::foreColor(224); cout<<R"(|                                                                              )";H::foreColor(224); cout<<R"(|)";
    H::gotoxy(29,19); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"( ';  ____-____   ; )";H::foreColor(224); cout<<R"(|      )";H::foreColor(233); cout<<R"(MEMBER TYPE :      )";H::foreColor(236); cout<<R"(VIP                                                  )";H::foreColor(224); cout<<R"(|)";
    H::gotoxy(29,20); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"( (\-:###/7\###;-/) )";H::foreColor(224); cout<<R"(|      )";H::foreColor(233); cout<<R"(MEMBER SINCE:                                                           )";H::foreColor(224); cout<<R"(|)";
    H::gotoxy(29,21); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"(  ;  ""'/_ '""  ;  )";H::foreColor(224); cout<<R"(|                                                                              )";H::foreColor(224); cout<<R"(|)";
    H::gotoxy(29,22); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"(   ;           ;   )";H::foreColor(224); cout<<R"(|                                                                              )";H::foreColor(224); cout<<R"(|)";
    H::gotoxy(29,23); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"(   :    ---    ;   )";H::foreColor(224); cout<<R"(|      )";H::foreColor(233); cout<<R"(ADRESS      :      )";H::foreColor(236); cout<<R"(ANT TECHNOLOGY CENTER                                )";H::foreColor(224); cout<<R"(|)";
    H::gotoxy(29,24); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"(    ';   "   ;'    )";H::foreColor(224); cout<<R"(|      )";H::foreColor(233); cout<<R"(EMAIL       :      )";H::foreColor(236); cout<<R"(bltCyberHouse@yahoo.com                              )";H::foreColor(224); cout<<R"(|)";
    H::gotoxy(29,25); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"(,######.....######,)";H::foreColor(224); cout<<R"(|                                                                              )";H::foreColor(224); cout<<R"(|)";
    H::gotoxy(29,26); H::foreColor(224); cout<<R"(| |)";H::foreColor(233); cout<<R"(   ,,,"-...-" ,,,  )";H::foreColor(224); cout<<R"(|                                                                              )";H::foreColor(224); cout<<R"(|)";
    H::gotoxy(29,27); H::foreColor(224); cout<<R"(| '-------------------'                                                                              |)";
    H::gotoxy(29,28); H::foreColor(224); cout<<R"(|  )";H::foreColor(228); cout<<R"(   /)       /                                                                                    )";H::foreColor(224); cout<<R"( |)";
    H::gotoxy(29,29); H::foreColor(224); cout<<R"(|  )";H::foreColor(228); cout<<R"(  /   / /  /--  _                                                                                )";H::foreColor(224); cout<<R"( |)";
    H::gotoxy(29,30); H::foreColor(224); cout<<R"(|  )";H::foreColor(228); cout<<R"(ox__.(_/(_/ \_.(-'                                                                               )";H::foreColor(224); cout<<R"( |)";
    H::gotoxy(29,31); H::foreColor(224); cout<<R"(|-----------------------------------+----------------------------+-----------------------------------|)";
    H::gotoxy(29,32); H::foreColor(224); cout<<R"(| )";H::foreColor(233); cout<<R"(MEMBER INFORMATION                )";H::foreColor(224); cout<<R"( | )";H::foreColor(233); cout<<R"(NO:                       )";H::foreColor(224); cout<<R"(|                                   |)";
    H::gotoxy(29,33); H::foreColor(224); cout<<R"('-----------------------------------^----------------------------^-----------------------------------')";

    H::HLine(55,13,66,239,220);
    H::HLine(55,17,66,239,220);
    H::HLine(55,21,66,239,220);
    H::HLine(55,25,66,239,220);
    
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif