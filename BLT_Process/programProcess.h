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
        static void interface_to_UserAndAdmin(); 
        static void loginAs_Admin_User();
        static void LogIn_AsAdmin(int cursor);
        static void DisableMaximizeButton();
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
void Process::DisableMaximizeButton()
{
    HWND consoleWindow = GetConsoleWindow();
    LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
    style &= ~(WS_MAXIMIZEBOX | WS_SIZEBOX);
    SetWindowLong(consoleWindow, GWL_STYLE, style);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::DisableCloseButton()
{
    HWND consoleWindow = GetConsoleWindow();
    if (consoleWindow != NULL) {
        // Disable maximize button
        DWORD style = GetWindowLong(consoleWindow, GWL_STYLE);
        // style = style & ~WS_MAXIMIZEBOX;
        // SetWindowLong(consoleWindow, GWL_STYLE, style);

        // Disable minimize button
        // style = style & ~WS_MINIMIZEBOX;
        // SetWindowLong(consoleWindow, GWL_STYLE, style);
        style = style & ~WS_SYSMENU;
        // Apply the new style
        // Disable clse button
        SetWindowLong(consoleWindow, GWL_STYLE, style);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::OutputHostName()
{
     /*              output host computer's name              */
    DWORD size = MAX_COMPUTERNAME_LENGTH + 1;
    wchar_t hostname[MAX_COMPUTERNAME_LENGTH + 1];

    if (GetComputerNameW(hostname, &size)) {
        wcout << L" WELCOME BACK : " << hostname << endl;
    } else {
        cerr << "Error: Could not retrieve hostname." << endl;
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::interface_to_UserAndAdmin()
{
    interface_design();

}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::loginAs_Admin_User()
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
void Process::LogIn_AsAdmin(int cursor)
{
    char AdminUsername[10];
    char AdminPassword[10];

    login_design();
    
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

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*

*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif