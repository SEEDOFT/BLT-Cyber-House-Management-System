#ifndef  ______MainProgram_Process______
#define  ______MainProgram_Process______
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"../BOTH_Design/designConsole.h"
#include"BLT.h"
#include"../Leng_Process_Code/File.h"
#include<cstdlib>
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace BLT;
//Inherite Design method to use in here
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class Process: public Design
{

    private:

        static const char* getOpenCommand();

    public:

        static void Admin_And_User();
        /**********************************/
        //@@@       ADMIN METHODS       @@//
        static void LogIn_AsAdmin(int cursor);
        static void Admin_Option();
        static void Admin_ChoosingOpt(int num);

        static void AdminProfileInfo();
        static void SubAdminProfileInfo(int num);
        static void AboutUs();
        static void A_LetterFromUs();

        static void GamesLst();
        static void SubGameLst(int num);
        static void InsertGame();
        static void ViewGame();
        static void SearchGame();
        static void RemoveGame();

        static void FoodAndDrinkLst();
        static void SubFoodAndDrink(int num);
        static void InsertFoodDrink();
        static void ViewFoodDrink();
        static void SearchFoodDrink();
        static void UpdateFoodDrink();
        static void RemoveFoodDrink();

        static void ManageUserPayment();
        static void SubManageUserPayment(int num);

        static void ManageUserInfo();
        static void SubManageUserInfo(int num);
        static void InsertUser();
        static void ViewUser();
        static void SearchUserData();
        static void EditUserInfo();
        static void RemoveUser();
        static void SortUser();
        /**********************************/
        //@@@       USER METHODS       @@//
        static void LogIn_AsUser(int cursor);
        static void User_Option();
        static void User_ChoosingOpt(int num);
        //@@@       USER SUB METHODS       @@//
        static void ViewProfileInfo();
        static void BuyHourToPlay();
        static void BuyFoodDrink();
        static void ViewInvoice();
        //@@@       END OF METHODS       @@//
        /**********************************/
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
//                              Login as Admin or User
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::Admin_And_User()
{
    H::setcolor(7);
    outline();
    Login_Design();//Design of LOG IN

    char press;
    int num = 1;
    H::setcursor(0,0);

    while(1)
    {

       do
        {
            //choice box
            H::drawBoxSingleLineWithBG(x+84,y+15,25,1,153);
            H::drawBoxSingleLineWithBG(x+84,y+19,25,1,153);

            H::setcolor(151);H::gotoxy(x+84,y+16);cout<<"     Administrator     ";
            H::setcolor(151);H::gotoxy(x+84,y+20);cout<<"         User          ";

            if(num==1)
            {
                H::drawBoxSingleLineWithBG(x+84,y+15,25,1,204);
                H::setcolor(201);H::gotoxy(x+85,y+16);cout<<"  => Administrator <=  ";
                H::clearBox(x+23,y+8,36,5,136);//Cls text
                LoginAs_Admin_UserTxt(1);
            }
            if(num==2)
            {
                H::drawBoxSingleLineWithBG(x+84,y+19,25,1,204);
                H::setcolor(201);H::gotoxy(x+85,y+20);cout<<"  =>     User      <=  ";
                H::clearBox(x+23,y+8,36,5,136);//Cls text
                LoginAs_Admin_UserTxt(2);
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

        H::clearBox(x+4,38,140,0,7);

        switch(num)
        {
            case 1:
                Admin_User_ClsBox(1);
                LogIn_AsAdmin(1);
                break;
            
            case 2:
                Admin_User_ClsBox(2);
                File::user_login();
                break;
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                          Login As Administrator
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
            H::gotoxy(x+20, y+17);H::inputLetter(AdminUsername,10);

            //password
            H::setcolor(249); //137
            H::gotoxy(x+20, y+23);H::hidePassword(AdminPassword,10);

            if(strcmp(AdminUsername,"Cyber")==0 && strcmp(AdminPassword,"168")==0)
            {
                Admin_Option(); //Admin Option
                break;
            }
            if(strcmp(AdminUsername,"Cyber")!=0 || strcmp(AdminPassword,"168")!=0)
            {
                H::setcursor(0,0);
                H::setcolor(140);H::gotoxy(x+29,y+27);cout<<"You have ";H::setcolor(137);cout<<--chance;H::setcolor(140);cout<<" left";
                loginMsg(1);//input msg

                getch();

                H::clearBox(x+19, y+18, 42, 0,247);//Clear username and password boxes
                H::clearBox(x+19, y+24, 42, 0,247);//Clear username and password boxes
                H::clearBox(x+23, y+27, 34, 1,136);//Clear message
            }

        }

        if(chance == 0)
        {
            for(int i = 1 ; i <= 6 ; i++)
            {   
                H::setcursor(0,0);
                H::setcolor(140);
                H::gotoxy(x+17,y+27);cout<<"You ran out chances! Please wait for   seconds";
                H::setcolor(137);H::gotoxy(x+54,y+27);cout<<6-i;H::delay(999);

                H::clearBox(x+17,y+27,45,0,136);//cls chance msg
                H::setcolor(7);
            }
            
            loginMsg(2);//esc or continue

            press = getch();

            H::clearBox(x+38,38,61,0,7);//cls msg

            if(press == 27)
            {
                break;
            }
            else
            {
                continue;
            }
        }
    }
    H::setcolor(7);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                          Admin Option
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
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                          Admin Profile Option
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::AdminProfileInfo()
{
    H::setConsoleTitle(TEXT("Admin Profile Information"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    while(true)
    {
        H::setcolor(7);
        H::cls();
        H::setcursor(0,0);
        outline();

        AdminProfileInfoTxt();
        AdminProfileInfo_Design();

        int y=1;
        int choice=0;
        char press;

        do
        {   
            H::drawBoxDoubleLineWithBG(105,10,30,1,187);
            H::drawBoxDoubleLineWithBG(105,16,30,1,187);
            H::drawBoxDoubleLineWithBG(105,22,30,1,187);

            if(y == 1)
            {
                H::drawBoxDoubleLineWithBG(105,10,30,1,68);
                choice=1;
            }
            if(y == 2)
            {
                H::drawBoxDoubleLineWithBG(105,16,30,1,68);
                choice=2;
            }
            if(y == 3)
            {
                H::drawBoxDoubleLineWithBG(105,22,30,1,68);
                choice=3;
            }

            press = getch();

            switch(press)
            {
                case 72:
                    y--;
                    {
                        if(y<1)
                        {
                            y=3;
                        }
                    }
                    break;
                
                case 80:
                    y++;
                    {
                        if(y>3)
                        {
                            y=1;
                        }
                    }
                    break;
            }
            
        } while (press != 13);
        SubAdminProfileInfo(choice);
    }
}
/******************************************************** */
void Process::SubAdminProfileInfo(int num)
{
    char press;
    switch(num)
    {
        case 1:
            while(1)
            {
                AboutUs();

                press = getch();

                if(press == 27)
                {
                    break;
                }else
                {
                    continue;
                }
            }
            break;
        case 2:
            while(1)
                {
                    A_LetterFromUs();

                    press = getch();

                    if(press == 27)
                    {
                        break;
                    }else
                    {
                        continue;
                    }
                }
            break;
        case 3:
            H::setcolor(7);
            H::cls();
            Admin_Option();
            break;
    }
}
/******************************************************** */
void Process::AboutUs()
{
    H::setConsoleTitle(TEXT("About Us"));
    H::setcolor(7);
    H::cls();
    outline();
    AboutUsTxt();
    AboutUs_Design();
}
/******************************************************** */
void Process::A_LetterFromUs()
{
    H::setConsoleTitle(TEXT("A letter from Developers"));
    H::setcolor(7);
    H::cls();
    outline();

    A_Letter_from_UsTxt();
    A_Letter_from_Us_Animation();
    A_Letter_from_Us_Design();
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
                H::drawBoxDoubleLineWithBG(37,18,18,1,196);
                H::foreColor(199);
                H::gotoxy(42,19); cout <<"ADD GAME";
                x=1;
            }
                if(y==2){
                H::drawBoxDoubleLineWithBG(37,23,18,1,196);
                H::foreColor(199);
                H::gotoxy(42,24); cout <<"VIEW GAME";
                x=2;
            }
                if(y==3){
                H::drawBoxDoubleLineWithBG(37,28,18,1,196);
                H::foreColor(199);
                H::gotoxy(40,29); cout <<"SEARCH GAME";
                x=3;
            }
                if(y==4){
                H::drawBoxDoubleLineWithBG(105,18,18,1,196);
                H::foreColor(199);
                H::gotoxy(108,19); cout <<"REMOVE GAME";
                x=4;
            }
                if(y==5){
                H::drawBoxDoubleLineWithBG(105,23,18,1,196);
                H::foreColor(199);
                H::gotoxy(112,24); cout <<"BACK";
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
    switch(num)
    {
        //input case
        case 1:
            InsertGame();
            break;
        
        //Display
        case 2:
            ViewGame();
            break;

        //Search
        case 3:
            SearchGame();
            break;

        //Remove
        case 4:  
            RemoveGame();
            break;

        //back
        case 5:
            Admin_Option();
            break;
    }
}
/******************************************************** */
void Process::InsertGame()
{
    H::setConsoleTitle(TEXT("Insert Game Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::InputGameTxt();
    B::InputGame_Design();
    H::setcursor(1,0);
    File::insertFile(2);
    H::setcursor(0,0);

    while (1)
    {
        message(1,0,36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            InsertGame();
            break;
        }
    }
}
/******************************************************** */
void Process::ViewGame()
{
    H::setConsoleTitle(TEXT("View Game Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::ViewGameTxt();
    B::ViewGame_Design();
    File::viewFile(2);

    while (1)
    {
        message(2,0,36);

        press = getch();

        if (press == 27)
        {
            break;
        }
    }
}
/******************************************************** */
void Process::SearchGame()
{
    H::setConsoleTitle(TEXT("Search Game Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::SearchGameTxt();
    B::SearchGame_Design();
    H::setcursor(1,0);
    File::searchFile(2);
    H::setcursor(0,0);
    while (1)
    {
        message(1,0,11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            SearchGame();
            break;
        }
    }
}
/******************************************************** */
void Process::RemoveGame()
{
    H::setConsoleTitle(TEXT("Remove Game Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::DeleteGameTxt();
    B::DeleteGame_Design();
    H::setcursor(1,0);
    File::deleteFile(2);
    H::setcursor(0,0);
    while (1)
    {
        message(1,0,11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            RemoveGame();
            break;
        }
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
            H::drawBoxDoubleLineWithBG(30,22,30,1,183);
            H::drawBoxDoubleLineWithBG(30,27,30,1,183);
            H::drawBoxDoubleLineWithBG(30,32,30,1,183);

            H::drawBoxDoubleLineWithBG(99,17,30,1,183);
            H::drawBoxDoubleLineWithBG(99,24,30,1,183);
            H::drawBoxDoubleLineWithBG(99,32,30,1,183);

            H::foreColor(183); H::gotoxy(38,18); cout<<"SIGN UP USER";
            H::foreColor(183); H::gotoxy(38,23); cout<<"VIEW USER INFO";
            H::foreColor(183); H::gotoxy(37,28); cout<<"SEARCH USER INFO";
            H::foreColor(183); H::gotoxy(38,33); cout<<"EDIT USER INFO";

            H::foreColor(183); H::gotoxy(106,18); cout<<"DELETE USER INFO";
            H::foreColor(183); H::gotoxy(107,25); cout<<"SORTING USER";
            H::foreColor(183); H::gotoxy(112,33); cout<<"BACK";

            if(y==1){
                H::drawBoxDoubleLineWithBG(30,17,30,1,135);
                H::foreColor(135);
                H::gotoxy(38,18); cout <<"SIGN UP USER";
                choice=1;
            }
            if(y==2){
                H::drawBoxDoubleLineWithBG(30,22,30,1,135);
                H::foreColor(135);
                H::gotoxy(38,23); cout <<"VIEW USER INFO";
                choice=2;
            }
            if(y==3)
            {
                H::drawBoxDoubleLineWithBG(30,27,30,1,135);
                H::foreColor(135); 
                H::gotoxy(37,28); cout<<"SEARCH USER INFO";
                choice=3;
            }
            if(y==4){
                H::drawBoxDoubleLineWithBG(30,32,30,1,135);
                H::foreColor(135);
                H::gotoxy(38,33); cout <<"EDIT USER INFO";
                choice=4;
            }
            if(y==5){
                H::drawBoxDoubleLineWithBG(99,17,30,1,135);
                H::foreColor(135);
                H::gotoxy(106,18); cout <<"DELETE USER INFO";
                choice=5;
            }
            if(y==6){
                H::drawBoxDoubleLineWithBG(99,24,30,1,135);
                H::foreColor(135);
                H::gotoxy(107,25); cout <<"SORTING USER";
                choice=6;
            }
            if(y==7){
                H::drawBoxDoubleLineWithBG(99,32,30,1,135);
                H::foreColor(135);
                H::gotoxy(112,33); cout <<"BACK";
                choice=7;
            }

            press = getch();
            
            switch(press){
                case 72:
                    y--;
                    if(y<1){

                        y=7;
                    }
                    break;
                case 80:
                    y++;
                    if(y>7){
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
    switch(num)
    {
        //input case
        case 1:
            InsertUser();
            break;
        
        //Display
        case 2:
            ViewUser();
            break;
        
        //Search
        case 3:
            SearchUserData();
            break;

        //Edit
        case 4:
            EditUserInfo();
            break;

        //Remove
        case 5:
            RemoveUser();
            break;

        //short
        case 6:
            SortUser();
            break;

        case 7:
            Admin_Option();
            break;

    }
}
/*********************************************************/
void Process::InsertUser()
{
    H::setConsoleTitle(TEXT("Insert User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::SignUpTxt();
    B::SignUp_Design();
    H::setcursor(1,0);
    File::insertFile(3);
    H::setcursor(0,0);

    while (1)
    {
        message(3,0,38);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            InsertUser();
            break;
        }
    }
}
/*********************************************************/
void Process::ViewUser()
{
    H::setConsoleTitle(TEXT("View User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::ViewUserInfoTxt();
    B::ViewUserInfo_Design();
    File::viewFile(3);

    while (1)
    {
        message(2,0,36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            ViewUser();
            break;
        }
    }
}
/*********************************************************/
void Process::SearchUserData()
{
    H::setConsoleTitle(TEXT("Search User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::SearchUserTxt();
    B::SearchUser_Design();
    H::setcursor(1,0);
    File::searchFile(3);
    H::setcursor(0,0);

    while (1)
    {
        message(1,0,11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            SearchUserData();
            break;
        }
    }
}
/*********************************************************/
void Process::EditUserInfo()
{
    H::setConsoleTitle(TEXT("Edit User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::UpdateUserInfoTxt();
    B::UpdateUserInfo_Design();
    H::setcursor(1,0);
    File::updateFile(3);
    H::setcursor(0,0);

    while (1)
    {
        message(1,0,11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            EditUserInfo();
            break;
        }
    }
}
/*********************************************************/
void Process::RemoveUser()
{
    H::setConsoleTitle(TEXT("Remove User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::DeleteUserInfoTxt();
    B::DeleteUserInfo_Design();
    H::setcursor(1,0);
    File::deleteFile(3);
    H::setcursor(0,0);

    while (1)
    {
        message(1,0,11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            RemoveUser();
            break;
        }
    }
}
/*********************************************************/
void Process::SortUser()
{
    H::setConsoleTitle(TEXT("Remove User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::SortUserTxt();
    B::SortUser_Design();

    while (1)
    {
        message(2,0,36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            SortUser();
            break;
        }
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
        H::foreColor(55); H::gotoxy(46,35); cout<<"use ";H::setcolor(52);cout<<" [<-] [->]";H::setcolor(55);cout<<" arrow key to move between option and ";H::setcolor(52);cout<<"[ENTER]";H::setcolor(55);cout<<" to select";

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
            H::drawBoxDoubleLineWithBG(69,31,20,1,23);
            H::drawBoxDoubleLineWithBG(98,31,20,1,23);
            //label
            H::foreColor(23); H::gotoxy(41,14); cout<<"Insert Food & Drinks";
            H::foreColor(23); H::gotoxy(70,14); cout<<"View Food & Drinks";
            H::foreColor(23); H::gotoxy(98,14); cout<<"Search Food & Drinks";
            H::foreColor(23); H::gotoxy(41,32); cout <<"Update Food & Drinks";
            H::foreColor(23); H::gotoxy(69,32); cout<<"Remove Food & Drinks";
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
                H::gotoxy(41,32); cout <<"Update Food & Drinks";
                choice=4;
            }
            if(y==5)
            {
                H::drawBoxDoubleLineWithBG(69,31,20,1,199);
                H::foreColor(199);
                H::gotoxy(69,32); cout <<"Remove Food & Drinks";
                choice=5;
            }
            if(y==6)
            {
                H::drawBoxDoubleLineWithBG(98,31,20,1,199);
                H::foreColor(199);
                H::gotoxy(102,32); cout <<"Back to MENU";
                choice=6;
            }
            press = getch();
            
            switch(press){
                case 75:
                    y--;
                    if(y<1){
                        y=6;
                    }
                    break;
                case 77:
                    y++;
                    if(y>6){
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
    switch(num)
    {
        //input case
        case 1: 
            InsertFoodDrink();
            break;
        
        //Display
        case 2:
            ViewFoodDrink();
            break;

        //Search
        case 3:
            SearchFoodDrink();
            break;

        //Update
        case 4:
            UpdateFoodDrink();
            break;
        //Remove
        case 5:
            RemoveFoodDrink();
            break;

        //back
        case 6:
            Admin_Option();
            break;
    }
}
/*********************************************************/
void Process::InsertFoodDrink()
{
    H::setConsoleTitle(TEXT("Insert Food & Drink Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::InputTxt();
    B::Input_Design();
    H::setcursor(1,0);
    File::insertFile(1);
    H::setcursor(0,0);

    while (1)
    {
        message(1,0,36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            InsertFoodDrink();
            break;
        }
    }
}
/*********************************************************/
void Process::ViewFoodDrink()
{
    H::setConsoleTitle(TEXT("View Food & Drink Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::ViewTxt();
    B::View_Design();
    File::viewFile(1);

    while (1)
    {
        message(2,0,36);

        press = getch();

        // if (press == 27)
        // {
        //     break;
        // }
        if(press == 27)
        {
            // ViewFoodDrink();
            break;
        }
    }
}
/*********************************************************/
void Process::SearchFoodDrink()
{
    H::setConsoleTitle(TEXT("Search Food & Drink Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::SearchTxt();
    B::Search_Design();
    H::setcursor(1,0);
    File::searchFile(1);
    H::setcursor(0,0);

    while (1)
    {
        message(1,0,11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            SearchFoodDrink();
            break;
        }
    }
}
/*********************************************************/
void Process::UpdateFoodDrink()
{
    H::setConsoleTitle(TEXT("Update Food & Drink Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::UpdateTxt();
    B::Update_Design();
    H::setcursor(1,0);
    File::updateFile(1);
    H::setcursor(0,0);

    while (1)
    {
        message(1,0,11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            UpdateFoodDrink();
            break;
        }
    }
}
/*********************************************************/
void Process::RemoveFoodDrink()
{
    H::setConsoleTitle(TEXT("Remove Food & Drink Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::DeleteTxt();
    B::Delete_Design();
    H::setcursor(1,0);
    File::deleteFile(1);
    H::setcursor(0,0);

    while (1)
    {
        message(1,0,11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            RemoveFoodDrink();
            break;
        }
    }
}

void Process::ViewProfileInfo()
{
    H::setConsoleTitle(TEXT("My Information"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
 
    while (1)
    {
        // message(1,0,11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            break;
        }
    }
}
/*********************************************************/
void Process::BuyHourToPlay()
{
    H::setConsoleTitle(TEXT("Buy More Hour to Play"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
    B::buyHourTxt();
    B::buyHour_Design();
    H::setcursor(1,0);

    H::setcursor(0,0);
 
    while (1)
    {   

        message(3,0,36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if(press == 13)
        {
            BuyFoodDrink();
            break;
        }
    }
}
/*********************************************************/
void Process::BuyFoodDrink()
{
    H::setConsoleTitle(TEXT("Buy Food and Drink"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0,0);
    outline();

    char press = ' ';
 
    while (1)
    {   
        
        B::BuyFoodnDrinkTxt();
        B::buyFoodnDrink_Design();

        H::setcolor(185); H::gotoxy(x+28,y+6); cout << "Press ";H::setcolor(188); cout<<"[N/y]";H::setcolor(185); cout<<" is you procceed to buy or ";H::setcolor(188); cout<<"[Y/n]";H::setcolor(185); cout<<" is you want to view Food and Drink list";

        press = getch();

        if(press == 121 || press == 89) //Y y
        {
            H::setcolor(7);
            H::cls();
            B::ViewTxt();
            B::View_Design();
            File::viewFile(1);

            H::setcolor(3);H::gotoxy(x+57,y+33); cout << "Press ";H::setcolor(4);cout<<"[any]";H::setcolor(3);cout<<" key to go back";
            
            getch();
            H::cls();
        }
        else if(press == 78 || press == 110) //N n
        {

            // File::buyFood();
            
            message(3,0,36);

            press = getch();

            if (press == 27)
            {
                break;
            }
            else if(press == 13)
            {
                BuyFoodDrink();
                break;
            }
        }
    }
}
/*********************************************************/
void Process::ViewInvoice()
{

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                    END OF PROCESS CODE
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif