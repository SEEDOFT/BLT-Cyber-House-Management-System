#ifndef  ______MainProgram_Process______
#define  ______MainProgram_Process______
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"../BOTH Design/designConsole.h"
#include<cstdlib>
//Inherite Design method to use in here
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class Process: public Design{
    private:
        static const char* getOpenCommand();
    public:
        static void GROUP1_ASSIGNMENT();

        static void login_As_Admin_And_User();
        static void LogIn_AsAdmin(int cursor);
        static void DisableMaximizeButton();
        static void DisableMinimizeButton();
        static void DisableCloseButton();
        static void OutputHostName();
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
void Process::OutputHostName()
{
    DWORD size = MAX_COMPUTERNAME_LENGTH + 1;
    wchar_t hostname[MAX_COMPUTERNAME_LENGTH + 1];

    if (GetComputerNameW(hostname, &size)) {
        wcout << L" WELCOME BACK : " << hostname << endl;
    } else {
        cerr << "Error: Could not retrieve hostname." << endl;
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::login_As_Admin_And_User()
{
    char press;
    int x = 1;

    H::setcursor(0,0);

    while(press != 13)
    {
        //choice box
        H::drawBoxSingleLineWithBG(x+92,y+10,25,1,153);H::setcolor(151);H::gotoxy(x+92,y+11);cout<<"     Administrator     ";
        H::drawBoxSingleLineWithBG(x+92,y+14,25,1,153);H::setcolor(151);H::gotoxy(x+92,y+15);cout<<"         User          ";

        if(x==1)
        {
            H::drawBoxSingleLineWithBG(x+92,y+10,25,1,204);H::setcolor(201);H::gotoxy(x+92,y+11);cout<<"==>> Administrator <<==";
            H::clearBox(x+24,y+4,36,5,136);//Cls text
            loginAs_Admin_UserTxt(1);
        }
        if(x==2)
        {
            H::drawBoxSingleLineWithBG(x+92,y+14,25,1,204);H::setcolor(201);H::gotoxy(x+92,y+15);cout<<"==>>     User      <<==";
            H::clearBox(x+24,y+4,36,5,136);//Cls text
            loginAs_Admin_UserTxt(2);
        }

        press = getch();

        switch(press) 
        {
            case 72://up
            {
                x--;
                if(x<1)
                {
                    x=2;
                }
                break;
            }
            
            case 80://down
            {
                x++;
                if(x>2)
                {
                    x=1;
                }
                break;
            }

        }

    }
    //condition
    if(x == 1)
    {
        LogIn_AsAdmin(1);
    }
    else
    {

    }

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::LogIn_AsAdmin(int cursor)
{
    char AdminUsername[10];
    char AdminPassword[10];
    
    while(true){

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
                AdminMenuDesign(); //Admin Option
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

        }

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
        }
    }
    H::setcolor(7);
}
void Process::GROUP1_ASSIGNMENT()
{
    // DisableMinimizeButton();
    DisableMaximizeButton();
    DisableCloseButton();


    interface_design();//Interface Design

    login_design();//Design of LOG IN

    login_As_Admin_And_User();//login with user and admin
}


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*

*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif