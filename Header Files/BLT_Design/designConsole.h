#ifndef _________DesignConsole____________
#define _________DesignConsole____________
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../ANT_Header/HinsyOOPV2"
using namespace HinsyOOP;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class Design
{
    protected:

        static const int x;
        static const int y;

    public:

        static void tp(int colorCode,int width,int height);
        static void outline();
        static void TxtOutline(int width,int height,int length, int color);
        static void charLoop(int characters, int xAxis, int yAxis, int color, const char* text, int DelayTime);
        static void loginMsg(int opt);
        static void message(int n, int width, int height);
        static void LoadingAnimation();
        static void ExpandBoxAnimation();
        static void ShrinkBox(int width, int height, int xOffset, int yOffset);
        static void ShrinkBoxAnimation();
        static void interface_txt();
        static void leftRightSymbol(int num);   
        static void interface_design();
        static void adminSelectionOpt(int num);

        static void Admin_User_ClsBox(int num);
        /*
                    Admin MENU Design
        */
        static void Login_Design();
        static void LoginAs_Admin_UserTxt(int choice);//user and Admin
        static void AdminMenuTxt();
        static void AdminMenuBoxes();
        static void AdminMenu_Design();
        static void AdminMenu_Art(int num);
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
        static void A_Letter_from_Us_Design(int delayTime);
        static void A_Letter_from_Us_nonDesign();
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
    //top
    H::setcolor(6);H::gotoxy(3,0);  cout << "\21";
    H::HLine(4,0,72,3,196);
    H::setcolor(6);H::gotoxy(76,0);  cout << "\20";
    H::setcolor(6);H::gotoxy(83,0);  cout << "\21";
    H::HLine(84,0,72,3,196);
    H::setcolor(6);H::gotoxy(156,0);  cout << "\20";
    H::setcolor(7);H::gotoxy(77,0); cout << "B L T";
    //bot
    H::setcolor(6);H::gotoxy(3,39);  cout << "\21";
    H::HLine(4,39,72,3,196);
    H::setcolor(6);H::gotoxy(76,39);  cout << "\20";
    H::setcolor(6);H::gotoxy(83,39);  cout << "\21";
    H::HLine(84,39,72,3,196);
    H::setcolor(6);H::gotoxy(156,39);  cout << "\20";
    H::setcolor(7);H::gotoxy(78,39); cout << "B L T";

    // //left
    H::setcolor(6);H::gotoxy(1,1); cout << "\36";
    H::VLine(2,1,16,3,179);
    H::setcolor(6);H::gotoxy(1,17); cout << "\37";

    H::gotoxy(1,18);H::setcolor(7); cout <<"B";
    H::gotoxy(1,19);H::setcolor(7); cout <<"L";
    H::gotoxy(1,20);H::setcolor(7); cout <<"T";

    H::setcolor(6);H::gotoxy(1,21); cout << "\36";
    H::VLine(2,21,16,3,179);
    H::setcolor(6);H::gotoxy(1,38); cout << "\37";

    // //right
    H::setcolor(6);H::gotoxy(158,1); cout << "\36";
    H::VLine(159,1,16,3,179);
    H::setcolor(6);H::gotoxy(158,17); cout << "\37";

    H::gotoxy(158,18);H::setcolor(7); cout <<"B";
    H::gotoxy(158,19);H::setcolor(7); cout <<"L";
    H::gotoxy(158,20);H::setcolor(7); cout <<"T";

    H::setcolor(6);H::gotoxy(158,21); cout << "\36";
    H::VLine(159,21,16,3,179);
    H::setcolor(6);H::gotoxy(158,38); cout << "\37";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::adminSelectionOpt(int num)
{
    if(num == 1)
   {
      for(int i = 1 ; i <= 32 ; i++)
      {
         //opt
         H::gotoxy(13+i,18); cout << " ";
         H::gotoxy(13+i,19); cout << " ";
         H::gotoxy(13+i,20); cout << " ";
         //box
         H::gotoxy(91-i,12); cout << " ";
         H::gotoxy(91-i,13); cout << " ";
         H::gotoxy(91-i,14); cout << " ";

         H::delay(10);
      }
   }
   else if(num == 2)
   {
      for(int i = 1 ; i <= 32 ; i++)
      {
         //opt
         H::gotoxy(13+i,21); cout << " ";
         H::gotoxy(13+i,22); cout << " ";
         H::gotoxy(13+i,23); cout << " ";
         //box
         H::gotoxy(91-i,12); cout << " ";
         H::gotoxy(91-i,13); cout << " ";
         H::gotoxy(91-i,14); cout << " ";

         H::delay(10);
      }
   }
   else if(num == 3)
   {
      for(int i = 1 ; i <= 32 ; i++)
      {
        //opt
         H::gotoxy(13+i,24); cout << " ";
         H::gotoxy(13+i,25); cout << " ";
         H::gotoxy(13+i,26); cout << " ";
         //box
         H::gotoxy(91-i,12); cout << " ";
         H::gotoxy(91-i,13); cout << " ";
         H::gotoxy(91-i,14); cout << " ";

         H::delay(10);
      }
   }
   else if(num == 4)
   {
      for(int i = 1 ; i <= 32 ; i++)
      {
        //opt
         H::gotoxy(13+i,27); cout << " ";
         H::gotoxy(13+i,28); cout << " ";
         H::gotoxy(13+i,29); cout << " ";
         //box
         H::gotoxy(91-i,12); cout << " ";
         H::gotoxy(91-i,13); cout << " ";
         H::gotoxy(91-i,14); cout << " ";

         H::delay(10);
      }
   }
   else if(num == 5)
   {
      for(int i = 1 ; i <= 32 ; i++)
      {
         //opt
         H::gotoxy(13+i,30); cout << " ";
         H::gotoxy(13+i,31); cout << " ";
         H::gotoxy(13+i,32); cout << " ";
         //box
         H::gotoxy(91-i,12); cout << " ";
         H::gotoxy(91-i,13); cout << " ";
         H::gotoxy(91-i,14); cout << " ";

         H::delay(10);
      }
   }
   else if(num == 6)
   {
      for(int i = 1 ; i <= 32 ; i++)
      {
         //opt
         H::gotoxy(13+i,33); cout << " ";
         H::gotoxy(13+i,34); cout << " ";
         H::gotoxy(13+i,35); cout << " ";
         //box
         H::gotoxy(91-i,12); cout << " ";
         H::gotoxy(91-i,13); cout << " ";
         H::gotoxy(91-i,14); cout << " ";

         H::delay(10);
      }
   }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::LoadingAnimation()
{
    H::setcursor(0,0);
    H::setcolor(7);
    H::cls();

    for(int i = 0 ; i < 100 ; i ++)
    {
        H::HLine(30,22,i,3,220);
        H::HLine(130-i,21,1,3,220);

        H::HLine(30,20,i,3,220);
        H::HLine(130-i,19,1,3,220);
    }

    for(int i = 0 ; i < 26 ; i ++)
    {
        H::VLine(76,6,i+1,3,219);
        H::VLine(78,31-i,1,3,219);

        H::VLine(80,6,i+1,3,219);
        H::VLine(82,31-i,1,3,219);

        H::delay(1);
    }

    for(int i = 1 ; i <= 51 ; i ++)
    {
        H::gotoxy(131-i,22);cout<<" ";
        H::gotoxy(29+i,22);cout<<" ";

        H::gotoxy(131-i,21);cout<<" ";
        H::gotoxy(29+i,21);cout<<" ";
        
        H::gotoxy(131-i,20);cout<<" ";
        H::gotoxy(29+i,20);cout<<" ";
        
        H::gotoxy(131-i,19);cout<<" ";
        H::gotoxy(29+i,19);cout<<" ";

    }

    for(int i = 1 ; i <= 12 ; i ++)
    {
        H::gotoxy(75,6+i);cout<<" ";
        H::gotoxy(75,33-i);cout<<" ";

        H::gotoxy(77,6+i);cout<<" ";
        H::gotoxy(77,33-i);cout<<" ";

        H::gotoxy(79,6+i);cout<<" ";
        H::gotoxy(79,33-i);cout<<" ";

        H::gotoxy(81,6+i);cout<<" ";
        H::gotoxy(81,33-i);cout<<" ";
        H::delay(1);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//1: with BG
//2: ESC
//3: without BG
//4: File Corrupted
//5: File no data
//6: press any key
void Design::message(int n, int width, int height)
{

    H::setcursor(0,0);

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
    else if ( n == 2)
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
    else if ( n == 3)
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
    else if( n == 4)
    {
        int color = 1 ;
        H::HLine(30,15+height,100,7,196);
        H::HLine(30,19+height,100,7,196);
        while(!kbhit())
        {
            for(int i = 1 ; i <= 20 ; i ++)
            {
                H::setcolor(color);H::gotoxy(50+i,17+height);cout << char(62);H::delay(20);
                H::setcolor(color);H::gotoxy(110-i,17+height);cout << char(60);H::delay(20);
                H::setcolor(color);H::gotoxy(70,17+height);cout << "   File Corrupted   ";
            }
            color++;
            if(color > 15) color = 1;
        }
    }
    else if( n == 5)
    {
        int color = 1 ;
        H::HLine(30,15+height,100,7,196);
        H::HLine(30,19+height,100,7,196);
        while(!kbhit())
        {
            for(int i = 1 ; i <= 20 ; i ++)
            {
                H::setcolor(color);H::gotoxy(50+i,17+height);cout << char(62);H::delay(20);
                H::setcolor(color);H::gotoxy(110-i,17+height);cout << char(60);H::delay(20);
                H::setcolor(color);H::gotoxy(69,17+height);cout << "   File Has No Data   ";
            }
            color++;
            if(color > 15) color = 1;
        }
    }
    else if( n == 6 )
    {
        int color = 1 ;
        while(!kbhit())
        {   
            H::setcolor(3);
            H::gotoxy( 68, 38+height);cout << "Press ";
            H::setcolor(color);cout << "[any]";
            H::setcolor(3);cout << " key to continue";H::delay(999);
            color++;
            if(color > 15 ) color = 1;
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
            tp(238,x+81+i,y+15);cout<<" ";
            tp(238,x+81+i,y+16);cout<<" ";
            tp(238,x+81+i,y+17);cout<<" ";

            tp(238,x+109-i,y+15);cout<<" ";
            tp(238,x+109-i,y+16);cout<<" ";
            tp(238,x+109-i,y+17);cout<<" ";
            H::delay(30);
        }
    }
    if(num == 2)
    {
        for(int i = 0 ; i < 15 ; i ++)
        {
            tp(238,x+81+i,y+19);cout<<" ";
            tp(238,x+81+i,y+20);cout<<" ";
            tp(238,x+81+i,y+21);cout<<" ";

            tp(238,x+109-i,y+19);cout<<" ";
            tp(238,x+109-i,y+20);cout<<" ";
            tp(238,x+109-i,y+21);cout<<" ";
            H::delay(30);
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
    H::setcursor(0,0);

    if(opt == 1)
    {
        int color = 137 ;
        while(!kbhit())
        {
            H::setcolor(140);H::gotoxy(x+23,y+26);cout<<"Incorrect ";
            H::setcolor(color);cout<<"Username ";H::setcolor(140);cout<<"or ";H::setcolor(color);cout<<"Password";
            H::setcolor(140);H::gotoxy(x+18,y+28);cout<<"Press ";
            H::setcolor(color);cout<<"[ANY]";H::setcolor(140);cout<<"key to continue, ";H::setcolor(color);cout<<"[ESC]";H::setcolor(140);cout<<" to go back";

            H::delay(999);
            
            color ++ ;

            if( color > 142 ) color = 137;
        }
    }
     if(opt == 2)
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
     if(opt == 3)
    {
        H::gotoxy(71,37);H::setcolor(1); cout << "Login Successfully";
            for(int i = 1 ; i <= 15 ; i ++)
            {
                H::setcolor(3); H::gotoxy(50+i,37); cout << char(175);
                H::setcolor(3); H::gotoxy(109-i,37); cout << char(174);
                H::delay(50);
            }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::interface_design()
{
    ExpandBoxAnimation();
    interface_txt();

    leftRightSymbol(1);
    //clear box
    getch();
    for(int i = 4 ; i <= 154 ; i ++)
    {
        H::setcolor(7);
        for(int j = 1 ; j <= 18 ; j ++) 
        {
            H::gotoxy(i,1+j); cout << " ";
            H::gotoxy(154-i+4,19+j); cout << " ";
        }
    H::delay(1);
    }
    ShrinkBoxAnimation();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::interface_txt()
{
    H::setcolor(3); H::gotoxy(41,2); cout << R"(   ___    __ _____     ___      _ )";
    H::setcolor(3); H::gotoxy(41,3); cout << R"(  / __\  / //__   \   / __\   _| |__   ___ _ __    /\  /\___  _   _ ___  ___ )";
    H::setcolor(3); H::gotoxy(41,4); cout << R"( /__\// / /   / /\/  / / | | | | '_ \ / _ \ '__|  / /_/ / _ \| | | / __|/ _ \)";
    H::setcolor(4); H::gotoxy(41,5); cout << R"(/ \/  \/ /___/ /    / /__| |_| | |_) |  __/ |    / __  / (_) | |_| \__ \  __/)";
    H::setcolor(4); H::gotoxy(41,6); cout << R"(\_____/\____/\/     \____/\__, |_.__/ \___|_|    \/ /_/ \___/ \__,_|___/\___|)";
    H::setcolor(4); H::gotoxy(41,7); cout << R"(                          |___/                                              )";

    H::gotoxy(130-7,3);H::setcolor(6); cout << char (248);
    H::gotoxy(129-7,4);H::setcolor(6); cout << char (248);
    H::gotoxy(128-7,5);H::setcolor(6); cout << char (248);
    H::gotoxy(127-7,6);H::setcolor(6); cout << char (248);
    H::gotoxy(126-7,7);H::setcolor(6); cout << char (248);
    H::gotoxy(125-7,8);H::setcolor(6); cout << char (248);

    H::gotoxy(130-98,9 );H::setcolor(6); cout << char (248);
    H::gotoxy(129-98,10);H::setcolor(6); cout << char (248);
    H::gotoxy(128-98,11);H::setcolor(6); cout << char (248);
    H::gotoxy(127-98,12);H::setcolor(6); cout << char (248);
    H::gotoxy(126-98,13);H::setcolor(6); cout << char (248);
    H::gotoxy(125-98,14);H::setcolor(6); cout << char (248);
    
    H::HLine(33,8,86,6,236);

    H::setcolor(4); H::gotoxy(90,9 ); cout << R"(_     __           _                 )";
    H::setcolor(4); H::gotoxy(32,10); cout << R"(  /\/\   __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_  / _\_   _ ___| |_ ___ _ __ ___  )";
    H::setcolor(4); H::gotoxy(32,11); cout << R"( /    \ / _` | '_ \ / _` |/ _` |/ _ \ '_ ` _ \ / _ \ '_ \| __| \ \| | | / __| __/ _ \ '_ ` _ \ )";
    H::setcolor(3); H::gotoxy(32,12); cout << R"(/ /\/\ \ (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_  _\ \ |_| \__ \ ||  __/ | | | | |)";
    H::setcolor(3); H::gotoxy(32,13); cout << R"(\/    \/\__,_|_| |_|\__,_|\__, |\___|_| |_| |_|\___|_| |_|\__| \__/\__, |___/\__\___|_| |_| |_|)";
    H::setcolor(3); H::gotoxy(32,14); cout << R"(                          |___/                                    |___/                       )";

    H::setcolor(7);H::gotoxy(20,22); cout << R"(      //@@)";
    H::setcolor(7);H::gotoxy(20,23); cout << R"(     @@ "))";
    H::setcolor(7);H::gotoxy(20,24); cout << R"(    @@@ - @ )"; H::setcolor(3); cout << R"(  _____)";
    H::setcolor(7);H::gotoxy(20,25); cout << R"(   /  \ / \ )"; H::setcolor(3); cout << R"( |\____\)";
    H::setcolor(7);H::gotoxy(20,26); cout << R"(  /  ( X ) |)"; H::setcolor(3); cout << R"( | |   |)";
    H::setcolor(7);H::gotoxy(20,27); cout << R"( <___=\     )"; H::setcolor(3); cout << R"( | |   |)";
    H::setcolor(7);H::gotoxy(20,28); cout << R"(     )"; H::setcolor(3); cout << R"(\======\ \|_"_|)";
    H::setcolor(3);H::gotoxy(20,29); cout << R"(                 (_________________________________)";
    
    for(int i = 1 ; i <= 35 ; i ++)
    {
        H::drawBoxDoubleLineWithBG(70,17,i,17,187);
        H::drawBoxDoubleLineWithBG(140-i,17,1,17,187);
    }
    H::setcolor(181);H::gotoxy(75,19); cout << R"(<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>)";
    H::setcolor(181);H::gotoxy(75,33); cout << R"(<*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>)";

    char t1[] = "Welcome to";
    char t2[] = "BLT";
    char t3[] = "Cyber House Management System";
    char t4[] = "We will provide you";
    char t5[] = "with the best gaming experince";
    char t6[] = "you have ever had";

    charLoop(sizeof(t1), 100, 22-1, 185, t1, 10);
    charLoop(sizeof(t2), 103, 24-1, 249, t2, 10);
    charLoop(sizeof(t3), 90, 26-1, 71, t3, 10);
    charLoop(sizeof(t4), 95, 28-1, 185, t4, 10);
    charLoop(sizeof(t5), 90, 30-1, 151, t5, 10);
    charLoop(sizeof(t6), 96, 32-1, 185, t6, 10);

    H::setcolor(1);H::gotoxy(10,31); 
    cout << "To continue with our program, press";
    H::setcolor(4);cout << "  [ANY]";
    H::setcolor(1);cout << " key";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::ExpandBoxAnimation()
{
    H::setcursor(0,0);

    for(int i = 1 ; i <= 80 ; i ++)
    {
        //top
        H::HLine(2,1,i,7,178);
        H::HLine(158-i,1,1,7,178);

        //bot
        H::HLine(2,38,i,7,178);
        H::HLine(158-i,38,1,7,178);
    }

    for(int i = 1 ; i <= 18 ; i ++)
    {
        //left
        H::VLine(3,1,i,7,178);
        H::VLine(3,37-i,1,7,178);
        H::VLine(4,1,i,7,178);
        H::VLine(4,37-i,1,7,178);

        //right
        H::VLine(158,1,i,7,178);
        H::VLine(158,37-i,1,7,178);
        H::VLine(157,1,i,7,178);
        H::VLine(157,37-i,1,7,178);

        H::delay(2);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::ShrinkBox(int width, int height, int xOffset, int yOffset)
{
    for (int i = 0; i < yOffset; ++i) 
    {
        cout << endl;
    }
    for (int i = 0; i < height; ++i) 
    {
        for (int j = 0; j < xOffset; ++j) 
        {
            cout << ' ';
        }
        for (int j = 0; j < width; ++j) 
        {
            if (i == 0 || i == height - 1)  // Top or bottom line
            {
                H::setcolor(7); 
                cout << char(178);
            }
            else if (j == 0)  // Left line
            {
                H::setcolor(7); 
                cout << char(178) << char(178);
                j++;  // Skip one character to adjust for the double border on the left
            }
            else if (j == width - 2 && j != 0)  // Right line
            {
                H::setcolor(7); 
                cout << char(178) << char(178);
                break;  // Exit the loop after printing the right border
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::leftRightSymbol(int num)
{
    while(!kbhit())
    {
        H::setcolor(num); H::gotoxy(10,2 ); cout << R"(>>>>>>>)";H::setcolor(num); H::gotoxy(143,2 ); cout << R"(<<<<<<<)";
        H::setcolor(num); H::gotoxy(11,3 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(142,3 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(12,4 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(141,4 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(13,5 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(140,5 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(14,6 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(139,6 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(15,7 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(138,7 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(16,8 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(137,8 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(15,9 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(138,9 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(14,10); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(139,10); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(13,11); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(140,11); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(12,12); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(141,12); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(11,13); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(142,13); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(10,14); cout << R"(>>>>>>>)";H::setcolor(num); H::gotoxy(143,14); cout << R"(<<<<<<<)"; 
        H::delay(200);                              
        H::setcolor(num); H::gotoxy(19,2 ); cout << R"(>>>>>>>)";H::setcolor(num); H::gotoxy(134,2 ); cout << R"(<<<<<<<)";
        H::setcolor(num); H::gotoxy(20,3 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(133,3 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(21,4 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(132,4 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(22,5 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(131,5 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(23,6 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(130,6 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(24,7 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(129,7 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(25,8 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(128,8 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(24,9 ); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(129,9 ); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(23,10); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(130,10); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(22,11); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(131,11); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(21,12); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(132,12); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(20,13); cout << R"(>:::::>)";H::setcolor(num); H::gotoxy(133,13); cout << R"(<:::::<)";
        H::setcolor(num); H::gotoxy(19,14); cout << R"(>>>>>>>)";H::setcolor(num); H::gotoxy(134,14); cout << R"(<<<<<<<)";                               
        H::delay(150);

        num ++ ; 
        if(num > 7) num = 1;
    }
                
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::ShrinkBoxAnimation()
{
    H::setcursor(0, 0);
    H::gotoxy(2, 1);
    
    int initialWidth = 156;
    int initialHeight = 37;
    int width = initialWidth;
    int height = initialHeight;

    while (width > 0 && height > 0) 
    {
        H::cls();

        int xOffset = 2 + (initialWidth - width) / 2;
        int yOffset = 1 + (initialHeight - height) / 2;

        ShrinkBox(width, height, xOffset, yOffset);

        width -= 4;
        height -= 2;
    }
    //@@@@@@@@@@@@@@@@@@@@@@

    for(int i = 1 ; i <= 84 ; i ++)
    {
        H::setcolor(7);

        H::gotoxy(37+i,14); cout << R"(   ______)";
        H::gotoxy(37+i,15); cout << R"(  /|_||_\`.__)";
        H::gotoxy(37+i,16); cout << R"( (   _    _ _\)";
        H::gotoxy(37+i,17); cout << R"( =`-(_)--(_)-')";

        H::gotoxy(37+i,19); cout << " ";
        H::delay(10);
        H::gotoxy(77,21); cout << 16 + i << " %";
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::Login_Design()
{
    H::setConsoleTitle(TEXT("Log In Panel"));
    static int n_x = 10 , n_y = 8;

    TxtOutline(3,-1,-3,1);
    tp(7,51,2); cout << R"( __ _                _____           ___                 )";
    tp(7,51,3); cout << R"(/ _(_) __ _ _ __     \_   \_ __     / _ \__ _  __ _  ___ )";
    tp(1,51,4); cout << R"(\ \| |/ _` | '_ \     / /\/ '_ \   / /_)/ _` |/ _` |/ _ \)";
    tp(7,51,5); cout << R"(_\ \ | (_| | | | | /\/ /_ | | | | / ___/ (_| | (_| |  __/)";
    tp(7,51,6); cout << R"(\__/_|\__, |_| |_| \____/ |_| |_| \/    \__,_|\__, |\___|)";
    tp(7,51,7); cout << R"(      |___/                                   |___/      )";


    H::drawBoxSingleLineWithBG(n_x+13, n_y+1, 114, 25, 145);
    H::drawBoxSingleLineWithBG(n_x+15, n_y+2, 50, 23, 136);//admin or user & log in

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


    tp(1,n_x+4,37);cout<<"To move between options, use ";
    H::setcolor(4);cout<<"[UP]";
    H::setcolor(1);cout<<" and ";
    H::setcolor(4);cout<<"[DOWN]";
    H::setcolor(1);cout<<" arrow key and press ";
    H::setcolor(4);cout<<"[ENTER]";
    H::setcolor(1);cout<<" key to select, or to leave the program, press ";
    H::setcolor(4);cout<<"[BACKSPACE]";

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AdminMenuBoxes()
{
    //option box
    H::drawBoxDoubleLineWithBG(15,18,30,1,3);
    H::drawBoxDoubleLineWithBG(15,21,30,1,3);
    H::drawBoxDoubleLineWithBG(15,24,30,1,3);
    H::drawBoxDoubleLineWithBG(15,27,30,1,3);
    H::drawBoxDoubleLineWithBG(15,30,30,1,3);
    H::drawBoxDoubleLineWithBG(15,33,30,1,3);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::LoginAs_Admin_UserTxt(int choice)
{
    int y = 8;
    if(choice == 2)
    {
        H::setcolor(135); 
        H::gotoxy(x+27, y+4); cout << R"( _   _ _____ ___________ )";
        H::gotoxy(x+27, y+5); cout << R"(| | | /  ___|  ___| ___ \)";
        H::gotoxy(x+27, y+6); cout << R"(| | | \ `--.| |__ | |_/ /)";
        H::gotoxy(x+27, y+7); cout << R"(| | | |`--. \  __||    / )";
        H::gotoxy(x+27, y+8); cout << R"(| |_| /\__/ / |___| |\ \ )";
        H::gotoxy(x+27, y+9); cout << R"( \___/\____/\____/\_| \_|)";
    }
    if(choice == 1)
    {
        H::setcolor(135); 
        H::gotoxy(x+24, y+4); cout << R"(  ___ _________  ________ _   _ )";
        H::gotoxy(x+24, y+5); cout << R"( / _ \|  _  \  \/  |_   _| \ | |)";
        H::gotoxy(x+24, y+6); cout << R"(/ /_\ \ | | | .  . | | | |  \| |)";
        H::gotoxy(x+24, y+7); cout << R"(|  _  | | | | |\/| | | | | . ` |)";
        H::gotoxy(x+24, y+8); cout << R"(| | | | |/ /| |  | |_| |_| |\  |)";
        H::gotoxy(x+24, y+9); cout << R"(\_| |_/___/ \_|  |_/\___/\_| \_/)";                                             
    }

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AdminMenu_Design()
{
    H::setcolor(199); H::gotoxy(11,14); cout << R"(    ____ ___  ___ _ ____ _  _ ____    )";
    H::setcolor(199); H::gotoxy(11,15); cout << R"(    |  | |__]  |  | |  | |\ | [__     )";
    H::setcolor(199); H::gotoxy(11,16); cout << R"(    |__| |     |  | |__| | \| ___]    )";
    H::setcolor(199); H::gotoxy(11,17); cout << R"(                                      )";

    H::drawBoxDoubleLine(8,10,144,27,153);//big one
    H::VLine(9,10,27,1,219);
    H::VLine(152,10,27,1,219);

    H::drawBoxDoubleLine(10,13,40,23,238);//left option
    H::VLine(11,13,23,6,219);
    H::VLine(50,13,23,6,219);

    H::drawBoxDoubleLine(60,13,90,23,238);//right art
    H::VLine(61,13,23,6,219);
    H::VLine(150,13,23,6,219);

    H::drawBoxDoubleLineWithBG(45,11,60,3,7);//appear bar
    
    //left
    H::setcolor(6); H::gotoxy(47,12); cout << R"(   __/) )";
    H::setcolor(6); H::gotoxy(47,13); cout << R"(.-(__(=:)";
    H::setcolor(6); H::gotoxy(47,14); cout << R"(     \) )";

    //right
    H::setcolor(6); H::gotoxy(95,12); cout << R"( (\__   )";
    H::setcolor(6); H::gotoxy(95,13); cout << R"(:=)__)-.)";
    H::setcolor(6); H::gotoxy(95,14); cout << R"( (/     )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AdminMenu_Art(int num)
{
    if(num == 1)
    {
        H::clearBox(65,17,80,18,7);
        H::gotoxy(83,17); H::setcolor(6); cout << R"(         .--.)";
        H::gotoxy(83,18); H::setcolor(6); cout << R"(         , , )     )"; H::setcolor(2); cout << R"(      .-----._  ___)";
        H::gotoxy(83,19); H::setcolor(6); cout << R"(         <  /)     )"; H::setcolor(2); cout << R"(      |     | ||==||)";
        H::gotoxy(83,20); H::setcolor(6); cout << R"(       _(())\)     )"; H::setcolor(2); cout << R"(      |     | /|==||  )"; H::setcolor(7); cout << R"(__)";
        H::gotoxy(83,21); H::setcolor(6); cout << R"(    .-' (()/  '-.  )"; H::setcolor(2); cout << R"(      :_____:/ |"_|/) )"; H::setcolor(7); cout << R"( /|)";
        H::gotoxy(83,22); H::setcolor(6); cout << R"(  _/     ()      \ )"; H::setcolor(7); cout << R"(   / )"; H::setcolor(2); cout << R"(.-------.  __.'  )"; H::setcolor(7); cout << R"(/ |)";
        H::gotoxy(83,23); H::setcolor(6); cout << R"( oo)__/   ()  \  | )"; H::setcolor(7); cout << R"(  / )"; H::setcolor(2); cout << R"('======='  ()    )"; H::setcolor(7); cout << R"(/  |)";
        H::gotoxy(83,24); H::setcolor(6); cout << R"( :~    \_  ) _/ _/ )"; H::setcolor(7); cout << R"( /__________________/   |)";
        H::gotoxy(83,25); H::setcolor(6); cout << R"( |      |- (--|(,/ )"; H::setcolor(7); cout << R"(|           [___o___]   |)";
        H::gotoxy(83,26); H::setcolor(6); cout << R"( |     /   )   \   )"; H::setcolor(7); cout << R"(|   /       [___o___]   /)";
        H::gotoxy(83,27); H::setcolor(6); cout << R"( |     |  (     \  )"; H::setcolor(7); cout << R"(|  /        [___o___]  /)";
        H::gotoxy(83,28); H::setcolor(6); cout << R"( |     |        (  )"; H::setcolor(7); cout << R"(| /                 | /)";
        H::gotoxy(83,29); H::setcolor(6); cout << R"( |     /  .     |  )"; H::setcolor(7); cout << R"(|/      __          |/)";
        H::gotoxy(83,30); H::setcolor(6); cout << R"( |     |  :     |        )"; H::setcolor(3); cout << R"(<`,,'>,--,--..-,)";
        H::gotoxy(83,31); H::setcolor(6); cout << R"( |     |__/_____\        )"; H::setcolor(3); cout << R"( |  / (  ( ) )  \)";
        H::gotoxy(83,32); H::setcolor(6); cout << R"(.,,.  oo='  oo='         )"; H::setcolor(3); cout << R"( '-'\ ) )     ) )\)";
        H::gotoxy(83,33); H::setcolor(6); cout << R"(                         )"; H::setcolor(3); cout << R"(    (,_)_)(_,)_/)";
        H::gotoxy(83,33); H::setcolor(6); cout << R"(                         )"; H::setcolor(3); cout << R"(     |||    |||)";
    }
    else if(num == 2)
    {
        H::clearBox(65,17,80,18,7);
        H::setcolor(5); H::gotoxy(77,18); cout << R"(             ..                          ..)";
        H::setcolor(5); H::gotoxy(77,19); cout << R"(          .''..''.      .--~~--.      .``..``.)";
        H::setcolor(5); H::gotoxy(77,20); cout << R"(         .:''     `----'        `----'     ``:.)";
        H::setcolor(5); H::gotoxy(77,21); cout << R"(         |       .   )"; H::setcolor(2); cout << R"( ( * )  ( * )  )"; H::setcolor(5); cout << R"(  .       |)";
        H::setcolor(5); H::gotoxy(77,22); cout << R"(        .' ....   `. )"; H::setcolor(9); cout << R"( L1)"; H::setcolor(12); cout << R"(/L2  )"; H::setcolor(9); cout << R"(R1/)"; H::setcolor(12); cout << R"(R2  )"; H::setcolor(5); cout << R"(.'    )"; H::setcolor(4); cout << R"( _  )"; H::setcolor(5); cout << R"(`.)";
        H::setcolor(5); H::gotoxy(77,23); cout << R"(       : .;\  /;.  : )"; H::setcolor(2); cout << R"( ( * )  ( * ) )"; H::setcolor(5); cout << R"( :  )"; H::setcolor(1); cout << R"( _ )"; H::setcolor(4); cout << R"((B))"; H::setcolor(6); cout << R"( _ )"; H::setcolor(5); cout << R"(:)";
        H::setcolor(5); H::gotoxy(77,24); cout << R"(      :  :) () (:   :              :   )"; H::setcolor(1); cout << R"((A) )"; H::setcolor(7); cout << R"(_ )"; H::setcolor(6); cout << R"((D) )"; H::setcolor(5); cout << R"(:)";
        H::setcolor(5); H::gotoxy(77,25); cout << R"(       : `:/  \:'  :       )"; H::setcolor(4); cout << R"(B)"; H::setcolor(5); cout << R"(        :     )"; H::setcolor(7); cout << R"((C)  )"; H::setcolor(5); cout << R"( :)";
        H::setcolor(5); H::gotoxy(77,26); cout << R"(        :  ''''   .'   )"; H::setcolor(1); cout << R"(A )"; H::setcolor(2); cout << R"(( * ) )"; H::setcolor(6); cout << R"(D )"; H::setcolor(5); cout << R"(   `.         :)";
        H::setcolor(5); H::gotoxy(77,27); cout << R"(       .'        '   )"; H::setcolor(2); cout << R"(( * ))"; H::setcolor(7); cout << R"( C )"; H::setcolor(2); cout << R"(( * ))"; H::setcolor(5); cout << R"(    `        `.)";
        H::setcolor(5); H::gotoxy(77,28); cout << R"(      .'        .''.     )"; H::setcolor(2); cout << R"(( * ))"; H::setcolor(5); cout << R"(      .``.        `.)";
        H::setcolor(5); H::gotoxy(77,29); cout << R"(    .'        .'   `. )"; H::setcolor(3); cout << R"((o)      (o))"; H::setcolor(5); cout << R"( .'   `.        `.)";
        H::setcolor(5); H::gotoxy(77,30); cout << R"(   .'       .'      `.   )"; H::setcolor(7); cout << R"(1)"; H::setcolor(2); cout << R"(( * ))"; H::setcolor(7); cout << R"(2)"; H::setcolor(5); cout << R"(  .'      `.       `.)";
        H::setcolor(5); H::gotoxy(77,31); cout << R"( .'       .'         `............'         `.       `.)";
        H::setcolor(5); H::gotoxy(77,32); cout << R"( `.      .'                                  `.      .')";
        H::setcolor(5); H::gotoxy(77,33); cout << R"(   `....'                                      `....')";
        
    }
    else if(num == 3)
    {
        H::clearBox(65,17,80,18,7);
        H::setcolor(6); H::gotoxy(74,16); cout << R"(                                                     ._ )";                                                  
        H::setcolor(6); H::gotoxy(74,17); cout << R"(                                                   ,(  `-. )";                                                 
        H::setcolor(6); H::gotoxy(74,18); cout << R"(                                                 ,': `.   `. )";                                              
        H::setcolor(6); H::gotoxy(74,19); cout << R"(                                               ,` *   `-.   \ )";                                            
        H::setcolor(6); H::gotoxy(74,20); cout << R"(                                             ,'  ` :+  = `.  `. )";                                      
        H::setcolor(6); H::gotoxy(74,21); cout << R"(                                           ,~  (o):  .,   `.  `. )";               
        H::setcolor(2); H::gotoxy(74,22); cout << R"(    ___   )"; H::setcolor(1); cout << R"( ____     )"; H::setcolor(6); cout << R"(                     ,'  ; :   ,(__) x;`.  ; )";
        H::setcolor(2); H::gotoxy(74,23); cout << R"(   |___|  )"; H::setcolor(1); cout << R"((____)    )"; H::setcolor(6); cout << R"(                   ,'  :'  itz  ;  ; ; _,-' )";
        H::setcolor(2); H::gotoxy(74,24); cout << R"(    | |   )"; H::setcolor(1); cout << R"(_)  (_    )"; H::setcolor(6); cout << R"(                 .'O ; = _' C ; ;'_,_ ; )";
        H::setcolor(2); H::gotoxy(74,25); cout << R"(  _/   \_)"; H::setcolor(1); cout << R"(/~~~~~~\   )"; H::setcolor(6); cout << R"(               ,;  _;   ` : ;'_,-'   i' )";
        H::setcolor(2); H::gotoxy(74,26); cout << R"( /~~~~~~)"; H::setcolor(1); cout << R"(/        \  )"; H::setcolor(6); cout << R"(             ,` `;(_)  0 ; ','       : )";
        H::setcolor(2); H::gotoxy(74,27); cout << R"((______)"; H::setcolor(1); cout << R"((          ) )"; H::setcolor(6); cout << R"(           .';6     ; ' ,-'~ )";
        H::setcolor(2); H::gotoxy(74,28); cout << R"( |      )"; H::setcolor(1); cout << R"(\        /  )"; H::setcolor(6); cout << R"(         ,' Q  ,& ;',-.' )";
        H::setcolor(2); H::gotoxy(74,29); cout << R"( |______ )"; H::setcolor(1); cout << R"()______(   )"; H::setcolor(6); cout << R"(       ,( :` ; _,-'~  ; )";
        H::setcolor(2); H::gotoxy(74,30); cout << R"((_______)"; H::setcolor(1); cout << R"(/________\  )"; H::setcolor(6); cout << R"(     ,~.`c _',' )";
        H::setcolor(6); H::gotoxy(74,31); cout << R"(                       .';^_,-' ~ )";       
        H::setcolor(6); H::gotoxy(74,32); cout << R"(                     ,'_;-'' )";
        H::setcolor(6); H::gotoxy(74,33); cout << R"(                    ,,~ )";
        H::setcolor(6); H::gotoxy(74,34); cout << R"(                    i' )";
        H::setcolor(6); H::gotoxy(74,35); cout << R"(                    : )";  
 
    }
    else if(num == 4)
    {  
        H::clearBox(65,17,80,18,7);
        H::setcolor(248); H::gotoxy(84,17); cout << R"(|,---"-----------------------------"---,|)";
        H::setcolor(248); H::gotoxy(84,18); cout << R"(||                                     ||)";
        H::setcolor(248); H::gotoxy(84,19); cout << R"(||                                     ||)";
        H::setcolor(248); H::gotoxy(84,20); cout << R"(||       BLT#                          ||)";
        H::setcolor(248); H::gotoxy(84,21); cout << R"(||       Manage User                   ||)";
        H::setcolor(248); H::gotoxy(84,22); cout << R"(||       Information                   ||)";
        H::setcolor(248); H::gotoxy(84,23); cout << R"(||                                     ||)";
        H::setcolor(248); H::gotoxy(84,24); cout << R"(||                                     ||)";
        H::setcolor(248); H::gotoxy(84,25); cout << R"(||_____,_________________________,_____||)";
        H::setcolor(7); H::gotoxy(77,26); cout << R"(       |)_____)-----.| /I\ ANT  |.------(_____(|)";
        H::setcolor(7); H::gotoxy(77,27); cout << R"(     //"""""""|_____|=----------=|______|"""""""\)";
        H::setcolor(7); H::gotoxy(77,28); cout << R"(    // _| _| _| _| _| _| _| _| _| _| _| _| _| _| \)";
        H::setcolor(7); H::gotoxy(77,29); cout << R"(   // ___| _| _| _| _| _| _| _| _| _| _| _|  |  | \)";
        H::setcolor(7); H::gotoxy(77,30); cout << R"(  |/ ___| _| _| _| _| _| _| _| _| _| _| _| ______| \)";
        H::setcolor(7); H::gotoxy(77,31); cout << R"(  / __| _| _| _| _| _| _| _| _| _| _| _| _| _| ___| \)";
        H::setcolor(7); H::gotoxy(77,32); cout << R"( / _| _| _| _| ________________________| _| _| _| _| \)";
        H::setcolor(7); H::gotoxy(77,33); cout << R"(|------"--------------------------------------"-------|)";
        H::setcolor(7); H::gotoxy(77,34); cout << R"(`-----------------------------------------------------')";
    }
    else if(num == 5)
    {
        H::clearBox(65,17,80,18,7);
        H::setcolor(2); H::gotoxy(85,17); cout << R"(                      )"; H::setcolor(2); cout << R"( __               )";
        H::setcolor(3); H::gotoxy(85,18); cout << R"(               _      )"; H::setcolor(2); cout << R"((~(   ___      __ )";
        H::setcolor(3); H::gotoxy(85,19); cout << R"(        ,-----' |    _)"; H::setcolor(2); cout << R"( \O\<'~_`)     )~))";
        H::setcolor(3); H::gotoxy(85,20); cout << R"(        | //  : |  -'  )"; H::setcolor(2); cout << R"( )_))^ \\  __(O( )";
        H::setcolor(3); H::gotoxy(85,21); cout << R"(        | //  : |   ---)"; H::setcolor(2); cout << R"(    >__;` (~( )_))";
        H::setcolor(3); H::gotoxy(85,22); cout << R"(        | //  : |  -._ )"; H::setcolor(2); cout << R"(    /\_\   \O\   )";
        H::setcolor(3); H::gotoxy(85,23); cout << R"(        `-----._|    )"; H::setcolor(2); cout << R"( __  /__( \|  )_)  )";
        H::setcolor(3); H::gotoxy(85,24); cout << R"(         _/___\_    )"; H::setcolor(2); cout << R"(//)_`/( (| ||]      )";
        H::setcolor(7); H::gotoxy(85,25); cout << R"(   _____[_______]_)"; H::setcolor(2); cout << R"([~~-_ (.L)O) ||       )";
        H::setcolor(7); H::gotoxy(85,26); cout << R"(  [____________________])"; H::setcolor(2); cout << R"(' (_(,/(~(      )";
        H::setcolor(7); H::gotoxy(85,27); cout << R"(    ||| /          )"; H::setcolor(2); cout << R"()~)  ,___,'./\O\     )";
        H::setcolor(7); H::gotoxy(85,28); cout << R"(    ||| \         )"; H::setcolor(2); cout << R"((O(|,'______|( )_)    )";
        H::setcolor(7); H::gotoxy(85,29); cout << R"(    ||| /          )"; H::setcolor(2); cout << R"()_) I==)"; H::setcolor(7); cout << R"(||            )";
        H::setcolor(7); H::gotoxy(85,30); cout << R"(    ||| \       )"; H::setcolor(2); cout << R"(__/_)"; H::setcolor(7); cout << R"(||)"; H::setcolor(2); cout << R"(  __)"; H::setcolor(7); cout << R"(||)"; H::setcolor(2); cout << R"(__          )";
        H::setcolor(7); H::gotoxy(85,31); cout << R"(-----||-/------)"; H::setcolor(2); cout << R"(`-._/)"; H::setcolor(7); cout << R"(||)"; H::setcolor(7); cout << R"(--__o__O          )";
    }
    else if(num == 7)
    {
        H::clearBox(65,17,80,18,7);
        H::setcolor(8); H::gotoxy(85,17); cout << R"(    /|)";
        H::setcolor(8); H::gotoxy(85,18); cout << R"(   / |                  )"; H::setcolor(11); cout << R"(   __)";
        H::setcolor(8); H::gotoxy(85,19); cout << R"(  /)"; H::setcolor(7); cout << R"(__)"; H::setcolor(8); cout << R"(|)"; H::setcolor(7); cout << R"(______            )"; H::setcolor(11); cout << R"(  /\ `.)";
        H::setcolor(7); H::gotoxy(85,20); cout << R"( |  __  __  |           )"; H::setcolor(11); cout << R"(  2^)_|)";
        H::setcolor(7); H::gotoxy(85,21); cout << R"( | |  ||  | |           )"; H::setcolor(11); cout << R"(  \`/(_)";
        H::setcolor(7); H::gotoxy(85,22); cout << R"( | |  ||  | |           )"; H::setcolor(11); cout << R"(    )/,`.)";
        H::setcolor(7); H::gotoxy(85,23); cout << R"( | |__||__| |           )"; H::setcolor(11); cout << R"( __((  \/)";
        H::setcolor(7); H::gotoxy(85,24); cout << R"( |  __  __()|           )"; H::setcolor(11); cout << R"(/.--|_.L\\_)";
        H::setcolor(7); H::gotoxy(85,25); cout << R"( | |  ||  | |           )"; H::setcolor(11); cout << R"(    \, \ \=)";
        H::setcolor(7); H::gotoxy(85,26); cout << R"( | |  ||  | |           )"; H::setcolor(11); cout << R"(    / ,/L)";
        H::setcolor(7); H::gotoxy(85,27); cout << R"( | |  ||  | |           )"; H::setcolor(11); cout << R"(   7 (\ \...,_)";
        H::setcolor(7); H::gotoxy(85,28); cout << R"( | |  ||  | |           )"; H::setcolor(11); cout << R"(   | | \____| ))";
        H::setcolor(7); H::gotoxy(85,29); cout << R"( | |  ||  | |           )"; H::setcolor(11); cout << R"(   ]_|      `\))";
        H::setcolor(7); H::gotoxy(85,30); cout << R"( | |__||__| |           )"; H::setcolor(11); cout << R"(   /_)         )";
        H::setcolor(7); H::gotoxy(85,31); cout << R"( |__________|           )"; H::setcolor(11); cout << R"(   `"          )";
    }
    else if(num == 6)
    {
        H::clearBox(65,17,80,18,7);
        H::setcolor(7); H::gotoxy(85,19); cout << R"(  __________ )";
        H::setcolor(7); H::gotoxy(85,20); cout << R"( |  __  __  |)";
        H::setcolor(7); H::gotoxy(85,21); cout << R"( | |  ||  | |)";
        H::setcolor(7); H::gotoxy(85,22); cout << R"( | |  ||  | |)";
        H::setcolor(7); H::gotoxy(85,23); cout << R"( | |__||__| |)";
        H::setcolor(7); H::gotoxy(85,24); cout << R"( |  __  __()|)";
        H::setcolor(7); H::gotoxy(85,25); cout << R"( | |  ||  | |)";
        H::setcolor(7); H::gotoxy(85,26); cout << R"( | |  ||  | |)";
        H::setcolor(7); H::gotoxy(85,27); cout << R"( | |  ||  | |)";
        H::setcolor(7); H::gotoxy(85,28); cout << R"( | |  ||  | |)";
        H::setcolor(7); H::gotoxy(85,29); cout << R"( | |  ||  | |)";
        H::setcolor(7); H::gotoxy(85,30); cout << R"( | |__||__| |)";
        H::setcolor(7); H::gotoxy(85,31); cout << R"( |__________|)";
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AdminMenuTxt()
{
    H::setConsoleTitle(TEXT("Admin Menu"));
    TxtOutline(0,0,0,1);

    H::setcolor(7); H::gotoxy(49,3); cout << R"(   _      ___         _____    __             __    __       )";
    H::setcolor(7); H::gotoxy(49,4); cout << R"(  /_\    /   \/\/\    \_   \/\ \ \   /\/\    /__\/\ \ \/\ /\ )";
    H::setcolor(1); H::gotoxy(49,5); cout << R"( //_\\  / /\ /    \    / /\/  \/ /  /    \  /_\ /  \/ / / \ \)";
    H::setcolor(7); H::gotoxy(49,6); cout << R"(/  _  \/ /_// /\/\ \/\/ /_/ /\  /  / /\/\ \//__/ /\  /\ \_/ /)";
    H::setcolor(7); H::gotoxy(49,7); cout << R"(\_/ \_/___,'\/    \/\____/\_\ \/   \/    \/\__/\_\ \/  \___/ )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Default x = 40 , width = 80
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::TxtOutline(int width,int height,int length, int color)
{
    H::HLine(40+width,2+height,80+length,color,220);//top
    H::HLine(40+width,9+height,80+length,color,223);//bot
    //left
    //
    H::HLine(38+width,3+height,2,4,220);
    H::VLine(40+width,2+height,1,4,219);

    H::VLine(38+width,3+height,4,color,219);

    H::HLine(38+width,8+height,2,4,223);
    H::VLine(40+width,7+height,1,4,219);
    //right
    //
    H::HLine(120+length+width,3+height,2,4,220);
    H::VLine(121+length+width,2+height,1,4,219);

    H::VLine(123+length+width,3+height,4,color,219);

    H::HLine(120+length+width,8+height,2,4,223);
    H::VLine(121+length+width,7+height,1,4,219);
    //
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AdminProfileInfoTxt()
{
    TxtOutline(-26,0,52,1);
    tp(7,x+7,y-2);cout<<R"(   _       _           _           ___            __ _ _         _____        __                            _   _             )";
    tp(7,x+7,y-1);cout<<R"(  /_\   __| |_ __ ___ (_)_ __     / _ \_ __ ___  / _(_) | ___    \_   \_ __  / _| ___  _ __ _ __ ___   __ _| |_(_) ___  _ __  )";
    tp(1,x+7,y-0);cout<<R"( //_\\ / _` | '_ ` _ \| | '_ \   / /_)/ '__/ _ \| |_| | |/ _ \    / /\/ '_ \| |_ / _ \| '__| '_ ` _ \ / _` | __| |/ _ \| '_ \ )";
    tp(7,x+7,y+1);cout<<R"(/  _  \ (_| | | | | | | | | | | / ___/| | | (_) |  _| | |  __/ /\/ /_ | | | |  _| (_) | |  | | | | | | (_| | |_| | (_) | | | |)";
    tp(7,x+7,y+2);cout<<R"(\_/ \_/\__,_|_| |_| |_|_|_| |_| \/    |_|  \___/|_| |_|_|\___| \____/ |_| |_|_|  \___/|_|  |_| |_| |_|\__,_|\__|_|\___/|_| |_|)";
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
        H::HLine(x+5,y+21,i,7,205);
        H::HLine(x+87-i,y+21,1,7,205);
    }
    //connect ascii code
    H::gotoxy(x+5,y+5);cout<<char(201);//left to down
    H::gotoxy(x+5,y+21);cout<<char(200);//down to right
    H::gotoxy(x+87,y+5);cout<<char(187);//right to down
    H::gotoxy(x+87,y+21);cout<<char(188);//down to left

    for(int i = 1 ; i <= 8 ; i ++)
    {
        //left
        H::VLine(x+6,y+5,i,7,186);H::delay(10);
        H::VLine(x+6,y+20-i,1,7,186);H::delay(10);

        //right
        H::VLine(x+88,y+5,i,7,186);H::delay(10);
        H::VLine(x+88,y+20-i,1,7,186);H::delay(10);
    }

    tp(4,x+3,27);cout<<R"(                 _                                                            _                                                       )";
    tp(4,x+3,28);cout<<R"(               _(_)_                          wWWWw   _                     _(_)_                          wWWWw   _      wWWWw       )";
    tp(4,x+3,29);cout<<R"(   @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_       @@@@       (_)@(_)   vVVVv     _     @@@@  (___) _(_)_    (___)  @@@@ )";
    tp(4,x+3,30);cout<<R"(  @@()@@ wWWWw  (_))";H::setcolor(7);cout<<R"(\)";H::setcolor(4);cout<<R"(    (___)   _(_)_  @@()@@   )";H::setcolor(7);cout<<R"(Y  )";H::setcolor(4);cout<<R"((_)@(_)     @@()@@ wWWWw  (_))";H::setcolor(7);cout<<R"(\    )";H::setcolor(4);cout<<R"((___)   _(_)_  @@()@@   )";H::setcolor(7);cout<<R"(Y  )";H::setcolor(4);cout<<R"((_)@(_)    )";H::setcolor(7);cout<<R"( Y  )";H::setcolor(4);cout<<R"( @@()@@)";
    tp(4,x+3,31);cout<<R"(   @@@@  (___)     )";H::setcolor(7);cout<<R"(`|/    Y )";H::setcolor(4);cout<<R"(   (_)@(_)  @@@@   )";H::setcolor(7);cout<<R"(\|/   )";H::setcolor(4);cout<<R"((_))";H::setcolor(7);cout<<R"(\      )";H::setcolor(4);cout<<R"( @@@@  (___)     )";H::setcolor(7);cout<<R"(`|/    Y    )";H::setcolor(4);cout<<R"((_)@(_)  @@@@   )";H::setcolor(7);cout<<R"(\|/   )";H::setcolor(4);cout<<R"((_))";H::setcolor(7);cout<<R"(\     \|/)";H::setcolor(4);cout<<R"(   @@@@ )";
    tp(7,x+3,32);cout<<R"(    /      Y       \|    \|/    /(_)    \|      |/      |        /      Y       \|    \|/    /(_)    \|      |/      |      |/   \|   )";
    tp(7,x+3,33);cout<<R"( \ |     \ |/       | / \ | /  \|/       |/    \|      \|/    \ |     \ |/       | / \ | /  \|/       |/    \|      \|/    \|     |/  )";
    tp(7,x+3,34);cout<<R"(   |//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|//     |//   \\|///  \\\|//\\\|/// \|///  \\\|//  \\|//  \\\|//  \\|//\\\|// )";
    tp(2,x+3,35);cout<<R"(^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)";

    tp(1,x+33,y+18);cout<<"BLT Cyber House ";H::setcolor(4);cout<<"(Concept)";

    tp(4,53,37); cout << "Press ";H::setcolor(1);cout <<"[UP] [DOWN]";H::setcolor(4);cout <<" arrow key to move, ";H::setcolor(1);cout <<"[ENTER]";H::setcolor(4);cout <<" to select";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AboutUsTxt()
{   
    TxtOutline(12,0,-24,1);
    tp(7,x+50,y-2);cout<<R"(   _   _                 _           __ )";
    tp(7,x+50,y-1);cout<<R"(  /_\ | |__   ___  _   _| |_   /\ /\/ _\)";
    tp(1,x+50,y-0);cout<<R"( //_\\| '_ \ / _ \| | | | __| / / \ \ \ )";
    tp(7,x+50,y+1);cout<<R"(/  _  \ |_) | (_) | |_| | |_  \ \_/ /\ \)";
    tp(7,x+50,y+2);cout<<R"(\_/ \_/_.__/ \___/ \__,_|\__|  \___/\__/)";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::AboutUs_Design()
{
    tp(7,x+48,y+5); cout << "=> \4 Infrastructure of C++ OOP Course  \4 <=";

    tp(8,x-5,11); cout << R"(                                                      _____                                                                     _____                 )";
    tp(8,x-5,12); cout << R"(                                                    /'     `\                                                                 /'     `\               )";
    tp(8,x-5,13); cout << R"(  __                                           ___/'         `\             __                                           ___/'         `\             )";
    tp(8,x-5,14); cout << R"(/'  `\_                                      /'                \          /'  `\_                                      /'                \            )";
    tp(8,x-5,15); cout << R"(       \___________________________________/'                   `\_______/      \____________________________________/'                   `\_________ )";
    tp(2,x-5,29); cout << R"(                                (`)                                                                       (`)                               (`)       )";
    tp(2,x-5,30); cout << R"(                             _  | |                _                                                   _  | |                _           _  | |       )";
    tp(2,x-5,31); cout << R"(          _                 ( \ |  )  _           ( ) _                             _                 ( \ |  )  _           ( ) _       ( \ |  )  _   )";
    tp(2,x-5,32); cout << R"(       _ ( )                 \ `|  | ( )         _| |/ )                         _ ( )                 \ `|  | ( )         _| |/ )       \ `|  | ( )  )";
    tp(2,x-5,33); cout << R"(      ( \| | _                `\,  |/'/'        ( \  /'                         ( \| | _                `\,  |/'/'        ( \  /'         `\,  |/'/'  )";
    tp(2,x-5,34); cout << R"(       \,. |/ )                 |   /'           \  |                            \,. |/ )                 |   /'           \  |             |   /'    )";
    tp(2,x-5,35); cout << R"(         |  /'                  |  |              | |                              |  /'                  |  |              | |             |  |      )";
    tp(2,x-5,36); cout << R"(         | |                                      | |                              | |                                      | |                       )";
//
    H::VLine(67,17,3,7,186);  
    H::gotoxy(66,18); H::setcolor(7); cout << char (201) << char (205) << char (205); 
    H::gotoxy(64,20); H::setcolor(7); cout << char (205) << char (205) << char (188);

    H::HLine(5,20,38,7,205);
    H::HLine(117,20,38,7,205);

    H::VLine(94,17,3,7,186); 
    H::gotoxy(91,18); H::setcolor(7); cout << char (205) << char (205) << char (187); 
    H::gotoxy(93,20); H::setcolor(7); cout << char (200) << char (205) << char (205);
 //   
    H::VLine(67,24,3,7,186);  
    H::gotoxy(66,25); H::setcolor(7); cout << char (201) << char (205) << char (205); 
    H::gotoxy(64,27); H::setcolor(7); cout << char (205) << char (205) << char (188);

    H::HLine(5,27,38,7,205);
    H::HLine(117,27,38,7,205);

    H::VLine(94,24,3,7,186); 
    H::gotoxy(91,25); H::setcolor(7); cout << char (205) << char (205) << char (187); 
    H::gotoxy(93,27); H::setcolor(7); cout << char (200) << char (205) << char (205);
//

    H::gotoxy(76,16); H::setcolor(7); cout << "TEACHER";
    H::drawBoxDoubleLineWithBG(70,17,20,1,23); H::gotoxy(75,18); H::setcolor(23); cout <<"UON HINSY";

    H::gotoxy(49,18); H::setcolor(7); cout << "MENTOR 1";
    H::drawBoxDoubleLineWithBG(43,19,20,1,23); H::gotoxy(47,20); H::setcolor(23); cout <<"VUTH RACHANA";
    H::gotoxy(103,18); H::setcolor(7); cout << "MENTOR 2";
    H::drawBoxDoubleLineWithBG(97,19,20,1,23); H::gotoxy(101,20); H::setcolor(23); cout <<"CHHEAN SEYHA";

    H::gotoxy(72,23); H::setcolor(7); cout << "OUR TEAM MEMBERS";
    H::drawBoxDoubleLineWithBG(70,24,20,1,23); H::gotoxy(74,25); H::setcolor(23); cout <<"YONG BUNLENG";

    H::drawBoxDoubleLineWithBG(43,26,20,1,23); H::gotoxy(46,27); H::setcolor(23); cout <<"KOY YOTRABOTH";
    H::drawBoxDoubleLineWithBG(97,26,20,1,23); H::gotoxy(100,27); H::setcolor(23); cout <<"SAM SOKUNTHEA";

    H::gotoxy(10,23);H::setcolor(1);
    cout << "To see our information in detail, Please press";
    H::gotoxy(106,23);H::setcolor(71); cout << "number 1";H::setcolor(1); cout << " to enter to our developers' website";

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
    TxtOutline(-5,0,9,1);

    tp(7,x+33,y-2);cout<<R"(   _       __      _   _               __                             __ )";
    tp(7,x+33,y-1);cout<<R"(  /_\     / /  ___| |_| |_ ___ _ __   / _|_ __ ___  _ __ ___    /\ /\/ _\)";
    tp(1,x+33,y-0);cout<<R"( //_\\   / /  / _ \ __| __/ _ \ '__| | |_| '__/ _ \| '_ ` _ \  / / \ \ \ )";
    tp(7,x+33,y+1);cout<<R"(/  _  \ / /__|  __/ |_| ||  __/ |    |  _| | | (_) | | | | | | \ \_/ /\ \)";
    tp(7,x+33,y+2);cout<<R"(\_/ \_/ \____/\___|\__|\__\___|_|    |_| |_|  \___/|_| |_| |_|  \___/\__/)";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::A_Letter_from_Us_Design(int delayTime)
{
    char one[]="We're the scholarship students at ";
    char two[]="[1]ANT Technology Training Center";
    char three[]=", specialize in Mobile Application.";
    char fourth[]="Study For 11 Months From 19 February 2024 To 20 December 2024.";
    char fifth[]="Thanks to the generous support of the ";
    char sixth[]="[2]Ministry of Post and Telecommunication.";
    char seventh[]="This opportunity is allowing us to develop valuable skills in mobile app development and pursue ";
    char eighth[]="exciting careers in the tech industry.";

    charLoop(sizeof(one), x+19, y+8, 3, one, delayTime);charLoop(sizeof(two), x+53, y+8, 4, two, delayTime);charLoop(sizeof(three), x+86, y+8, 3, three, delayTime);//first line
    charLoop(sizeof(fourth), x+39, y+10, 71, fourth, delayTime);//Second line
    charLoop(sizeof(fifth), x+30, y+12, 3, fifth, delayTime);charLoop(sizeof(sixth), x+68, y+12, 4, sixth, delayTime);//Third
    charLoop(sizeof(seventh), x+22, y+14, 23, seventh, delayTime);//Fourth
    charLoop(sizeof(eighth), x+51, y+16, 23, eighth, delayTime);//Fifth
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::A_Letter_from_Us_nonDesign()
{
    tp(3,x+19,y+8);  cout << "We're the scholarship students at ";H::setcolor(4);cout <<"[1]ANT Technology Training Center";H::setcolor(3);cout <<", specialize in Mobile Application.";
    tp(71,x+39,y+10);cout << "Study For 11 Months From 19 February 2024 To 20 December 2024.";
    tp(3,x+30,y+12); cout << "Thanks to the generous support of the ";H::setcolor(4);cout <<"[2]Ministry of Post and Telecommunication.";
    tp(23,x+22,y+14);cout << "This opportunity is allowing us to develop valuable skills in mobile app development and pursue ";
    tp(23,x+51,y+16);cout << "exciting careers in the tech industry.";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::UserMenuTxt()
{   
    TxtOutline(-22,0,45,1);            
    tp(7,29,3);cout<<R"( __    __     _                            _            ___    __ _____                              )";
    tp(7,29,4);cout<<R"(/ / /\ \ \___| | ___ ___  _ __ ___   ___  | |_ ___     / __\  / //__   \   /\  /\___  _   _ ___  ___ )";
    tp(1,29,5);cout<<R"(\ \/  \/ / _ \ |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \   /__\// / /   / /\/  / /_/ / _ \| | | / __|/ _ \)";
    tp(7,29,6);cout<<R"( \  /\  /  __/ | (_| (_) | | | | | |  __/ | || (_) | / \/  \/ /___/ /    / __  / (_) | |_| \__ \  __/)";
    tp(7,29,7);cout<<R"(  \/  \/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/  \_____/\____/\/     \/ /_/ \___/ \__,_|___/\___|)";        
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                END OF DESIGN HEADER FILE
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif