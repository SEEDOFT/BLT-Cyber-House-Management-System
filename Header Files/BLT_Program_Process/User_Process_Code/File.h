#ifndef ___File_H___
#define ___File_H___
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../../BLT_Design/designConsole.h"
#include "../../BLT_Design/Namespace/BLT.h"
#include "PGame.h"
#include <cstdlib>
// #include "libxlsxwriter.h"
#include "Invoice.h"
#include <sys/stat.h>
#include <vector>
#include <ctime>
#include <cmath>
#include <sstream>
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace BLT;
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class File
{
    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
private:
    static int number;

    static string dir;
    static string subDir;
    static string FoodnDrinkFile;
    static string Backup;
    static string GameFile;
    // static string UserInfoFile;
    static string MgUserPaymentFile;
    static string invoiceFile;

    static int getMaxID(const string &fileName, int type);

    static vector<FoodnDrink> fndVector;
    static vector<Game> gameVector;
    // static vector<MgUserPayment> mupVector;
    static vector<myInvoice> invVector;

    static FoodnDrink fnd;
    static Game game;
    static MgUserInfo mui;
    // static MgUserPayment mup;
    static myInvoice inv;

    static fstream file;
    static string currentFile;

    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
public:
    static vector<MgUserPayment> mupVector;

    static MgUserPayment mup;

    static string UserInfoFile;
    // static bool KeyEvent(KEY_EVENT_RECORD keyEvent, HANDLE hStdOutput, int, const char *, const char *);
    // static bool MouseEvent(MOUSE_EVENT_RECORD mouseEvent, HANDLE hStdOutput, int, const char *, const char *);
    // static bool InputEvents(INPUT_RECORD *ir, DWORD nRead, HANDLE hStdOutput, int, const char *, const char *);
    // static void updateUserDisplay(int);

    static void insertFile(int n);
    static void viewFile(int n);
    static void searchFile(int n);
    static void updateFile(int n);
    static void deleteFile(int n);
    static bool check_file(const string &fileName);
    static bool checkUsername(const char *username, int x, int y, int color, int clsColor);
    static bool checkUsernameInVector(const char *username, int x, int y, int color);

    static void viewProfile(const char *username, const char *password);
    static void setCurrentFile(int n);
    static void insertToVector(int n, string &fileName);
    static void pushToVector(int n);
    static void loginTimeToFile(const char *username, const char *password);
    static void logoutTimeToFile(const char *username, const char *password);
    // static void user_login();
    // static void userSubMenu(const char *username, const char *password);
    static void buyMoreTime(const char *username, const char *password);
    static void invoice(const char *username, const char *password);
    static void calculateTime(const char *username, const char *password);
    static void buyFood(const char *username, const char *password);
    static int getInvoiceID();
    static void GameMENU();

    static void viewAllUserInvoice();
    static void OutputDate(int x, int y, int color);
    static void OutputHostName(int x, int y, int color);

    static void allUserInvoiceToCSV();
    static void UserInvoiceToCSV(const char *username);
    // static void writeInvoiceToExcel(const char *username, const char *password);

    ~File();
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int File::number = 1;

vector<FoodnDrink> File::fndVector;
vector<Game> File::gameVector;
vector<MgUserPayment> File::mupVector;
vector<myInvoice> File::invVector;

FoodnDrink File::fnd;
Game File::game;
MgUserInfo File::mui;
MgUserPayment File::mup;
myInvoice File::inv;

fstream File::file;

string File::dir = "Data";
// string File::subDir = dir + "/Excel";
string File::subDir = dir + "/Excel";
string File::FoodnDrinkFile = dir + "/FoodnDrink.ant";
string File::Backup = dir + "/BackUpFile.ant";
string File::GameFile = dir + "/Game.ant";
string File::UserInfoFile = dir + "/UserInfo.ant";
string File::MgUserPaymentFile = dir + "/MgUserPayment.ant";
string File::invoiceFile = dir + "/Invoice.ant";
string File::currentFile = "";
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// bool File::KeyEvent(KEY_EVENT_RECORD keyEvent, HANDLE hStdOutput, int n, const char *username, const char *password)
// {
//     int choice = 0;

//     if (n == 1 && keyEvent.bKeyDown) // Ensure it's a key press event
//     {
//         switch (keyEvent.wVirtualKeyCode)
//         {
//         case VK_BACK:
//             // Set event if Backspace is pressed.
//             break;
//         case VK_UP:
//             number--;
//             if (number < 1)
//             {
//                 number = 6;
//             }
//             break;
//         case VK_DOWN:
//             number++;
//             if (number > 6)
//             {
//                 number = 1;
//             }
//             break;
//         case VK_RETURN:
//             choice = number;
//             if (choice == 1)
//             {
//                 Design::LoadingAnimation();
//                 viewProfile(username, password);
//             }
//             else if (choice == 2)
//             {
//                 Design::LoadingAnimation();
//                 GameMENU();
//             }
//             else if (choice == 3)
//             {
//                 Design::LoadingAnimation();
//                 buyMoreTime(username, password);
//             }
//             else if (choice == 4)
//             {
//                 Design::LoadingAnimation();
//                 buyFood(username, password);
//             }
//             else if (choice == 5)
//             {
//                 Design::LoadingAnimation();
//                 invoice(username, password);
//             }
//             else if (choice == 6)
//             {
//                 Design::LoadingAnimation();
//                 logoutTimeToFile(username, password);
//                 calculateTime(username, password);
//                 return false;
//             }
//             userSubMenu(username, password);
//             break;
//         }
//         updateUserDisplay(n);
//     }
//     return true;
// }
// bool File::MouseEvent(MOUSE_EVENT_RECORD mouseEvent, HANDLE hStdOutput, int n, const char *username, const char *password)
// {
//     if (n == 1)
//     {
//         int x = 0; // Initialize x
//         int y = 0; // Initialize y
//         int choice = 0;

//         if (mouseEvent.dwMousePosition.X >= x + 33 && mouseEvent.dwMousePosition.X <= x + 64)
//         {
//             if (mouseEvent.dwMousePosition.Y >= y + 14 && mouseEvent.dwMousePosition.Y <= y + 16)
//             {
//                 number = 1;
//             }
//             else if (mouseEvent.dwMousePosition.Y >= y + 17 && mouseEvent.dwMousePosition.Y <= y + 19)
//             {
//                 number = 2;
//             }
//             else if (mouseEvent.dwMousePosition.Y >= y + 20 && mouseEvent.dwMousePosition.Y <= y + 22)
//             {
//                 number = 3;
//             }
//             else if (mouseEvent.dwMousePosition.Y >= y + 23 && mouseEvent.dwMousePosition.Y <= y + 25)
//             {
//                 number = 4;
//             }
//             else if (mouseEvent.dwMousePosition.Y >= y + 26 && mouseEvent.dwMousePosition.Y <= y + 28)
//             {
//                 number = 5;
//             }
//             else if (mouseEvent.dwMousePosition.Y >= y + 29 && mouseEvent.dwMousePosition.Y <= y + 31)
//             {
//                 number = 6;
//             }
//         }

//         // Mouse click action
//         if (mouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED)
//         {
//             // updateDisplay(n);
//             if (number == 1)
//             {
//                 Design::LoadingAnimation();
//                 viewProfile(username, password);
//             }
//             else if (number == 2)
//             {
//                 Design::LoadingAnimation();
//                 GameMENU();
//             }
//             else if (number == 3)
//             {
//                 Design::LoadingAnimation();
//                 buyMoreTime(username, password);
//             }
//             else if (number == 4)
//             {
//                 Design::LoadingAnimation();
//                 buyFood(username, password);
//             }
//             else if (number == 5)
//             {
//                 Design::LoadingAnimation();
//                 invoice(username, password);
//             }
//             else if (number == 6)
//             {
//                 Design::LoadingAnimation();
//                 logoutTimeToFile(username, password);
//                 calculateTime(username, password);
//                 return false;
//             }
//             userSubMenu(username, password);
//         }
//     }
//     return true;
// }
// bool File::InputEvents(INPUT_RECORD *ir, DWORD nRead, HANDLE hStdOutput, int n, const char *username, const char *password)
// {
//     for (DWORD i = 0; i < nRead; i++)
//     {
//         switch (ir[i].EventType)
//         {
//         case KEY_EVENT:
//             if (!KeyEvent(ir[i].Event.KeyEvent, hStdOutput, n, username, password))
//             {
//                 return false;
//             }
//             break;
//         case MOUSE_EVENT:
//             if (!MouseEvent(ir[i].Event.MouseEvent, hStdOutput, n, username, password))
//             {
//                 return false;
//             }
//             break;
//         }
//     }
//     return true; // Continue the loop otherwise
// }

// // void File::updateUserDisplay(int n)
// // {
// //     if (n == 1)
// //     {
// //         // int pocision = 10 + 22;

// //         H::drawBoxSingleLineWithBG(33, 14, 31, 1, 1); // info
// //         H::drawBoxSingleLineWithBG(33, 17, 31, 1, 1); // play game
// //         H::drawBoxSingleLineWithBG(33, 20, 31, 1, 1); // buy hour
// //         H::drawBoxSingleLineWithBG(33, 23, 31, 1, 1); // buy foodndrink
// //         H::drawBoxSingleLineWithBG(33, 26, 31, 1, 1); // invoice
// //         H::drawBoxSingleLineWithBG(33, 29, 31, 1, 1); // log out

// //         Design::tp(7, 35, 15);
// //         cout << "My Information";
// //         H::gotoxy(35, 18);
// //         cout << "Play Games";
// //         H::gotoxy(35, 21);
// //         cout << "Buy More Hours";
// //         H::gotoxy(35, 24);
// //         cout << "Buy Food or Drinks";
// //         H::gotoxy(35, 27);
// //         cout << "View Spending List";
// //         H::gotoxy(35, 30);
// //         cout << "Log Out of Account";

// //         if (number == 1)
// //         {
// //             LENG::UserMenu_Art(number);
// //         }
// //         else if (number == 2)
// //         {
// //             LENG::UserMenu_Art(number);
// //         }
// //         else if (number == 3)
// //         {
// //             LENG::UserMenu_Art(number);
// //         }
// //         else if (number == 4)
// //         {
// //             LENG::UserMenu_Art(number);
// //         }
// //         else if (number == 5)
// //         {
// //             LENG::UserMenu_Art(number);
// //         }
// //         else if (number == 6)
// //         {
// //             LENG::UserMenu_Art(number);
// //         }
// //     }
// // }

void File::OutputHostName(int x, int y, int color)
{
    DWORD size = MAX_COMPUTERNAME_LENGTH + 1;
    wchar_t hostname[MAX_COMPUTERNAME_LENGTH + 1];

    if (GetComputerNameW(hostname, &size))
    {
        H::setcolor(color);
        H::gotoxy(x, y);
        wcout << hostname;
    }
    else
    {
        cerr << "Error: Could not retrieve hostname." << endl;
    }
}
// //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::OutputDate(int x, int y, int color)
{
    time_t t = time(nullptr);
    tm *localTime = localtime(&t);

    const char *months[] =
        {
            "January", "February", "March", "April", "May",
            "June", "July", "August", "September", "October", "November", "December"};

    H::gotoxy(x, y);
    H::setcolor(color);
    cout << localTime->tm_mday << "/"
         << months[localTime->tm_mon] << "/"
         << (localTime->tm_year + 1900);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// CHECK FILE DATA
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool File::check_file(const string &fileName)
{
    ifstream file(fileName, ios::binary | ios::ate);
    if (!file)
    {
        return false;
    }

    streamsize fileSize = file.tellg();
    file.close();
    return fileSize == 0;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// AUTO ID
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int File::getMaxID(const string &fileName, int type)
{
    ifstream file(fileName, ios::in | ios::binary);
    int maxID = 999;

    if (type == 1)
    {
        while (file.read((char *)&fnd, sizeof(fnd)))
        {
            if (fnd.getFndID() > maxID)
            {
                maxID = fnd.getFndID();
            }
        }
    }
    else if (type == 2)
    {
        while (file.read((char *)&game, sizeof(game)))
        {
            if (game.getID() > maxID)
            {
                maxID = game.getID();
            }
        }
    }
    else if (type == 3)
    {
        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            if (mup.getID() > maxID)
            {
                maxID = mup.getID();
            }
        }
    }

    file.close();
    return maxID;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// SET FILE
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::setCurrentFile(int n)
{
    switch (n)
    {
    case 1:
        currentFile = FoodnDrinkFile;
        break;
    case 2:
        currentFile = GameFile;
        break;
    case 3:
        currentFile = UserInfoFile;
        break;
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// CHECK USERNAME IN FILE
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool File::checkUsername(const char *username, int x, int y, int color, int clsColor)
{
    H::setcursor(0, 0);
    file.open(UserInfoFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        return false;
    }
    else
    {
        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            if (strcmp(mup.getUsername(), username) == 0)
            {
                H::setcolor(color);
                H::gotoxy(x, y);
                cout << "Username already exists";
                H::delay(500);
                H::clearBox(x, y + 1, 23, -1, clsColor);
                file.close();
                return true;
            }
        }
    }
    file.close();
    return false;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// CHECK USERNAME IN VECTOR
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool File::checkUsernameInVector(const char *username, int x, int y, int color)
{
    H::setcursor(0, 0);
    for (const auto &user : mupVector)
    {
        if (strcmp(user.getUsername(), username) == 0)
        {
            H::setcolor(color);
            H::gotoxy(x, y);
            cout << "Username already exists";
            return true;
        }
    }
    return false;
}
// //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// //////////////////////////////////////////
// // ADD DATA TO VECTOR
// //////////////////////////////////////////
// //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::insertToVector(int n, string &currentFile)
{
    time_t t = time(nullptr);
    tm *localTime = localtime(&t);

    const char *months[] =
        {
            "January", "February", "March", "April", "May",
            "June", "July", "August", "September", "October", "November", "December"};
    int i = 1;
    char guestName[20];
    char username[20];
    H::setcursor(1, 0);
    int maxID = getMaxID(currentFile, n);
    fndVector.clear();
    gameVector.clear();
    mupVector.clear();
    if (n == 1)
    {
        fnd.setID(maxID + i);
        H::foreColor(176);
        H::gotoxy(99, 19);
        cout << ": " << fnd.getFndID();
        fnd.input();
        fndVector.push_back(fnd);
    }
    else if (n == 2)
    {
        game.setID(maxID + i);
        H::foreColor(176);
        H::gotoxy(99, 19);
        cout << ": ";
        cout << game.getID();
        game.input();
        gameVector.push_back(game);
    }
    else if (n == 3)
    {
        H::setcolor(135);
        H::gotoxy(65, 13);
        cout << maxID + 1;
        H::setcolor(135);
        H::gotoxy(65, 17);
        H::inputLetter(guestName, sizeof(guestName));

        do
        {
            H::setcursor(1, 0);
            H::setcolor(135);
            H::gotoxy(65, 21);
            H::inputAll(username, sizeof(username));

        } while (checkUsername(username, 65, 21, 135, 136) || checkUsernameInVector(username, 65, 21, 135));
        H::setcursor(1, 0);
        mup.setGuestname(guestName);
        mup.setUsername(username);
        mup.input(maxID + i);

        mup.setCrtMonth(months[localTime->tm_mon]);
        mup.setDay(localTime->tm_mday);
        mup.setYear(localTime->tm_year + 1900);
        mupVector.push_back(mup);
        H::setcursor(0, 0);
    }
    i++;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// ADD DATA TO FILE
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::insertFile(int n)
{
    struct stat sb;
    if (stat(dir.c_str(), &sb) != 0)
    {
        mkdir(dir.c_str());
    }

    setCurrentFile(n);

    insertToVector(n, currentFile);

    file.open(currentFile, ios::out | ios::app | ios::binary);

    if (n == 1)
    {
        for (const auto &insert : fndVector)
        {
            file.write((char *)&insert, sizeof(FoodnDrink));
        }
        fndVector.clear();
    }
    else if (n == 2)
    {
        for (const auto &insert : gameVector)
        {
            file.write((char *)&insert, sizeof(Game));
        }
        gameVector.clear();
    }
    else if (n == 3)
    {
        for (const auto &insert : mupVector)
        {
            file.write((char *)&insert, sizeof(MgUserPayment));
        }
        mupVector.clear();
    }
    file.close();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// VIEW DATA
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::viewFile(int n)
{
    setCurrentFile(n);

    file.open(currentFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        Design::message(4, 0, 7);
    }
    else
    {
        if (check_file(currentFile))
        {
            Design::message(5, 0, 7);
        }
        else
        {
            if (n == 1)
            {
                int y = 0;
                while (file.read((char *)&fnd, sizeof(fnd)))
                {
                    fnd.output(y);
                    y++;
                }
            }
            else if (n == 2)
            {
                int y = 0;
                while (file.read((char *)&game, sizeof(game)))
                {
                    game.output(y);
                    y++;
                }
            }
            else if (n == 3)
            {
                int y = 0;
                while (file.read((char *)&mup, sizeof(MgUserPayment)))
                {
                    mup.output(y);
                    y++;
                }
            }
        }
    }
    file.close();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// SEARCH DATA
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::searchFile(int n)
{
    char searchID[5];
    bool isfound = false;
    setCurrentFile(n);

    file.open(currentFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        Design::message(4, 0, 7);
    }
    else
    {
        if (check_file(currentFile))
        {
            Design::message(5, 0, 7);
        }
        else
        {
            file.close();

            file.open(currentFile, ios::in | ios::binary);
            isfound = false;
            H::foreColor(1);
            H::gotoxy(85, 17);
            H::inputNumber(searchID, sizeof(searchID));

            // can  use this instread of open again
            //                ---------------------------------------------------------
            //                file.clear();  // Clear any potential eof or fail flags
            //                file.seekg(0);  // Reset file pointer to beginning
            //                ---------------------------------------------------------

            if (n == 1)
            {
                B::Search_Animation(); // Animation
                while (file.read((char *)&fnd, sizeof(FoodnDrink)))
                {
                    if (atoi(searchID) == fnd.getFndID())
                    {
                        fnd.output(11);
                        isfound = true;
                    }
                }
            }
            else if (n == 2)
            {
                B::SearchGame_Animation(); // Apply Animation while Searching
                while (file.read((char *)&game, sizeof(Game)))
                {
                    if (atoi(searchID) == game.getID())
                    {
                        game.output(11);
                        isfound = true;
                    }
                }
            }
            else if (n == 3)
            {
                B::SearchUser_Animation(); ////Apply Animation while Searching
                while (file.read((char *)&mup, sizeof(MgUserPayment)))
                {
                    if (atoi(searchID) == mup.getID())
                    {
                        mup.output(13);
                        isfound = true;
                    }
                }
            }

            if (isfound == false)
            {
                H::setcolor(4);
                H::gotoxy(69, 34);
                cout << "...ID is not found..." << endl;
            }
            else
            {
                H::setcolor(2);
                H::gotoxy(71, 34);
                cout << "...ID is found..." << endl;
            }
            file.close();
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// UPDATE DATA
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::updateFile(int n)
{
    char updateID[5];
    bool isfound = false;
    char guestName[20];
    char username[20];

    setCurrentFile(n);

    file.open(currentFile, ios::in | ios::binary);

    if (!file.is_open())
    {
        Design::message(4, 0, 7);
    }
    else
    {
        if (check_file(currentFile))
        {
            Design::message(5, 0, 7);
        }
        else
        {
            file.close();
            isfound = false;

            file.open(currentFile, ios::in | ios::binary);

            fndVector.clear();
            gameVector.clear();
            mupVector.clear();

            pushToVector(n);
            file.close();

            H::foreColor(1);
            H::gotoxy(86, 17);
            H::inputNumber(updateID, sizeof(updateID));

            if (n == 1)
            {
                B::Update_Animation(); // Animation
                for (auto &item : fndVector)
                {
                    if (atoi(updateID) == item.getFndID())
                    {
                        item.output(8);
                        // output Update ID
                        H::setcursor(1, 0);
                        H::gotoxy(35, 36);
                        H::foreColor(4);
                        cout << item.getFndID();
                        item.update();
                        isfound = true;
                        break;
                    }
                }
            }
            else if (n == 2)
            {
                B::UpdateGame_Animation(); // game design
                for (auto &item : gameVector)
                {
                    if (atoi(updateID) == item.getID())
                    {
                        item.output(8);
                        // output update ID
                        H::gotoxy(35, 36);
                        H::foreColor(7);
                        cout << item.getID();
                        item.update();
                        isfound = true;
                        break;
                    }
                }
            }
            else if (n == 3)
            {
                B::UpdateUserInfo_Animation(); // Animation
                for (auto &item : mupVector)
                {
                    if (atoi(updateID) == item.getID())
                    {
                        item.output(8);
                        H::foreColor(4);
                        H::gotoxy(32, 36);
                        cout << item.getID();

                        H::setcursor(1, 0);
                        H::foreColor(4);
                        H::gotoxy(48, 36);
                        H::inputLetter(guestName, sizeof(guestName));
                        do
                        {
                            H::clearBox(72, 37, 5, -1, 7);
                            H::setcursor(1, 0);
                            H::foreColor(4);
                            H::gotoxy(72, 36);
                            H::inputAll(username, sizeof(username));
                        } while (checkUsername(username, 68, 37, 4, 7));
                        item.setGuestname(guestName);
                        item.setUsername(username);

                        H::setcursor(1, 0);
                        item.update();
                        H::setcursor(0, 0);
                        isfound = true;
                        break;
                    }
                }
            }

            if (isfound == false)
            {
                H::setcolor(4);
                H::gotoxy(71, 37);
                cout << "...Incorrect ID...";
            }
            else
            {
                H::setcolor(2);
                H::gotoxy(68, 37);
                cout << "...Update Successfully...";
            }
            file.open(currentFile, ios::out | ios::binary);
            if (n == 1)
            {
                for (const auto &item : fndVector)
                {
                    file.write((char *)&item, sizeof(item));
                }
            }
            else if (n == 2)
            {
                for (const auto &item : gameVector)
                {
                    file.write((char *)&item, sizeof(item));
                }
            }
            else if (n == 3)
            {
                for (const auto &item : mupVector)
                {
                    file.write((char *)&item, sizeof(item));
                }
            }
            file.close();
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// DELETE DATA
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::deleteFile(int n)
{
    char deleteID[5];
    bool isfound = false;

    setCurrentFile(n);

    file.open(currentFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        Design::message(4, 0, 7);
    }
    else if (check_file(currentFile))
    {
        Design::message(5, 0, 7);
        file.close();
    }
    else
    {
        pushToVector(n);

        file.close();

        // Search Case
        isfound = false;
        H::foreColor(1);
        H::gotoxy(86, 17);
        H::inputNumber(deleteID, sizeof(deleteID));
        int deleteIDInt = atoi(deleteID);

        switch (n)
        {
        case 1:
        {
            B::Delete_Animation(); // animation
            for (auto it = fndVector.begin(); it != fndVector.end();)
            {
                if (it->getFndID() == deleteIDInt)
                {
                    it->output(11);
                    it = fndVector.erase(it);
                    isfound = true;
                }
                else
                {
                    ++it;
                }
            }
            break;
        }
        case 2:
        {
            B::DeleteGame_Animation(); // Apply
            for (auto it = gameVector.begin(); it != gameVector.end();)
            {
                if (it->getID() == deleteIDInt)
                {
                    it->output(11);
                    it = gameVector.erase(it);
                    isfound = true;
                }
                else
                {
                    ++it;
                }
            }
            break;
        }
        case 3:
        {
            B::DeleteUserInfo_Animation(); // Animation
            for (auto it = mupVector.begin(); it != mupVector.end();)
            {
                if (it->getID() == deleteIDInt)
                {
                    it->output(11);
                    it = mupVector.erase(it);
                    isfound = true;
                }
                else
                {
                    ++it;
                }
            }
            break;
        }
        }

        if (!isfound)
        {
            H::setcolor(4);
            H::gotoxy(69, 34);
            cout << "...ID was not found...";
        }
        else
        {
            H::setcolor(2);
            H::gotoxy(67, 34);
            cout << "...Remove Successfully...";
        }

        // write to file
        file.open(currentFile, ios::out | ios::binary | ios::trunc);
        if (!file.is_open())
        {
            Design::message(4, 0, 3);
        }
        else
        {
            switch (n)
            {
            case 1:
            {
                for (const auto &fnd : fndVector)
                {
                    file.write((char *)&fnd, sizeof(FoodnDrink));
                }
                break;
            }
            case 2:
            {
                for (const auto &game : gameVector)
                {
                    file.write((char *)&game, sizeof(Game));
                }
                break;
            }
            case 3:
            {
                for (const auto &mup : mupVector)
                {
                    file.write((char *)&mup, sizeof(MgUserPayment));
                }
                break;
            }
            }
        }
        fndVector.clear();
        gameVector.clear();
        mupVector.clear();
        file.close();
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// PUSH DATA TO VECTOR
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::pushToVector(int n)
{
    switch (n)
    {
    case 1:
    {
        fndVector.clear();
        while (file.read((char *)&fnd, sizeof(FoodnDrink)))
        {
            fndVector.push_back(fnd);
        }
        break;
    }
    case 2:
    {
        gameVector.clear();
        while (file.read((char *)&game, sizeof(Game)))
        {
            gameVector.push_back(game);
        }
        break;
    }
    case 3:
    {
        mupVector.clear();
        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            mupVector.push_back(mup);
        }
        break;
    }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// GET LOGIN TIME
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::loginTimeToFile(const char *username, const char *password)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    file.open(UserInfoFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        Design::message(4, 0, 3);
    }
    else
    {
        mupVector.clear();
        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            mupVector.push_back(mup);
        }
        file.close();

        for (auto &user : mupVector)
        {
            if (strcmp(username, user.getUsername()) == 0 && strcmp(password, user.getPassword()) == 0)
            {
                user.setLoginHour(ltm->tm_hour);
                user.setLoginMn(ltm->tm_min);
                break;
            }
        }

        file.open(UserInfoFile, ios::out | ios::binary | ios::trunc);
        if (!file.is_open())
        {
            Design::message(4, 0, 3);
        }
        else
        {
            for (const auto &user : mupVector)
            {
                file.write((char *)&user, sizeof(MgUserPayment));
            }
        }
    }

    file.close();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// GET LOGOUT TIME
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::logoutTimeToFile(const char *username, const char *password)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    file.open(UserInfoFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        Design::message(4, 0, 3);
    }
    else
    {
        mupVector.clear();
        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            mupVector.push_back(mup);
        }
        file.close();

        for (auto &user : mupVector)
        {
            if (strcmp(username, user.getUsername()) == 0 && strcmp(password, user.getPassword()) == 0)
            {
                user.setLogoutHour(ltm->tm_hour);
                user.setLogoutMn(ltm->tm_min);
                break;
            }
        }

        file.open(UserInfoFile, ios::out | ios::binary | ios::trunc);
        if (!file.is_open())
        {
            Design::message(4, 0, 3);
        }
        else
        {
            for (const auto &user : mupVector)
            {
                file.write((char *)&user, sizeof(MgUserPayment));
            }
        }
    }
    file.close();
}
// //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// //////////////////////////////////////////
// // USER LOGIN
// //////////////////////////////////////////
// //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// void File::user_login()
// {
//     char username[20];
//     char password[20];
//     bool islogin = false;
//     char press = ' ';

//     file.open(UserInfoFile, ios::in | ios::binary);
//     if (!file.is_open())
//     {
//         H::setcolor(135);
//         H::gotoxy(42, 32);
//         cout << "Register First!!";
//         H::delay(999);
//         H::clearBox(42, 32, 25, 0, 136);
//     }
//     else
//     {
//         if (check_file(UserInfoFile))
//         {
//             H::setcolor(135);
//             H::gotoxy(42, 32);
//             cout << "Register First!!";
//             H::delay(999);
//             H::clearBox(42, 32, 25, 0, 136);
//         }
//         else
//         {
//             mupVector.clear();

//             while (file.read((char *)&mup, sizeof(MgUserPayment)))
//             {
//                 mupVector.push_back(mup);
//             }

//             file.close();

//             while (1)
//             {
//                 int chance = 3;

//                 while (chance != 0)
//                 {
//                     H::setcursor(1, 0);
//                     H::setcolor(249);
//                     H::gotoxy(30, 22);
//                     H::inputAll(username, sizeof(username)); // username

//                     H::setcolor(249);
//                     H::gotoxy(30, 28);
//                     H::hidePassword(password, sizeof(password));
//                     H::setcursor(0, 0);

//                     for (const auto &user : mupVector)
//                     {
//                         if (strcmp(username, user.getUsername()) == 0 && strcmp(password, user.getPassword()) == 0)
//                         {
//                             islogin = true;
//                             break;
//                         }
//                     }
//                     if (islogin == true)
//                     {
//                         Design::loginMsg(3);
//                         loginTimeToFile(username, password);
//                         userSubMenu(username, password);
//                         break;
//                     }
//                     else
//                     {
//                         islogin = false;
//                         H::setcursor(0, 0);
//                         H::setcolor(140);
//                         H::gotoxy(10 + 29, 5 + 27);
//                         cout << "You have ";
//                         H::setcolor(137);
//                         cout << --chance;
//                         H::setcolor(140);
//                         cout << " left";

//                         Design::loginMsg(1); // input msg

//                         press = getch(); // press ESC to back

//                         H::clearBox(10 + 19, 5 + 18, 42, 0, 247); // Clear username and password boxes
//                         H::clearBox(10 + 19, 5 + 24, 42, 0, 247); // Clear username and password boxes
//                         H::clearBox(10 + 18, 5 + 27, 43, 1, 136); // Clear message
//                         // break;
//                         if (press == 27)
//                         {
//                             break;
//                         }
//                     }
//                 }
//                 if (chance == 0)
//                 {
//                     press = ' ';
//                     for (int i = 1; i <= 6; i++)
//                     {
//                         H::setcursor(0, 0);
//                         H::setcolor(140);
//                         H::gotoxy(27, 32);
//                         cout << "You ran out chances! Please wait for   seconds";
//                         H::setcolor(137);
//                         H::gotoxy(10 + 54, 32);
//                         cout << 6 - i;
//                         H::delay(999);

//                         H::clearBox(27, 32, 45, 0, 136); // cls chance msg
//                         H::setcolor(7);
//                     }

//                     Design::loginMsg(2); // esc or continue

//                     press = getch();

//                     H::clearBox(10 + 38, 38, 61, 0, 7); // cls msg

//                     if (press == 27)
//                     {
//                         break;
//                     }
//                 }
//                 if (islogin == true)
//                 {
//                     break;
//                 }
//                 if (press == 27)
//                 {
//                     break;
//                 }
//             }
//         }
//     }
// }
// //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// //////////////////////////////////////////
// // USER MENU
// //////////////////////////////////////////
// //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// void File::userSubMenu(const char *username, const char *password)
// {
//     H::setConsoleTitle(TEXT("User MENU"));
//     H::setcursor(0, 0);
//     Design::LoadingAnimation();

//     H::setcolor(7);
//     H::cls();
//     Design::outline();
//     Design::UserMenuTxt();
//     LENG::UserMenu_Design();
//     number = 1;

//     updateUserDisplay(1);

//     INPUT_RECORD ir[128];
//     HANDLE hStdInput = GetStdHandle(STD_INPUT_HANDLE);
//     HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
//     HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
//     HANDLE handles[2] = {hEvent, hStdInput};
//     DWORD nRead;

//     SetConsoleMode(hStdInput, ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
//     FlushConsoleInputBuffer(hStdInput);

//     while (WaitForMultipleObjects(2, handles, FALSE, INFINITE))
//     {
//         ReadConsoleInput(hStdInput, ir, 128, &nRead);
//         if (!InputEvents(ir, nRead, hStdOutput, 1, username, password))
//         {
//             number = 1;
//             break;
//         }
//     }
//     // H::setcolor(1);
//     // H::gotoxy(48, 36);
//     // cout << "Press ";
//     // H::setcolor(4);
//     // cout << "[ALL]";
//     // H::setcolor(1);
//     // cout << " arrow key to move between option, ";
//     // H::setcolor(4);
//     // cout << "[ENTER]";
//     // H::setcolor(1);
//     // cout << " to select";

//     // int choice = 0;
//     // do
//     // {
//     //     H::setcolor(7);
//     //     H::cls();

//     //     Design::outline();
//     //     Design::UserMenuTxt();
//     //     LENG::UserMenu_Design();

//     //     char press;
//     //     int num = 1;
//     //     choice = 0;
//     //     int pocision = 10 + 22;

//     //     do
//     //     {
//     //         H::drawBoxSingleLineWithBG(33, 14, 31, 1, 1); // info
//     //         H::drawBoxSingleLineWithBG(33, 17, 31, 1, 1); // play game
//     //         H::drawBoxSingleLineWithBG(33, 20, 31, 1, 1); // buy hour
//     //         H::drawBoxSingleLineWithBG(33, 23, 31, 1, 1); // buy foodndrink
//     //         H::drawBoxSingleLineWithBG(33, 26, 31, 1, 1); // invoice
//     //         H::drawBoxSingleLineWithBG(33, 29, 31, 1, 1); // log out

//     //         Design::tp(7, 35, 15);
//     //         cout << "My Information";
//     //         H::gotoxy(35, 18);
//     //         cout << "Play Games";
//     //         H::gotoxy(35, 21);
//     //         cout << "Buy More Hours";
//     //         H::gotoxy(35, 24);
//     //         cout << "Buy Food or Drinks";
//     //         H::gotoxy(35, 27);
//     //         cout << "View Spending List";
//     //         H::gotoxy(35, 30);
//     //         cout << "Log Out of Account";

//     //         if (num == 1)
//     //         {
//     //             LENG::UserMenu_Art(num);
//     //             choice = 1;
//     //         }
//     //         else if (num == 2)
//     //         {
//     //             LENG::UserMenu_Art(num);
//     //             choice = 2;
//     //         }
//     //         else if (num == 3)
//     //         {
//     //             LENG::UserMenu_Art(num);
//     //             choice = 3;
//     //         }
//     //         else if (num == 4)
//     //         {
//     //             LENG::UserMenu_Art(num);
//     //             choice = 4;
//     //         }
//     //         else if (num == 5)
//     //         {
//     //             LENG::UserMenu_Art(num);
//     //             choice = 5;
//     //         }
//     //         else if (num == 6)
//     //         {
//     //             LENG::UserMenu_Art(num);
//     //             choice = 6;
//     //         }

//     //         H::setcolor(1);
//     //         H::gotoxy(48, 36);
//     //         cout << "Press ";
//     //         H::setcolor(4);
//     //         cout << "[ALL]";
//     //         H::setcolor(1);
//     //         cout << " arrow key to move between option, ";
//     //         H::setcolor(4);
//     //         cout << "[ENTER]";
//     //         H::setcolor(1);
//     //         cout << " to select";

//     //         press = getch();

//     //         switch (press)
//     //         {
//     //         case 75:
//     //             num--;
//     //             if (num < 1)
//     //             {
//     //                 num = 5;
//     //             }
//     //             posistion -= 10;
//     //             if (posistion < (10 + 22))
//     //             {
//     //                 posistion = 10 + 22;
//     //             }
//     //             break;

//     //         case 72:
//     //             num--;
//     //             if (num < 1)
//     //             {
//     //                 num = 6;
//     //             }
//     //             break;

//     //         case 77:
//     //             num++;
//     //             if (num > 6)
//     //             {
//     //                 num = 1;
//     //             }
//     //             if (posistion < 32)
//     //             {
//     //                 posistion = 32;
//     //             }
//     //             break;

//     //         case 80:
//     //             num++;
//     //             if (num > 6)
//     //             {
//     //                 num = 1;
//     //             }
//     //             break;
//     //         }
//     //     }

//     //     while (press != 13);

//     //     if (choice == 1)
//     //     {
//     //         Design::LoadingAnimation();
//     //         viewProfile(username, password);
//     //     }
//     //     else if (choice == 2)
//     //     {
//     //         Design::LoadingAnimation();
//     //         GameMENU();
//     //     }
//     //     else if (choice == 3)
//     //     {
//     //         Design::LoadingAnimation();
//     //         buyMoreTime(username, password);
//     //     }
//     //     else if (choice == 4)
//     //     {
//     //         char gg = 13;
//     //         // Design::LoadingAnimation();
//     //         // buyFood(username, password);
//     //         while (1)
//     //         {
//     //             if (gg == 27)
//     //             {
//     //                 break;
//     //             }
//     //             else if (gg == 13)
//     //             {
//     //                 Design::LoadingAnimation();
//     //                 buyFood(username, password);
//     //             }
//     //             gg = getch();
//     //         }
//     //     }
//     //     else if (choice == 5)
//     //     {
//     //         Design::LoadingAnimation();
//     //         invoice(username, password);
//     //     }
//     //     else if (choice == 6)
//     //     {
//     //         Design::LoadingAnimation();
//     //         logoutTimeToFile(username, password);
//     //         calculateTime(username, password);
//     //         break;
//     //     }

//     // } while (choice != 6);
// }
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// USER BUY MORE TIME
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::buyMoreTime(const char *username, const char *password)
{
    H::setConsoleTitle(TEXT("Buy More Hours"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    Design::outline();
    B::buyHourTxt();

    char press = ' ';
    char hours[5] = "\0";
    char creditCard[17] = "\0";
    int myInvID = getInvoiceID() + 1;
    bool isfound = false;

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);

    if (file.is_open() && tempFile.is_open())
    {
        B::buyHour_Design();
        B::buyHour_Animation(7);
        do
        {
            // H::clearBox(110, 20, 5, 0, 7);
            H::drawBoxSingleLineWithBG(99, 18, 20, 1, 204); // hours
            H::drawBoxSingleLineWithBG(99, 22, 20, 1, 204); // card
            H::setcursor(1, 0);
            H::setcolor(199);
            H::gotoxy(100, 19);
            H::inputNumber(hours, sizeof(hours));

        } while (atoi(hours) <= 0);

        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
            {
                isfound = true;
                mup.setnTime(atof(hours));
                mup.setBuyingTime(atof(hours));
                fstream file2(invoiceFile, ios::in | ios::app | ios::binary);
                inv.setName(mup.getGuestname());
                inv.setUsername(username);
                inv.setBuyedTime(atoi(hours));
                inv.setTime(mup.getTime());
                inv.setId(mup.getID());
                inv.setFnd("\0", "\0", "\0");
                inv.setId(myInvID);
                file2.write((char *)&inv, sizeof(myInvoice));
                file2.close();
            }
            tempFile.write((char *)&mup, sizeof(MgUserPayment));
        }

        H::setcolor(199);
        H::gotoxy(100, 23);
        H::inputNumber(creditCard, sizeof(creditCard)); // Credit card number
        H::setcursor(0, 0);

        if (isfound)
        {
            B::buyHour_Animation(5);
            H::setcolor(2);
            H::gotoxy(78, 27);
            cout << "...Hours have been added successfully...";
        }
    }
    else
    {
        Design::message(4, 0, 7);
    }

    file.close();
    tempFile.close();
    remove(UserInfoFile.c_str());
    rename(Backup.c_str(), UserInfoFile.c_str());

    while (1)
    {
        Design::message(3, 21, 35);

        press = getch();

        if (press == 13)
        {
            buyMoreTime(username, password);
        }
        else if (press == 27)
        {
            break;
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// USER INVOICE
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::invoice(const char *username, const char *password)
{
    int y = 16;
    double total = 0;
    char buyTime[5] = "\0";
    char bFnD[20] = "\0";
    char fndQty[5] = "\0";

    H::setConsoleTitle(TEXT("My Spending List"));
    H::setcolor(7);
    H::cls();
    Design::outline();
    H::setcursor(0, 0);

    char press = ' ';
    B::InvoiceTxt();
    B::Invoice_Design();
    file.open(UserInfoFile, ios::in | ios::binary);
    fstream file2(invoiceFile, ios::in | ios::binary);

    if (!file.is_open())
    {
        file.close();
        file2.close();
    }
    else
    {
        while (1)
        {
            while (file.read((char *)&mup, sizeof(MgUserPayment)))
            {
                if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
                {
                    while (file2.read((char *)&inv, sizeof(myInvoice)))
                    {
                        if (strcmp(username, inv.getUsername()) == 0)
                        {
                            H::setcolor(252);
                            H::gotoxy(83, 16);
                            cout << mup.getID();
                            H::setcolor(252);
                            H::gotoxy(83, 17);
                            cout << mup.getGuestname();
                            H::setcolor(252);
                            H::gotoxy(83, 18);
                            cout << mup.getUsername();
                            OutputDate(83, 19, 252);
                            H::foreColor(252);
                            H::gotoxy(83, 19);

                            strcpy(bFnD, inv.getFoodnDrink());
                            strcpy(fndQty, inv.getQty());
                            if (inv.getBuyedTime() <= 0)
                            {
                                strcpy(buyTime, "NONE");
                            }
                            else
                            {
                                sprintf(buyTime, "%d", inv.getBuyedTime());
                            }
                            if (strlen(inv.getFoodnDrink()) == 0)
                            {
                                strcpy(bFnD, "NONE");
                            }
                            if (strlen(inv.getQty()) == 0)
                            {
                                strcpy(fndQty, "NONE");
                            }
                            H::setcolor(252);
                            H::gotoxy(53, y + 7);
                            cout << left
                                 << setw(30) << bFnD
                                 << fixed << setprecision(0) << setw(20) << fndQty
                                 << setw(10) << buyTime;

                            total += inv.totalPrice();
                            y++;
                            if (y == 21)
                            {
                                y = 16;
                                H::gotoxy(66, 36);
                                H::setcolor(1);
                                cout << "Press ";
                                H::setcolor(4);
                                cout << "[ANY]";
                                H::setcolor(1);
                                cout << " key to view more";
                                press = getch();
                                H::clearBox(67, 36, 26, 0, 7);

                                if (press == 27)
                                {
                                    break;
                                }
                                else if (press == 13)
                                {
                                    UserInvoiceToCSV(username);
                                }
                                H::clearBox(53, 24, 60, 4, 255);
                            }
                        }
                        OutputHostName(75, 30, 252);
                        H::setcolor(252);
                        H::gotoxy(89, 32);
                        cout << fixed << setprecision(2) << total / 4000;
                        H::setcolor(252);
                        H::gotoxy(109, 32);
                        cout << fixed << setprecision(0) << total;
                    }
                }
            }
            file.close();
            file2.close();

            H::setcolor(1);
            H::gotoxy(60, 36);
            cout << "To export data into EXCEL, Press ";
            H::setcolor(4);
            cout << "[ENTER]";

            Design::message(2, 0, 38);

            press = getch();

            if (press == 27)
            {
                break;
            }
            else if (press == 13)
            {
                UserInvoiceToCSV(username);
            }
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// USER INVOICE TO CSV
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::UserInvoiceToCSV(const char *username)
{
    // int y = 16;
    double total = 0.0;
    bool foundData = false;

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream file2(invoiceFile, ios::in | ios::binary);

    if (!file.is_open() && !file2.is_open())
    {
        Design::message(4, 0, 3);
        file.close();
        file2.close();
    }
    else if (check_file(invoiceFile))
    {
        file.close();
        file2.close();
        Design::message(5, 0, 7);
    }
    else
    {
        while (file2.read((char *)&inv, sizeof(myInvoice)))
        {
            if (strcmp(inv.getUsername(), username) == 0)
            {
                foundData = true;
            }
        }
        if (foundData == false)
        {
            file.close();
            file2.close();
        }
        else
        {
            struct stat sb;
            if (stat(dir.c_str(), &sb) == 0)
            {
                if (stat(subDir.c_str(), &sb) != 0)
                {
                    mkdir(subDir.c_str());
                }
            }

            file.close();
            file2.close();
            file.open(UserInfoFile, ios::in | ios::binary);
            fstream file2(invoiceFile, ios::in | ios::binary);
            ofstream csv(subDir + "/user_invoice.csv");
            if (!csv.is_open())
            {
                cout << "Could not open CSV file for writing!" << endl;
                file.close();
                file2.close();
            }
            else
            {
                csv << "\nName,Username,\n";
                csv << inv.getName() << "," << inv.getUsername() << ",\n\n";
                csv << "ID,FoodnDrink,Qty,Added Hour,\n";

                while (file.read((char *)&mup, sizeof(MgUserPayment)))
                {
                    if (strcmp(username, mup.getUsername()) == 0)
                    {

                        while (file2.read((char *)&inv, sizeof(myInvoice)))
                        {
                            if (strcmp(username, inv.getUsername()) == 0)
                            {
                                csv << inv.getId() << ","
                                    << inv.getFoodnDrink() << ","
                                    << inv.getQty() << ","
                                    << inv.getBuyedTime() << "\n";
                                total += inv.totalPrice();
                            }
                        }
                    }
                }

                csv << "All Income,," << "USD : " << fixed << setprecision(2) << total / 4000 << ","
                    << "KHR : " << fixed << setprecision(0) << total << "\n";

                csv.close();
                file.close();
                file2.close();
                system("start  Data\\Excel\\user_invoice.csv");
            }
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// CALCULATE USING TIME
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::calculateTime(const char *username, const char *password)
{

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);

    if (!file.is_open() || !tempFile.is_open())
    {
        Design::message(4, 0, 3);
    }
    else
    {
        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
            {
                // isfound = true;
                double loginHour = mup.getLoginHour();
                double loginMn = mup.getLoginMn();
                double logoutHour = mup.getLogoutHour();
                double logoutMn = mup.getLogoutMn();

                double loginTime = loginHour * 60 + loginMn;
                double logoutTime = logoutHour * 60 + logoutMn;

                double usedTimeMinutes = logoutTime - loginTime;

                if (usedTimeMinutes < 0)
                {
                    usedTimeMinutes += 24 * 60;
                }
                double remainingTime = mup.getTime() - usedTimeMinutes;

                if (remainingTime < 0)
                {
                    remainingTime = 0;
                }
                mup.setRemainTime(remainingTime);
            }
            tempFile.write((char *)&mup, sizeof(MgUserPayment));
        }

        file.close();
        tempFile.close();
        remove(UserInfoFile.c_str());
        rename(Backup.c_str(), UserInfoFile.c_str());
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// USER BUY FOOD
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::buyFood(const char *username, const char *password)
{

    H::setConsoleTitle(TEXT("Buy Food or Drink"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    Design::outline();

    char press = ' ';
    char foodID[5];
    char quantity[8];
    int myInvID = getInvoiceID() + 1;
    bool foodFound = false;

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream file3(invoiceFile, ios::out | ios::app | ios::binary);

    if (!file.is_open())
    {
        Design::message(4, 0, 3);
    }
    else
    {
        B::ViewTxt();
        B::View_Design();
        fstream file2(FoodnDrinkFile, ios::in | ios::binary);
        if (!file2.is_open())
        {
            Design::message(4, 0, 3);
            foodFound = false;
            file2.close();
            file.close();
            file3.close();
        }
        else
        {
            int y = 0;
            foodFound = true;
            while (file2.read((char *)&fnd, sizeof(fnd)))
            {
                fnd.output(y);
                y++;
            }
        }
        file2.close();

        if (foodFound == true)
        {
            Design::message(6, 0, 0);

            H::setcolor(7);
            H::cls();
            Design::outline();
            B::BuyFoodnDrinkTxt();
            B::buyFoodnDrink_Animation(10);
            B::buyFoodnDrink_Design();

            while (file.read((char *)&mup, sizeof(MgUserPayment)))
            {
                if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
                {
                    H::drawBoxSingleLineWithBG(35, 20, 16, 1, 204); // food id
                    H::drawBoxSingleLineWithBG(35, 24, 16, 1, 204); // qty
                    H::setcursor(1, 0);
                    H::foreColor(199);
                    H::gotoxy(36, 21);
                    H::inputNumber(foodID, sizeof(foodID));

                    H::setcursor(0, 0);
                    int foodIDInt = atoi(foodID);

                    fstream foodFile(FoodnDrinkFile, ios::in | ios::out | ios::binary);
                    if (!foodFile.is_open())
                    {
                        H::foreColor(7);
                        H::gotoxy(98, 29);
                        cout << "Food file could not be opened";
                        Design::message(2, 0, 38);
                    }
                    else
                    {
                        bool idFound = false;
                        while (foodFile.read((char *)&fnd, sizeof(FoodnDrink)))
                        {
                            if (fnd.getFndID() == foodIDInt)
                            {
                                do
                                {
                                    H::setcursor(1, 0);
                                    H::foreColor(199);
                                    H::gotoxy(36, 25);
                                    H::inputNumber(quantity, sizeof(quantity));
                                    H::clearBox(36, 26, 8, 0, 204);
                                    // H::drawBoxSingleLine(88, 22, 36, 1, 3);
                                } while (atoi(quantity) <= 0);

                                int quantityInt = atoi(quantity);
                                int availableQty = atoi(fnd.getQty());
                                H::setcursor(0, 0);
                                if (quantityInt <= availableQty)
                                {
                                    int newQty = availableQty - quantityInt;
                                    char newQtyStr[5];
                                    sprintf(newQtyStr, "%d", newQty);
                                    fnd.setQty(newQtyStr);

                                    foodFile.seekp(-sizeof(FoodnDrink), ios::cur);
                                    foodFile.write((char *)&fnd, sizeof(FoodnDrink));

                                    inv.setName(mup.getGuestname());
                                    inv.setUsername(username);
                                    inv.setFnd(fnd.getName(), fnd.getPrice(), quantity);
                                    inv.setBuyedTime(0);
                                    inv.setTime(mup.getTime());
                                    inv.setId(myInvID);

                                    H::gotoxy(116, 23);
                                    H::setcolor(2);
                                    cout << "...Successfully Purchase...";

                                    Design::message(3, 0, 38);
                                }
                                else
                                {
                                    H::foreColor(4);
                                    H::gotoxy(108, 23);
                                    cout << "...The quantity available is insufficient...";

                                    Design::message(3, 0, 38);
                                    file.close();
                                    file3.close();
                                }
                                idFound = true;
                                break;
                            }
                        }
                        foodFile.close();

                        if (!idFound)
                        {
                            H::foreColor(4);
                            H::gotoxy(112, 23);
                            cout << "...Food or Drink ID is not found...";

                            Design::message(3, 0, 38);
                            file.close();
                            file3.close();
                            break;
                        }
                    }
                    file3.write((char *)&inv, sizeof(myInvoice));
                }
            }
            file.close();
            file3.close();
        }
    }

    // while (1)
    // {
    //     press = getch();

    //     if (press == 27)
    //     {
    //         break;
    //     }
    //     else if (press == 13)
    //     {
    //         buyFood(username, password);
    //     }
    // }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// VIEW USER PROFILE
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::viewProfile(const char *username, const char *password)
{
    H::setConsoleTitle(TEXT("My Information"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    char press = ' ';

    Design::outline();
    B::ViewProfileTxt();
    B::ViewProfile_Design();

    while (1)
    {
        file.open(UserInfoFile, ios::in | ios::binary);
        while (file.read((char *)&mup, sizeof(mup)))
        {
            if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
            {
                // OutputDate(77, 20, 236);
                mup.userProfile();
                H::setcolor(236);
                H::gotoxy(77, 18);
                cout << fixed << setprecision(0) << mup.getRemainTime() << " MINUTES";
                H::setcolor(236);
                H::gotoxy(77, 20);
                cout << mup.getDay() << "/" << mup.getCrtMonth() << "/" << mup.getYear();
            }
        }
        file.close();

        Design::message(2, 0, 36);

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
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
////////////////////////////////
// ALL INVOICE
////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::viewAllUserInvoice()
{
    double allTotal = 0;
    double totalTime = 0;
    double fndPrice = 0;
    int y = 0;
    file.open(invoiceFile, ios::in | ios::binary);
    fstream file2(UserInfoFile, ios::in | ios::binary);
    if (!file.is_open() && !file2.is_open())
    {
        Design::message(4, 0, 7);
        file.close();
        file2.close();
    }
    else
    {
        if (check_file(invoiceFile))
        {
            Design::message(5, 0, 7);
        }
        else
        {
            while (file2.read((char *)&mup, sizeof(MgUserPayment)))
            {
                mup.Invoutput(y, 3);
                y++;
                totalTime += (5000 * (mup.getTime() / 60));
            }
            file2.close();
            while (file.read((char *)&inv, sizeof(myInvoice)))
            {
                H::setcolor(2);
                inv.viewAll(y);
                fndPrice += (atoi(inv.getQty()) * (atof(inv.getPrice()) * 4100));
                y++;
            }
            allTotal += (totalTime + fndPrice);
            H::gotoxy(30, 36);
            H::setcolor(55);
            cout << "All Income ";

            H::gotoxy(81, 36);
            H::setcolor(103);
            cout << "USD : " << fixed << setprecision(2) << allTotal / 4000;
            H::gotoxy(111, 36);
            H::setcolor(103);
            cout << "KHR : " << fixed << setprecision(0) << allTotal;

            file.close();

            while (1)
            {
                char pr = ' ';
                Design::message(2, 0, 38);

                pr = getch();

                if (pr == 27)
                {
                    break;
                }
                // else if (pr == 13)
                // {
                //     // file.open(invoiceFile, ios::in | ios::binary);
                //     // fstream file2(UserInfoFile, ios::in | ios::binary);
                //     if (file.is_open() && file2.is_open())
                //     {
                //         File::allUserInvoiceToCSV();
                //         system("start Data\\Excel\\all_user_invoice.csv");
                //     }
                //     break;
                // }
            }
        }
        file.close();
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
////////////////////////////////
// ALL INVOICE TO CSV
////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::allUserInvoiceToCSV()
{
    double allTotal = 0;
    double totalTime = 0;
    double fndPrice = 0;
    struct stat sb;

    // Check if the main directory exists
    if (stat(dir.c_str(), &sb) == 0)
    {
        // Check if the sub-directory exists, create if not
        if (stat(subDir.c_str(), &sb) != 0)
        {
            mkdir(subDir.c_str());
        }
    }

    ifstream file(invoiceFile, ios::in | ios::binary);
    ifstream file2(UserInfoFile, ios::in | ios::binary);
    ofstream csv(subDir + "/all_user_invoice.csv");

    if (!file.is_open())
    {
        cerr << "Could not open invoice file for reading!" << endl;
        return;
    }

    if (!file2.is_open())
    {
        cerr << "Could not open user info file for reading!" << endl;
        return;
    }

    if (!csv.is_open())
    {
        cerr << "Could not open CSV file for writing!" << endl;
        return;
    }

    csv << "ID,Name,Time,FoodnDrink,Qty,Price,Total\n";

    while (file2.read((char *)&mup, sizeof(MgUserPayment)))
    {
        double paymentTotal = 5000 * (mup.getTime() / 60);
        csv << mup.getID() << ","
            << mup.getGuestname() << ","
            << mup.getTime() << ","
            << "" << ","
            << "" << ","
            << "" << ","
            << paymentTotal << "\n";

        totalTime += paymentTotal;
    }
    file2.close();

    while (file.read((char *)&inv, sizeof(myInvoice)))
    {
        double invoiceTotal = (inv.getBuyedTime() * 5000) + (atoi(inv.getQty()) * (atof(inv.getPrice()) * 4100));
        csv << inv.getId() << ","
            << inv.getName() << ","
            << inv.getBuyedTime() << ","
            << inv.getFoodnDrink() << ","
            << inv.getQty() << ","
            << inv.getPrice() << ","
            << invoiceTotal << "\n";

        fndPrice += atoi(inv.getQty()) * (atof(inv.getPrice()) * 4100);
    }
    file.close();

    allTotal = totalTime + fndPrice;

    csv << "All Income" << ",,,,," << "USD : " << fixed << setprecision(2) << allTotal / 4000 << ","
        << "KHR : " << fixed << setprecision(0) << allTotal << "\n";

    csv.close();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// Game MENU
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::GameMENU()
{
    H::setConsoleTitle(TEXT("Flappy Bird"));
    H::setcolor(7);
    PGame::menu();
    H::setcursor(0, 0);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// INVOICE ID
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int File::getInvoiceID()
{
    int invoiceID = 1999;
    fstream invID(invoiceFile, ios::in | ios::binary);
    while (invID.read((char *)&inv, sizeof(myInvoice)))
    {
        if (inv.getId() > invoiceID)
        {
            invoiceID = inv.getId();
        }
    }
    invID.close();
    return invoiceID;
}
////////////////////////////////
// DESTRUCTOR
////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
File::~File() {}

// use with header libxlsxwriter.h
// void File::writeInvoiceToExcel(const char *username, const char *password)
//{
//     file.open(UserInfoFile, ios::in | ios::binary);
//     fstream file2(invoiceFile, ios::in | ios::binary);
//
//     if (!file.is_open())
//     {
//         Design::message(4, 0, 3);
//         return;
//     }
//
//     // Create a new Excel workbook
//     lxw_workbook  *workbook  = workbook_new("invoice.xlsx");
//     lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);
//
//     // Add headers to the Excel sheet
//     worksheet_write_string(worksheet, 0, 0, "ID", NULL);
//     worksheet_write_string(worksheet, 0, 1, "Guest Name", NULL);
//     worksheet_write_string(worksheet, 0, 2, "Username", NULL);
//     worksheet_write_string(worksheet, 0, 3, "Food and Drink", NULL);
//     worksheet_write_string(worksheet, 0, 4, "Quantity", NULL);
//     worksheet_write_string(worksheet, 0, 5, "Buy Time", NULL);
//     worksheet_write_string(worksheet, 0, 6, "Total Price", NULL);
//
//     int row = 1;
//
//     while (file.read((char *)&mup, sizeof(MgUserPayment)))
//     {
//         if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
//         {
//             while (file2.read((char *)&inv, sizeof(myInvoice)))
//             {
//                 if (strcmp(username, inv.getUsername()) == 0)
//                 {
//                     char buyTime[5] = "\0";
//                     char bFnD[20] = "\0";
//                     char fndQty[5] = "\0";
//
//                     strcpy(bFnD, inv.getFoodnDrink());
//                     strcpy(fndQty, inv.getQty());
//                     if(inv.getBuyedTime() <= 0)
//                     {
//                         strcpy(buyTime,"NONE");
//                     }
//                     else
//                     {
//                         sprintf(buyTime,"%d",inv.getBuyedTime());
//                     }
//                     if(strlen(inv.getFoodnDrink()) == 0)
//                     {
//                         strcpy(bFnD, "NONE");
//                     }
//                     if(strlen(inv.getQty()) == 0)
//                     {
//                         strcpy(fndQty,"NONE");
//                     }
//
//                     // Write data to Excel sheet
//                     worksheet_write_string(worksheet, row, 0, mup.getID(), NULL);
//                     worksheet_write_string(worksheet, row, 1, mup.getGuestname(), NULL);
//                     worksheet_write_string(worksheet, row, 2, mup.getUsername(), NULL);
//                     worksheet_write_string(worksheet, row, 3, bFnD, NULL);
//                     worksheet_write_string(worksheet, row, 4, fndQty, NULL);
//                     worksheet_write_string(worksheet, row, 5, buyTime, NULL);
//                     worksheet_write_number(worksheet, row, 6, inv.totalPrice(), NULL);
//
//                     row++;
//                 }
//             }
//         }
//     }
//
//     file.close();
//     file2.close();
//
//     // Close the Excel workbook
//     workbook_close(workbook);
// }

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                END OF FILE
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif