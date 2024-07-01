#ifndef _________DesignConsole____________
#define _________DesignConsole____________
#include<iostream>
#include"../ANT_Header/HinsyOOPV2"
using namespace std;
using namespace HinsyOOP;

class Design{
    private:
        static const int x = 10;
        static const int y = 5;
    public:
    //////////////////////////////////////////////////////////////
    //BOTH Design
        static void tp(int colorCode,int width,int height);
        static void InterfaceDesign();
        static void sub_interface();//clear box and animation to LOG IN Interface
        static void sub_interface2(int i);//Font
        
    //////////////////////////////////////////////////////////////
        static void AdminLogin(int cursor);//Admin account
        static void choiceBoxes();//Admin and User
    //Bun Leng
        static void login_design();
        static void sub_loginDesign(int choice);//user and Admin
    ///////////////////////////////////////////////////////////////
        static void AdminMenuDesign();
        static void sub_Admin();
        static void sub_Admin2(int choice);
        static void UserMenuDesign();

};
////////////////////////////////////////////////////////////////////////////////////////
void Design::tp(int colorCode, int width, int height)
{
    H::setcolor(colorCode);H::gotoxy(width,height);
}
////////////////////////////////////////////////////////////////////////////////////////
void Design::sub_interface2(int i)
{
    int both = 7, thea = 4, leng = 1, cyber = 3;

    tp(both,x+43-i,y-2);cout<<R"( ____ )";H::setcolor(leng);cout<<R"( __  )";H::setcolor(thea);cout<<R"( ____ )";H::setcolor(cyber);cout<<R"(    ___  _  _  ____  ____  ____   )";H::setcolor(6);cout<<R"( _   _  _____  __  __  ___  ____ )";
    tp(both,x+43-i,y-1);cout<<R"((  _ \)";H::setcolor(leng);cout<<R"((  ) )";H::setcolor(thea);cout<<R"((_  _))";H::setcolor(cyber);cout<<R"(   / __)( \/ )(  _ \( ___)(  _ \  )";H::setcolor(6);cout<<R"(( )_( )(  _  )(  )(  )/ __)( ___))";H::clearBox(x+128-i,y-1,1,1,7);
    tp(both,x+43-i,y  );cout<<R"( ) _ <)";H::setcolor(leng);cout<<R"( )(__ )";H::setcolor(thea);cout<<R"( )(  )";H::setcolor(cyber);cout<<R"(  ( (__  \  /  ) _ < )__)  )   /  )";H::setcolor(6);cout<<R"( ) _ (  )(_)(  )(__)( \__ \ )__) )";H::clearBox(x+128-i,y,1,1,7);
    tp(both,x+43-i,y+1);cout<<R"((____/)";H::setcolor(leng);cout<<R"((____))";H::setcolor(thea);cout<<R"((__) )";H::setcolor(cyber);cout<<R"(   \___) (__) (____/(____)(_)\_)  )";H::setcolor(6);cout<<R"((_) (_)(_____)(______)(___/(____))";H::clearBox(x+128-i,y+1,1,1,7);

    tp(3,x+36-i,y+3);cout<<R"( _  _   __   __ _   __    ___  ____  _  _  ____  __ _  ____    ____  _  _  ____  ____  ____  _  _ )";H::clearBox(x+135-i,y+3,1,1,7);
    tp(3,x+36-i,y+4);cout<<R"(( \/ ) / _\ (  ( \ / _\  / __)(  __)( \/ )(  __)(  ( \(_  _)  / ___)( \/ )/ ___)(_  _)(  __)( \/ ))";H::clearBox(x+135-i,y+4,i,1,7);
    tp(3,x+36-i,y+5);cout<<R"(/ \/ \/    \/    //    \( (_ \ ) _) / \/ \ ) _) /    /  )(    \___ \ )  / \___ \  )(   ) _) / \/ \)";H::clearBox(x+135-i,y+5,i,1,7);
    tp(3,x+36-i,y+6);cout<<R"(\_)(_/\_/\_/\_)__)\_/\_/ \___/(____)\_)(_/(____)\_)__) (__)   (____/(__/  (____/ (__) (____)\_)(_/)";H::clearBox(x+135-i,y+6,i,1,7);

    H::setcolor(7);
}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void Design::InterfaceDesign()
{
    //Available middle space : 120 spaces
    //Space around computer Lab : w = 62, h = 11
    H::setConsoleTitle(TEXT("BLT Cyber House Management System"));
    H::setcursor(0,0);
//BLUE LEFT BOX
    H::drawBoxSingleLineWithBG(x+5,y-1,28,30,153);
//Info
    H::setcolor(151);
    H::gotoxy(x+6,y);cout<<"Welcome to our";
    H::gotoxy(x+6,y+1);cout<<"internet cafe";
    H::gotoxy(x+6,y+2);cout<<"...BLT Cyber House...";
    H::gotoxy(x+6,y+3);cout<<"We open from";
    H::gotoxy(x+6,y+4);cout<<"07:00 am to 10:00 pm";

    H::gotoxy(x+6,y+20);cout<<"Contact us by: ";
    H::gotoxy(x+6,y+21);cout<<"+Phone number:";
    H::gotoxy(x+6,y+22);cout<<"+855 10 878 743";
    H::gotoxy(x+6,y+23);cout<<"+Email:";
    H::gotoxy(x+6,y+24);cout<<"bltcyber@yahoo.com";
    H::gotoxy(x+6,y+25);cout<<"+Facebook:";
    H::gotoxy(x+6,y+26);cout<<"BLT Cyber House";
    H::gotoxy(x+6,y+27);cout<<"+Instagram:";
    H::gotoxy(x+6,y+28);cout<<"BLT Cyber House";
    H::gotoxy(x+6,y+29);cout<<"+Google Map: ";
    H::gotoxy(x+6,y+30);cout<<"www.map.google.com";

/////////////////////////////////////////////////
    sub_interface2(0);//apply text
   
    int monitor = 3, Case = 2, keyboard = 4, wire = 8;

    tp(monitor,x+49,y+12);cout<<R"(  ___ )";H::setcolor(Case);cout<<R"(  _   )";H::setcolor(monitor);cout<<R"(   ___ )";H::setcolor(Case);cout<<R"(  _  )";H::setcolor(monitor);cout<<R"(    ___ )";H::setcolor(Case);cout<<R"(  _  )";H::setcolor(monitor);cout<<R"(    ___ )";H::setcolor(Case);cout<<R"(  _  )";H::setcolor(monitor);cout<<R"(    ___  )";H::setcolor(Case);cout<<R"( _  )";
    tp(monitor,x+49,y+13);cout<<R"( [(_)])";H::setcolor(Case);cout<<R"( |=|  )";H::setcolor(monitor);cout<<R"(  [(_)])";H::setcolor(Case);cout<<R"( |=| )";H::setcolor(monitor);cout<<R"(   [(_)])";H::setcolor(Case);cout<<R"( |=| )";H::setcolor(monitor);cout<<R"(   [(_)])";H::setcolor(Case);cout<<R"( |=| )";H::setcolor(monitor);cout<<R"(   [(_)] )";H::setcolor(Case);cout<<R"(|=|  )";
    tp(monitor,x+49,y+14);cout<<R"(  '-` )";H::setcolor(Case);cout<<R"( |_|  )";H::setcolor(monitor);cout<<R"(   '-` )";H::setcolor(Case);cout<<R"( |_| )";H::setcolor(monitor);cout<<R"(    '-` )";H::setcolor(Case);cout<<R"( |_| )";H::setcolor(monitor);cout<<R"(    '-` )";H::setcolor(Case);cout<<R"( |_| )";H::setcolor(monitor);cout<<R"(    '-`  )";H::setcolor(Case);cout<<R"(|_| )";
    tp(keyboard,x+49,y+15);cout<<R"( /mmm/)";H::setcolor(wire);cout<<R"(  /   )";H::setcolor(keyboard);cout<<R"(  /mmm/)";H::setcolor(wire);cout<<R"(  /  )";H::setcolor(keyboard);cout<<R"(   /mmm/)";H::setcolor(wire);cout<<R"(  /  )";H::setcolor(keyboard);cout<<R"(   /mmm/)";H::setcolor(wire);cout<<R"(  /  )";H::setcolor(keyboard);cout<<R"(   /mmm/ )";H::setcolor(wire);cout<<R"( /  )";
    tp(wire,x+49,y+16);cout<<R"(       |____________|____________|____________|____________|   )";
    tp(wire,x+49,y+17);cout<<R"(                             |            |            |       )";
    tp(wire,x+49,y+18);cout<<R"(                             \            \            \     )";
    tp(monitor,x+49,y+19);cout<<R"(                         ___ )";H::setcolor(Case);cout<<R"(  _   )";H::setcolor(monitor);cout<<R"(   ___ )";H::setcolor(Case);cout<<R"(  _  )";H::setcolor(monitor);cout<<R"(    ___ )";H::setcolor(Case);cout<<R"(  _   )";
    tp(monitor,x+49,y+20);cout<<R"(                        [(_)])";H::setcolor(Case);cout<<R"( |=|  )";H::setcolor(monitor);cout<<R"(  [(_)])";H::setcolor(Case);cout<<R"( |=| )";H::setcolor(monitor);cout<<R"(   [(_)])";H::setcolor(Case);cout<<R"( |=|    )";
    tp(monitor,x+49,y+21);cout<<R"(                         '-` )";H::setcolor(Case);cout<<R"( |_|  )";H::setcolor(monitor);cout<<R"(   '-` )";H::setcolor(Case);cout<<R"( |_| )";H::setcolor(monitor);cout<<R"(    '-` )";H::setcolor(Case);cout<<R"( |_|    )";
    tp(keyboard,x+49,y+22);cout<<R"(                        /mmm/)";H::setcolor(keyboard);cout<<R"(      )";H::setcolor(keyboard);cout<<R"(  /mmm/)";H::setcolor(keyboard);cout<<R"(     )";H::setcolor(keyboard);cout<<R"(   /mmm/)";H::setcolor(keyboard);cout<<R"(        )";
//////////////////////////////////////
    int asciiChar = 219, asciiColorOne = 4, asciiColorTwo = 7, asciiColorThree = 9;
    int d_time = 1;
//////////////////////////////////////

    //left line one
    tp(asciiColorOne,x-8,y-5);cout<<char(201)<<char(205);
    H::VLine(x-7,y-5,38,asciiColorOne,186);
    tp(asciiColorOne,x-8,y+34);cout<<char(200)<<char(205);
    //left line two
    tp(asciiColorTwo,x-4,y-4);cout<<char(201)<<char(205);
    H::VLine(x-3,y-4,37,asciiColorTwo,186);
    tp(asciiColorTwo,x-4,y+33);cout<<char(200)<<char(205);
    //left line three
    tp(asciiColorThree,x,y-3);cout<<char(201)<<char(205);
    H::VLine(x+1,y-3,36,asciiColorThree,186);
    tp(asciiColorThree,x,y+32);cout<<char(200)<<char(205);

    //right line one
    tp(asciiColorOne,x+146,y-5);cout<<char(205)<<char(187);
    H::VLine(x+148,y-5,38,asciiColorOne,186);
    tp(asciiColorOne,x+146,y+34);cout<<char(205)<<char(188);
    //right line two
    tp(asciiColorTwo,x+142,y-4);cout<<char(205)<<char(187);
    H::VLine(x+144,y-4,37,asciiColorTwo,186);
    tp(asciiColorTwo,x+142,y+33);cout<<char(205)<<char(188);
    //right line three
    tp(asciiColorThree,x+138,y-3);cout<<char(205)<<char(187);
    H::VLine(x+140,y-3,36,asciiColorThree,186);
    tp(asciiColorThree,x+138,y+32);cout<<char(205)<<char(188);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //middle meet ascii line (top)
    //Line three (left top)
    H::HLine(x+49,y-3,12,asciiColorThree,205);cout<<char(188);
    //Line two                                                                                          //symbol and color
    H::HLine(x+45,y-4,16,asciiColorTwo,205);cout<<char(206);H::HLine(x+62,y-4,6,asciiColorTwo,205);H::setcolor(4);cout<<" \4\4"; 
    //Line one
    H::HLine(x+41,y-5,20,asciiColorOne,205);cout<<char(187);

    //Line three (right top)
    tp(asciiColorThree,x+78,y-3);cout<<char(200);H::HLine(x+79,y-3,12,asciiColorThree,205);
    //Line two
    H::HLine(x+72,y-4,6,asciiColorTwo,205);tp(asciiColorTwo,x+78,y-4);cout<<char(206);H::HLine(x+79,y-4,20,asciiColorTwo,205);
    //Line one
    tp(asciiColorOne,x+78,y-5);cout<<char(201);H::HLine(x+79,y-5,24,asciiColorOne,205);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //middle meet ascii line (buttom)
    //Line three (left buttom)
    H::HLine(x+49,y+32,12,asciiColorThree,205);cout<<char(187);
    //Line two                                                                                          //symbol and color
    H::HLine(x+45,y+33,16,asciiColorTwo,205);cout<<char(206);H::HLine(x+62,y+33,6,asciiColorTwo,205);H::setcolor(4);cout<<" \4\4"; 
    //Line two
    H::HLine(x+41,y+34,20,asciiColorOne,205);cout<<char(188);
    //Line three (right buttom)
    tp(asciiColorThree,x+78,y+32);cout<<char(201);H::HLine(x+79,y+32,12,asciiColorThree,205);
    //Line two
    H::HLine(x+72,y+33,6,asciiColorTwo,205);tp(asciiColorTwo,x+78,y+33);cout<<char(206);H::HLine(x+79,y+33,20,asciiColorTwo,205);
    //Line two
    tp(asciiColorOne,x+78,y+34);cout<<char(200);H::HLine(x+79,y+34,24,asciiColorOne,205);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for(int i = 4 ; i <= 50 ; i++)
    {
        H::setcolor(asciiColorOne);H::gotoxy(i,y-5);cout<<char(asciiChar);H::delay(d_time);
        H::setcolor(asciiColorTwo);H::gotoxy(i+4,y-4);cout<<char(asciiChar);H::delay(d_time);
        H::setcolor(asciiColorThree);H::gotoxy(i+8,y-3);cout<<char(asciiChar);H::delay(d_time);

        if(i == 50)
        {
            for(int i = 155 ; i >= 109 ; i--)
            {
                H::setcolor(asciiColorOne);H::gotoxy(i,y+34);cout<<char(asciiChar);H::delay(d_time);
                H::setcolor(asciiColorTwo);H::gotoxy(i-4,y+33);cout<<char(asciiChar);H::delay(d_time);
                H::setcolor(asciiColorThree);H::gotoxy(i-8,y+32);cout<<char(asciiChar);H::delay(d_time);
            }
           
        }
        
    }

    for(int i = 4 ; i <= 50 ; i++)
    {
        H::setcolor(asciiColorOne);H::gotoxy(i,y+34);cout<<char(asciiChar);H::delay(d_time);
        H::setcolor(asciiColorTwo);H::gotoxy(i+4,y+33);cout<<char(asciiChar);H::delay(d_time);
        H::setcolor(asciiColorThree);H::gotoxy(i+8,y+32);cout<<char(asciiChar);H::delay(d_time);

        if(i == 50)
        {
            for(int i = 155 ; i >= 109 ; i--)
            {
                H::setcolor(asciiColorOne);H::gotoxy(i,y-5);cout<<char(asciiChar);H::delay(d_time);
                H::setcolor(asciiColorTwo);H::gotoxy(i-4,y-4);cout<<char(asciiChar);H::delay(d_time);
                H::setcolor(asciiColorThree);H::gotoxy(i-8,y-3);cout<<char(asciiChar);H::delay(d_time);
            }
           
        }
        
    }
    
    ////////////////
    sub_interface();
    ////////////////

    H::setcolor(7);

}
void Design::sub_interface()
{
    getch();

    int d_Time = 1;
    int loding_color = 2;
    int clsBox = 7, asciiCode = 221;

    //clear left blue box
    //clear as height (y)
    for(int i = 1 ; i <= 32 ; i ++)
    {
        H::clearBox(x+5,y-1,28,i,clsBox);H::delay(d_Time);

        if(i == 32)
        {
            //clear pc lab
            //clear as width
            for(int i = 1 ; i <= 62 ; i ++)
            {
                H::clearBox(x+49,y+12,i,11,clsBox);H::delay(d_Time);
            }
        }

    }

    //loading
    int newLoopDelay = 10;
//
    H::gotoxy(x+29,y+10);cout<<"LOADING...";
    H::drawBoxDoubleLine(x+29,y+11,82,3,5);
//
    for(int i = 1 ; i <= 80 ; i ++)
    {
        H::gotoxy(x+106,y+10);H::setcolor(2);cout<<i+20<<" %";

        if(i == 1)
        {
            for(int i = 1 ; i <= 15 ; i ++ )
            {
                sub_interface2(i);H::delay(d_Time);
            }
        }

        H::HLine(x+30,y+12,i,loding_color+=1,asciiCode);H::delay(newLoopDelay);
        H::HLine(x+30,y+13,i,loding_color+=1,asciiCode);H::delay(newLoopDelay);
        H::HLine(x+30,y+14,i,loding_color+=1,asciiCode);H::delay(newLoopDelay);

    }

     //Default Color
    H::setcolor(7);

    //clear from the middle screen
    H::cls();H::delay(newLoopDelay);

    H::setcolor(7);

}
////////////////////////////////////////////////////////////////////////////////////////
void Design::AdminLogin(int cursor)
{
    char AdminUsername[6];
    char AdminPassword[6];
    int chance = 3;

    back:
    do{

        H::setcursor(cursor,20);

        //username
        H::setcolor(249); 
        H::gotoxy(x+20, y+14);H::inputLetter(AdminUsername,6);

        //password
        H::setcolor(249); //137
        H::gotoxy(x+20, y+20);H::hidePassword(AdminPassword,6);

        if(strcmpi(AdminUsername,"Cyber")==0 && strcmpi(AdminPassword,"168")==0)
        {
            H::setcolor(7);H::cls();
            break;
        }
        if(strcmpi(AdminUsername,"Cyber")!=0 || strcmpi(AdminPassword,"168")!=0)
        {
            H::setcolor(140);
            H::gotoxy(x+22,y+23);cout<<"Incorrect Username or Password";
            H::gotoxy(x+29,y+24);cout<<"Please try again";
            getch();

            H::clearBox(x+18, y+14, 42, 0,247);//Clear username and password boxes
            H::clearBox(x+18, y+20, 42, 0,247);//Clear username and password boxes
            H::clearBox(x+20, y+24, 34, 0,136);//Clear message
            chance -- ;
        }

    }while(chance != 0);

    if(chance == 0)
    {
        for(int i = 1 ; i <= 16 ; i++)
        {   
            H::setcursor(0,0);
            H::setcolor(140);
            H::gotoxy(x+12,y+23);cout<<16-i;H::delay(999);

            H::clearBox(x+13,y+23,16-i,0,136);
            H::setcolor(7);
        }

        goto back;
    }

    H::setcolor(7);
    
}
////////////////////////////////////////////////////////////////////////////////////////
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

    choiceBoxes();

    H::setcolor(7);
}

void Design::choiceBoxes()
{
    //up = 72 , down = 80
    char press;
    int num = 1;
    //24 space box
    H::setcursor(0,0);

    do{
        //choice box
        H::drawBoxSingleLineWithBG(x+83,y+10,25,1,153);H::setcolor(151);H::gotoxy(x+84,y+11);cout<<"     Administrator     ";
        H::drawBoxSingleLineWithBG(x+83,y+14,25,1,153);H::setcolor(151);H::gotoxy(x+84,y+15);cout<<"         User          ";

        if(num==1)
        {
            H::drawBoxSingleLineWithBG(x+83,y+10,25,1,204);H::setcolor(201);H::gotoxy(x+84,y+11);cout<<"==>> Administrator <<==";
            H::clearBox(x+22,y+4,34,5,136);
            sub_loginDesign(1);
        }
        if(num==2)
        {
            H::drawBoxSingleLineWithBG(x+83,y+14,25,1,204);H::setcolor(201);H::gotoxy(x+84,y+15);cout<<"==>>     User      <<==";
            H::clearBox(x+22,y+4,34,5,136);
            sub_loginDesign(2);
        }

        press = getch();

        switch(press) 
        {
            case 72://up
            {
                num--;
                if(num<1)
                {
                    num=2;
                }
                break;
            }
            
            case 80://down
            {
                num++;
                if(num>2)
                {
                    num=1;
                }
                break;
            }

        }

    }while(press != 13);

    if(num == 1 )
    {
        AdminLogin(1);
    }
    if(num == 2)
    {
        
    }

    H::setcolor(7);
}
void Design::sub_loginDesign(int choice)
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

    H::setcolor(7);

}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void Design::AdminMenuDesign()
{
    H::setConsoleTitle(TEXT("ADMIN MENU"));

    int lineColor = 4; 
    H::setcursor(0,0);

    H::HLine(x+52,y-4,36,1,178);//top
    H::HLine(x+20,y-3,100,1,178);//second top

    H::HLine(x+20,y+1,100,1,178);//second buttom
    H::HLine(x+52,y+2,36,1,178);//buttom
    
    H::setcolor(7); 
    H::gotoxy(x+53, y-3); cout << R"(     .    .___   __   __ _ __    _)";
    H::gotoxy(x+53, y-2); cout << R"(    /|    /   `  |    |  | |\   | )";
    H::gotoxy(x+53, y-1); cout << R"(   /  \   |    | |\  /|  | | \  | )";
    H::gotoxy(x+53, y);   cout << R"(  /---'\  |    | | \/ |  | |  \ | )";
    H::gotoxy(x+53, y+1); cout << R"(,'      \ /---/  /    /  / |   \| )";

    tp(lineColor,x+51,y-5);cout<<char(201);H::HLine(x+52,y-5,36,lineColor,205);cout<<char(187);tp(lineColor,x+88,y-4);cout<<char(200);
    tp(lineColor,x+19,y-4);cout<<char(201);H::HLine(x+20,y-4,31,lineColor,205);cout<<char(188);H::HLine(x+89,y-4,31,lineColor,205);cout<<char(187);/*Right */tp(lineColor,x+120,y-3);cout<<char(186);tp(lineColor,x+120,y-2);cout<<char(188);
    tp(lineColor,x+19,y-3);cout<<char(186);tp(lineColor,x+19,y-2);cout<<char(200);

    tp(lineColor,x+19,y);cout<<char(201);tp(lineColor,x+19,y+2);cout<<char(200);tp(lineColor,x+19,y+1);cout<<char(186);H::HLine(x+52,y+3,36,lineColor,205);cout<<char(188);tp(lineColor,x+88,y+2);cout<<char(201);tp(lineColor,x+120,y);cout<<char(187);
    H::HLine(x+20,y+2,31,lineColor,205);cout<<char(187);tp(lineColor,x+51,y+3);cout<<char(200);H::HLine(x+89,y+2,31,lineColor,205);cout<<char(188);tp(lineColor,x+120,y+1);cout<<char(186);
    
    /* Left straight line*/H::HLine(x+20,y-2,8,lineColor,205);/*Small down ascii*/cout<<char(187);/* Connect ascii */tp(lineColor,x+28,y-1);cout<<char(206);
    /* Left straight line*/H::HLine(x+20,y,8,lineColor,205);/*Small up ascii*/cout<<char(188);/* straight line */H::HLine(x+30,y-1,8,lineColor,205);cout<<"\3BLT\3";/* second straight line */H::HLine(x+43,y-1,8,lineColor,205);

    /* Connect ascii */tp(lineColor,x+111,y-1);cout<<char(206);/*Small down ascii*/tp(lineColor,x+111,y-2);cout<<char(201);/* Right straight line*/H::HLine(x+112,y-2,8,lineColor,205);
    /* straight line */H::HLine(x+89,y-1,8,lineColor,205);cout<<"HOUSE";/* second straight line */H::HLine(x+102,y-1,8,lineColor,205);/*Small up ascii*/tp(lineColor,x+111,y);cout<<char(200);/* Right straight line*/H::HLine(x+112,y,8,lineColor,205);

    tp(lineColor,x+4,y-1);cout<<char(201);/* Middle line from the title (Left) */H::HLine(x+5,y-1,22,lineColor,205);/* Middle line from the title (Right) */H::HLine(x+113,y-1,22,lineColor,205);cout<<char(187);
    /*Down Line (left)*/H::VLine(x+5,y-1,9,lineColor,186);/*Down line (right)*/H::VLine(x+136,y-1,15,lineColor,186);/*Connect to the blue box*/tp(lineColor,x+135,y+15);cout<<char(188);H::HLine(x+124,y+15,11,lineColor,205);
    tp(lineColor,x+4,y+9);cout<<char(200);H::HLine(x+5,y+9,4,lineColor,205);
    //left
    /*one to two*/H::VLine(x+14,y+10,2,lineColor,186);tp(lineColor,x+13,y+13);cout<<char(200);H::HLine(x+14,y+13,5,lineColor,205);
    /*two to three*/H::VLine(x+24,y+14,2,lineColor,186);tp(lineColor,x+23,y+17);cout<<char(200);H::HLine(x+24,y+17,5,lineColor,205);
    /*three to four*/H::VLine(x+34,y+18,2,lineColor,186);tp(lineColor,x+33,y+21);cout<<char(200);H::HLine(x+34,y+21,5,lineColor,205);
    /*four to five*/H::VLine(x+44,y+22,2,lineColor,186);tp(lineColor,x+43,y+25);cout<<char(200);H::HLine(x+44,y+25,5,lineColor,205);
    //right
    /*one to two*/H::HLine(x+40,y+9,5,lineColor,205);tp(lineColor,x+44,y+9);cout<<char(187);H::VLine(x+45,y+9,2,lineColor,186);
    /*two to three*/H::HLine(x+50,y+13,5,lineColor,205);tp(lineColor,x+54,y+13);cout<<char(187); tp(lineColor,x+54,y+14);cout<<char(200);H::HLine(x+55,y+14,4,lineColor,205); tp(lineColor,x+58,y+14);cout<<char(187);tp(lineColor,x+58,y+15);cout<<char(200);H::HLine(x+59,y+15,30,lineColor,205);
    /*three to four*/H::HLine(x+60,y+17,5,lineColor,205);tp(lineColor,x+64,y+17);cout<<char(185);H::VLine(x+65,y+17,2,lineColor,186);tp(lineColor,x+64,y+16);cout<<char(201)<<char(205)<<char(205)<<char(188);tp(lineColor,x+67,y+15);cout<<char(203);
    /*four to five*/H::HLine(x+70,y+21,5,lineColor,205);tp(lineColor,x+74,y+21);cout<<char(187);H::VLine(x+75,y+21,2,lineColor,186);


    /*              output host computer's name              */
    DWORD size = MAX_COMPUTERNAME_LENGTH + 1;
    wchar_t hostname[MAX_COMPUTERNAME_LENGTH + 1];

    if (GetComputerNameW(hostname, &size)) {
       tp(lineColor,x+90,y+13);wcout << L" WELCOME BACK : " << hostname << endl;
    } else {
        cerr << "Error: Could not retrieve hostname." << endl;
    }

    //result of selection line
    H::drawBoxDoubleLine(x+90,y+12,33,4,3);
    /////////
    sub_Admin();
    /////////

    H::setcolor(7);
}
void Design::sub_Admin()
{
    char press;
    int num = 1;

    do{
        H::drawBoxDoubleLine(x+10,y+8,29,1,3);tp(3,x+12,y+9);cout<<"Admin Profile Information";
        H::drawBoxDoubleLine(x+20,y+12,29,1,3);tp(3,x+29,y+13);cout<<"Games List";
        H::drawBoxDoubleLine(x+30,y+16,29,1,3);tp(3,x+35,y+17);cout<<"Food and Drink List";
        H::drawBoxDoubleLine(x+40,y+20,29,1,3);tp(3,x+42,y+21);cout<<"Manage User's Information";
        H::drawBoxDoubleLine(x+50,y+24,29,1,3);tp(3,x+54,y+25);cout<<"Manage User's Payment";
        
        if(num == 1)
        {
            H::drawBoxDoubleLine(x+10,y+8,29,1,6);tp(1,x+12,y+9);cout<<"Admin Profile Information";
        }
        if(num == 2)
        {
            H::drawBoxDoubleLine(x+20,y+12,29,1,6);tp(1,x+29,y+13);cout<<"Games List";
        }
        if(num == 3)
        {
            H::drawBoxDoubleLine(x+30,y+16,29,1,6);tp(1,x+35,y+17);cout<<"Food and Drink List";
        }
        if(num == 4)
        {
            H::drawBoxDoubleLine(x+40,y+20,29,1,6);tp(1,x+42,y+21);cout<<"Manage User's Information";
        }   
        if(num == 5)
        {
            H::drawBoxDoubleLine(x+50,y+24,29,1,6);tp(1,x+54,y+25);cout<<"Manage User's Payment";
        }

        press = getch();
        switch(press) 
        {
            case 72://up
            {
                num--;
                if(num<1)
                {
                    num=5;
                }
                break;
            }
            
            case 80://down
            {
                num++;
                if(num>5)
                {
                    num=1;
                }
                break;
            }
        }

    }while(press != 13);

    if(num == 1)
    {
        sub_Admin2(1);
    }
    if(num == 2)
    {
        sub_Admin2(2);
    }
    if(num == 3)
    {
        sub_Admin2(3);
    }
    if(num == 4)
    {
        sub_Admin2(4);
    }   
    if(num == 5)
    {
        sub_Admin2(5);
    }

    H::setcolor(7);

}
void Design::sub_Admin2(int choice)
{
    char one[26] = "Admin Profile Information";
    char two[12] = "Games List";
    char three[20] = "Food and Drink List";
    char four[26] = "Manage User's Information";
    char five[22] = "Manage User's Payment";

    if(choice == 1)
    {
        for(int i = 1 ; i <= 29 ; i++)
        {
            H::drawBoxDoubleLineWithBG(x+92,y+14,i,1,238);
            if(i == 29)
            {
                tp(233,x+94,y+15);
                for(int i = 0 ; i < 26 ; i++)
                {
                    cout<<one[i];H::delay(10);
                }
            }
        }
        
    }
    if(choice == 2)
    {
        for(int i = 1 ; i <= 29 ; i++)
        {
            H::drawBoxDoubleLineWithBG(x+92,y+14,i,1,238);
            if(i == 29)
            {
                tp(233,x+101,y+15);
                for(int i = 0 ; i < 12 ; i++)
                {
                    cout<<two[i];H::delay(10);
                }
            }
        }
    }
    if(choice == 3)
    {
        for(int i = 1 ; i <= 29 ; i++)
        {
            H::drawBoxDoubleLineWithBG(x+92,y+14,i,1,238);
            if(i == 29)
            {
                tp(233,x+97,y+15);
                for(int i = 0 ; i < 20 ; i++)
                {
                    cout<<three[i];H::delay(10);
                }
            }
        }
    }
    if(choice == 4)
    {
        for(int i = 1 ; i <= 29 ; i++)
        {
            H::drawBoxDoubleLineWithBG(x+92,y+14,i,1,238);
            if(i == 29)
            {
                tp(233,x+94,y+15);
                for(int i = 0 ; i < 26 ; i++)
                {
                    cout<<four[i];H::delay(10);
                }
            }
        }
    }
    if(choice == 5)
    {
        for(int i = 1 ; i <= 29 ; i++)
        {
            H::drawBoxDoubleLineWithBG(x+92,y+14,i,1,238);
            if(i == 29)
            {
                tp(233,x+96,y+15);
                for(int i = 0 ; i < 22 ; i++)
                {
                    cout<<five[i];H::delay(10);
                }
            }
        }
    }

    H::setcolor(7);

}

void Design::UserMenuDesign()
{
    
}

#endif