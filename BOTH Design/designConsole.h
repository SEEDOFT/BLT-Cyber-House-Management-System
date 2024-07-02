#ifndef _________DesignConsole____________
#define _________DesignConsole____________
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"../ANT_Header/HinsyOOPV2"
using namespace HinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class Design{
    protected:
        static int x;
        static int y;
    public:
    //BOTH Design
        static void tp(int colorCode,int width,int height);
        static void interface_design();
        
    //////////////////////////////////////////////////////////////
        static void loginAs_Admin_User();//Admin and User
        static void login_design();
        static void loginAs_Admin_UserTxt(int choice);//user and Admin
    ///////////////////////////////////////////////////////////////
        static void AdminMenuDesign();
        static void sub_Admin();
        static void sub_Admin2(int choice);
        static void UserMenuDesign();

};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int Design::x = 10;
int Design::y = 5;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::tp(int colorCode, int width, int height)
{
    H::setcolor(colorCode);H::gotoxy(width,height);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::interface_design()
{
    H::setConsoleTitle(TEXT("BLT Cyber House Management System"));
    H::setcursor(0,0);

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

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
void Design::choiceBoxes()
{
    char press;
    int num = 1;

    H::setcursor(0,0);

    do{
        //choice box
        H::drawBoxSingleLineWithBG(x+83,y+10,25,1,153);H::setcolor(151);H::gotoxy(x+84,y+11);cout<<"     Administrator     ";
        H::drawBoxSingleLineWithBG(x+83,y+14,25,1,153);H::setcolor(151);H::gotoxy(x+84,y+15);cout<<"         User          ";

        if(num==1)
        {
            H::drawBoxSingleLineWithBG(x+83,y+10,25,1,204);H::setcolor(201);H::gotoxy(x+84,y+11);cout<<"==>> Administrator <<==";
            H::clearBox(x+22,y+4,34,5,136);
            loginAs_Admin_UserTxt(1);
        }
        if(num==2)
        {
            H::drawBoxSingleLineWithBG(x+83,y+14,25,1,204);H::setcolor(201);H::gotoxy(x+84,y+15);cout<<"==>>     User      <<==";
            H::clearBox(x+22,y+4,34,5,136);
            loginAs_Admin_UserTxt(2);
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

    //result of selection line
    H::drawBoxDoubleLine(x+90,y+12,33,4,3);
    /////////
    sub_Admin();
    /////////

    H::setcolor(7);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
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
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
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
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::UserMenuDesign()
{
    
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                END OF DESIGN HEADER FILE
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif