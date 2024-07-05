#ifndef _________DesignConsole____________
#define _________DesignConsole____________
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"../ANT_Header/HinsyOOPV2"
using namespace HinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class Design{
    protected:
        static const int x;
        static const int y;
    public:
        static void tp(int colorCode,int width,int height);
        static void outline();
        static void charLoop(int characters, int xAxis, int yAxis, int color, const char* text, int DelayTime);
        static void loginMsg(int opt);

        static void interface_design();

        static void Admin_User_ClsBox(int num);
        
        static void login_design();
        static void loginAs_Admin_UserTxt(int choice);//user and Admin
        static void AdminMenuDesign();
        static void admin_design();

        static void UserMenuDesign();

};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const int Design::x = 10;
const int Design::y = 5;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::outline()
{
    H::drawBoxSingleLine(2,0,156,38,3);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::Admin_User_ClsBox(int num)
{
    if(num == 1)
    {
        for(int i = 0 ; i < 15 ; i ++)
        {
            tp(238,x+81+i,y+10);cout<<" ";H::delay(1);//cls left to right
            tp(238,x+81+i,y+11);cout<<" ";H::delay(1);//cls left to right
            tp(238,x+81+i,y+12);cout<<" ";H::delay(1);//cls left to right


            tp(238,x+109-i,y+10);cout<<" ";H::delay(1);//right to left
            tp(238,x+109-i,y+11);cout<<" ";H::delay(1);//right to left
            tp(238,x+109-i,y+12);cout<<" ";H::delay(1);//right to left
        }
    }
    if(num == 2)
    {
        for(int i = 0 ; i < 15 ; i ++)
        {
            tp(238,x+81+i,y+14);cout<<" ";H::delay(1);//cls left to right
            tp(238,x+81+i,y+15);cout<<" ";H::delay(1);//cls left to right
            tp(238,x+81+i,y+16);cout<<" ";H::delay(1);//cls left to right


            tp(238,x+109-i,y+14);cout<<" ";H::delay(1);//right to left
            tp(238,x+109-i,y+15);cout<<" ";H::delay(1);//right to left
            tp(238,x+109-i,y+16);cout<<" ";H::delay(1);//right to left
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::charLoop(int characters, int xAxis, int yAxis, int color, const char* text, int DelayTime)
{
    H::gotoxy(xAxis, yAxis);H::setcolor(color);
    for(int i = 0 ; i < characters ; i ++)
    {
        cout<<text[i];H::delay(DelayTime);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::tp(int colorCode, int width, int height)
{
    H::setcolor(colorCode);H::gotoxy(width,height);
}
void Design::loginMsg(int opt)
{
    int color = 137 ;
    if(opt == 1)
    {
        while(!kbhit())
        {
            H::setcolor(140);H::gotoxy(x+22,y+23);cout<<"Incorrect ";H::setcolor(color);cout<<"Username ";H::setcolor(140);cout<<"or ";H::setcolor(color);cout<<"Password";
            H::setcolor(140);H::gotoxy(x+25,y+25);cout<<"Press any ";H::setcolor(color);cout<<"[key]";H::setcolor(140);cout<<" to continue";

            H::delay(999);
            
            color ++ ;

            if( color > 142 ) color = 137;
        }
    }
    else if(opt == 2)
    {
        int i = 1;
        while(!kbhit())
        {
            H::setcolor(4);H::gotoxy(x+38,y+29);cout<<"Press any ";H::setcolor(i);cout<<"[key]";H::setcolor(4);cout<<" to input again or ";H::setcolor(i);cout<<"[ESC]";H::setcolor(4);cout<<" to choose option again";H::delay(999);
            i++;
            if(i > 15 ) i = 1;
        }
    }
    
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::interface_design()
{
    H::setConsoleTitle(TEXT("BLT Cyber House Management System"));

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::login_design()
{
    H::setConsoleTitle(TEXT("LOG IN PANEL"));

    H::drawBoxSingleLineWithBG(x+12, y+1, 114, 25, 145);
    H::drawBoxSingleLineWithBG(x+14, y+2, 50, 23, 136);

    H::setcolor(135); 
    H::gotoxy(x+17, y+12); cout << "USERNAME";
    H::drawBoxDoubleLineWithBG(x+18, y+13, 42, 1,247);
    H::setcolor(135); 
    H::gotoxy(x+17, y+18); cout << "PASSWORD";
    H::drawBoxDoubleLineWithBG(x+18, y+19, 42, 1,247);

    H::drawBoxSingleLineWithBG(x + 68, y + 2, 56, 23, 230);

    tp(233,x+70,y+3);cout  << R"(  ________________________________________________)";
    tp(233,x+70,y+4);cout  << R"( /                                                \)";
    tp(233,x+70,y+5);cout  << R"(|    _________________________________________     |)";
    tp(233,x+70,y+6);cout  << R"(|   |                                         |    |)";
    tp(233,x+70,y+7);cout  << R"(|   |  C:\> Welcome to out Management system_ |    |)";
    tp(233,x+70,y+8);cout  << R"(|   |                                         |    |)";
    tp(233,x+70,y+9);cout  << R"(|   |                                         |    |)";
    tp(233,x+70,y+10);cout << R"(|   |                                         |    |)";
    tp(233,x+70,y+11);cout << R"(|   |                                         |    |)";
    tp(233,x+70,y+12);cout << R"(|   |                                         |    |)";
    tp(233,x+70,y+13);cout << R"(|   |                                         |    |)";
    tp(233,x+70,y+14);cout << R"(|   |                                         |    |)";
    tp(233,x+70,y+15);cout << R"(|   |                                         |    |)";
    tp(233,x+70,y+16);cout << R"(|   |                                         |    |)";
    tp(233,x+70,y+17);cout << R"(|   |                                         |    |)";
    tp(233,x+70,y+18);cout << R"(|   |                                         |    |)";
    tp(233,x+70,y+19);cout << R"(|   |_________________________________________|    |)";
    tp(233,x+70,y+20);cout << R"(|                                                  |)";
    tp(233,x+70,y+21);cout << R"( \________________________________________________/)";
    tp(233,x+70,y+22);cout << R"(        \_________________________________/)";

    H::setcolor(7);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::loginAs_Admin_UserTxt(int choice)
{
    if(choice == 2)
    {
        H::setcolor(135); 
        H::gotoxy(x+22, y+4); cout << R"( .     .   _____ .____  .___  )";
        H::gotoxy(x+22, y+5); cout << R"( /     /  (      /      /   \ )";
        H::gotoxy(x+22, y+6); cout << R"( |     |   `--.  |__.   |__-' )";
        H::gotoxy(x+22, y+7); cout << R"( |     |      |  |      |  \  )";
        H::gotoxy(x+22, y+8); cout << R"(  `._.'  \___.'  /----/ /   \ )";

    }
    if(choice == 1)
    {
        H::setcolor(135); 
        H::gotoxy(x+22, y+4); cout << R"(     .    .___   __   __ _ __    _)";
        H::gotoxy(x+22, y+5); cout << R"(    /|    /   `  |    |  | |\   | )";
        H::gotoxy(x+22, y+6); cout << R"(   /  \   |    | |\  /|  | | \  | )";
        H::gotoxy(x+22, y+7); cout << R"(  /---'\  |    | | \/ |  | |  \ | )";
        H::gotoxy(x+22, y+8); cout << R"(,'      \ /---/  /    /  / |   \| )";

    }

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AdminMenuDesign()
{
    H::setConsoleTitle(TEXT("ADMIN MENU"));


    tp(1,x+13,y-4);cout<<R"(      __       ________   ___      ___   __    _____  ___       ___      ___   _______  _____  ___   ____  ____  )";
    tp(1,x+13,y-3);cout<<R"(     /""\     |"      "\ |"  \    /"  | |" \  (\"   \|"  \     |"  \    /"  | /"     "|(\"   \|"  \ ("  _||_ " | )";
    tp(1,x+13,y-2);cout<<R"(    /    \    (.  ___  :) \   \  //   | ||  | |.\\   \    |     \   \  //   |(: ______)|.\\   \    ||   (  ) : | )";
    tp(1,x+13,y-1);cout<<R"(   /' /\  \   |: \   ) || /\\  \/.    | |:  | |: \.   \\  |     /\\  \/.    | \/    |  |: \.   \\  |(:  |  | . ) )";
    tp(1,x+13,y-0);cout<<R"(  //  __'  \  (| (___\ |||: \.        | |.  | |.  \    \. |    |: \.        | // ___)_ |.  \    \. | \\ \__/ //  )";
    tp(1,x+13,y+1);cout<<R"( /   /  \\  \ |:       :)|.  \    /:  | /\  |\|    \    \ |    |.  \    /:  |(:      "||    \    \ | /\\ __ //\  )";
    tp(1,x+13,y+2);cout<<R"(___/    \___)(________/ |___|\__/|___|(__\_|_)\___|\____\)    |___|\__/|___| \_______) \___|\____\)(__________) )";
                                                                                                                 


}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::admin_design()
{

    tp(2,x+55,y+3 );cout<<R"(                _________________                                            )";
    tp(2,x+55,y+4 );cout<<R"(               /                /|                                           )";
    tp(2,x+55,y+5 );cout<<R"(              /                / |                                           )";
    tp(2,x+55,y+6 );cout<<R"(             /________________/ /|                                           )";
    tp(2,x+55,y+7 );cout<<R"(          ###|      ____      |//|                                           )";
    tp(2,x+55,y+8 );cout<<R"(         #   |     /   /|     |/.|                                           )";
    tp(2,x+55,y+9 );cout<<R"(        #  __|___ /   /.|     |  |_______________                            )";
    tp(2,x+55,y+10);cout<<R"(       #  /      /   //||     |  /              /|                  ___      )";
    tp(2,x+55,y+11);cout<<R"(      #  /      /___// ||     | /              / |                 / \ \     )";
    tp(2,x+55,y+12);cout<<R"(      # /______/!   || ||_____|/              /  |                /   \ \    )";
    tp(2,x+55,y+13);cout<<R"(      #| . . .  !   || ||                    /  _________________/     \ \   )";
    tp(2,x+55,y+14);cout<<R"(      #|  . .   !   || //      ________     /  /\________________  {   /  }  )";
    tp(2,x+55,y+15);cout<<R"(      /|   .    !   ||//~~~~~~/   0000/    /  / / ______________  {   /  /   )";
    tp(2,x+55,y+16);cout<<R"(     / |        !   |'/      /9  0000/    /  / / /             / {   /  /    )";
    tp(2,x+55,y+17);cout<<R"(    / #\________!___|/      /9  0000/    /  / / /_____________/___  /  /     )";
    tp(2,x+55,y+18);cout<<R"(   / #     /_____\/        /9  0000/    /  / / /_  /\_____________\/  /      )";
    tp(2,x+55,y+19);cout<<R"(  / #                      ``^^^^^^    /   \ \ . ./ / ____________   /       )";
    tp(2,x+55,y+20);cout<<R"( +=#==================================/     \ \ ./ / /.  .  .  \ /  /        )";
    tp(2,x+55,y+21);cout<<R"( |#                                   |      \ \/ / /___________/  /         )";
    tp(2,x+55,y+22);cout<<R"( #                                    |_______\__/________________/          )";
    tp(2,x+55,y+23);cout<<R"( |                                    |               |  |  / /              )";
    tp(2,x+55,y+24);cout<<R"( |                                    |               |  | / /               )";
    tp(2,x+55,y+25);cout<<R"( |                                    |       ________|  |/ /________        )";
    tp(2,x+55,y+26);cout<<R"( |                                    |      /_______/    \_________/\       )";
    tp(2,x+55,y+27);cout<<R"( |                                    |     /        /  /           \ )      )";
    tp(2,x+55,y+28);cout<<R"( |                                    |    /OO^^^^^^/  / /^^^^^^^^^OO\)      )"; 
    tp(2,x+55,y+29);cout<<R"( |                                    |            /  / /                    )";
    tp(2,x+55,y+30);cout<<R"( |                                    |           /  / /                     )";
    tp(2,x+55,y+31);cout<<R"( |                                    |          /___\/                      )";
    tp(2,x+55,y+32);cout<<R"( |                                    |           oo                         )";
    tp(2,x+55,y+33);cout<<R"( |____________________________________|                                      )";

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                END OF DESIGN HEADER FILE
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif