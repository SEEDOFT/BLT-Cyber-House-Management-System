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
private:
    static int num;

public:
    static void processKeyEvent(KEY_EVENT_RECORD keyEvent, HANDLE hStdOutput, int);
    static void processMouseEvent(MOUSE_EVENT_RECORD mouseEvent, HANDLE hStdOutput, int);
    static void processInputEvents(INPUT_RECORD *ir, DWORD nRead, HANDLE hStdOutput, int);
    //////////////
    static void KeyEvent(KEY_EVENT_RECORD keyEvent, HANDLE hStdOutput, const char *, const char *);
    static void MouseEvent(MOUSE_EVENT_RECORD mouseEvent, HANDLE hStdOutput, const char *, const char *);
    static void InputEvents(INPUT_RECORD *ir, DWORD nRead, HANDLE hStdOutput, const char *, const char *);
    static void user_login();
    static void userSubMenu(const char *username, const char *password);
    ///////////////
    static void updateDisplay(int);
    /////////////////////////////////////////////////////////////////////////////////
    static void BLT_Cyber_House_Management_System();
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
int Process::num = 1;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::GetRealTime()
{
    while (true)
    {
        // Get the current time
        auto now = chrono::system_clock::now();

        // Convert to time_t to get the time in a readable format
        time_t currentTime = chrono::system_clock::to_time_t(now);

        // Convert to tm structure for local timezone
        tm *localTime = localtime(&currentTime);

        // Determine AM/PM
        string period = (localTime->tm_hour < 12) ? "AM" : "PM";

        // Convert to 12-hour format
        int hour = localTime->tm_hour % 12;
        if (hour == 0)
            hour = 12; // Handle midnight and noon

        // Clear the console (this works on Unix-like systems; for Windows, you may need to use system("CLS"))
        // cout << "\033[2J\033[1;1H";
        H::clearBox(14, 1, 20, 0, 7);

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
void Process::processKeyEvent(KEY_EVENT_RECORD keyEvent, HANDLE hStdOutput, int n)
{
    int choice = 0;
    if (n == 1)
    {
        if (keyEvent.bKeyDown)
        {
            if (keyEvent.wVirtualKeyCode == VK_BACK)
            {
                ExitTheProgram();
                // Set event if Backspace is pressed.
            }
            else if (keyEvent.wVirtualKeyCode == VK_UP)
            {
                num--;
                if (num < 1)
                {
                    num = 2;
                }
            }
            else if (keyEvent.wVirtualKeyCode == VK_DOWN)
            {
                num++;
                if (num > 2)
                {
                    num = 1;
                }
            }
            else if (keyEvent.wVirtualKeyCode == VK_RETURN)
            {
                H::clearBox(x + 4, 38, 140, 0, 7);
                if (num == 1)
                {
                    Admin_User_ClsBox(1);
                    LogIn_AsAdmin(1);
                }
                else if (num == 2)
                {
                    Admin_User_ClsBox(2);
                    user_login();
                }
                // Reset values after action
                num = 1;
            }

            updateDisplay(n);
        }
        // Admin_And_User();
    }
    else if (n == 2)
    {
        if (keyEvent.bKeyDown)
        {
            switch (keyEvent.wVirtualKeyCode)
            {
            case VK_BACK:
                // Set event if Backspace is pressed.
                break;
            case VK_UP:
                num--;
                if (num < 1)
                {
                    num = 6;
                }
                break;
            case VK_DOWN:
                num++;
                if (num > 6)
                {
                    num = 1;
                }
                break;
            case VK_RETURN:
                choice = num;
                if (choice == 6)
                {
                    Design::AdminMenu_Art(7);
                }
                adminSelectionOpt(choice);
                Admin_ChoosingOpt(choice);
                break;
            }
            updateDisplay(n);
        }
    }
    else if (n == 3)
    {
        if (keyEvent.bKeyDown)
        {
            switch (keyEvent.wVirtualKeyCode)
            {
            case VK_BACK:
                // Handle backspace event if needed.
                break;
            case VK_UP:
                num--;
                if (num < 1)
                {
                    num = 3;
                }
                updateDisplay(n);
                break;
            case VK_DOWN:
                num++;
                if (num > 3)
                {
                    num = 1;
                }
                updateDisplay(n);
                break;
            case VK_RETURN:
                SubAdminProfileInfo(num);
                break;
            }
        }
    }
    else if (n == 4 && keyEvent.bKeyDown) // Ensure it's a key press event
    {
        switch (keyEvent.wVirtualKeyCode)
        {
        case VK_BACK:
            // Set event if Backspace is pressed.
            break;
        case VK_UP:
            num--;
            if (num < 1)
            {
                num = 6;
            }
            break;
        case VK_DOWN:
            num++;
            if (num > 6)
            {
                num = 1;
            }
            break;
        case VK_RETURN:
            choice = num;
            SubGameLst(choice);
            GamesLst();
            break;
        }
        updateDisplay(n);
    }
    else if (n == 5 && keyEvent.bKeyDown) // Ensure it's a key press event
    {
        switch (keyEvent.wVirtualKeyCode)
        {
        case VK_BACK:
            // Set event if Backspace is pressed.
            break;
        case VK_UP:
            num--;
            if (num < 1)
            {
                num = 6;
            }
            break;
        case VK_DOWN:
            num++;
            if (num > 6)
            {
                num = 1;
            }
            break;
        case VK_RETURN:
            choice = num;
            SubManageUserInfo(choice);
            ManageUserInfo();
            break;
        }
        updateDisplay(n);
    }
    else if (n == 6 && keyEvent.bKeyDown) // Ensure it's a key press event
    {
        switch (keyEvent.wVirtualKeyCode)
        {
        case VK_BACK:
            // Set event if Backspace is pressed.
            break;
        case VK_UP:
            num--;
            if (num < 1)
            {
                num = 6;
            }
            break;
        case VK_DOWN:
            num++;
            if (num > 6)
            {
                num = 1;
            }
            break;
        case VK_RETURN:
            choice = num;
            SubFoodAndDrink(choice);
            FoodOrDrinkLst();
            break;
        }
        updateDisplay(n);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::processMouseEvent(MOUSE_EVENT_RECORD mouseEvent, HANDLE hStdOutput, int n)
{
    // int x = 0; // Initialize x
    // int y = 0; // Initialize y
    // int choice = 0;
    // num = 0;

    if (n == 1)
    {
        bool updateRequired = false;
        COORD xy = {0, 1};

        if (mouseEvent.dwMousePosition.X >= x + 84 && mouseEvent.dwMousePosition.X <= x + 109)
        {
            if (mouseEvent.dwMousePosition.Y >= y + 15 && mouseEvent.dwMousePosition.Y <= y + 17)
            {
                num = 1;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 19 && mouseEvent.dwMousePosition.Y <= y + 21)
            {
                num = 2;
                updateRequired = true;
            }

            if (mouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED)
            {
                H::clearBox(x + 4, 38, 140, 0, 7);
                if (num == 1)
                {
                    Admin_User_ClsBox(1);
                    LogIn_AsAdmin(1);
                }
                else if (num == 2)
                {
                    Admin_User_ClsBox(2);
                    user_login();
                }
                num = 1; // Reset num after action
            }
        }

        if (updateRequired)
        {
            updateDisplay(n);
        }
    }
    else if (n == 2)
    {
        bool updateRequired = false;
        int x = 0; // Initialize x
        int y = 0; // Initialize y
        int choice = 0;
        num = 0; // Reset num to an invalid value

        // Mouse hover detection
        if (mouseEvent.dwMousePosition.X >= x + 15 && mouseEvent.dwMousePosition.X <= x + 45)
        {
            if (mouseEvent.dwMousePosition.Y >= y + 18 && mouseEvent.dwMousePosition.Y <= y + 20)
            {
                num = 1;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 21 && mouseEvent.dwMousePosition.Y <= y + 23)
            {
                num = 2;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 24 && mouseEvent.dwMousePosition.Y <= y + 26)
            {
                num = 3;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 27 && mouseEvent.dwMousePosition.Y <= y + 29)
            {
                num = 4;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 30 && mouseEvent.dwMousePosition.Y <= y + 32)
            {
                num = 5;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 33 && mouseEvent.dwMousePosition.Y <= y + 35)
            {
                num = 6;
                updateRequired = true;
            }
        }

        // Mouse click action
        if ((mouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED) && num != 0)
        {
            updateDisplay(n);
            switch (num)
            {
            case 1:
                choice = 1;
                AdminMenu_Art(1);
                break;
            case 2:
                choice = 2;
                AdminMenu_Art(2);
                break;
            case 3:
                choice = 3;
                AdminMenu_Art(3);
                break;
            case 4:
                choice = 4;
                AdminMenu_Art(4);
                break;
            case 5:
                choice = 5;
                AdminMenu_Art(5);
                break;
            case 6:
                choice = 6;
                AdminMenu_Art(7);
                break;
            default:
                break;
            }
            adminSelectionOpt(choice);
            Admin_ChoosingOpt(choice);
        }
        if (updateRequired)
        {
            updateDisplay(n);
        }
    }
    else if (n == 3)
    {
        COORD xy = {0, 1};
        int x = 0; // Initialize x
        int y = 0; // Initialize y
        num = 0;   // Reset num to an invalid value
        bool updateRequired = false;

        // Mouse hover detection
        if (mouseEvent.dwMousePosition.X >= x + 105 && mouseEvent.dwMousePosition.X <= x + 135)
        {
            if (mouseEvent.dwMousePosition.Y >= y + 11 && mouseEvent.dwMousePosition.Y <= y + 13)
            {
                num = 1;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 17 && mouseEvent.dwMousePosition.Y <= y + 19)
            {
                num = 2;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 23 && mouseEvent.dwMousePosition.Y <= y + 25)
            {
                num = 3;
                updateRequired = true;
            }
        }

        // Mouse click action
        if (num != 0 && (mouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED))
        {
            SubAdminProfileInfo(num);
            H::cls();
        }
        if (updateRequired)
        {
            updateDisplay(n);
        }
    }
    else if (n == 4)
    {
        bool updateRequired = false;
        int x = 0; // Initialize x
        int y = 0; // Initialize y
        int choice = 0;
        num = 0; // Reset num to an invalid value

        // Mouse hover detection
        if (mouseEvent.dwMousePosition.X >= x + 39 && mouseEvent.dwMousePosition.X <= x + 64)
        {
            if (mouseEvent.dwMousePosition.Y >= y + 16 && mouseEvent.dwMousePosition.Y <= y + 18)
            {
                updateRequired = true;
                num = 1;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 22 && mouseEvent.dwMousePosition.Y <= y + 24)
            {
                updateRequired = true;
                num = 2;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 28 && mouseEvent.dwMousePosition.Y <= y + 30)
            {
                updateRequired = true;
                num = 3;
            }
        }
        if (mouseEvent.dwMousePosition.X >= x + 98 && mouseEvent.dwMousePosition.X <= x + 123)
        {
            if (mouseEvent.dwMousePosition.Y >= y + 16 && mouseEvent.dwMousePosition.Y <= y + 18)
            {
                updateRequired = true;
                num = 4;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 22 && mouseEvent.dwMousePosition.Y <= y + 24)
            {
                updateRequired = true;
                num = 5;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 28 && mouseEvent.dwMousePosition.Y <= y + 30)
            {
                updateRequired = true;
                num = 6;
            }
        }

        // Mouse click action
        if (num != 0 && (mouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED))
        {
            choice = num;
            updateDisplay(n);
            SubGameLst(choice);
            GamesLst();
        }
        if (updateRequired)
        {
            updateDisplay(n);
        }
    }
    else if (n == 5)
    {
        bool updateRequired = false;
        int x = 0; // Initialize x
        int y = 0; // Initialize y
        int choice = 0;
        num = 0; // Reset num to an invalid value

        // Mouse hover detection
        if (mouseEvent.dwMousePosition.X >= x + 10 && mouseEvent.dwMousePosition.X <= x + 40)
        {
            if (mouseEvent.dwMousePosition.Y >= y + 19 && mouseEvent.dwMousePosition.Y <= y + 21)
            {
                num = 1;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 23 && mouseEvent.dwMousePosition.Y <= y + 25)
            {
                num = 2;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 27 && mouseEvent.dwMousePosition.Y <= y + 29)
            {
                num = 3;
                updateRequired = true;
            }
        }
        if (mouseEvent.dwMousePosition.X >= x + 46 && mouseEvent.dwMousePosition.X <= x + 76)
        {
            if (mouseEvent.dwMousePosition.Y >= y + 19 && mouseEvent.dwMousePosition.Y <= y + 21)
            {
                num = 4;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 23 && mouseEvent.dwMousePosition.Y <= y + 25)
            {
                num = 5;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 27 && mouseEvent.dwMousePosition.Y <= y + 29)
            {
                num = 6;
                updateRequired = true;
            }
        }

        // Mouse click action
        if (num != 0 && (mouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED))
        {
            choice = num;
            updateDisplay(n);
            SubManageUserInfo(choice);
            ManageUserInfo();
        }
        if (updateRequired)
        {
            updateDisplay(n);
        }
    }
    else if (n == 6)
    {
        bool updateRequired = false;
        int x = 0; // Initialize x
        int y = 0; // Initialize y
        int choice = 0;
        num = 0; // Reset num to an invalid value

        // Mouse hover detection
        if (mouseEvent.dwMousePosition.X >= x + 55 && mouseEvent.dwMousePosition.X <= x + 78)
        {
            if (mouseEvent.dwMousePosition.Y >= y + 17 && mouseEvent.dwMousePosition.Y <= y + 19)
            {
                num = 1;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 24 && mouseEvent.dwMousePosition.Y <= y + 26)
            {
                num = 2;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 31 && mouseEvent.dwMousePosition.Y <= y + 33)
            {
                num = 3;
                updateRequired = true;
            }
        }
        if (mouseEvent.dwMousePosition.X >= x + 82 && mouseEvent.dwMousePosition.X <= x + 105)
        {
            if (mouseEvent.dwMousePosition.Y >= y + 17 && mouseEvent.dwMousePosition.Y <= y + 19)
            {
                num = 4;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 24 && mouseEvent.dwMousePosition.Y <= y + 26)
            {
                num = 5;
                updateRequired = true;
            }
            else if (mouseEvent.dwMousePosition.Y >= y + 31 && mouseEvent.dwMousePosition.Y <= y + 33)
            {
                num = 6;
                updateRequired = true;
            }
        }

        // Mouse click action
        if (num != 0 && (mouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED))
        {
            choice = num;
            updateDisplay(n);
            SubFoodAndDrink(choice);
            H::cls();
            FoodOrDrinkLst();
        }
        if (updateRequired)
        {
            updateDisplay(n);
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::processInputEvents(INPUT_RECORD *ir, DWORD nRead, HANDLE hStdOutput, int n)
{
    for (DWORD i = 0; i < nRead; i++)
    {
        switch (ir[i].EventType)
        {
        case KEY_EVENT:
            processKeyEvent(ir[i].Event.KeyEvent, hStdOutput, n);
            break;
        case MOUSE_EVENT:
            processMouseEvent(ir[i].Event.MouseEvent, hStdOutput, n);
            break;
        }
    }
    //    Admin_And_User();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::updateDisplay(int n)
{
    if (n == 1)
    {
        if (num == 1)
        {
            H::drawBoxSingleLineWithBG(x + 84, y + 19, 25, 1, 153);
            H::setcolor(151);
            H::gotoxy(x + 84, y + 20);
            cout << "         User          ";

            H::drawBoxSingleLineWithBG(x + 84, y + 15, 25, 1, 204);
            H::setcolor(201);
            H::gotoxy(x + 85, y + 16);
            cout << "  => Administrator <=  ";
            H::clearBox(x + 24, y + 8, 32, 6, 136); // Cls text
            LoginAs_Admin_UserTxt(1);
        }
        else if (num == 2)
        {
            H::drawBoxSingleLineWithBG(x + 84, y + 15, 25, 1, 153);
            H::setcolor(151);
            H::gotoxy(x + 84, y + 16);
            cout << "     Administrator     ";

            H::drawBoxSingleLineWithBG(x + 84, y + 19, 25, 1, 204);
            H::setcolor(201);
            H::gotoxy(x + 85, y + 20);
            cout << "  =>     User      <=  ";
            H::clearBox(x + 24, y + 8, 32, 6, 136); // Cls text
            LoginAs_Admin_UserTxt(2);
        }
    }
    else if (n == 2)
    {
        AdminMenuBoxes();
        H::gotoxy(69, 36);
        H::setcolor(1);
        cout << "Use";
        H::setcolor(4);
        cout << " [UP] [DOWN]";
        H::setcolor(1);
        cout << " arrow key to move between options and ";
        H::setcolor(4);
        cout << "[ENTER]";
        H::setcolor(1);
        cout << " to select";
        H::setcolor(7);
        H::gotoxy(17, 19);
        cout << "Admin Profile Information";
        H::gotoxy(25, 22);
        cout << "Games List";
        H::gotoxy(19, 25);
        cout << "Food and Drinks List";
        H::gotoxy(17, 28);
        cout << "Manage User's Information";
        H::gotoxy(19, 31);
        cout << "Manage User's Payment";
        H::gotoxy(21, 34);
        cout << "Log Out of Account";
        if (num == 1)
        {
            H::drawBoxSingleLineWithBG(60, 12, 30, 1, 255);
            H::gotoxy(62, 13);
            H::setcolor(252);
            cout << "Admin Profile Information";
            H::drawBoxDoubleLineWithBG(15, 18, 30, 1, 255);
            H::gotoxy(17, 19);
            H::setcolor(249);
            cout << "Admin Profile Information";
            AdminMenu_Art(1);
        }
        else if (num == 2)
        {
            H::drawBoxSingleLineWithBG(60, 12, 30, 1, 255);
            H::gotoxy(70, 13);
            H::setcolor(252);
            cout << "Games List";
            H::drawBoxDoubleLineWithBG(15, 21, 30, 1, 255);
            H::gotoxy(25, 22);
            H::setcolor(249);
            cout << "Games List";
            AdminMenu_Art(2);
        }
        else if (num == 3)
        {
            H::drawBoxSingleLineWithBG(60, 12, 30, 1, 255);
            H::gotoxy(64, 13);
            H::setcolor(252);
            cout << "Food and Drinks List";
            H::drawBoxDoubleLineWithBG(15, 24, 30, 1, 255);
            H::gotoxy(19, 25);
            H::setcolor(249);
            cout << "Food and Drinks List";
            AdminMenu_Art(3);
        }
        else if (num == 4)
        {
            H::drawBoxSingleLineWithBG(60, 12, 30, 1, 255);
            H::gotoxy(62, 13);
            H::setcolor(252);
            cout << "Manage User's Information";
            H::drawBoxDoubleLineWithBG(15, 27, 30, 1, 255);
            H::gotoxy(17, 28);
            H::setcolor(249);
            cout << "Manage User's Information";
            AdminMenu_Art(4);
        }
        else if (num == 5)
        {
            H::drawBoxSingleLineWithBG(60, 12, 30, 1, 255);
            H::gotoxy(64, 13);
            H::setcolor(252);
            cout << "Manage User's Payment";
            H::drawBoxDoubleLineWithBG(15, 30, 30, 1, 255);
            H::gotoxy(19, 31);
            H::setcolor(249);
            cout << "Manage User's Payment";
            AdminMenu_Art(5);
        }
        else if (num == 6)
        {
            H::drawBoxSingleLineWithBG(60, 12, 30, 1, 255);
            H::gotoxy(66, 13);
            H::setcolor(252);
            cout << "Log Out of Account";
            H::drawBoxDoubleLineWithBG(15, 33, 30, 1, 255);
            H::gotoxy(21, 34);
            H::setcolor(249);
            cout << "Log Out of Account";
            AdminMenu_Art(6);
        }
    }
    else if (n == 3)
    {

        H::drawBoxDoubleLineWithBG(105, 11, 30, 1, 3);
        H::drawBoxDoubleLineWithBG(105, 17, 30, 1, 3);
        H::drawBoxDoubleLineWithBG(105, 23, 30, 1, 3);

        H::gotoxy(116, 12);
        H::setcolor(7);
        cout << "About Us";
        H::gotoxy(112, 18);
        H::setcolor(7);
        cout << "A Letter from Us";
        H::gotoxy(114, 24);
        H::setcolor(7);
        cout << "Back to MENU";

        if (num == 1)
        {
            H::drawBoxDoubleLineWithBG(105, 11, 30, 1, 255);
            H::gotoxy(116, 12);
            H::setcolor(249);
            cout << "About Us";
        }
        else if (num == 2)
        {
            H::drawBoxDoubleLineWithBG(105, 17, 30, 1, 255);
            H::gotoxy(112, 18);
            H::setcolor(249);
            cout << "A Letter from Us";
        }
        else if (num == 3)
        {
            H::drawBoxDoubleLineWithBG(105, 23, 30, 1, 255);
            H::gotoxy(114, 24);
            H::setcolor(249);
            cout << "Back to MENU";
        }
    }
    else if (n == 4)
    {
        H::gotoxy(44, 36);
        H::setcolor(1);
        cout << "Use";
        H::setcolor(4);
        cout << " [UP] [DOWN]";
        H::setcolor(1);
        cout << " arrow key to move between options and ";
        H::setcolor(4);
        cout << "[ENTER]";
        H::setcolor(1);
        cout << " to select";

        H::drawBoxDoubleLineWithBG(39, 16, 25, 1, 3); // add game
        H::drawBoxDoubleLineWithBG(39, 22, 25, 1, 3); // view
        H::drawBoxDoubleLineWithBG(39, 28, 25, 1, 3); // search
        H::drawBoxDoubleLineWithBG(98, 16, 25, 1, 3); // update
        H::drawBoxDoubleLineWithBG(98, 22, 25, 1, 3); // delete
        H::drawBoxDoubleLineWithBG(98, 28, 25, 1, 3); // back

        H::foreColor(7);
        H::gotoxy(45, 17);
        cout << "Add Game Data";
        H::gotoxy(44, 23);
        cout << "View Games Data";
        H::gotoxy(43, 29);
        cout << "Search Game Data";
        H::gotoxy(102, 17);
        cout << "Update Game Data";
        H::gotoxy(102, 23);
        cout << "Delete Game Data";
        H::gotoxy(104, 29);
        cout << "Back to MENU";

        if (num == 1)
        {
            H::drawBoxDoubleLineWithBG(39, 16, 25, 1, 255);
            H::foreColor(249);
            H::gotoxy(45, 17);
            cout << "Add Game Data";
        }
        else if (num == 2)
        {
            H::drawBoxDoubleLineWithBG(39, 22, 25, 1, 255);
            H::foreColor(249);
            H::gotoxy(44, 23);
            cout << "View Games Data";
        }
        else if (num == 3)
        {
            H::drawBoxDoubleLineWithBG(39, 28, 25, 1, 255);
            H::foreColor(249);
            H::gotoxy(43, 29);
            cout << "Search Game Data";
        }
        else if (num == 4)
        {
            H::drawBoxDoubleLineWithBG(98, 16, 25, 1, 255);
            H::foreColor(249);
            H::gotoxy(102, 17);
            cout << "Update Game Data";
        }
        else if (num == 5)
        {
            H::drawBoxDoubleLineWithBG(98, 22, 25, 1, 255);
            H::foreColor(249);
            H::gotoxy(102, 23);
            cout << "Delete Game Data";
        }
        else if (num == 6)
        {
            H::drawBoxDoubleLineWithBG(98, 28, 25, 1, 255);
            H::foreColor(249);
            H::gotoxy(104, 29);
            cout << "Back to MENU";
        }
    }
    else if (n == 5)
    {
        H::drawBoxDoubleLineWithBG(10, 15 + 4, 30, 1, 3);  // sign
        H::drawBoxDoubleLineWithBG(10, 15 + 8, 30, 1, 3);  // view
        H::drawBoxDoubleLineWithBG(10, 15 + 12, 30, 1, 3); // search
        H::drawBoxDoubleLineWithBG(46, 15 + 4, 30, 1, 3);  // edit
        H::drawBoxDoubleLineWithBG(46, 15 + 8, 30, 1, 3);  // remove
        H::drawBoxDoubleLineWithBG(46, 15 + 12, 30, 1, 3); // back

        H::foreColor(7);
        H::gotoxy(19, 20);
        cout << "Sign Up User";
        H::gotoxy(17, 24);
        cout << "View Users Info";
        H::gotoxy(16, 28);
        cout << "Search User's Info";
        H::gotoxy(53, 20);
        cout << "Edit User's Info";
        H::gotoxy(50, 24);
        cout << "Remove User's Account";
        H::gotoxy(55, 28);
        cout << "Back to MENU";

        if (num == 1)
        {
            H::drawBoxDoubleLineWithBG(10, 15 + 4, 30, 1, 255); // sign
            H::foreColor(249);
            H::gotoxy(19, 20);
            cout << "Sign Up User";
        }
        else if (num == 2)
        {
            H::drawBoxDoubleLineWithBG(10, 15 + 8, 30, 1, 255); // view
            H::foreColor(249);
            H::gotoxy(17, 24);
            cout << "View Users Info";
        }
        else if (num == 3)
        {
            H::drawBoxDoubleLineWithBG(10, 15 + 12, 30, 1, 255); // search
            H::foreColor(249);
            H::gotoxy(16, 28);
            cout << "Search User's Info";
        }
        else if (num == 4)
        {
            H::drawBoxDoubleLineWithBG(46, 15 + 4, 30, 1, 255); // edit
            H::foreColor(249);
            H::gotoxy(53, 20);
            cout << "Edit User's Info";
        }
        else if (num == 5)
        {
            H::drawBoxDoubleLineWithBG(46, 15 + 8, 30, 1, 255); // remove
            H::foreColor(249);
            H::gotoxy(50, 24);
            cout << "Remove User's Account";
        }
        else if (num == 6)
        {
            H::drawBoxDoubleLineWithBG(46, 15 + 12, 30, 1, 255); // back
            H::foreColor(249);
            H::gotoxy(55, 28);
            cout << "Back to MENU";
        }
    }
    else if (n == 6)
    {
        B::FoodMenuTxt();
        H::drawBoxDoubleLineWithBG(55, 17, 23, 1, 3); // add
        H::drawBoxDoubleLineWithBG(55, 24, 23, 1, 3); // view
        H::drawBoxDoubleLineWithBG(55, 31, 23, 1, 3); // search
        H::drawBoxDoubleLineWithBG(82, 17, 23, 1, 3); // update
        H::drawBoxDoubleLineWithBG(82, 24, 23, 1, 3); // delete
        H::drawBoxDoubleLineWithBG(82, 31, 23, 1, 3); // back
        // label
        H::foreColor(7);
        H::gotoxy(56, 18);
        cout << "Input Food or Drink";
        H::gotoxy(57, 25);
        cout << "View Food & Drinks";
        H::gotoxy(56, 32);
        cout << "Search Food or Drink";
        H::gotoxy(83, 18);
        cout << "Update Food or Drink";
        H::gotoxy(83, 25);
        cout << "Delete Food or Drink";
        H::gotoxy(87, 32);
        cout << "Back to MENU";

        if (num == 1)
        {
            H::drawBoxDoubleLineWithBG(55, 17, 23, 1, 255); // add
            H::gotoxy(56, 18);
            H::foreColor(249);
            cout << "Input Food or Drink";
            B::FoodMenu_Design(1);
        }
        else if (num == 2)
        {
            H::drawBoxDoubleLineWithBG(55, 24, 23, 1, 255); // add
            H::gotoxy(57, 25);
            H::foreColor(249);
            cout << "View Food & Drinks";
            B::FoodMenu_Design(3);
        }
        else if (num == 3)
        {
            H::drawBoxDoubleLineWithBG(55, 31, 23, 1, 255); // add
            H::gotoxy(56, 32);
            H::foreColor(249);
            cout << "Search Food or Drink";
            B::FoodMenu_Design(5);
        }
        else if (num == 4)
        {
            H::drawBoxDoubleLineWithBG(82, 17, 23, 1, 255); // update
            H::gotoxy(83, 18);
            H::foreColor(249);
            cout << "Update Food or Drink";
            B::FoodMenu_Design(7);
        }
        else if (num == 5)
        {
            H::drawBoxDoubleLineWithBG(82, 24, 23, 1, 255); // update
            H::gotoxy(83, 25);
            H::foreColor(249);
            cout << "Delete Food or Drink";
            B::FoodMenu_Design(9);
        }
        else if (num == 6)
        {
            H::drawBoxDoubleLineWithBG(82, 31, 23, 1, 255); // update
            H::gotoxy(87, 32);
            H::foreColor(249);
            cout << "Back to MENU";
            B::FoodMenu_Design(11);
        }
    }
    else if (n == 7)
    {
        // int pocision = 10 + 22;

        H::drawBoxSingleLineWithBG(33, 14, 31, 1, 1); // info
        H::drawBoxSingleLineWithBG(33, 17, 31, 1, 1); // play game
        H::drawBoxSingleLineWithBG(33, 20, 31, 1, 1); // buy hour
        H::drawBoxSingleLineWithBG(33, 23, 31, 1, 1); // buy foodndrink
        H::drawBoxSingleLineWithBG(33, 26, 31, 1, 1); // invoice
        H::drawBoxSingleLineWithBG(33, 29, 31, 1, 1); // log out

        Design::tp(7, 35, 15);
        cout << "My Information";
        H::gotoxy(35, 18);
        cout << "Play Games";
        H::gotoxy(35, 21);
        cout << "Buy More Hours";
        H::gotoxy(35, 24);
        cout << "Buy Food or Drinks";
        H::gotoxy(35, 27);
        cout << "View Spending List";
        H::gotoxy(35, 30);
        cout << "Log Out of Account";

        if (num == 1)
        {
            LENG::UserMenu_Art(num);
        }
        else if (num == 2)
        {
            LENG::UserMenu_Art(num);
        }
        else if (num == 3)
        {
            LENG::UserMenu_Art(num);
        }
        else if (num == 4)
        {
            LENG::UserMenu_Art(num);
        }
        else if (num == 5)
        {
            LENG::UserMenu_Art(num);
        }
        else if (num == 6)
        {
            LENG::UserMenu_Art(num);
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::KeyEvent(KEY_EVENT_RECORD keyEvent, HANDLE hStdOutput, const char *username, const char *password)
{
    int choice = 0;

    if (keyEvent.bKeyDown)
    {
        switch (keyEvent.wVirtualKeyCode)
        {
        case VK_BACK:
            // Set event if Backspace is pressed.
            break;
        case VK_UP:
            num--;
            if (num < 1)
            {
                num = 6;
            }
            break;
        case VK_DOWN:
            num++;
            if (num > 6)
            {
                num = 1;
            }
            break;
        case VK_RETURN:
            choice = num;
            if (choice == 1)
            {
                Design::LoadingAnimation();
                File::viewProfile(username, password);
            }
            else if (choice == 2)
            {
                Design::LoadingAnimation();
                File::GameMENU();
            }
            else if (choice == 3)
            {
                Design::LoadingAnimation();
                File::buyMoreTime(username, password);
            }
            else if (choice == 4)
            {
                Design::LoadingAnimation();
                File::buyFood(username, password);
            }
            else if (choice == 5)
            {
                Design::LoadingAnimation();
                File::invoice(username, password);
            }
            else if (choice == 6)
            {
                Design::LoadingAnimation();
                File::logoutTimeToFile(username, password);
                File::calculateTime(username, password);
                Admin_And_User();
            }
            userSubMenu(username, password);
            break;
        }
        updateDisplay(7);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::MouseEvent(MOUSE_EVENT_RECORD mouseEvent, HANDLE hStdOutput, const char *username, const char *password)
{
    bool updateRequired = false;
    int x = 0; // Initialize x
    int y = 0; // Initialize y
    num = 0;   // Reset num to an invalid value

    // Mouse hover detection
    if (mouseEvent.dwMousePosition.X >= x + 33 && mouseEvent.dwMousePosition.X <= x + 64)
    {
        if (mouseEvent.dwMousePosition.Y >= y + 14 && mouseEvent.dwMousePosition.Y <= y + 16)
        {
            num = 1;
            updateRequired = true;
        }
        else if (mouseEvent.dwMousePosition.Y >= y + 17 && mouseEvent.dwMousePosition.Y <= y + 19)
        {
            num = 2;
            updateRequired = true;
        }
        else if (mouseEvent.dwMousePosition.Y >= y + 20 && mouseEvent.dwMousePosition.Y <= y + 22)
        {
            num = 3;
            updateRequired = true;
        }
        else if (mouseEvent.dwMousePosition.Y >= y + 23 && mouseEvent.dwMousePosition.Y <= y + 25)
        {
            num = 4;
            updateRequired = true;
        }
        else if (mouseEvent.dwMousePosition.Y >= y + 26 && mouseEvent.dwMousePosition.Y <= y + 28)
        {
            num = 5;
            updateRequired = true;
        }
        else if (mouseEvent.dwMousePosition.Y >= y + 29 && mouseEvent.dwMousePosition.Y <= y + 31)
        {
            num = 6;
            updateRequired = true;
        }
    }

    // Mouse click action
    if (num != 0 && (mouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED))
    {
        // Execute actions based on the value of num
        Design::LoadingAnimation();
        switch (num)
        {
        case 1:
            File::viewProfile(username, password);
            break;
        case 2:
            File::GameMENU();
            break;
        case 3:
            File::buyMoreTime(username, password);
            break;
        case 4:
            File::buyFood(username, password);
            break;
        case 5:
            File::invoice(username, password);
            break;
        case 6:
            File::logoutTimeToFile(username, password);
            File::calculateTime(username, password);
            Admin_And_User();
            break;
        }
        userSubMenu(username, password);
    }
    if (updateRequired)
    {
        updateDisplay(7);
    }
}

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::InputEvents(INPUT_RECORD *ir, DWORD nRead, HANDLE hStdOutput, const char *username, const char *password)
{
    for (DWORD i = 0; i < nRead; i++)
    {
        switch (ir[i].EventType)
        {
        case KEY_EVENT:
            KeyEvent(ir[i].Event.KeyEvent, hStdOutput, username, password);
            break;
        case MOUSE_EVENT:
            MouseEvent(ir[i].Event.MouseEvent, hStdOutput, username, password);
            break;
        }
    } // Continue the loop otherwise
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::Admin_And_User()
{
    H::setcursor(0, 0);
    H::setcolor(7);
    H::cls();
    outline();
    Login_Design();

    num = 1;
    updateDisplay(1);

    INPUT_RECORD ir[128];
    HANDLE hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    HANDLE handles[2] = {hEvent, hStdInput};
    DWORD nRead;

    SetConsoleMode(hStdInput, ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
    FlushConsoleInputBuffer(hStdInput);

    while (WaitForMultipleObjects(2, handles, FALSE, INFINITE))
    {
        ReadConsoleInput(hStdInput, ir, 128, &nRead);
        processInputEvents(ir, nRead, hStdOutput, 1);
    }
    //    while (1)
    //    {
    //        H::setcursor(0, 0);
    //        H::setcolor(7);
    //        H::cls();
    //        outline();
    //        Login_Design();
    //
    //        num = 1;
    //        updateDisplay(1);
    //
    //        INPUT_RECORD ir[128];
    //        HANDLE hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    //        HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    //        HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    //        HANDLE handles[2] = {hEvent, hStdInput};
    //        DWORD nRead;
    //
    //        SetConsoleMode(hStdInput, ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
    //        FlushConsoleInputBuffer(hStdInput);
    //
    //        while (WaitForMultipleObjects(2, handles, FALSE, INFINITE))
    //        {
    //            ReadConsoleInput(hStdInput, ir, 128, &nRead);
    //            processInputEvents(ir, nRead, hStdOutput, 1);
    //        }
    //    }
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

                press = getch();

                H::clearBox(x + 19, y + 18, 42, 0, 247); // Clear username and password boxes
                H::clearBox(x + 19, y + 24, 42, 0, 247); // Clear username and password boxes
                H::clearBox(x + 18, y + 27, 43, 1, 136); // Clear message

                if (press == 27)
                {
                    Admin_And_User();
                }
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
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                          Admin Option
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::Admin_Option()
{
    num = 1;
    H::setConsoleTitle(TEXT("Admin MENU"));
    H::setcursor(0, 0);
    Design::LoadingAnimation();
    H::setcolor(7);
    H::cls();

    AdminMenuBoxes();
    outline();
    AdminMenuTxt();
    AdminMenu_Design();
    AdminMenu_Art(1);

    H::gotoxy(69, 36);
    H::setcolor(1);
    cout << "Use";
    H::setcolor(4);
    cout << " [UP] [DOWN]";
    H::setcolor(1);
    cout << " arrow key to move between options and ";
    H::setcolor(4);
    cout << "[ENTER]";
    H::setcolor(1);
    cout << " to select";
    H::setcolor(7);
    H::gotoxy(17, 19);
    cout << "Admin Profile Information";
    H::gotoxy(25, 22);
    cout << "Games List";
    H::gotoxy(19, 25);
    cout << "Food and Drinks List";
    H::gotoxy(17, 28);
    cout << "Manage User's Information";
    H::gotoxy(19, 31);
    cout << "Manage User's Payment";
    H::gotoxy(21, 34);
    cout << "Log Out of Account";

    updateDisplay(2);

    INPUT_RECORD ir[128];
    HANDLE hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    HANDLE handles[2] = {hEvent, hStdInput};
    DWORD nRead;

    SetConsoleMode(hStdInput, ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
    FlushConsoleInputBuffer(hStdInput);

    while (WaitForMultipleObjects(2, handles, FALSE, INFINITE))
    {
        ReadConsoleInput(hStdInput, ir, 128, &nRead);
        processInputEvents(ir, nRead, hStdOutput, 2);
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
    H::setcursor(0, 0);
    outline();

    AdminProfileInfoTxt();
    AdminProfileInfo_Design();

    updateDisplay(3);

    INPUT_RECORD ir[128];
    HANDLE hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    HANDLE handles[2] = {hEvent, hStdInput};
    DWORD nRead;

    SetConsoleMode(hStdInput, ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
    FlushConsoleInputBuffer(hStdInput);

    while (WaitForMultipleObjects(2, handles, FALSE, INFINITE))
    {
        ReadConsoleInput(hStdInput, ir, 128, &nRead);
        processInputEvents(ir, nRead, hStdOutput, 3);
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
            const char *websiteUrl = "Website\\index.html";
            system(("start " + string(websiteUrl)).c_str());
            break;
        }
    }
    H::cls();
    AdminProfileInfo();
}
/******************************************************** */
void Process::A_LetterFromUs()
{
    H::setConsoleTitle(TEXT("A letter from Developers"));
    H::setcolor(7);
    H::cls();
    char press;
    outline();

    A_Letter_from_UsTxt();
    A_Letter_from_Us_Animation();
    A_Letter_from_Us_Design(5);

    while (1)
    {

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
        if (press == '1')
        {
            openURL("http://training.antkh.com/");
        }
        if (press == '2')
        {
            openURL("https://mptc.gov.kh/en/");
        }
    }
    H::cls();
    AdminProfileInfo();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::GamesLst()
{
    H::setConsoleTitle(TEXT("Games List Menu"));

    num = 1;
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    B::GameMenuTxt();
    B::GameMenu_Design();

    updateDisplay(4);

    INPUT_RECORD ir[128];
    HANDLE hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    HANDLE handles[2] = {hEvent, hStdInput};
    DWORD nRead;

    SetConsoleMode(hStdInput, ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
    FlushConsoleInputBuffer(hStdInput);

    while (WaitForMultipleObjects(2, handles, FALSE, INFINITE) != WAIT_OBJECT_0)
    {
        ReadConsoleInput(hStdInput, ir, 128, &nRead);
        processInputEvents(ir, nRead, hStdOutput, 4);
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

    H::gotoxy(63, 34);
    H::setcolor(185);
    cout << "..Data has sucessfully inserted..";

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
    }
}
/******************************************************** */
void Process::ViewGame()
{
    H::setConsoleTitle(TEXT("View Games Data"));
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
    }
}
/******************************************************** */
void Process::RemoveGame()
{
    H::setConsoleTitle(TEXT("Delete Game Data"));
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
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::ManageUserInfo()
{
    H::setConsoleTitle(TEXT("Manage User Information"));

    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();

    num = 1;

    B::ManageUserInfoTxt();
    B::ManageUserInfo_Design();

    H::gotoxy(8, 36);
    H::setcolor(1);
    cout << "Use ";
    H::setcolor(4);
    cout << "[UP] [DOWN]";
    H::setcolor(1);
    cout << " arrow key to move between options and ";
    H::setcolor(4);
    cout << "[ENTER]";
    H::setcolor(1);
    cout << " to select";

    updateDisplay(5);

    INPUT_RECORD ir[128];
    HANDLE hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    HANDLE handles[2] = {hEvent, hStdInput};
    DWORD nRead;

    SetConsoleMode(hStdInput, ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
    FlushConsoleInputBuffer(hStdInput);

    while (WaitForMultipleObjects(2, handles, FALSE, INFINITE))
    {
        ReadConsoleInput(hStdInput, ir, 128, &nRead);
        processInputEvents(ir, nRead, hStdOutput, 5);
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

    H::gotoxy(64, 35);
    H::setcolor(199);
    cout << "..Successfully signed up user..";

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
    Admin_Option();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::FoodOrDrinkLst()
{
    H::setConsoleTitle(TEXT("Food and Drinks Menu"));

    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    outline();
    num = 1;

    // B::FoodMenuTxt(); // txt

    H::gotoxy(44, 37);
    H::setcolor(1);
    cout << "Use ";
    H::setcolor(4);
    cout << "[UP] [DOWN]";
    H::setcolor(1);
    cout << " arrow key to move between options and ";
    H::setcolor(4);
    cout << "[ENTER]";
    H::setcolor(1);
    cout << " to select";

    updateDisplay(6);

    INPUT_RECORD ir[128];
    HANDLE hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    HANDLE handles[2] = {hEvent, hStdInput};
    DWORD nRead;

    SetConsoleMode(hStdInput, ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
    FlushConsoleInputBuffer(hStdInput);

    while (WaitForMultipleObjects(2, handles, FALSE, INFINITE))
    {
        ReadConsoleInput(hStdInput, ir, 128, &nRead);
        processInputEvents(ir, nRead, hStdOutput, 6);
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

    H::gotoxy(63, 34);
    H::setcolor(185);
    cout << "..Data has sucessfully inserted..";

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
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// USER LOGIN
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::user_login()
{
    char username[20];
    char password[20];
    bool islogin = false;
    char press = ' ';

    fstream file(File::UserInfoFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        H::setcolor(135);
        H::gotoxy(42, 32);
        cout << "Register First!!";
        H::delay(999);
        H::clearBox(42, 32, 25, 0, 136);
    }
    else
    {
        if (File::check_file(File::UserInfoFile))
        {
            H::setcolor(135);
            H::gotoxy(42, 32);
            cout << "Register First!!";
            H::delay(999);
            H::clearBox(42, 32, 25, 0, 136);
        }
        else
        {
            File::mupVector.clear();

            while (file.read((char *)&File::mup, sizeof(MgUserPayment)))
            {
                File::mupVector.push_back(File::mup);
            }

            file.close();

            while (1)
            {
                int chance = 3;

                while (chance != 0)
                {
                    H::setcursor(1, 0);
                    H::setcolor(249);
                    H::gotoxy(30, 22);
                    H::inputAll(username, sizeof(username)); // username

                    H::setcolor(249);
                    H::gotoxy(30, 28);
                    H::hidePassword(password, sizeof(password));
                    H::setcursor(0, 0);

                    for (const auto &user : File::mupVector)
                    {
                        if (strcmp(username, user.getUsername()) == 0 && strcmp(password, user.getPassword()) == 0)
                        {
                            islogin = true;
                            break;
                        }
                    }
                    if (islogin == true)
                    {
                        Design::loginMsg(3);
                        File::loginTimeToFile(username, password);
                        userSubMenu(username, password);
                        break;
                    }
                    else
                    {
                        islogin = false;
                        H::setcursor(0, 0);
                        H::setcolor(140);
                        H::gotoxy(10 + 29, 5 + 27);
                        cout << "You have ";
                        H::setcolor(137);
                        cout << --chance;
                        H::setcolor(140);
                        cout << " left";

                        Design::loginMsg(1); // input msg

                        press = getch(); // press ESC to back

                        H::clearBox(10 + 19, 5 + 18, 42, 0, 247); // Clear username and password boxes
                        H::clearBox(10 + 19, 5 + 24, 42, 0, 247); // Clear username and password boxes
                        H::clearBox(10 + 18, 5 + 27, 43, 1, 136); // Clear message
                        // break;
                        if (press == 27)
                        {
                            break;
                        }
                    }
                }
                if (chance == 0)
                {
                    press = ' ';
                    for (int i = 1; i <= 6; i++)
                    {
                        H::setcursor(0, 0);
                        H::setcolor(140);
                        H::gotoxy(27, 32);
                        cout << "You ran out chances! Please wait for   seconds";
                        H::setcolor(137);
                        H::gotoxy(10 + 54, 32);
                        cout << 6 - i;
                        H::delay(999);

                        H::clearBox(27, 32, 45, 0, 136); // cls chance msg
                        H::setcolor(7);
                    }

                    Design::loginMsg(2); // esc or continue

                    press = getch();

                    H::clearBox(10 + 38, 38, 61, 0, 7); // cls msg

                    if (press == 27)
                    {
                        break;
                    }
                }
                if (islogin == true)
                {
                    break;
                }
                if (press == 27)
                {
                    break;
                }
            }
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// USER MENU
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::userSubMenu(const char *username, const char *password)
{
    H::setConsoleTitle(TEXT("User MENU"));
    H::setcursor(0, 0);
    Design::LoadingAnimation();

    H::setcolor(7);
    H::cls();
    Design::outline();
    Design::UserMenuTxt();
    LENG::UserMenu_Design();
    num = 1;

    updateDisplay(7);

    INPUT_RECORD ir[128];
    HANDLE hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    HANDLE handles[2] = {hEvent, hStdInput};
    DWORD nRead;

    SetConsoleMode(hStdInput, ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
    FlushConsoleInputBuffer(hStdInput);

    while (WaitForMultipleObjects(2, handles, FALSE, INFINITE))
    {
        ReadConsoleInput(hStdInput, ir, 128, &nRead);
        InputEvents(ir, nRead, hStdOutput, username, password);
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@3
void Process::ExitTheProgram()
{
    H::setConsoleTitle(TEXT("Exit the program"));
    H::setcolor(7);
    H::cls();
    outline();
    H::setcursor(0, 0);

    B::ExitTxt();
    B::Exit_Design();

    H::gotoxy(0, 41);
    exit(0);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Process::BLT_Cyber_House_Management_System()
{
    H::setConsoleTitle(TEXT("BLT Cyber House Management System"));
    H::setcolor(7);
    H::setcursor(0, 0);

    // Design
    interface_design();

    // Main
    Admin_And_User();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                    END OF PROCESS CODE
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif