#ifndef ______MainProgram_Process______
#define ______MainProgram_Process______
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../User_Process_Code/File.h"
#include <cstdlib>
#include <stdlib.h>
#include <chrono>
#include <ctime>
#include <thread>
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#ifdef _WIN32
const char *OPEN_COMMAND = "start ";
#elif defined(__APPLE__)
const char *OPEN_COMMAND = "open ";
#else
const char *OPEN_COMMAND = "xdg-open ";
#endif

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// Inherite Design method to use in here

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class Process : public Design
{
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
        static void UpdateGame();
        static void RemoveGame();

        static void FoodOrDrinkLst();
        static void SubFoodAndDrink(int num);
        static void InsertFoodDrink();
        static void ViewFoodDrink();
        static void SearchFoodDrink();
        static void UpdateFoodDrink();
        static void RemoveFoodDrink();

        static void ManageUserPayment();

        static void ManageUserInfo();
        static void SubManageUserInfo(int num);
        static void InsertUser();
        static void ViewUser();
        static void SearchUserData();
        static void EditUserInfo();
        static void RemoveUser();
        static void SortUser();

        static void ExitTheProgram();
        /***********************************/
        //@@@       END OF METHODS       @@//
        /**********************************/
        static void DisableMaximizeButton();
        static void DisableMinimizeButton();
        static void DisableCloseButton();
        static void OutputHostName(int x, int y, int color);
        static void openURL(const string &url);
        static void GetRealTime();
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::GetRealTime()
{
    while (true) {
    // Get the current time
    auto now = chrono::system_clock::now();
    
    // Convert to time_t to get the time in a readable format
    time_t currentTime = chrono::system_clock::to_time_t(now);

    // Convert to tm structure for local timezone
    tm* localTime = localtime(&currentTime);

    // Determine AM/PM
    string period = (localTime->tm_hour < 12) ? "AM" : "PM";

    // Convert to 12-hour format
    int hour = localTime->tm_hour % 12;
    if (hour == 0) hour = 12; // Handle midnight and noon

    // Clear the console (this works on Unix-like systems; for Windows, you may need to use system("CLS"))
    // cout << "\033[2J\033[1;1H";
    H::clearBox(14,1,20,0,7);

    // Print the time in a readable format with AM/PM
    cout << "Current time: " 
            << setw(2) << setfill('0') << hour << ":"
            << setw(2) << setfill('0') << localTime->tm_min << ":"
            << setw(2) << setfill('0') << localTime->tm_sec << " "
            << period 
            << endl;

    // Sleep for one second
    this_thread::sleep_for(chrono::seconds(1));
}
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::openURL(const string &url)
{
    string command = string(OPEN_COMMAND) + url;
    if (system(command.c_str()) != 0)
    {
        cerr << "Error opening URL.";
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::DisableCloseButton()
{
    HWND consoleWindow = GetConsoleWindow();

    if (consoleWindow != NULL)
    {
        HMENU hMenu = GetSystemMenu(consoleWindow, FALSE);
        if (hMenu != NULL)
        {
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

    if (consoleWindow != NULL)
    {
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

    if (GetComputerNameW(hostname, &size))
    {
        tp(color, x, y);
        wcout << hostname;
    }
    else
    {
        cerr << "Error: Could not retrieve hostname." << endl;
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                              Login as Admin or User
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::Admin_And_User()
{
    H::setcolor(7);
    Design::LoadingAnimation();
    char press;
    int num;
    H::setcursor(0, 0);

    while (1)
    {
        H::setcolor(7);
        H::cls();
        num = 1;
        press = ' ';
        outline();
        Login_Design(); // Design of LOG IN

        do
        {
            // choice box
            H::drawBoxSingleLineWithBG(x + 84, y + 15, 25, 1, 153);
            H::drawBoxSingleLineWithBG(x + 84, y + 19, 25, 1, 153);

            H::setcolor(151);
            H::gotoxy(x + 84, y + 16);
            cout << "     Administrator     ";
            H::setcolor(151);
            H::gotoxy(x + 84, y + 20);
            cout << "         User          ";

            if (num == 1)
            {
                H::drawBoxSingleLineWithBG(x + 84, y + 15, 25, 1, 204);
                H::setcolor(201);
                H::gotoxy(x + 85, y + 16);
                cout << "  => Administrator <=  ";
                H::clearBox(x + 23, y + 8, 36, 5, 136); // Cls text
                LoginAs_Admin_UserTxt(1);
            }
            if (num == 2)
            {
                H::drawBoxSingleLineWithBG(x + 84, y + 19, 25, 1, 204);
                H::setcolor(201);
                H::gotoxy(x + 85, y + 20);
                cout << "  =>     User      <=  ";
                H::clearBox(x + 23, y + 8, 36, 5, 136); // Cls text
                LoginAs_Admin_UserTxt(2);
            }

            press = getch();

            switch (press)
            {
            case 72: // up
            {
                num--;
                if (num < 1)
                {
                    num = 2;
                }
                break;
            }

            case 80: // down
            {
                num++;
                if (num > 2)
                {
                    num = 1;
                }
                break;
            }

            case 8: // delete key
            {
                ExitTheProgram(); // exit program method
                break;
            }
            }

        } while (press != 13);

        H::clearBox(x + 4, 38, 140, 0, 7);

        switch (num)
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
    char press = ' ';

    while (1)
    {

        int chance = 3;

        while (chance != 0)
        {

            H::setcursor(cursor, 20);

            // username
            H::setcolor(249);
            H::gotoxy(x + 20, y + 17);
            H::inputAll(AdminUsername, 10);

            // password
            H::setcolor(249); // 137
            H::gotoxy(x + 20, y + 23);
            H::hidePassword(AdminPassword, 10);

            if (strcmp(AdminUsername, "Cyber") == 0 && strcmp(AdminPassword, "168") == 0)
            {
                Design::loginMsg(3);
                Admin_Option(); // Admin Option
                break;
            }
            else if (strcmp(AdminUsername, "Cyber") != 0 || strcmp(AdminPassword, "168") != 0)
            {
                H::setcursor(0, 0);
                H::setcolor(140);
                H::gotoxy(x + 29, y + 27);
                cout << "You have ";
                H::setcolor(137);
                cout << --chance;
                H::setcolor(140);
                cout << " left";
                loginMsg(1); // input msg

                getch();

                H::clearBox(x + 19, y + 18, 42, 0, 247); // Clear username and password boxes
                H::clearBox(x + 19, y + 24, 42, 0, 247); // Clear username and password boxes
                H::clearBox(x + 23, y + 27, 34, 1, 136); // Clear message
            }
        }

        if (chance == 0)
        {
            for (int i = 1; i <= 6; i++)
            {
                H::setcursor(0, 0);
                H::setcolor(140);
                H::gotoxy(x + 17, y + 27);
                cout << "You ran out chances! Please wait for   seconds";
                H::setcolor(137);
                H::gotoxy(x + 54, y + 27);
                cout << 6 - i;
                H::delay(999);

                H::clearBox(x + 17, y + 27, 45, 0, 136); // cls chance msg
                H::setcolor(7);
            }

            loginMsg(2); // esc or continue

            press = getch();

            H::clearBox(x + 38, 38, 61, 0, 7); // cls msg

            if (press == 27)
            {
                break;
            }
            else
            {
                continue;
            }
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                          Admin Option
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::Admin_Option()
{
    H::setConsoleTitle(TEXT("Admin MENU"));
    H::setcursor(0, 0);
    Design::LoadingAnimation();

    while (true)
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

            tp(151, x + 12, y + 9);
            cout << "Admin Profile Information";
            tp(151, x + 25, y + 13);
            cout << "Games List";
            tp(151, x + 15, y + 17);
            cout << "Food and Drink List";
            tp(151, x + 17, y + 21);
            cout << "Manage User's Information";
            tp(151, x + 14, y + 25);
            cout << "Manage User's Payment";
            tp(151, x + 21, y + 29);
            cout << "Log Out of Account";

            if (num == 1)
            {
                H::drawBoxSingleLineWithBG(x + 10, y + 8, 30, 1, 187);
                tp(188, x + 12, y + 9);
                cout << "Admin Profile Information";
                choice = 1;
            }
            if (num == 2)
            {
                H::drawBoxSingleLineWithBG(x + 15, y + 12, 30, 1, 187);
                tp(188, x + 25, y + 13);
                cout << "Games List";
                choice = 2;
            }
            if (num == 3)
            {
                H::drawBoxSingleLineWithBG(x + 10, y + 16, 30, 1, 187);
                tp(188, x + 15, y + 17);
                cout << "Food and Drink List";
                choice = 3;
            }
            if (num == 4)
            {
                H::drawBoxSingleLineWithBG(x + 15, y + 20, 30, 1, 187);
                tp(188, x + 17, y + 21);
                cout << "Manage User's Information";
                choice = 4;
            }
            if (num == 5)
            {
                H::drawBoxSingleLineWithBG(x + 10, y + 24, 30, 1, 187);
                tp(188, x + 14, y + 25);
                cout << "Manage User's Payment";
                choice = 5;
            }
            if (num == 6)
            {
                H::drawBoxSingleLineWithBG(x + 15, y + 28, 30, 1, 187);
                tp(188, x + 21, y + 29);
                cout << "Log Out of Account";
                choice = 6;
            }

            press = getch();

            switch (press)
            {
            case 72: // up
            {
                num--;
                if (num < 1)
                {
                    num = 6;
                }
                break;
            }

            case 80: // down
            {
                num++;
                if (num > 6)
                {
                    num = 1;
                }
                break;
            }
            }
        } while (press != 13);
        adminSelectionOpt(choice);
        Admin_ChoosingOpt(choice);
    }
}
/******************************************************** */
void Process::Admin_ChoosingOpt(int num)
{
    switch (num)
    {
    case 1:
        Design::LoadingAnimation();
        AdminProfileInfo();
        break;

    case 2:
        Design::LoadingAnimation();
        GamesLst();
        break;

    case 3:
        Design::LoadingAnimation();
        FoodOrDrinkLst();
        break;

    case 4:
        Design::LoadingAnimation();
        ManageUserInfo();
        break;

    case 5:
        Design::LoadingAnimation();
        ManageUserPayment();
        break;

    case 6:
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
    H::setcursor(0, 0);
    outline();

    while (true)
    {
        H::setcolor(7);
        H::cls();
        H::setcursor(0, 0);
        outline();

        AdminProfileInfoTxt();
        AdminProfileInfo_Design();

        int y = 1;
        int choice = 0;
        char press;

        do
        {
            H::drawBoxDoubleLineWithBG(105, 11, 30, 1, 183);
            H::drawBoxDoubleLineWithBG(105, 17, 30, 1, 183);
            H::drawBoxDoubleLineWithBG(105, 23, 30, 1, 183);

            H::gotoxy(116, 12);
            H::setcolor(185);
            cout << "About Us";
            H::gotoxy(112, 18);
            H::setcolor(185);
            cout << "A Letter from Us";
            H::gotoxy(114, 24);
            H::setcolor(185);
            cout << "Back to MENU";

            if (y == 1)
            {
                H::drawBoxDoubleLineWithBG(105, 11, 30, 1, 68);
                H::gotoxy(116, 12);
                H::setcolor(71);
                cout << "About Us";
                choice = 1;
            }
            if (y == 2)
            {
                H::drawBoxDoubleLineWithBG(105, 17, 30, 1, 68);
                H::gotoxy(112, 18);
                H::setcolor(71);
                cout << "A Letter from Us";
                choice = 2;
            }
            if (y == 3)
            {
                H::drawBoxDoubleLineWithBG(105, 23, 30, 1, 68);
                H::gotoxy(114, 24);
                H::setcolor(71);
                cout << "Back to MENU";
                choice = 3;
            }

            press = getch();

            switch (press)
            {
            case 72:
                y--;
                {
                    if (y < 1)
                    {
                        y = 3;
                    }
                }
                break;

            case 80:
                y++;
                {
                    if (y > 3)
                    {
                        y = 1;
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
    switch (num)
    {
    case 1:
        LoadingAnimation();
        AboutUs();
        break;
    case 2:
        LoadingAnimation();
        A_LetterFromUs();
        break;

    case 3:
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
    H::setcursor(0, 0);
    outline();

    char press;
    AboutUsTxt();
    AboutUs_Design();

    while (1)
    {
        message(2, 0, 38);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == '1')
        {
            // openURL("https://drraspec.github.io/about-us/");
            //            openURL("start Website/index.html");
            const char* websiteUrl = "Website\\index.html";
            
	    	system(("start " + string(websiteUrl)).c_str());
            break;
        }
        else
        {
            continue;
        }
    }
}
/******************************************************** */
void Process::A_LetterFromUs()
{
    H::setConsoleTitle(TEXT("A letter from Developers"));
    H::setcolor(7);
    H::cls();
    char press = ' ';
    outline();

    A_Letter_from_UsTxt();
    A_Letter_from_Us_Animation();

    while (1)
    {
        A_Letter_from_Us_Design(5);

        H::HLine(30, 28, 100, 7, 196);
        H::setcolor(1);
        H::gotoxy(40, 29);
        cout << "To open the website of ";
        H::setcolor(3);
        cout << "ANT Technology Training Center";
        H::gotoxy(110, 29);
        H::setcolor(71);
        cout << " Press number 1";

        H::HLine(30, 30, 100, 7, 196);

        H::setcolor(1);
        H::gotoxy(40, 31);
        cout << "To open the website of ";
        H::setcolor(3);
        cout << "Ministry of Post and Telecommunications";
        H::gotoxy(110, 31);
        H::setcolor(71);
        cout << " Press number 2";
        H::HLine(30, 32, 100, 7, 196);

        message(2, 0, 38);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == '1')
        {
            openURL("http://training.antkh.com/");
        }
        else if (press == '2')
        {
            openURL("https://mptc.gov.kh/en/");
        }
        else
        {
            continue;
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::GamesLst()
{
    H::setConsoleTitle(TEXT("Games List Menu"));

    while (true)
    {
        H::setcolor(7);
        H::cls();
        H::setcursor(0, 0);
        outline();

        int y = 1;
        int x = 0;
        char press;

        B::Header_Design();
        B::GameMenuTxt();
        B::CyberTxt();

        do
        {
            B::GameMenu_Design();

            if (y == 1)
            {
                H::drawBoxDoubleLineWithBG(37, 18, 18, 1, 196);
                H::foreColor(199);
                H::gotoxy(42, 19);
                cout << "ADD GAME";
                x = 1;
            }
            if (y == 2)
            {
                H::drawBoxDoubleLineWithBG(37, 23, 18, 1, 196);
                H::foreColor(199);
                H::gotoxy(42, 24);
                cout << "VIEW GAME";
                x = 2;
            }
            if (y == 3)
            {
                H::drawBoxDoubleLineWithBG(37, 28, 18, 1, 196);
                H::foreColor(199);
                H::gotoxy(40, 29);
                cout << "SEARCH GAME";
                x = 3;
            }
            if (y == 4)
            {
                H::drawBoxDoubleLineWithBG(105, 18, 18, 1, 196);
                H::foreColor(199);
                H::gotoxy(108, 19);
                cout << "UPDATE GAME";
                x = 4;
            }
            if (y == 5)
            {
                H::drawBoxDoubleLineWithBG(105, 23, 18, 1, 196);
                H::foreColor(199);
                H::gotoxy(108, 24);
                cout << "REMOVE GAME";
                x = 5;
            }
            if (y == 6)
            {
                H::drawBoxDoubleLineWithBG(105, 28, 18, 1, 196);
                H::foreColor(199);
                H::gotoxy(112, 29);
                cout << "BACK";
                x = 6;
            }
            press = getch();

            switch (press)
            {
            case 72:
                y--;
                if (y < 1)
                {
                    y = 6;
                }
                break;
            case 80:
                y++;
                if (y > 6)
                {
                    y = 1;
                }
                break;
            }
        } while (press != 13);

        SubGameLst(x);
    }
}
/******************************************************** */
void Process::SubGameLst(int num)
{
    switch (num)
    {
    // input case
    case 1:
        Design::LoadingAnimation();
        InsertGame();
        break;

    // Display
    case 2:
        Design::LoadingAnimation();
        ViewGame();
        break;

    // Search
    case 3:
        Design::LoadingAnimation();
        SearchGame();
        break;

    // Update
    case 4:
        Design::LoadingAnimation();
        UpdateGame();
        break;

    // Remove
    case 5:
        Design::LoadingAnimation();
        RemoveGame();
        break;

        // back
    case 6:
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
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::InputGameTxt();
    B::InputGame_Design();
    H::setcursor(1, 0);
    File::insertFile(2);
    H::setcursor(0, 0);

    while (1)
    {
        message(1, 0, 36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            InsertGame();
            break;
        }
        else
        {
            continue;
        }
    }
}
/******************************************************** */
void Process::ViewGame()
{
    H::setConsoleTitle(TEXT("View Game Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::ViewGameTxt();
    B::ViewGame_Design();
    File::viewFile(2);

    while (1)
    {
        message(2, 0, 36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else
        {
            continue;
        }
    }
}
/******************************************************** */
void Process::SearchGame()
{
    H::setConsoleTitle(TEXT("Search Game Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::SearchGameTxt();
    B::SearchGame_Design();
    H::setcursor(1, 0);
    File::searchFile(2);
    H::setcursor(0, 0);
    while (1)
    {
        message(1, 0, 11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            SearchGame();
            break;
        }
        else
        {
            continue;
        }
    }
}
/******************************************************** */
void Process::UpdateGame()
{
    H::setConsoleTitle(TEXT("Update Game Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::UpdateGameTxt();
    B::UpdateGame_Design();
    H::setcursor(1, 0);
    File::updateFile(2);
    H::setcursor(0, 0);
    while (1)
    {
        message(1, 0, 11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            UpdateGame();
            break;
        }
        else
        {
            continue;
        }
    }
}
/******************************************************** */
void Process::RemoveGame()
{
    H::setConsoleTitle(TEXT("Remove Game Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::DeleteGameTxt();
    B::DeleteGame_Design();
    H::setcursor(1, 0);
    File::deleteFile(2);
    H::setcursor(0, 0);
    while (1)
    {
        message(1, 0, 11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            RemoveGame();
            break;
        }
        else
        {
            continue;
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::ManageUserInfo()
{
    H::setConsoleTitle(TEXT("Manage User Information"));

    while (true)
    {
        H::setcolor(7);
        H::cls();
        H::setcursor(0, 0);
        outline();

        B::ManageUserInfoTxt();
        B::ManageUserInfo_Design();

        int y = 1;
        char press;
        int choice = 0;

        do
        {
            H::drawBoxDoubleLineWithBG(30, 17, 30, 1, 183);
            H::drawBoxDoubleLineWithBG(30, 25, 30, 1, 183);
            H::drawBoxDoubleLineWithBG(30, 32, 30, 1, 183);

            H::drawBoxDoubleLineWithBG(99, 17, 30, 1, 183);
            H::drawBoxDoubleLineWithBG(99, 24, 30, 1, 183);
            H::drawBoxDoubleLineWithBG(99, 32, 30, 1, 183);

            H::foreColor(183);
            H::gotoxy(38, 18);
            cout << "SIGN UP USER";
            H::foreColor(183);
            H::gotoxy(38, 26);
            cout << "VIEW USER INFO";
            H::foreColor(183);
            H::gotoxy(37, 33);
            cout << "SEARCH USER INFO";

            H::foreColor(183);
            H::gotoxy(107, 18);
            cout << "EDIT USER INFO";
            H::foreColor(183);
            H::gotoxy(106, 25);
            cout << "DELETE USER INFO";
            H::foreColor(183);
            H::gotoxy(112, 33);
            cout << "BACK";

            if (y == 1)
            {
                H::drawBoxDoubleLineWithBG(30, 17, 30, 1, 135);
                H::foreColor(135);
                H::gotoxy(38, 18);
                cout << "SIGN UP USER";
                choice = 1;
            }
            if (y == 2)
            {
                H::drawBoxDoubleLineWithBG(30, 25, 30, 1, 135);
                H::foreColor(135);
                H::gotoxy(38, 26);
                cout << "VIEW USER INFO";
                choice = 2;
            }
            if (y == 3)
            {
                H::drawBoxDoubleLineWithBG(30, 32, 30, 1, 135);
                H::foreColor(135);
                H::gotoxy(37, 33);
                cout << "SEARCH USER INFO";
                choice = 3;
            }
            if (y == 4)
            {
                H::drawBoxDoubleLineWithBG(99, 17, 30, 1, 135);
                H::foreColor(135);
                H::gotoxy(107, 18);
                cout << "EDIT USER INFO";
                choice = 4;
            }
            if (y == 5)
            {
                H::drawBoxDoubleLineWithBG(99, 24, 30, 1, 135);
                H::foreColor(135);
                H::gotoxy(106, 25);
                cout << "DELETE USER INFO";
                choice = 5;
            }
            if (y == 6)
            {
                H::drawBoxDoubleLineWithBG(99, 32, 30, 1, 135);
                H::foreColor(135);
                H::gotoxy(112, 33);
                cout << "BACK";
                choice = 6;
            }

            press = getch();

            switch (press)
            {
            case 72:
                y--;
                if (y < 1)
                {

                    y = 6;
                }
                break;
            case 80:
                y++;
                if (y > 6)
                {
                    y = 1;
                }
                break;
            }
        } while (press != 13);

        SubManageUserInfo(choice);
    }
}
/*********************************************************/
void Process::SubManageUserInfo(int num)
{
    switch (num)
    {
    // input case
    case 1:
        Design::LoadingAnimation();
        InsertUser();
        break;

    // Display
    case 2:
        Design::LoadingAnimation();
        ViewUser();
        break;

    // Search
    case 3:
        Design::LoadingAnimation();
        SearchUserData();
        break;

    // Edit
    case 4:
        Design::LoadingAnimation();
        EditUserInfo();
        break;

    // Remove
    case 5:
        Design::LoadingAnimation();
        RemoveUser();
        break;

    // Back
    case 6:
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
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::SignUpTxt();
    B::SignUp_Design();
    H::setcursor(1, 0);
    File::insertFile(3);
    H::setcursor(0, 0);

    while (1)
    {
        message(3, 0, 38);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            InsertUser();
            break;
        }
        else
        {
            continue;
        }
    }
}
/*********************************************************/
void Process::ViewUser()
{
    H::setConsoleTitle(TEXT("View User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::ViewUserInfoTxt();
    B::ViewUserInfo_Design();
    File::viewFile(3);

    while (1)
    {
        message(2, 0, 36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else
        {
            continue;
        }
    }
}
/*********************************************************/
void Process::SearchUserData()
{
    H::setConsoleTitle(TEXT("Search User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::SearchUserTxt();
    B::SearchUser_Design();
    H::setcursor(1, 0);
    File::searchFile(3);
    H::setcursor(0, 0);

    while (1)
    {
        message(1, 0, 11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            SearchUserData();
            break;
        }
        else
        {
            continue;
        }
    }
}
/*********************************************************/
void Process::EditUserInfo()
{
    H::setConsoleTitle(TEXT("Edit User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::UpdateUserInfoTxt();
    B::UpdateUserInfo_Design();
    H::setcursor(1, 0);
    File::updateFile(3);
    H::setcursor(0, 0);

    while (1)
    {
        message(1, 0, 11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            EditUserInfo();
            break;
        }
        else
        {
            continue;
        }
    }
}
/*********************************************************/
void Process::RemoveUser()
{
    H::setConsoleTitle(TEXT("Remove User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::DeleteUserInfoTxt();
    B::DeleteUserInfo_Design();
    H::setcursor(1, 0);
    File::deleteFile(3);
    H::setcursor(0, 0);

    while (1)
    {
        message(1, 0, 11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            RemoveUser();
            break;
        }
        else
        {
            continue;
        }
    }
}
/*********************************************************/
void Process::SortUser()
{
    H::setConsoleTitle(TEXT("Sort User Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::SortUserTxt();
    B::SortUser_Design();

    while (1)
    {
        message(2, 0, 36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            SortUser();
            break;
        }
        else
        {
            continue;
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
    H::setcursor(0, 0);
    outline();

    B::AllInvoicesTxt();
    B::AllInvoices_Design();
    File::viewAllUserInvoice();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::FoodOrDrinkLst()
{
    H::setConsoleTitle(TEXT("Food and Drink Menu"));

    while (true)
    {
        H::setcolor(7);
        H::cls();
        H::setcursor(0, 0);
        outline();

        B::FoodMenuTxt(); // txt
        B::FoodMenu_Design();
        B::Cyber99Txt();
        H::foreColor(55);
        H::gotoxy(46, 35);
        cout << "use ";
        H::setcolor(52);
        cout << " [<-] [->]";
        H::setcolor(55);
        cout << " arrow key to move between option and ";
        H::setcolor(52);
        cout << "[ENTER]";
        H::setcolor(55);
        cout << " to select";

        int y = 1;
        int choice = 0;
        char press;

        do
        {
            // option
            H::drawBoxDoubleLineWithBG(41, 13, 20, 1, 23);
            H::drawBoxDoubleLineWithBG(69, 13, 20, 1, 23);
            H::drawBoxDoubleLineWithBG(98, 13, 20, 1, 23);

            H::drawBoxDoubleLineWithBG(41, 31, 20, 1, 23);
            H::drawBoxDoubleLineWithBG(69, 31, 20, 1, 23);
            H::drawBoxDoubleLineWithBG(98, 31, 20, 1, 23);
            // label
            H::foreColor(23);
            H::gotoxy(41, 14);
            cout << "Insert Food or Drink";
            H::foreColor(23);
            H::gotoxy(70, 14);
            cout << "View Food or Drink";
            H::foreColor(23);
            H::gotoxy(98, 14);
            cout << "Search Food or Drink";
            H::foreColor(23);
            H::gotoxy(41, 32);
            cout << "Update Food or Drink";
            H::foreColor(23);
            H::gotoxy(69, 32);
            cout << "Remove Food or Drink";
            H::foreColor(23);
            H::gotoxy(102, 32);
            cout << "Back to MENU";
            if (y == 1)
            {
                H::drawBoxDoubleLineWithBG(41, 13, 20, 1, 199);
                H::foreColor(199);
                H::gotoxy(41, 14);
                cout << "Insert Food or Drink";
                choice = 1;
            }
            if (y == 2)
            {
                H::drawBoxDoubleLineWithBG(69, 13, 20, 1, 199);
                H::foreColor(199);
                H::gotoxy(70, 14);
                cout << "View Food or Drink";
                choice = 2;
            }
            if (y == 3)
            {
                H::drawBoxDoubleLineWithBG(98, 13, 20, 1, 199);
                H::foreColor(199);
                H::gotoxy(98, 14);
                cout << "Search Food or Drink";
                choice = 3;
            }
            if (y == 4)
            {
                H::drawBoxDoubleLineWithBG(41, 31, 20, 1, 199);
                H::foreColor(199);
                H::gotoxy(41, 32);
                cout << "Update Food or Drink";
                choice = 4;
            }
            if (y == 5)
            {
                H::drawBoxDoubleLineWithBG(69, 31, 20, 1, 199);
                H::foreColor(199);
                H::gotoxy(69, 32);
                cout << "Remove Food or Drink";
                choice = 5;
            }
            if (y == 6)
            {
                H::drawBoxDoubleLineWithBG(98, 31, 20, 1, 199);
                H::foreColor(199);
                H::gotoxy(102, 32);
                cout << "Back to MENU";
                choice = 6;
            }
            press = getch();

            switch (press)
            {
            case 75:
                y--;
                if (y < 1)
                {
                    y = 6;
                }
                break;
            case 77:
                y++;
                if (y > 6)
                {
                    y = 1;
                }
                break;
            }
        } while (press != 13);

        SubFoodAndDrink(choice);
    }
}
/*********************************************************/
void Process::SubFoodAndDrink(int num)
{
    switch (num)
    {
        // input case
    case 1:
        Design::LoadingAnimation();
        InsertFoodDrink();
        break;

    // Display
    case 2:
        Design::LoadingAnimation();
        ViewFoodDrink();
        break;

    // Search
    case 3:
        Design::LoadingAnimation();
        SearchFoodDrink();
        break;

    // Update
    case 4:
        Design::LoadingAnimation();
        UpdateFoodDrink();
        break;
    // Remove
    case 5:
        Design::LoadingAnimation();
        RemoveFoodDrink();
        break;

    // back
    case 6:
        Admin_Option();
        break;
    }
}
/*********************************************************/
void Process::InsertFoodDrink()
{
    H::setConsoleTitle(TEXT("Insert Food or Drink Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::InputTxt();
    B::Input_Design();
    H::setcursor(1, 0);
    File::insertFile(1);
    H::setcursor(0, 0);

    while (1)
    {
        message(1, 0, 36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            InsertFoodDrink();
            break;
        }
        else
        {
            continue;
        }
    }
}
/*********************************************************/
void Process::ViewFoodDrink()
{
    H::setConsoleTitle(TEXT("View Food and Drink Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::ViewTxt();
    B::View_Design();
    File::viewFile(1);

    while (1)
    {
        message(2, 0, 36);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else
        {
            continue;
        }
    }
}
/*********************************************************/
void Process::SearchFoodDrink()
{
    H::setConsoleTitle(TEXT("Search Food or Drink Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::SearchTxt();
    B::Search_Design();
    H::setcursor(1, 0);
    File::searchFile(1);
    H::setcursor(0, 0);

    while (1)
    {
        message(1, 0, 11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            SearchFoodDrink();
            break;
        }
        else
        {
            continue;
        }
    }
}
/*********************************************************/
void Process::UpdateFoodDrink()
{
    H::setConsoleTitle(TEXT("Update Food or Drink Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::UpdateTxt();
    B::Update_Design();
    H::setcursor(1, 0);
    File::updateFile(1);
    H::setcursor(0, 0);

    while (1)
    {
        message(1, 0, 11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            UpdateFoodDrink();
            break;
        }
        else
        {
            continue;
        }
    }
}
/*********************************************************/
void Process::RemoveFoodDrink()
{
    H::setConsoleTitle(TEXT("Remove Food or Drink Data"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    char press = ' ';
    B::DeleteTxt();
    B::Delete_Design();
    H::setcursor(1, 0);
    File::deleteFile(1);
    H::setcursor(0, 0);

    while (1)
    {
        message(1, 0, 11);

        press = getch();

        if (press == 27)
        {
            break;
        }
        else if (press == 13)
        {
            RemoveFoodDrink();
            break;
        }
        else
        {
            continue;
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::ExitTheProgram()
{
    H::setConsoleTitle(TEXT("Exit the program"));
    H::setcolor(7);
    H::cls();
    outline();
    H::setcursor(0, 0);

    B::ExitTxt();

    message(6, 0, 0);

    H::gotoxy(0, 41);
    exit(0);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                    END OF PROCESS CODE
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif