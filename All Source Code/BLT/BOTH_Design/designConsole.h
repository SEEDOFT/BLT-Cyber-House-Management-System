#ifndef _________DesignConsole____________
#define _________DesignConsole____________
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"../ANT_Header/HinsyOOPV2"
#include"../Leng_Design/manage_user_info.h"
#include"../Leng_Design/sub_manage_user_info.h"
using namespace HinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class Design: public LENG
{

    protected:

        static const int x;
        static const int y;

    public:

        static void tp(int colorCode,int width,int height);
        static void outline();
        static void charLoop(int characters, int xAxis, int yAxis, int color, const char* text, int DelayTime);
        static void loginMsg(int opt);
        static void message(int n, int width, int height);

        static void interface_design();

        static void Admin_User_ClsBox(int num);
        /*
                    Admin MENU Design
        */
        static void Login_Design();
        static void LoginAs_Admin_UserTxt(int choice);//user and Admin
        static void AdminMenuTxt();
        static void AdminMenuBoxes();
        static void AdminMenu_Design();
        static void DesktopImg();
        /*
                    Admin Info Design
        */
        static void AdminProfileInfoTxt();
        static void AdminProfileInfo_Design();
        static void AdminProfileInfo_Animation();
        /*
                    About Us Design
        */
        static void AboutUsTxt();
        static void AboutUs_Design();
        /*
                    A letter from Us Design
        */
        static void A_Letter_from_UsTxt();
        static void A_Letter_from_Us_Design();
        static void A_Letter_from_Us_Animation();
        /*
                    User MENU Design
        */
        static void UserMenuTxt();
        //********//
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
void Design::message(int n, int width, int height)
{
    
    if ( n == 1)
    {
        int color = 176 ;
        while(!kbhit())
        {
            H::gotoxy(57+width,height); H::foreColor(185); cout<<"Press ";H::foreColor(color); cout<<"[ENTER]";
            H::foreColor(185); cout<<" To Continues Or ";H::foreColor(color); 
            cout<<"[ESC]";H::foreColor(185); cout<<" To Go Back";H::delay(999);
            color ++ ; 
            if(color > 191) color = 176 ;
        }
    }
    if ( n == 2)
    {
        int color = 1 ;
        while(!kbhit())
        {
            H::gotoxy(69+width,height); H::foreColor(1); cout<<"Press ";;H::foreColor(color); 
            cout<<"[ESC]";H::foreColor(1); cout<<" To Go Back";H::delay(999);
            color ++ ; 
            if(color > 15) color = 1 ;
        }
    }
    if ( n == 3)
    {
        int color = 1 ;
        while(!kbhit())
        {
            H::gotoxy(57+width,height); H::foreColor(1); cout<<"Press ";H::foreColor(color); cout<<"[ENTER]";
            H::foreColor(1); cout<<" To Continues Or ";H::foreColor(color); 
            cout<<"[ESC]";H::foreColor(1); cout<<" To Go Back";H::delay(999);
            color ++ ; 
            if(color > 15) color = 1 ;
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::Admin_User_ClsBox(int num)
{
    if(num == 1)
    {
        for(int i = 0 ; i < 15 ; i ++)
        {
            tp(238,x+81+i,y+15);cout<<" ";H::delay(1);//cls left to right
            tp(238,x+81+i,y+16);cout<<" ";H::delay(1);//cls left to right
            tp(238,x+81+i,y+17);cout<<" ";H::delay(1);//cls left to right


            tp(238,x+109-i,y+15);cout<<" ";H::delay(1);//right to left
            tp(238,x+109-i,y+16);cout<<" ";H::delay(1);//right to left
            tp(238,x+109-i,y+17);cout<<" ";H::delay(1);//right to left
        }
    }
    if(num == 2)
    {
        for(int i = 0 ; i < 15 ; i ++)
        {
            tp(238,x+81+i,y+19);cout<<" ";H::delay(1);//cls left to right
            tp(238,x+81+i,y+20);cout<<" ";H::delay(1);//cls left to right
            tp(238,x+81+i,y+21);cout<<" ";H::delay(1);//cls left to right


            tp(238,x+109-i,y+19);cout<<" ";H::delay(1);//right to left
            tp(238,x+109-i,y+20);cout<<" ";H::delay(1);//right to left
            tp(238,x+109-i,y+21);cout<<" ";H::delay(1);//right to left
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
            H::setcolor(140);H::gotoxy(x+23,y+26);cout<<"Incorrect ";
            H::setcolor(color);cout<<"Username ";H::setcolor(140);cout<<"or ";H::setcolor(color);cout<<"Password";
            H::setcolor(140);H::gotoxy(x+24,y+28);cout<<"Press any ";
            H::setcolor(color);cout<<"[key]";H::setcolor(140);cout<<" to continue";

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
            H::setcolor(4);H::gotoxy(x+38,y+32);cout<<"Press any ";
            H::setcolor(i);cout<<"[key]";H::setcolor(4);cout<<" to input again or ";
            H::setcolor(i);cout<<"[ESC]";H::setcolor(4);cout<<" to choose option again";H::delay(999);
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
void Design::Login_Design()
{
    H::setConsoleTitle(TEXT("LOG IN PANEL"));
    int n_x = 10 , n_y = 8;

    tp(3,n_x+27,1);cout<<R"(  _________.__                    .___             __________                        )";
    tp(3,n_x+27,2);cout<<R"( /   _____/|__| ____   ____       |   | ____       \______   \_____     ____   ____  )";
    tp(3,n_x+27,3);cout<<R"( \_____  \ |  |/ ___\ /    \      |   |/    \       |     ___/\__  \   / ___\_/ __ \ )";
    tp(4,n_x+27,4);cout<<R"( /        \|  / /_/  >   |  \     |   |   |  \      |    |     / __ \_/ /_/  >  ___/ )";
    tp(4,n_x+27,5);cout<<R"(/_______  /|__\___  /|___|  /     |___|___|  /      |____|    (____  /\___  / \___  >)";
    tp(4,n_x+27,6);cout<<R"(        \/   /_____/      \/               \/                      \//_____/      \/ )";
    H::HLine(20,7,120,7,220);

    H::drawBoxSingleLineWithBG(n_x+13, n_y+1, 114, 25, 145);
    H::drawBoxSingleLineWithBG(n_x+15, n_y+2, 50, 23, 136);

    H::setcolor(135); 
    H::gotoxy(n_x+18, n_y+12); cout << "USERNAME";
    H::drawBoxDoubleLineWithBG(n_x+19, n_y+13, 42, 1,247);
    H::setcolor(135); 
    H::gotoxy(n_x+18, n_y+18); cout << "PASSWORD";
    H::drawBoxDoubleLineWithBG(n_x+19, n_y+19, 42, 1,247);

    H::drawBoxSingleLineWithBG(n_x + 69, n_y + 2, 56, 23, 230);

    tp(233,n_x+71,n_y+4);cout  << R"(  ________________________________________________)";
    tp(233,n_x+71,n_y+5);cout  << R"( /                                                \)";
    tp(233,n_x+71,n_y+6);cout  << R"(|    _________________________________________     |)";
    tp(233,n_x+71,n_y+7);cout  << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+8);cout  << R"(|   |  C:\>    Welcome to BLT Cyber House_    |    |)";
    tp(233,n_x+71,n_y+9);cout  << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+10);cout << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+11);cout << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+12);cout << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+13);cout << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+14);cout << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+15);cout << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+16);cout << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+17);cout << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+18);cout << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+19);cout << R"(|   |                                         |    |)";
    tp(233,n_x+71,n_y+20);cout << R"(|   |_________________________________________|    |)";
    tp(233,n_x+71,n_y+21);cout << R"(|                                                  |)";
    tp(233,n_x+71,n_y+22);cout << R"( \________________________________________________/)";
    tp(233,n_x+71,n_y+23);cout << R"(        \_________________________________/)";


    tp(4,n_x+4,38);cout<<"To move between options, use ";H::setcolor(1);cout<<"[UP]";
    H::setcolor(4);cout<<" and ";H::setcolor(1);cout<<"[DOWN]";H::setcolor(4);cout<<" arrow key and press ";
    H::setcolor(1);cout<<"[ENTER]";
    H::setcolor(4);cout<<" key to select, or to leave the program, press ";H::setcolor(1);cout<<"[BACKSPACE]";

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AdminMenuBoxes()
{
    H::drawBoxSingleLineWithBG(x+10,y+8,30,1,153);     
    H::drawBoxSingleLineWithBG(x+15,y+12,30,1,153);      
    H::drawBoxSingleLineWithBG(x+10,y+16,30,1,153);
    H::drawBoxSingleLineWithBG(x+15,y+20,30,1,153);
    H::drawBoxSingleLineWithBG(x+10,y+24,30,1,153);
    H::drawBoxSingleLineWithBG(x+15,y+28,30,1,153);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::LoginAs_Admin_UserTxt(int choice)
{
    int y = 8;
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
void Design::AdminMenu_Design()
{
    //first
    for(int i = 1 ; i <= 50 ; i ++)
    {
        //top
        tp(191,x+69-i,y-4);cout<<char(204);H::HLine(x+70-i,y-4,1,191,205);
        H::HLine(x+70,y-4,i,191,205);H::setcolor(191);cout<<char(185);
        //bottom
        tp(191,x+69-i,y+3);cout<<char(204);H::HLine(x+70-i,y+3,1,191,205);
        H::HLine(x+70,y+3,i,191,205);H::setcolor(191);cout<<char(185);
    }
    //second
    for(int i = 1 ; i <= 40 ; i ++)
    {
        //top
        tp(71,x+69-i,y-4);cout<<char(204);H::HLine(x+70-i,y-4,1,71,205);
        H::HLine(x+70,y-4,i,71,205);H::setcolor(71);cout<<char(185);
        //bottom
        tp(71,x+69-i,y+3);cout<<char(204);H::HLine(x+70-i,y+3,1,71,205);
        H::HLine(x+70,y+3,i,71,205);H::setcolor(71);cout<<char(185);   
    }
    //third
    for(int i = 1 ; i <= 28 ; i ++)
    {
        //top
        tp(191,x+69-i,y-4);cout<<char(204);H::HLine(x+70-i,y-4,1,191,205);
        H::HLine(x+70,y-4,i,191,205);H::setcolor(191);cout<<char(185);
        //bottom
        tp(191,x+69-i,y+3);cout<<char(204);H::HLine(x+70-i,y+3,1,191,205);
        H::HLine(x+70,y+3,i,191,205);H::setcolor(191);cout<<char(185);   
    }
    //fourth
    for(int i = 1 ; i <= 17 ; i ++)
    {
        //top
        tp(103,x+69-i,y-4);cout<<char(204);H::HLine(x+70-i,y-4,1,103,205);
        H::HLine(x+70,y-4,i,103,205);H::setcolor(103);cout<<char(185);
        //bottom
        tp(103,x+69-i,y+3);cout<<char(204);H::HLine(x+70-i,y+3,1,103,205);
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
    tp(4,x+33,y+1);cout<<R"(\____|__  /\____ |__|_|  /__|___|  /       \____|__  /\___  >___|  /____/ )";
    tp(4,x+33,y+2);cout<<R"(        \/      \/     \/        \/                \/     \/     \/       )";
    
    H::VLine(x+18,y-5,8,3,219);
    H::VLine(x+17,y-4,6,4,219);
    H::VLine(x+16 ,y-5,8,3,219);
    H::VLine(x+15 ,y-4,6,4,219);
    H::VLine(x+14 ,y-5,8,3,219);
    H::VLine(x+13 ,y-4,6,4,219);

    H::VLine(x+128,y-4,6,4,219);
    H::VLine(x+127,y-5,8,4,219);
    H::VLine(x+126,y-4,6,4,219);
    H::VLine(x+125,y-5,8,3,219);
    H::VLine(x+124,y-4,6,3,219);
    H::VLine(x+123,y-5,8,3,219);

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
void Design::AdminProfileInfoTxt()
{
    tp(3,x+15,y-3);cout<<R"(   _____       .___      .__         __________                _____.__.__           .___        _____       )";
    tp(3,x+15,y-2);cout<<R"(  /  _  \    __| _/_____ |__| ____   \______   \_______  _____/ ____\__|  |   ____   |   | _____/ ____\____  )";
    tp(3,x+15,y-1);cout<<R"( /  /_\  \  / __ |/     \|  |/    \   |     ___/\_  __ \/  _ \   __\|  |  | _/ __ \  |   |/    \   __\/  _ \ )";
    tp(4,x+15,y-0);cout<<R"(/    |    \/ /_/ |  Y Y  \  |   |  \  |    |     |  | \(  <_> )  |  |  |  |_\  ___/  |   |   |  \  | (  <_> ))";
    tp(4,x+15,y+1);cout<<R"(\____|__  /\____ |__|_|  /__|___|  /  |____|     |__|   \____/|__|  |__|____/\___  > |___|___|  /__|  \____/ )";
    tp(4,x+15,y+2);cout<<R"(        \/      \/     \/        \/                                              \/           \/             )";

    H::HLine(x+5,y+3,130,7,220);

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AdminProfileInfo_Design()
{
    // H::drawBoxDoubleLine(x+5,y+5,82,14,7);

    tp(4,x+10,y+7 );cout<<R"(     )";H::setcolor(8);cout<<R"(_H_)";H::setcolor(4);cout<<R"(              )";H::setcolor(8);cout<<R"(_H_)";H::setcolor(4);cout<<R"(               )";H::setcolor(8);cout<<R"(_H_)";H::setcolor(4);cout<<R"(              )";H::setcolor(2);cout<<R"(    o88o.    )";
    tp(4,x+10,y+8 );cout<<R"(   .=)";H::setcolor(8);cout<<R"(|_|)";H::setcolor(4);cout<<R"(===========v==)";H::setcolor(8);cout<<R"(|_|)";H::setcolor(4);cout<<R"(============v==)";H::setcolor(8);cout<<R"(|_|)";H::setcolor(4);cout<<R"(===========.  )";H::setcolor(2);cout<<R"(  (8%8898),  )";
    tp(4,x+10,y+9 );cout<<R"(  /________________|_________________|_________________\ )";H::setcolor(2);cout<<R"(,(8888%8688) )";
    tp(4,x+10,y+10);cout<<R"( /_________________|_________________|__________________))";H::setcolor(2);cout<<R"((898%88688HJW))";
    tp(7,x+10,y+11);cout<<R"( |=|_|_|_|  =|_|_|=|X|)^^^(|X|=|/ \|=||_|_|_|=| ||_|_|=|`)";H::setcolor(2);cout<<R"((86888%8%9b) )";
    tp(7,x+10,y+12);cout<<R"( |=|_|_|_|== |_|_|=|X|\___/|X|=||_||=||_____|=|_||_|_|=|___)";H::setcolor(2);cout<<R"((88%%8888) )";
    tp(7,x+10,y+13);cout<<R"( |=_________= ,-. =|""""""""""="""""=|=_________== == =|_______)";H::setcolor(8);cout<<R"(\//`'  )";
    tp(7,x+10,y+14);cout<<R"( |=|__|__|_| //O\\=|X|"""""|X|=//"\\=|=|_|_|_|_| .---.=|.=====.)";H::setcolor(8);cout<<R"(||     )";
    tp(7,x+10,y+15);cout<<R"( |=|__|__|_|=|| ||=|X|_____|X|=|| ||=|=|_______|=||"||=||=====|)";H::setcolor(8);cout<<R"(||     )";
    tp(7,x+10,y+16);cout<<R"( |___d%8b____||_||_|=_________=||_||_|__d8%o%8b_=|j_j|=|j==o==j)";H::setcolor(8);cout<<R"(|\)";H::setcolor(7);cout<<R"(---  )";

    for(int i = 1 ; i <= 41 ; i ++)
    {
        //top
        H::HLine(x+5,y+5,i,7,205);
        H::HLine(x+87-i,y+5,1,7,205);

        //bot
        H::HLine(x+5,y+20,i,7,205);
        H::HLine(x+87-i,y+20,1,7,205);
    }
    //connect ascii code
    H::gotoxy(x+5,y+5);cout<<char(201);//left to down
    H::gotoxy(x+5,y+20);cout<<char(200);//down to right
    H::gotoxy(x+87,y+5);cout<<char(187);//right to down
    H::gotoxy(x+87,y+20);cout<<char(188);//down to left
    for(int i = 1 ; i <= 7 ; i ++)
    {
        //left
        H::VLine(x+6,y+5,i,7,186);H::delay(10);
        H::VLine(x+6,y+19-i,1,7,186);H::delay(10);

        //right
        H::VLine(x+88,y+5,i,7,186);H::delay(10);
        H::VLine(x+88,y+19-i,1,7,186);H::delay(10);
    }

    tp(1,x+33,y+18);cout<<"BLT Cyber House ";H::setcolor(4);cout<<"(Concept)";

    
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AboutUsTxt()
{
    tp(3,x+43,y-3);cout<<R"(   _____ ___.                  __     ____ ___       )";
    tp(3,x+43,y-2);cout<<R"(  /  _  \\_ |__   ____  __ ___/  |_  |    |   \______)";
    tp(3,x+43,y-1);cout<<R"( /  /_\  \| __ \ /  _ \|  |  \   __\ |    |   /  ___/)";
    tp(4,x+43,y-0);cout<<R"(/    |    \ \_\ (  <_> )  |  /|  |   |    |  /\___ \ )";
    tp(4,x+43,y+1);cout<<R"(\____|__  /___  /\____/|____/ |__|   |______//____  >)";
    tp(4,x+43,y+2);cout<<R"(        \/    \/                                  \/ )";
    H::HLine(x+20,y+3,100,7,220);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AboutUs_Design()
{

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::A_Letter_from_Us_Animation()
{
    for(int i = 1 ; i <= 60 ; i ++)
    {
        //top
        H::HLine(x+10,y+5,i,7,205);
        H::HLine(x+130-i,y+5,1,7,205);

        //bot
        H::HLine(x+10,y+19,i,7,205);
        H::HLine(x+130-i,y+19,1,7,205);
    }
    //connect ascii code
    H::gotoxy(x+10,y+5);cout<<char(201);//left to down
    H::gotoxy(x+10,y+19);cout<<char(200);//down to right
    H::gotoxy(x+130,y+5);cout<<char(187);//right to down
    H::gotoxy(x+130,y+19);cout<<char(188);//down to left
    for(int i = 1 ; i <= 7 ; i ++)
    {
        //left
        H::VLine(x+11,y+5,i,7,186);H::delay(10);
        H::VLine(x+11,y+18-i,1,7,186);H::delay(10);

        //right
        H::VLine(x+131,y+5,i,7,186);H::delay(10);
        H::VLine(x+131,y+18-i,1,7,186);H::delay(10);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AdminProfileInfo_Animation()
{
    int i = 1;
    int j = 1;
    while(!kbhit())
    {
        //top and bot
        H::HLine(x+87,y+10,i,j,220);

        //left and right
        H::VLine(x+87,y+10,60-i,j,219);
        i++; 
        j++;
        if(i>=40) 
        {
            i = 1;
        }
        if(j>=15)
        {
            j=1;
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::A_Letter_from_UsTxt()
{
    tp(3,x+20,y-3);cout<<R"(   _____    .____           __    __                   _____                         ____ ___       )";
    tp(3,x+20,y-2);cout<<R"(  /  _  \   |    |    _____/  |__/  |_  ___________  _/ ____\______  ____   _____   |    |   \______)";
    tp(3,x+20,y-1);cout<<R"( /  /_\  \  |    |  _/ __ \   __\   __\/ __ \_  __ \ \   __\\_  __ \/  _ \ /     \  |    |   /  ___/)";
    tp(4,x+20,y-0);cout<<R"(/    |    \ |    |__\  ___/|  |  |  | \  ___/|  | \/  |  |   |  | \(  <_> )  Y Y  \ |    |  /\___ \ )";
    tp(4,x+20,y+1);cout<<R"(\____|__  / |_______ \___  >__|  |__|  \___  >__|     |__|   |__|   \____/|__|_|  / |______//____  >)";
    tp(4,x+20,y+2);cout<<R"(        \/          \/   \/                \/                                   \/               \/ )";
    H::HLine(20,8,120,7,220);
     
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::A_Letter_from_Us_Design()
{
    char one[]="We're the scholarship students at ";
    char two[]="[1]ANT Technology Training Center";
    char three[]=", specialize in Mobile Application.";
    char fourth[]="Study For 11 Months From 19 February 2024 To 20 December 2024.";
    char fifth[]="Thanks to the generous support of the ";
    char sixth[]="[2]Ministry of Post and Telecommunication.";
    char seventh[]="This opportunity is allowing us to develop valuable skills in mobile app development and pursue ";
    char eighth[]="exciting careers in the tech industry.";

    charLoop(sizeof(one), x+19, y+8, 3, one, 10);charLoop(sizeof(two), x+53, y+8, 4, two, 10);charLoop(sizeof(three), x+86, y+8, 3, three, 10);//first line
    charLoop(sizeof(fourth), x+39, y+10, 71, fourth, 10);//Second line
    charLoop(sizeof(fifth), x+30, y+12, 3, fifth, 10);charLoop(sizeof(sixth), x+68, y+12, 4, sixth, 10);//Third
    charLoop(sizeof(seventh), x+22, y+14, 23, seventh, 10);//Fourth
    charLoop(sizeof(eighth), x+51, y+16, 23, eighth, 10);//Fifth
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::UserMenuTxt()
{               
    tp(3,x+39,y-4);cout<<R"( ____ ___                        _____                       )";
    tp(3,x+39,y-3);cout<<R"(|    |   \______ ___________    /     \   ____   ____  __ __ )";
    tp(3,x+39,y-2);cout<<R"(|    |   /  ___// __ \_  __ \  /  \ /  \_/ __ \ /    \|  |  \)";
    tp(4,x+39,y-1);cout<<R"(|    |  /\___ \\  ___/|  | \/ /    Y    \  ___/|   |  \  |  /)";
    tp(4,x+39,y-0);cout<<R"(|______//____  >\___  >__|    \____|__  /\___  >___|  /____/ )";
    tp(4,x+39,y+1);cout<<R"(             \/     \/                \/     \/     \/       )";
    H::HLine(20,y+2,120,7,220);
             
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                END OF DESIGN HEADER FILE
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif