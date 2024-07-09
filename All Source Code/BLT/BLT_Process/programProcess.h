#ifndef  ______MainProgram_Process______
#define  ______MainProgram_Process______
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"../BOTH_Design/designConsole.h"
#include"BLT.h"
#include<cstdlib>

using namespace BLT;
//Inherite Design method to use in here
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class Process: public Design{
    private:
        static const char* getOpenCommand();
    public:
        static void Admin_And_User();
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        static void LogIn_AsAdmin(int cursor);
        static void Admin_Option();
        static void Admin_ChoosingOpt(int num);

        static void AdminProfileInfo();

        static void GamesLst();
        static void SubGameLst(int num);

        static void FoodAndDrinkLst();
        static void SubFoodAndDrink(int num);

        static void ManageUserPayment();
        static void SubManageUserPayment(int num);

        static void ManageUserInfo();
        static void SubManageUserInfo(int num);
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        static void LogIn_AsUser(int cursor);


        static void DisableMaximizeButton();
        static void DisableMinimizeButton();
        static void DisableCloseButton();
        static void OutputHostName(int x, int y, int color);
        static void UrlOpenner(const string& url);
        static void runURL(int argc, char* argv[], string URL);
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char* Process::getOpenCommand()
{
    #ifdef _WIN32
            return "start ";
    #elif defined(__APPLE__)
            return "open ";
    #else
            return "xdg-open ";
    #endif
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::UrlOpenner(const string& url)
{
    string command = getOpenCommand() + url;
    if (std::system(command.c_str()) != 0) {
        std::cerr << "Error opening URL." << std::endl;
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::runURL(int argc, char* argv[], string URL)
{
    string url = URL;
    if (argc > 1) {
        url = argv[1];
    }

    UrlOpenner(url);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::DisableCloseButton()
{
    HWND consoleWindow = GetConsoleWindow();

    if (consoleWindow != NULL) {
        HMENU hMenu = GetSystemMenu(consoleWindow, FALSE);
        if (hMenu != NULL) {
            RemoveMenu(hMenu, SC_CLOSE, MF_BYCOMMAND);
            DrawMenuBar(consoleWindow);
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::DisableMaximizeButton()
{
    HWND consoleWindow = GetConsoleWindow();
    LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
    style &= ~(WS_MAXIMIZEBOX | WS_SIZEBOX);
    SetWindowLong(consoleWindow, GWL_STYLE, style);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::DisableMinimizeButton()
{
    HWND consoleWindow = GetConsoleWindow();
    
    if (consoleWindow != NULL) {
        DWORD style = GetWindowLong(consoleWindow, GWL_STYLE);
        style &= ~WS_MINIMIZEBOX;
        SetWindowLong(consoleWindow, GWL_STYLE, style);
        SetWindowPos(consoleWindow, NULL, 0, 0, 0, 0,
        SWP_NOZORDER | SWP_NOMOVE | SWP_NOSIZE | SWP_FRAMECHANGED);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::OutputHostName(int x, int y, int color)
{
    DWORD size = MAX_COMPUTERNAME_LENGTH + 1;
    wchar_t hostname[MAX_COMPUTERNAME_LENGTH + 1];

    if (GetComputerNameW(hostname, &size)) {
        tp(color, x, y);wcout << hostname << endl;
    } else {
        cerr << "Error: Could not retrieve hostname." << endl;
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::Admin_And_User()
{
    H::setcolor(7);
    outline();
    login_design();//Design of LOG IN

    char press;
    int num = 1;

    H::setcursor(0,0);
       do
        {
            //choice box
            H::drawBoxSingleLineWithBG(x+83,y+10,25,1,153);
            H::drawBoxSingleLineWithBG(x+83,y+14,25,1,153);

            H::setcolor(151);H::gotoxy(x+84,y+11);cout<<"     Administrator     ";
            H::setcolor(151);H::gotoxy(x+84,y+15);cout<<"         User          ";

            if(num==1)
            {
                H::drawBoxSingleLineWithBG(x+83,y+10,25,1,204);
                H::setcolor(201);H::gotoxy(x+84,y+11);cout<<"  => Administrator <=  ";
                H::clearBox(x+23,y+4,36,5,136);//Cls text
                loginAs_Admin_UserTxt(1);
            }
            if(num==2)
            {
                H::drawBoxSingleLineWithBG(x+83,y+14,25,1,204);
                H::setcolor(201);H::gotoxy(x+84,y+15);cout<<"  =>     User      <=  ";
                H::clearBox(x+23,y+4,36,5,136);//Cls text
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

                case 8://delete key
                {
                    exit(0);
                    break;
                }

            }

        }
        while(press != 13);

        H::clearBox(x+4,y+31,140,0,7);

        if(num == 1)
        {
            Admin_User_ClsBox(1);//cls box as choosing option
            LogIn_AsAdmin(1);//Admin option        
        }
        else
        {
            Admin_User_ClsBox(2);//cls box as choosing option
        }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::LogIn_AsAdmin(int cursor)
{
    char AdminUsername[10];
    char AdminPassword[10];
    char press;
    
    while(1){

        int chance = 3;

        while(chance != 0){

            H::setcursor(cursor,20);

            //username
            H::setcolor(249); 
            H::gotoxy(x+20, y+14);H::inputLetter(AdminUsername,10);

            //password
            H::setcolor(249); //137
            H::gotoxy(x+20, y+20);H::hidePassword(AdminPassword,10);

            if(strcmpi(AdminUsername,"Cyber")==0 && strcmpi(AdminPassword,"168")==0)
            {
                Admin_Option(); //Admin Option
                break;
            }
            if(strcmpi(AdminUsername,"Cyber")!=0 || strcmpi(AdminPassword,"168")!=0)
            {
                H::setcursor(0,0);
                H::setcolor(140);H::gotoxy(x+29,y+24);cout<<"You have ";H::setcolor(137);cout<<--chance;H::setcolor(140);cout<<" left";
                loginMsg(1);//input msg

                getch();

                H::clearBox(x+18, y+14, 42, 0,247);//Clear username and password boxes
                H::clearBox(x+18, y+20, 42, 0,247);//Clear username and password boxes
                H::clearBox(x+20, y+24, 34, 1,136);//Clear message
            }

        }

        if(chance == 0)
        {
            for(int i = 1 ; i <= 6 ; i++)
            {   
                H::setcursor(0,0);
                H::setcolor(140);
                H::gotoxy(x+16,y+23);cout<<"You ran out chances! Please wait for   seconds";
                H::setcolor(137);H::gotoxy(x+53,y+23);cout<<6-i;H::delay(999);

                H::clearBox(x+16,y+23,45,0,136);//cls chance msg
                H::setcolor(7);
            }
            
            loginMsg(2);//esc or continue

            press = getch();

            H::clearBox(x+38,y+29,61,0,7);//cls msg

            if(press == 27)
            {
                Admin_And_User();
                break;
            }
        }
    }
    H::setcolor(7);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// void Process::LogIn_AsUser(int cursor)
// {

// }
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::Admin_Option()
{
    H::setConsoleTitle(TEXT("Admin MENU"));
    H::setcursor(0,0);
    while(true)
    {
        H::setcolor(7);
        H::cls();
        
        outline();
        AdminMenuTxt();
        AdminMenu_Design();
        DesktopImg();

        char press;
        int num = 1;
        int choice = 0;

        do
        {
            AdminMenuBoxes();

            tp(151,x+12,y+9);cout<<"Admin Profile Information";
            tp(151,x+25,y+13);cout<<"Games List";
            tp(151,x+15,y+17);cout<<"Food and Drink List";
            tp(151,x+17,y+21);cout<<"Manage User's Information";
            tp(151,x+14,y+25);cout<<"Manage User's Payment";
            tp(151,x+21,y+29);cout<<"Log Out of Account";
            
            if(num == 1)
            {
                H::drawBoxSingleLineWithBG(x+10,y+8,30,1,187);
                tp(188,x+12,y+9);cout<<"Admin Profile Information";
                choice=1;
            }
            if(num == 2)
            {
                H::drawBoxSingleLineWithBG(x+15,y+12,30,1,187);
                tp(188,x+25,y+13);cout<<"Games List";
                choice=2;
            }
            if(num == 3)
            {
                H::drawBoxSingleLineWithBG(x+10,y+16,30,1,187);
                tp(188,x+15,y+17);cout<<"Food and Drink List";
                choice=3;
            }
            if(num == 4)
            {
                H::drawBoxSingleLineWithBG(x+15,y+20,30,1,187);
                tp(188,x+17,y+21);cout<<"Manage User's Information";
                choice=4;
            }   
            if(num == 5)
            {
                H::drawBoxSingleLineWithBG(x+10,y+24,30,1,187);
                tp(188,x+14,y+25);cout<<"Manage User's Payment";
                choice=5;
            }
            if(num == 6)
            {
                H::drawBoxSingleLineWithBG(x+15,y+28,30,1,187);
                tp(188,x+21,y+29);cout<<"Log Out of Account";
                choice=6;
            }

            press = getch();

            switch(press) 
            {
                case 72://up
                {
                    num--;
                    if(num<1)
                    {
                        num=6;
                    }
                    break;
                }
                
                case 80://down
                {
                    num++;
                    if(num>6)
                    {
                        num=1;
                    }
                    break;
                }
            }
        }
        while(press != 13);
        Admin_ChoosingOpt(choice);
    }
}
/******************************************************** */
void Process::Admin_ChoosingOpt(int num)
{
    switch(num)
    {
        case 1:
            AdminProfileInfo();
            break;

        case 2:
            GamesLst();
            break;

        case 3:
            FoodAndDrinkLst();
            break;

        case 4:
            ManageUserInfo();
            break;

        case 5:
           ManageUserPayment();
            break;

        case 6:
            H::setcolor(7);
            H::cls();
            Admin_And_User();
            break;
        
        default:
            break;
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::AdminProfileInfo()
{
    H::setConsoleTitle(TEXT("Admin Profile Information"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    //not yet
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::GamesLst()
{
    H::setConsoleTitle(TEXT("Games List Menu"));
    
    while(true)
    {
        H::setcolor(7);
        H::cls();
        H::setcursor(0,0);
        outline();

        int y=1;
        int x=0;
        char press;

        B::Header_Design();
        B::GameMenuTxt();
        B::CyberTxt();
        
        do
        {
            B::GameMenu_Design();

            if(y==1)
            {
                H::drawBoxDoubleLineWithBG(27,18,18,1,196);
                H::foreColor(199);
                H::gotoxy(32,19); cout <<"ADD GAME";
                x=1;
            }
                if(y==2){
                H::drawBoxDoubleLineWithBG(27,23,18,1,196);
                H::foreColor(199);
                H::gotoxy(31,24); cout <<"VIEW GAME";
                x=2;
            }
                if(y==3){
                H::drawBoxDoubleLineWithBG(27,28,18,1,196);
                H::foreColor(199);
                H::gotoxy(31,29); cout <<"SEARCH GAME";
                x=3;
            }
                if(y==4){
                H::drawBoxDoubleLineWithBG(95,18,18,1,196);
                H::foreColor(199);
                H::gotoxy(98,19); cout <<"REMOVE GAME";
                x=4;
            }
                if(y==5){
                H::drawBoxDoubleLineWithBG(95,23,18,1,196);
                H::foreColor(199);
                H::gotoxy(102,24); cout <<"BACK";
                x=5;
            
            }
            press=getch();

            switch (press)
            {
                case 72:
                    y--;
                    if(y<1){
                        y=5;
                    }
                    break;
                case 80:
                    y++;
                    if(y>5){
                        y=1;
                    }
                    break;
            }
        }
        while (press!=13);

        SubGameLst(x);
    }
}
/******************************************************** */
void Process::SubGameLst(int num)
{   
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press;
    switch(num)
    {
        //input case
        case 1:
        {   
            B::InputGameTxt();
            B::InputGame_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back";
                
                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    //for inputting again
                    break;
                }
            }
        }
        break;
        
        //Display
        case 2:
        {
            B::ViewGameTxt();
            B::ViewGame_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back"; 

                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    break;
                }
            }
        }
        break;

        //Search
        case 3:
        {
            B::SearchGameTxt();
            B::SearchGame_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back"; 

                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    break;
                }
            }
        }
        break;

        //Remove
        case 4:
        {
            B::DeleteGameTxt();
            B::DeleteGame_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back"; 

                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    break;
                }
            }
        }
        break;

        //back
        case 5:
        {
            Admin_Option();
        }
        break;

    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::ManageUserInfo()
{
    H::setConsoleTitle(TEXT("Manage User Information"));

    while(true)
    {
        H::setcolor(7);
        H::cls();
        H::setcursor(0,0);
        outline();

        B::ManageUserInfoTxt();
        B::ManageUserInfo_Design();

        int y=1;
        char press;
        int choice=0;

        do
        {
            H::drawBoxDoubleLineWithBG(30,17,30,1,183);
            H::drawBoxDoubleLineWithBG(30,25,30,1,183);
            H::drawBoxDoubleLineWithBG(30,33,30,1,183);
            H::drawBoxDoubleLineWithBG(96,17,30,1,183);
            H::drawBoxDoubleLineWithBG(96,25,30,1,183);
            H::drawBoxDoubleLineWithBG(96,33,30,1,183);

            H::foreColor(183); H::gotoxy(38,18); cout<<"SIGN UP USER";
            H::foreColor(183); H::gotoxy(38,26); cout<<"VIEW USER INFO";
            H::foreColor(183); H::gotoxy(38,34); cout<<"EDIT USER INFO";
            H::foreColor(183); H::gotoxy(103,18); cout<<"DELETE USER INFO";
            H::foreColor(183); H::gotoxy(102,26); cout<<"SORTING USER HOUR";
            H::foreColor(183); H::gotoxy(109,34); cout<<"BACK";
            if(y==1){
                H::drawBoxDoubleLineWithBG(30,17,30,1,135);
                H::foreColor(135);
                H::gotoxy(38,18); cout <<"SIGN UP USER";
                choice=1;
            }
            if(y==2){
                H::drawBoxDoubleLineWithBG(30,25,30,1,135);
                H::foreColor(135);
                H::gotoxy(38,26); cout <<"VIEW USER INFO";
                choice=2;
            }
            if(y==3){
                H::drawBoxDoubleLineWithBG(30,33,30,1,135);
                H::foreColor(135);
                H::gotoxy(38,34); cout <<"EDIT USER INFO";
                choice=3;
            }
            if(y==4){
                H::drawBoxDoubleLineWithBG(96,17,30,1,135);
                H::foreColor(135);
                H::gotoxy(103,18); cout <<"DELETE USER INFO";
                choice=4;
            }
            if(y==5){
                H::drawBoxDoubleLineWithBG(96,25,30,1,135);
                H::foreColor(135);
                H::gotoxy(102,26); cout <<"SORTING USER HOUR";
                choice=5;
            }
            if(y==6){
                H::drawBoxDoubleLineWithBG(96,33,30,1,135);
                H::foreColor(135);
                H::gotoxy(109,34); cout <<"BACK";
                choice=6;
            }

            press = getch();
            
            switch(press){
                case 72:
                    y--;
                    if(y<1){

                        y=6;
                    }
                    break;
                case 80:
                    y++;
                    if(y>6){
                        y=1;
                    }
                    break;
            }
        }
        while(press!=13);

        SubManageUserInfo(choice);
    }
}
/*********************************************************/
void Process::SubManageUserInfo(int num)
{
   H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press;
    switch(num)
    {
        //input case
        case 1:
        {
            B::SignUpTxt();
            B::SignUp_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back";
                
                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    //for inputting again
                    break;
                }
            }
        }
        break;
        
        //Display
        case 2:
        {
            B::ViewUserInfoTxt();
            B::ViewUserInfo_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back"; 

                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    break;
                }
            }
        }
        break;

        //Edit
        case 3:
        {
            B::UpdateUserInfoTxt();
            B::UpdateUserInfo_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back"; 

                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    break;
                }
            }
        }
        break;

        //Remove
        case 4:
        {
            B::DeleteUserInfoTxt();
            B::DeleteUser_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back"; 

                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    break;
                }
            }
        }
        break;

        //short
        case 5:
        {
            B::SortUserTxt();
            B::SortUser_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back"; 

                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    break;
                }
            }
        }
        break;

        case 6:
        {
            Admin_Option();
        }
        break;

    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::ManageUserPayment()
{
    H::setConsoleTitle(TEXT("Manage User Payment"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();
}
/*********************************************************/
// void Process::SubManageUserPayment(int num)
// {
//     H::setcolor(7);
//     H::cls();
//     H::setcursor(0,0);
//     outline();

// }
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::FoodAndDrinkLst()
{
    H::setConsoleTitle(TEXT("Food and Drink Menu"));
    
    while (true)
    {
        H::setcolor(7);
        H::cls();
        H::setcursor(0,0);
        outline();

        B::FoodMenuTxt();//txt
        B::FoodMenu_Design();
        B::Cyber99Txt();

        int y=1;
        int choice=0;
        char press;

        do
        {
            //option
            H::drawBoxDoubleLineWithBG(41,13,20,1,23);
            H::drawBoxDoubleLineWithBG(69,13,20,1,23);
            H::drawBoxDoubleLineWithBG(98,13,20,1,23);

            H::drawBoxDoubleLineWithBG(41,31,20,1,23);
            H::foreColor(55); H::gotoxy(46,35); cout<<"use ";H::setcolor(52);cout<<" [<-] [->]";H::setcolor(55);cout<<" arrow key to move between option and ";H::setcolor(52);cout<<"[ENTER]";H::setcolor(55);cout<<" to select";
            H::drawBoxDoubleLineWithBG(98,31,20,1,23);
            //label
            H::foreColor(151);
            H::foreColor(23); H::gotoxy(41,14); cout<<"Insert Food & Drinks";
            H::foreColor(23); H::gotoxy(70,14); cout<<"View Food & Drinks";
            H::foreColor(23); H::gotoxy(98,14); cout<<"Search Food & Drinks";

            H::foreColor(23); H::gotoxy(41,32); cout<<"Remove Food & Drinks";
            H::foreColor(23); H::gotoxy(102,32); cout<<"Back to MENU";
            if(y==1)
            {
                 H::drawBoxDoubleLineWithBG(41,13,20,1,199);
                H::foreColor(199);
                H::gotoxy(41,14); cout <<"Insert Food & Drinks";
                choice=1;
            }
            if(y==2)
            {
                H::drawBoxDoubleLineWithBG(69,13,20,1,199);
                H::foreColor(199);
                H::gotoxy(70,14); cout <<"View Food & Drinks";
                choice=2;
            }
            if(y==3)
            {
                H::drawBoxDoubleLineWithBG(98,13,20,1,199);
                H::foreColor(199);
                H::gotoxy(98,14); cout <<"Search Food & Drinks";
                choice=3;
            }
            if(y==4)
            {
                H::drawBoxDoubleLineWithBG(41,31,20,1,199);
                H::foreColor(199);
                H::gotoxy(41,32); cout <<"Remove Food & Drinks";
                choice=4;
            }
            if(y==5)
            {
                H::drawBoxDoubleLineWithBG(98,31,20,1,199);
                H::foreColor(199);
                H::gotoxy(102,32); cout <<"Back to MENU";
                choice=5;
            }
            press = getch();
            
            switch(press){
                case 75:
                    y--;
                    if(y<1){
                        y=5;
                    }
                    break;
                case 77:
                    y++;
                    if(y>5){
                        y=1;
                    }
                    break;
            }
        }
        while(press!=13);

        SubFoodAndDrink(choice);
    }
}
/*********************************************************/
void Process::SubFoodAndDrink(int num)
{
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press;
    switch(num)
    {
        //input case
        case 1:
        {
            B::InputTxt();
            B::Input_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back";
                
                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    //for inputting again
                    break;
                }
            }
        }
        break;
        
        //Display
        case 2:
        {
            B::ViewTxt();
            B::View_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back"; 

                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    break;
                }
            }
        }
        break;

        //Search
        case 3:
        {
            B::SearchTxt();
            B::Search_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back"; 

                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    break;
                }
            }
        }
        break;

        //Remove
        case 4:
        {
            B::DeleteTxt();
            B::Delete_Design();

            while(1)
            {
                tp(2,x+70,y+33);cout<<"Press [ESC] to go back"; 

                press = getch();
                
                if(press == 27)
                {
                    break;
                }
                else if(press == 13)
                {
                    break;
                }
            }
        }
        break;

        //back
        case 5:
        {
            Admin_Option();
        }
        break;
    }

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*

*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif