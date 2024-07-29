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
        static void charLoop(int characters, int xAxis, int yAxis, int color, const char* text, int DelayTime);
        static void loginMsg(int opt);
        static void message(int n, int width, int height);
        static void LoadingAnimation();
        static void ExpandBoxAnimation();
        static void ShrinkBox(int width, int height, int xOffset, int yOffset);
        static void ShrinkBoxAnimation();
        static void DinosaurArt(int num);
        static void DinosaurAnimation();
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
    H::setcolor(3);H::gotoxy(3,0);  cout << "\21";
    H::HLine(4,0,72,3,196);
    H::setcolor(3);H::gotoxy(76,0);  cout << "\20";
    H::setcolor(3);H::gotoxy(83,0);  cout << "\21";
    H::HLine(84,0,72,3,196);
    H::setcolor(3);H::gotoxy(156,0);  cout << "\20";
    H::setcolor(3);H::gotoxy(77,0); cout << "B L T";
    //bot
    H::setcolor(3);H::gotoxy(3,39);  cout << "\21";
    H::HLine(4,39,72,3,196);
    H::setcolor(3);H::gotoxy(76,39);  cout << "\20";
    H::setcolor(3);H::gotoxy(83,39);  cout << "\21";
    H::HLine(84,39,72,3,196);
    H::setcolor(3);H::gotoxy(156,39);  cout << "\20";
    H::setcolor(3);H::gotoxy(78,39); cout << "B L T";

    // //left
    H::setcolor(3);H::gotoxy(1,1); cout << "\36";
    H::VLine(2,1,16,3,179);
    H::setcolor(3);H::gotoxy(1,17); cout << "\37";

    H::gotoxy(1,18);H::setcolor(3); cout <<"B";
    H::gotoxy(1,19);H::setcolor(3); cout <<"L";
    H::gotoxy(1,20);H::setcolor(3); cout <<"T";

    H::setcolor(3);H::gotoxy(1,21); cout << "\36";
    H::VLine(2,21,16,3,179);
    H::setcolor(3);H::gotoxy(1,38); cout << "\37";

    // //right
    H::setcolor(3);H::gotoxy(158,1); cout << "\36";
    H::VLine(159,1,16,3,179);
    H::setcolor(3);H::gotoxy(158,17); cout << "\37";

    H::gotoxy(158,18);H::setcolor(3); cout <<"B";
    H::gotoxy(158,19);H::setcolor(3); cout <<"L";
    H::gotoxy(158,20);H::setcolor(3); cout <<"T";

    H::setcolor(3);H::gotoxy(158,21); cout << "\36";
    H::VLine(159,21,16,3,179);
    H::setcolor(3);H::gotoxy(158,38); cout << "\37";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::adminSelectionOpt(int num)
{
    if(num == 1)
    {
        for(int i = 1 ; i <= 15 ; i ++)
        {
            H::delay(20);

            H::setcolor(7);
            H::gotoxy(18+i,13); cout<<" ";
            H::gotoxy(18+i,14); cout<<" ";
            H::gotoxy(18+i,15); cout<<" ";

            H::gotoxy(51-i,13); cout<<" ";
            H::gotoxy(51-i,14); cout<<" ";
            H::gotoxy(51-i,15); cout<<" ";

            //text
            H::setcolor(204);
            H::gotoxy(85+i,32);cout<<" ";
            H::gotoxy(85+i,33);cout<<" ";
            H::gotoxy(85+i,34);cout<<" ";

            H::gotoxy(115-i,32);cout<<" ";
            H::gotoxy(115-i,33);cout<<" ";
            H::gotoxy(115-i,34);cout<<" ";

            if(i == 14)
            {
                H::setcolor(199);H::gotoxy(87,33);cout<<"Admin Profile Information";

            }
            
        }
    }
    else if(num == 2)
    {
        for(int i = 1 ; i <= 15 ; i ++)
        {
            H::delay(20);

            H::setcolor(7);
            H::gotoxy(23+i,17); cout<<" ";
            H::gotoxy(23+i,18); cout<<" ";
            H::gotoxy(23+i,19); cout<<" ";

            H::gotoxy(56-i,17); cout<<" ";
            H::gotoxy(56-i,18); cout<<" ";
            H::gotoxy(56-i,19); cout<<" ";

            //text
            H::setcolor(204);
            H::gotoxy(85+i,32);cout<<" ";
            H::gotoxy(85+i,33);cout<<" ";
            H::gotoxy(85+i,34);cout<<" ";

            H::gotoxy(115-i,32);cout<<" ";
            H::gotoxy(115-i,33);cout<<" ";
            H::gotoxy(115-i,34);cout<<" ";

            if(i == 14)
            {
                H::setcolor(199);H::gotoxy(95,33);cout<<"Games List";

            }
            
        }
    }
    else if(num == 3)
    {
        for(int i = 1 ; i <= 15 ; i ++)
        {
            H::delay(20);

            H::setcolor(7);
            H::gotoxy(18+i,21); cout<<" ";
            H::gotoxy(18+i,22); cout<<" ";
            H::gotoxy(18+i,23); cout<<" ";

            H::gotoxy(51-i,21); cout<<" ";
            H::gotoxy(51-i,22); cout<<" ";
            H::gotoxy(51-i,23); cout<<" ";

            //text
            H::setcolor(204);
            H::gotoxy(85+i,32);cout<<" ";
            H::gotoxy(85+i,33);cout<<" ";
            H::gotoxy(85+i,34);cout<<" ";

            H::gotoxy(115-i,32);cout<<" ";
            H::gotoxy(115-i,33);cout<<" ";
            H::gotoxy(115-i,34);cout<<" ";

            if(i == 14)
            {
                H::setcolor(199);H::gotoxy(90,33);cout<<"Food and Drink List";

            }
            
        }
    }
    else if(num == 4)
    {
        for(int i = 1 ; i <= 15 ; i ++)
        {
            H::delay(20);

            H::setcolor(7);
            H::gotoxy(23+i,25); cout<<" ";
            H::gotoxy(23+i,26); cout<<" ";
            H::gotoxy(23+i,27); cout<<" ";

            H::gotoxy(56-i,25); cout<<" ";
            H::gotoxy(56-i,26); cout<<" ";
            H::gotoxy(56-i,27); cout<<" ";

            //text
            H::setcolor(204);
            H::gotoxy(85+i,32);cout<<" ";
            H::gotoxy(85+i,33);cout<<" ";
            H::gotoxy(85+i,34);cout<<" ";

            H::gotoxy(115-i,32);cout<<" ";
            H::gotoxy(115-i,33);cout<<" ";
            H::gotoxy(115-i,34);cout<<" ";

            if(i == 14)
            {
                H::setcolor(199);H::gotoxy(87,33);cout<<"Manage User's Information";

            }
            
        }
    }
    else if(num == 5)
    {
         for(int i = 1 ; i <= 15 ; i ++)
        {
            H::delay(20);

            H::setcolor(7);
            H::gotoxy(18+i,29); cout<<" ";
            H::gotoxy(18+i,30); cout<<" ";
            H::gotoxy(18+i,31); cout<<" ";

            H::gotoxy(51-i,29); cout<<" ";
            H::gotoxy(51-i,30); cout<<" ";
            H::gotoxy(51-i,31); cout<<" ";

            //text
            H::setcolor(204);
            H::gotoxy(85+i,32);cout<<" ";
            H::gotoxy(85+i,33);cout<<" ";
            H::gotoxy(85+i,34);cout<<" ";

            H::gotoxy(115-i,32);cout<<" ";
            H::gotoxy(115-i,33);cout<<" ";
            H::gotoxy(115-i,34);cout<<" ";

            if(i == 14)
            {
                H::setcolor(199);H::gotoxy(89,33);cout<<"Manage User's Payment";

            }
            
        }
    }
    else if(num == 6)
    {
        for(int i = 1 ; i <= 15 ; i ++)
        {
            H::delay(20);

            H::setcolor(7);
            H::gotoxy(23+i,33); cout<<" ";
            H::gotoxy(23+i,34); cout<<" ";
            H::gotoxy(23+i,35); cout<<" ";

            H::gotoxy(56-i,33); cout<<" ";
            H::gotoxy(56-i,34); cout<<" ";
            H::gotoxy(56-i,35); cout<<" ";

            //text
            H::setcolor(204);
            H::gotoxy(85+i,32);cout<<" ";
            H::gotoxy(85+i,33);cout<<" ";
            H::gotoxy(85+i,34);cout<<" ";

            H::gotoxy(115-i,32);cout<<" ";
            H::gotoxy(115-i,33);cout<<" ";
            H::gotoxy(115-i,34);cout<<" ";

            if(i == 14)
            {
                H::setcolor(199);H::gotoxy(91,33);cout<<"Log Out of Account";

            }
            
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
            H::setcolor(140);H::gotoxy(x+24,y+28);cout<<"Press any ";
            H::setcolor(color);cout<<"[key]";H::setcolor(140);cout<<" to continue";

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
                H::setcolor(3); H::gotoxy(50+i,37); cout << char(92);
                H::setcolor(3); H::gotoxy(109-i,37); cout << char(47);
                H::delay(50);
            }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::interface_design()
{
    H::setConsoleTitle(TEXT("BLT Cyber House Management System"));
    ExpandBoxAnimation();


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
    //line left
    H::HLine(10,2,20,7,220);
    H::HLine(15,3,20,7,220);
    H::HLine(20,4,20,7,220);
    H::HLine(15,5,20,7,220);
    H::HLine(10,6,20,7,220);
    H::HLine(5,7,20,7,220);
    H::HLine(10,8,20,7,220);
    H::HLine(15,9,20,7,220);
    H::HLine(10,10,20,7,220);
    H::HLine(5,11,20,7,220);

    H::HLine(130,2,20,7,220);
    H::HLine(125,3,20,7,220);
    H::HLine(120,4,20,7,220);
    H::HLine(125,5,20,7,220);
    H::HLine(130,6,20,7,220);
    H::HLine(135,7,20,7,220);
    H::HLine(130,8,20,7,220);
    H::HLine(125,9,20,7,220);
    H::HLine(130,10,20,7,220);
    H::HLine(135,11,20,7,220);
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
        H::gotoxy(37+i,19); cout << " ";
        H::delay(10);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::DinosaurAnimation()
{
    H::setcursor(0,0);

    int x = 83;

    while(true)
    {
        DinosaurArt(x);
        x-=3;

        if(x <= 5)
        {
            // H::cls();
            // x = 90;
            break;
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Design::DinosaurArt(int num)
{
    H::setcolor(1); H::gotoxy(num,22); cout << R"(                          .       .                                 )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,23); cout << R"(                        / `.   .' \                                 )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,24); cout << R"(                .---.  <    > <    >  .---.                         )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,25); cout << R"(                |    \  \ - ~ ~ - /  /    |                         )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,26); cout << R"(                 ~-..-~             ~-..-~                          )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,27); cout << R"(             \~~~\.'                    `./~~~/                     )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,28); cout << R"(              \__/                        \__/                      )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,29); cout << R"(               /                  .-    .  \                        )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,30); cout << R"(        _._ _.-    .-~ ~-.       /       }   \/~~~/                 )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,31); cout << R"(    _.-'q  }~     /       }     {        ;    \__/                  )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,32); cout << R"(   {'__,  /      (       /      {       /      `. ,~~|   .     .    )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,33); cout << R"(    `''''='~~-.__(      /_      |      /- _      `..-'   \\   //    )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,34); cout << R"(                / \   =/  ~~--~~{    ./|    ~-.     `-..__\\_//_.-' )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,35); cout << R"(               {   \  +\         \  =\ (        ~ - . _ _ _..---~   )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,36); cout << R"(               |  | {   }         \   \_\                           )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,37); cout << R"(              '---.o___,'       .o___,'                             )" ; H::setcolor(7); cout << " ";
    H::delay(20);   

    H::setcolor(1); H::gotoxy(num,22); cout << R"(                        .       .                                   )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,23); cout << R"(                      / `.   .' \                                   )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,24); cout << R"(              .---.  <    > <    >  .---.                           )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,25); cout << R"(              |    \  \ - ~ ~ - /  /    |                           )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,26); cout << R"(               ~-..-~             ~-..-~                            )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,27); cout << R"(           \~~~\.'                    `./~~~/                       )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,28); cout << R"(            \__/                        \__/                        )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,29); cout << R"(             /                  .-    .  \                          )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,30); cout << R"(      _._ _.-    .-~ ~-.       /       }   \/~~~/                   )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,31); cout << R"(  _.-'q  }~     /       }     {        ;    \__/                    )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,32); cout << R"( {'__,  /      (       /      {       /      `. ,~~|   .     .      )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,33); cout << R"(  `''''='~~-.__(      /_      |      /- _      `..-'   \\   //      )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,34); cout << R"(              / \   =/  ~~--~~{    ./|    ~-.     `-..__\\_//_.-'   )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,35); cout << R"(             {   \  +\         \  =\ (        ~ - . _ _ _..---~     )" ; H::setcolor(7); cout << " ";
    H::setcolor(1); H::gotoxy(num,36); cout << R"(             |  | {   }         \   \_\                             )" ; H::setcolor(7); cout << " ";   
    H::setcolor(1); H::gotoxy(num,37); cout << R"(             '---.o___,'       .o___,'                              )" ; H::setcolor(7); cout << " ";
    H::delay(20);
}
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
    H::drawBoxDoubleLineWithBG(x+10,y+8 ,30,1,151);     
    H::drawBoxDoubleLineWithBG(x+15,y+12,30,1,151);      
    H::drawBoxDoubleLineWithBG(x+10,y+16,30,1,151);
    H::drawBoxDoubleLineWithBG(x+15,y+20,30,1,151);
    H::drawBoxDoubleLineWithBG(x+10,y+24,30,1,151);
    H::drawBoxDoubleLineWithBG(x+15,y+28,30,1,151);
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
        tp(4,x+69-i,y-4);cout<<char(204);H::HLine(x+70-i,y-4,1,4,7);
        H::HLine(x+70,y-4,i,4,7);H::setcolor(4);cout<<char(185);
        //bottom
        tp(4,x+69-i,y+3);cout<<char(204);H::HLine(x+70-i,y+3,1,4,7);
        H::HLine(x+70,y+3,i,4,7);H::setcolor(4);cout<<char(185);
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
    H::VLine(x+127,y-5,8,3,219);
    H::VLine(x+126,y-4,6,4,219);
    H::VLine(x+125,y-5,8,3,219);
    H::VLine(x+124,y-4,6,4,219);
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
    tp(1,x+48,y+4); cout << "=> \4 Infrastructure of C++ OOP Course  \4 <=";

    tp(8,x-5,10); cout << R"(                                                      _____                                                                     _____                 )";
    tp(8,x-5,11); cout << R"(                                                    /'     `\                                                                 /'     `\               )";
    tp(8,x-5,12); cout << R"(  __                                           ___/'         `\             __                                           ___/'         `\             )";
    tp(8,x-5,13); cout << R"(/'  `\_                                      /'                \          /'  `\_                                      /'                \            )";
    tp(8,x-5,14); cout << R"(       \___________________________________/'                   `\_______/      \____________________________________/'                   `\_________ )";
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

    H::gotoxy(35,29);H::setcolor(1);cout << "To see our information in detail, Please ";H::setcolor(71); cout << "press number 1";H::setcolor(1); cout << " to enter to our developers website";

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