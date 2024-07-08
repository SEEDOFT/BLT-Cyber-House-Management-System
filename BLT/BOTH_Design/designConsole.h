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
        static void AdminMenuTxt();
        static void AdminMenu_Design();
        static void DesktopImg();

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

    H::HLine(x+17,y-4,31,6,236);//msg

    H::HLine(x+11,y-3,15,3,175);H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";//msg
    H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::HLine(x+36,y-3,16,3,174);//msg

    H::HLine(x+11,y-2,15,3,175);H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";//msg
    H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::HLine(x+36,y-2,16,3,174);//msg

    H::HLine(x+17,y-1,31,6,236);//msg
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    H::HLine(x+91,y-4,31,6,236);//msg

    H::HLine(x+87,y-3,15,3,175);H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";//msg
    H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::HLine(x+112,y-3,15,3,174);   //msg

    H::HLine(x+87,y-2,15,3,175);H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";//msg
    H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::setcolor(4);cout<<"\3";H::setcolor(7);cout<<"\4";H::HLine(x+112,y-2,15,3,174);//msg

    H::HLine(x+91,y-1,31,6,236);//msg

    tp(3,x+54,y-4);cout<<R"(   ______________  __  _____  __)";
    tp(4,x+54,y-3);cout<<R"(  / __/  _/ ___/ |/ / /  _/ |/ /)";
    tp(5,x+54,y-2);cout<<R"( _\ \_/ // (_ /    / _/ //    / )";
    tp(6,x+54,y-1);cout<<R"(/___/___/\___/_/|_/ /___/_/|_/  )";

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
    tp(233,x+70,y+7);cout  << R"(|   |  C:\>    Welcome to BLT Cyber House_    |    |)";
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


    tp(4,x+4,y+31);cout<<"To move between options, use ";H::setcolor(1);cout<<"[UP]";
    H::setcolor(4);cout<<" and ";H::setcolor(1);cout<<"[DOWN]";H::setcolor(4);cout<<" arrow key and press ";
    H::setcolor(1);cout<<"[ENTER]";H::setcolor(4);cout<<" key to select, or to leave the program, press ";H::setcolor(1);cout<<"[BACKSPACE]";

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
void Design::AdminMenu_Design()
{
    //first
    for(int i = 1 ; i <= 50 ; i ++)
    {
        //top
        tp(191,x+69-i,y-4);cout<<char(204);H::HLine(x+70-i,y-4,1,191,205);
        H::HLine(x+70,y-4,i,191,205);H::setcolor(191);cout<<char(185);
        //bottom
        tp(191,x+69-i,y+3);cout<<char(204);H::HLine(x+70-i,y+3,1,191,205);H::delay(1);
        H::HLine(x+70,y+3,i,191,205);H::setcolor(191);cout<<char(185);
    }
    //second
    for(int i = 1 ; i <= 40 ; i ++)
    {
        //top
        tp(71,x+69-i,y-4);cout<<char(204);H::HLine(x+70-i,y-4,1,71,205);
        H::HLine(x+70,y-4,i,71,205);H::setcolor(71);cout<<char(185);
        //bottom
        tp(71,x+69-i,y+3);cout<<char(204);H::HLine(x+70-i,y+3,1,71,205);H::delay(1);
        H::HLine(x+70,y+3,i,71,205);H::setcolor(71);cout<<char(185);   
    }
    //third
    for(int i = 1 ; i <= 28 ; i ++)
    {
        //top
        tp(191,x+69-i,y-4);cout<<char(204);H::HLine(x+70-i,y-4,1,191,205);
        H::HLine(x+70,y-4,i,191,205);H::setcolor(191);cout<<char(185);
        //bottom
        tp(191,x+69-i,y+3);cout<<char(204);H::HLine(x+70-i,y+3,1,191,205);H::delay(1);
        H::HLine(x+70,y+3,i,191,205);H::setcolor(191);cout<<char(185);   
    }
    //fourth
    for(int i = 1 ; i <= 17 ; i ++)
    {
        //top
        tp(103,x+69-i,y-4);cout<<char(204);H::HLine(x+70-i,y-4,1,103,205);
        H::HLine(x+70,y-4,i,103,205);H::setcolor(103);cout<<char(185);
        //bottom
        tp(103,x+69-i,y+3);cout<<char(204);H::HLine(x+70-i,y+3,1,103,205);H::delay(1);
        H::HLine(x+70,y+3,i,103,205);H::setcolor(103);cout<<char(185);   
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AdminMenuTxt()
{
    H::setConsoleTitle(TEXT("ADMIN MENU"));

    tp(3,x+33,y-3);cout<<R"(   _____       .___      .__                  _____                       )";
    tp(3,x+33,y-2);cout<<R"(  /  _  \    __| _/_____ |__| ____           /     \   ____   ____  __ __ )";
    tp(3,x+33,y-1);cout<<R"( /  /_\  \  / __ |/     \|  |/    \         /  \ /  \_/ __ \ /    \|  |  \)";
    tp(4,x+33,y-0);cout<<R"(/    |    \/ /_/ |  Y Y  \  |   |  \       /    Y    \  ___/|   |  \  |  /)";
    tp(5,x+33,y+1);cout<<R"(\____|__  /\____ |__|_|  /__|___|  /       \____|__  /\___  >___|  /____/ )";
    tp(6,x+33,y+2);cout<<R"(        \/      \/     \/        \/                \/     \/     \/       )";
    
    H::VLine(x+18,y-5,8,1,219);
    H::VLine(x+17,y-4,6,2,219);
    H::VLine(x+16 ,y-5,8,3,219);
    H::VLine(x+15 ,y-4,6,4,219);
    H::VLine(x+14 ,y-5,8,5,219);

    H::VLine(x+127,y-5,8,5,219);
    H::VLine(x+126,y-4,6,4,219);
    H::VLine(x+125,y-5,8,3,219);
    H::VLine(x+124,y-4,6,2,219);
    H::VLine(x+123,y-5,8,1,219);

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::DesktopImg()
{
    tp(2,x+70,y+4 );cout<<R"(               )";H::setcolor(3);cout<<R"( _________________  )";
    tp(2,x+70,y+5 );cout<<R"(               )";H::setcolor(3);cout<<R"(/                /| )";
    tp(2,x+70,y+6 );cout<<R"(              )";H::setcolor(3);cout<<R"(/                / | )";
    tp(2,x+70,y+7 );cout<<R"(             )";H::setcolor(3);cout<<R"(/________________/ /|                                           )";
    tp(2,x+70,y+8 );cout<<R"(          ###)";H::setcolor(3);cout<<R"(|      ____      |//|                                           )";
    tp(2,x+70,y+9 );cout<<R"(         #   )";H::setcolor(3);cout<<R"(|     /   /|     |/.|                                           )";
    tp(2,x+70,y+10);cout<<R"(        #  )";H::setcolor(3);cout<<R"(__|___ /   /.|     |  |)";H::setcolor(8);cout<<R"(_______________                            )";
    tp(2,x+70,y+11);cout<<R"(       #  )";H::setcolor(3);cout<<R"(/      /   //||     |  /             )";H::setcolor(8);cout<<R"( /|                 )";H::setcolor(6);cout<<R"( ___      )";
    tp(2,x+70,y+12);cout<<R"(      #  )";H::setcolor(3);cout<<R"(/      /___// ||     | /              )";H::setcolor(8);cout<<R"(/ |                 )";H::setcolor(6);cout<<R"(/ \ \     )";
    tp(2,x+70,y+13);cout<<R"(      # )";H::setcolor(3);cout<<R"(/______/!   || ||_____|/              )";H::setcolor(8);cout<<R"(/  |                )";H::setcolor(6);cout<<R"(/   \ \    )";
    tp(2,x+70,y+14);cout<<R"(      #)";H::setcolor(3);cout<<R"(| . . .  !   || ||                    )";H::setcolor(8);cout<<R"(/  )";H::setcolor(6);cout<<R"(_________________/     \ \   )";
    tp(2,x+70,y+15);cout<<R"(      #)";H::setcolor(3);cout<<R"(|  . .   !   || //      ________     )";H::setcolor(8);cout<<R"(/  )";H::setcolor(6);cout<<R"(/\________________  {   /  }  )";
    tp(8,x+70,y+16);cout<<R"(      /)";H::setcolor(3);cout<<R"(|   .    !   ||//~~~~~~/   0000/    )";H::setcolor(8);cout<<R"(/  )";H::setcolor(6);cout<<R"(/ / ______________  {   /  /   )";
    tp(8,x+70,y+17);cout<<R"(     / )";H::setcolor(3);cout<<R"(|        !   |'/      /9  0000/    )";H::setcolor(8);cout<<R"(/  )";H::setcolor(6);cout<<R"(/ / /             / {   /  /    )";
    tp(8,x+70,y+18);cout<<R"(    / )";H::setcolor(2);cout<<R"(#)";H::setcolor(3);cout<<R"(\________!___|/      /9  0000/    )";H::setcolor(8);cout<<R"(/  )";H::setcolor(6);cout<<R"(/ / /_____________/___  /  /     )";
    tp(8,x+70,y+19);cout<<R"(   / )";H::setcolor(2);cout<<R"(#)";H::setcolor(3);cout<<R"(     /_____\/        /9  0000/    )";H::setcolor(8);cout<<R"(/  )";H::setcolor(6);cout<<R"(/ / /_  /\_____________\/  /      )";
    tp(8,x+70,y+20);cout<<R"(  / )";H::setcolor(2);cout<<R"(#)";H::setcolor(3);cout<<R"(                      ``^^^^^^    )";H::setcolor(8);cout<<R"(/   )";H::setcolor(6);cout<<R"(\ \ . ./ / ____________   /       )";
    tp(8,x+70,y+21);cout<<R"( +=)";H::setcolor(2);cout<<R"(#)";H::setcolor(8);cout<<R"(==================================/     )";H::setcolor(6);cout<<R"(\ \ ./ / /.  .  .  \ /  /        )";
    tp(8,x+70,y+22);cout<<R"( |)";H::setcolor(2);cout<<R"(#                                   )";H::setcolor(8);cout<<R"(|      )";H::setcolor(6);cout<<R"(\ \/ / /___________/  /         )";
    tp(2,x+70,y+23);cout<<R"( #                                    )";H::setcolor(8);cout<<R"(|_______)";H::setcolor(6);cout<<R"(\__/________________/          )";
    tp(8,x+70,y+24);cout<<R"( |                                    |               )";H::setcolor(6);cout<<R"(|  |  / /              )";
    tp(8,x+70,y+25);cout<<R"( |                                    |               )";H::setcolor(6);cout<<R"(|  | / /               )";
    tp(8,x+70,y+26);cout<<R"( |                                    |       )";H::setcolor(6);cout<<R"(________|  |/ /________        )";
    tp(8,x+70,y+27);cout<<R"( |                                    |      )";H::setcolor(6);cout<<R"(/_______/    \_________/\       )";
    tp(8,x+70,y+28);cout<<R"( |                                    |     )";H::setcolor(6);cout<<R"(/        /  /           \ )      )";
    tp(8,x+70,y+29);cout<<R"( |                                    |    )";H::setcolor(6);cout<<R"(/)";H::setcolor(7);cout<<R"(OO)";H::setcolor(6);cout<<R"(^^^^^^/  / /^^^^^^^^^)";H::setcolor(7);cout<<R"(OO)";H::setcolor(6);cout<<R"(\)      )"; 
    tp(8,x+70,y+30);cout<<R"( |                                    |            )";H::setcolor(6);cout<<R"(/  / /                    )";
    tp(8,x+70,y+31);cout<<R"( |                                    |           )";H::setcolor(6);cout<<R"(/  / /                     )";
    tp(8,x+70,y+32);cout<<R"( |                                    |          )";H::setcolor(6);cout<<R"(/___\/                      )";
    tp(8,x+70,y+33);cout<<R"( |____________________________________|          )";H::setcolor(7);cout<<R"( oo                         )";

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                END OF DESIGN HEADER FILE
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif