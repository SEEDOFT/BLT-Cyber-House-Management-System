#ifndef ___File_H___
#define ___File_H___
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../BLT_Process/BLT.h"
#include "../BOTH_Design/designConsole.h"
#include "../Leng_Design/manage_user_info.h"
#include "../Leng_Design/sub_manage_user_info.h"
#include "MgUserPayment.h"
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
        static string dir;
        static string FoodnDrinkFile;
        static string Backup;
        static string GameFile;
        static string UserInfoFile;
        static string MgUserPaymentFile;

        static int getMaxID(const string &fileName, int type);

        static vector<FoodnDrink> fndVector;
        static vector<Game> gameVector;
        static vector<MgUserPayment> mupVector;

        static FoodnDrink fnd;
        static Game game;
        static MgUserInfo mui;
        static MgUserPayment mup;

        static fstream file;
        static string currentFile;

        //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    public:
        static void insertFile(int n);
        static void viewFile(int n);
        static void searchFile(int n);
        static void updateFile(int n);
        static void deleteFile(int n);
        static bool check_file(const string &fileName);
        static bool checkUsername(const char *username, int x, int y, int color);
        static bool checkUsernameInVector(const char *username, int x, int y, int color);
        static void viewProfile(const char *username, const char *password);

        static void setCurrentFile(int n);
        static void insertToVector(int n, string &fileName);
        static void pushToVector(int n);
        static void loginTimeToFile(const char *username, const char *password);
        static void logoutTimeToFile(const char *username, const char *password);
        static void readLogin(const char *username, const char *password);
        static void readLogout(const char *username, const char *password);
        static void user_login();
        static void userSubMenu(const char *username, const char *password);
        static void buyMoreTime(const char *username, const char *password);
        static void invoice(const char *username, const char *password);
        static void calculateTime(const char *username, const char *password);
        static void buyFood(const char *username, const char *password);

        static void viewAllUserInvoice();
        // static void totalIncome();
        static void viewIncome();
        static void OutputDate(int x, int y, int color);
        static void OutputHostName(int x, int y, int color);
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
vector<FoodnDrink> File::fndVector;
vector<Game> File::gameVector;
vector<MgUserPayment> File::mupVector;

FoodnDrink File::fnd;
Game File::game;
MgUserInfo File::mui;
MgUserPayment File::mup;

fstream File::file;

string File::dir = "Data";
string File::FoodnDrinkFile = dir + "/FoodnDrink.ant";
string File::Backup = dir + "/BackUpFile.ant";
string File::GameFile = dir + "/Game.ant";
string File::UserInfoFile = dir + "/UserInfo.ant";
string File::MgUserPaymentFile = dir + "/MgUserPayment.ant";
string File::currentFile = "";
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::OutputHostName(int x, int y, int color)
{
    DWORD size = MAX_COMPUTERNAME_LENGTH + 1;
    wchar_t hostname[MAX_COMPUTERNAME_LENGTH + 1];

    if (GetComputerNameW(hostname, &size))
    {
        H::setcolor(color); H::gotoxy(x,y);
        wcout << hostname ;
    }
    else
    {
        cerr << "Error: Could not retrieve hostname." << endl;
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::OutputDate(int x, int y, int color)
{
    time_t t = time(nullptr);
    tm* localTime = localtime(&t);
    
    const char* months[] = 
    {
        "January", "February", "March", "April", "May", 
        "June","July", "August", "September", "October", "November", "December"
    };

    H::gotoxy(x,y);H::setcolor(color);
    cout    << localTime->tm_mday << "/"
            << months[localTime->tm_mon] << "/"
            << (localTime->tm_year + 1900);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool sortByPriceDesc(const FoodnDrink &a, const FoodnDrink &b)
{
    return a.getPrice() > b.getPrice();
}

bool sortByPriceAsc(const FoodnDrink &a, const FoodnDrink &b)
{
    return a.getPrice() < b.getPrice();
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
bool File::checkUsername(const char *username, int x, int y, int color)
{
    H::setcursor(0,0);
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
                H::setcolor(color); H::gotoxy(x,y);
                cout << "Username already exists";
                H::delay(500);
                H::clearBox(x,y+1,23,-1,7);
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
    H::setcursor(0,0);
    for (const auto &user : mupVector)
    {
        if (strcmp(user.getUsername(), username) == 0)
        {
            H::setcolor(color); H::gotoxy(x,y);
            cout << "Username already exists";
            return true;
        }
    }
    return false;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// ADD DATA TO VECTOR
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::insertToVector(int n, string &currentFile)
{
    int i = 1;
    char guestName[20];
    char username[20];

    int maxID = getMaxID(currentFile, n);

    if (n == 1)
    {
        fnd.setID(maxID + i);
        H::foreColor(176);
        H::gotoxy(99, 19);
        cout << ": " << fnd.getFndID(); // food&drink ID
        fnd.input();
        fndVector.push_back(fnd);
    }
    else if (n == 2)
    {
        game.setID(maxID + i);
        H::foreColor(176);
        H::gotoxy(99, 19);
        cout << ": ";
        cout << game.getID(); // insert game ID
        game.input();
        gameVector.push_back(game);
    }
    else if (n == 3)
    {
        // mup.setID(maxID + i);
        H::setcolor(135);
        H::gotoxy(65, 13);
        cout << maxID + 1;
        H::setcolor(135);
        H::gotoxy(65, 17);
        H::inputLetter(guestName, sizeof(guestName));

        do
        {
            H::setcolor(135);
            H::gotoxy(65, 21);
            H::inputAll(username, sizeof(username));

        } while (checkUsername(username,0,0,0) || checkUsernameInVector(username,0,0,0));

        mup.setGuestname(guestName);
        mup.setUsername(username);
        mup.input(maxID + i);
        mupVector.push_back(mup);
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
            H::foreColor(1);H::gotoxy(85, 17);
            H::inputNumber(searchID, sizeof(searchID));
            
            // can  use this instread of open again
            //                ---------------------------------------------------------
            //                file.clear();  // Clear any potential eof or fail flags
            //                file.seekg(0);  // Reset file pointer to beginning
            //                ---------------------------------------------------------

            if (n == 1)
            {
                B::Search_Animation();//Animation
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
                B::SearchGame_Animation();//Apply Animation while Searching
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
                B::SearchUser_Animation();////Apply Animation while Searching
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
                H::setcolor(4);
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

            if (n == 1)
            {
                while (file.read((char *)&fnd, sizeof(FoodnDrink)))
                {
                    fndVector.push_back(fnd);
                }
            }
            else if (n == 2)
            {
                while (file.read((char *)&game, sizeof(Game)))
                {
                    gameVector.push_back(game);
                }
            }
            else if (n == 3)
            {
                while (file.read((char *)&mup, sizeof(MgUserPayment)))
                {
                    mupVector.push_back(mup);
                }
            }
            file.close();

            H::foreColor(1);H::gotoxy(86, 17);
            H::inputNumber(updateID, sizeof(updateID));

            if (n == 1)
            {
                B::Update_Animation();//Animation
                for (auto &item : fndVector)
                {
                    if (atoi(updateID) == item.getFndID())
                    {
                        item.output(8);
                        //output Update ID
                        H::setcursor(1,0);
                        H::gotoxy(35, 36);H::foreColor(4);
                        cout << item.getFndID();
                        item.update();
                        isfound = true;
                        break;
                    }
                }
            }
            else if (n == 2)
            {
                B::UpdateGame_Animation();//game design
                for (auto &item : gameVector)
                {
                    if (atoi(updateID) == item.getID())
                    {
                        item.output(8);
                        //output update ID
                        H::gotoxy(35,36); H::foreColor(7); cout  << item.getID();
                        item.update();
                        isfound = true;
                        break;
                    }
                }
            }
            else if (n == 3)
            {
                B::UpdateUserInfo_Animation();//Animation
                for (auto &item : mupVector)
                {       
                    if (atoi(updateID) == item.getID())
                    {
                        item.output(8);
                        H::foreColor(4); H::gotoxy(32, 36);
                        cout << item.getID();

                        H::setcursor(1,0);
                        H::foreColor(4); H::gotoxy(48, 36);
                        H::inputLetter(guestName, sizeof(guestName));
                        do
                        {
                            H::setcursor(1,0);
                            H::foreColor(4); H::gotoxy(72, 36);
                            // H::clearBox(72,37,sizeof(username), -1, 7);
                            H::inputAll(username, sizeof(username));
                        } 
                        while (checkUsername(username,68,37,4));
                        item.setGuestname(guestName);
                        item.setUsername(username);

                        H::setcursor(1,0);
                        item.update();
                        H::setcursor(0,0);
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
                H::setcolor(4);
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
            B::Delete_Animation();//animation
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
            B::DeleteGame_Animation();//Apply
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
            B::DeleteUserInfo_Animation();//Animation
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
            H::setcolor(4);
            H::gotoxy(67, 34);
            cout << "...Delete Successfully...";
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
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// USER LOGIN
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::user_login()
{
    char username[20];
    char password[20];
    bool islogin = false;
    char press = ' ';

    file.open(UserInfoFile, ios::in | ios::binary);
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
        if(check_file(UserInfoFile))
        {
            H::setcolor(135);
            H::gotoxy(42, 32);
            cout << "Register First!!";
            H::delay(999);
            H::clearBox(42, 32, 25, 0, 136);
        }
        else
        {
            mupVector.clear();

            while (file.read((char *)&mup, sizeof(MgUserPayment)))
            {
                mupVector.push_back(mup);
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
                    H::inputLetter(username, sizeof(username)); // username

                    H::setcolor(249);
                    H::gotoxy(30, 28);
                    H::hidePassword(password, sizeof(password));
                    H::setcursor(0, 0);

                    for (const auto &user : mupVector)
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
                        loginTimeToFile(username, password);
                        userSubMenu(username, password);
                        break;
                    }
                    else
                    {
                        islogin = false;
                        H::setcursor(0, 0);
                        H::setcolor(140);
                        H::gotoxy(10 + 29, 5 + 27);cout << "You have ";
                        H::setcolor(137);cout << --chance;
                        H::setcolor(140);cout << " left";
                        
                        Design::loginMsg(1); // input msg

                        getch();

                        H::clearBox(10 + 19, 5 + 18, 42, 0, 247); // Clear username and password boxes
                        H::clearBox(10 + 19, 5 + 24, 42, 0, 247); // Clear username and password boxes
                        H::clearBox(10 + 23, 5 + 27, 34, 1, 136); // Clear message
                        // break;
                    }
                }
                if (chance == 0)
                {
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
                    else
                    {
                        continue;
                    }
                }
                if (islogin == true)
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
void File::userSubMenu(const char *username, const char *password)
{
    H::setConsoleTitle(TEXT("User MENU"));
    H::setcursor(0, 0);
    Design::LoadingAnimation();

    int choice = 0;
    do
    {
        H::setcolor(7);
        H::cls();

        Design::outline();
        Design::UserMenuTxt();
        LENG::UserMenu_Design();

        char press;
        int num = 1;
        choice = 0;
        int posistion = 10 + 22;

        do
        {
            H::drawBoxSingleLineWithBG(10 + 23, 5 + 9, 31, 1, 1);
            H::drawBoxSingleLineWithBG(10 + 23, 5 + 12, 31, 1, 1);
            H::drawBoxSingleLineWithBG(10 + 23, 5 + 15, 31, 1, 1);
            H::drawBoxSingleLineWithBG(10 + 23, 5 + 18, 31, 1, 1);
            H::drawBoxSingleLineWithBG(10 + 23, 5 + 21, 31, 1, 1);

            Design::tp(7, 10 + 25, 5 + 10);
            cout << "My Information";
            H::gotoxy(10 + 25, 5 + 13);
            cout << "Buy Hour to Play";
            H::gotoxy(10 + 25, 5 + 16);
            cout << "Buy Food & Drink";
            H::gotoxy(10 + 25, 5 + 19);
            cout << "View Spending";
            H::gotoxy(10 + 25, 5 + 22);
            cout << "Log out";

            if (num == 1)
            {
                LENG::UserMenu_Art(num);
                choice = 1;
            }
            if (num == 2)
            {
                LENG::UserMenu_Art(num);
                choice = 2;
            }
            if (num == 3)
            {
                LENG::UserMenu_Art(num);
                choice = 3;
            }
            if (num == 4)
            {
                LENG::UserMenu_Art(num);
                choice = 4;
            }
            if (num == 5)
            {
                LENG::UserMenu_Art(num);
                choice = 5;
            }

            H::setcolor(1);
            H::gotoxy(10 + 38, 5 + 29);
            cout << "Press ";
            H::setcolor(4);cout << "[ALL]";
            H::setcolor(1);cout << " arrow key to move between option, ";
            H::setcolor(4);cout << "[ENTER]";
            H::setcolor(1);cout << " to select";

            press = getch();

            switch (press)
            {
            case 75:
                num--;
                if (num < 1)
                {
                    num = 5;
                }
                posistion -= 10;
                if (posistion < (10 + 22))
                {
                    posistion = 10 + 22;
                }
                break;

            case 72:
                num--;
                if (num < 1)
                {
                    num = 5;
                }
                break;

            case 77:
                num++;
                if (num > 5)
                {
                    num = 1;
                }
                if (posistion < (10 + 22))
                {
                    posistion = 10 + 22;
                }
                break;

            case 80:
                num++;
                if (num > 5)
                {
                    num = 1;
                }
                break;
            }
        }

        while (press != 13);

        if (choice == 1)
        {
            Design::LoadingAnimation();
            viewProfile(username, password);
        }
        else if (choice == 2)
        {
            Design::LoadingAnimation();
            buyMoreTime(username, password);
        }
        else if (choice == 3)
        {
            Design::LoadingAnimation();
            buyFood(username, password);
        }
        else if (choice == 4)
        {
            Design::LoadingAnimation();
            invoice(username, password);
        }
        else if (choice == 5)
        {
            break;
        }

    } 
    while (choice != 5);
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// USER BUY MORE TIME
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::buyMoreTime(const char *username, const char *password)
{
    H::setConsoleTitle(TEXT("Add more hours"));
    H::setcolor(7);
    H::cls();
    H::setcursor(0, 0);
    B::buyHourTxt();

    char hours[5];
    char creditCard[17];
    bool isfound = false;

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);

    if (file.is_open() && tempFile.is_open())
    {
        B::buyHour_Design();
        H::setcursor(1, 0);
        H::setcolor(1);H::gotoxy(110, 19);
        H::inputNumber(hours, sizeof(hours)); // Purdhase hour

        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
            {
                isfound = true;
                mup.setnTime(atof(hours));
                mup.setBuyingTime(atof(hours));
            }
            tempFile.write((char *)&mup, sizeof(MgUserPayment));
        }

        H::setcolor(1);
        H::gotoxy(110, 23);
        H::inputNumber(creditCard, sizeof(creditCard)); // Credit card number
        H::setcursor(0, 0);

        if (isfound)
        {
            H::setcolor(4);H::gotoxy(96,25); cout << "...Purchase successfully...";
            Design::message(2,0,36);
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
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// USER INVOICE
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::invoice(const char *username, const char *password)
{
    H::setConsoleTitle(TEXT("My Spending"));
    H::setcolor(7);
    H::cls();
    Design::outline();
    H::setcursor(0,0);

    B::InvoiceTxt();
    B::Invoice_Design();
    file.open(UserInfoFile, ios::in | ios::binary);

    if (!file.is_open())
    {
        Design::message(4, 0, 3);
    }
    else
    {
        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
            {
                
                H::setcolor(252);H::gotoxy(83,16);
                cout << mup.getID();
                H::setcolor(252);H::gotoxy(83,17);
                cout << mup.getGuestname();
                H::setcolor(252);H::gotoxy(83,18);
                cout << mup.getUsername();
                OutputDate(83,19,252);

                H::setcolor(252);H::gotoxy(53,23);
                cout << left << setw(30) << mup.getFoodnDrink()
                << setw(10) << mup.getQty() 
                << setw(10) << mup.getTime()
                << setw(10) << mup.getBuyedTime() ;
                
                OutputHostName(75,30,252);
                H::setcolor(252);H::gotoxy(89,32);
                cout << fixed << setprecision(2) << mup.totalIncome() / 4000;
                H::setcolor(252);H::gotoxy(109,32);
                cout << fixed << setprecision(0) << mup.totalIncome();

                Design::message(2,0,38);
            }
        }
    }
    file.close();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//////////////////////////////////////////
// CALCULATE USING TIME
//////////////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::calculateTime(const char *username, const char *password)
{
    // bool isfound = false;
    // string tempFileName = "Data/temp.ant";

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
                //	            mup.setnTime(remainingTime);
                mup.setRemainTime(remainingTime);
                cout << "Debug Output:" << endl;
                cout << "loginHour: " << loginHour << ", loginMn: " << loginMn << endl;
                cout << "logoutHour: " << logoutHour << ", logoutMn: " << logoutMn << endl;
                cout << "loginTime (minutes): " << loginTime << ", logoutTime (minutes): " << logoutTime << endl;
                cout << "usedTime (minutes): " << usedTimeMinutes << endl;
                cout << "remainingTime: " << remainingTime << endl;

                // tempFile.write((char *)&mup, sizeof(MgUserPayment));
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

    char foodID[5];
    char quantity[13];

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);

    if (!file.is_open() || !tempFile.is_open())
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
        }
        else
        {
            int y = 0;
            while (file2.read((char *)&fnd, sizeof(fnd)))
            {
                fnd.output(y);
                y++;
            }
        }
        file2.close();

        Design::message(6,0,0);

        H::setcolor(7);
        H::cls();
        Design::outline();
        B::BuyFoodnDrinkTxt();
        B::buyFoodnDrink_Design();

        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
            {
                H::setcursor(1, 0);
                H::foreColor(1);
                H::gotoxy(118, 19);
                H::inputNumber(foodID, sizeof(foodID)); // food&drink ID
                H::foreColor(1);
                H::gotoxy(118, 23);
                H::inputNumber(quantity, sizeof(quantity)); // qty

                H::setcursor(0, 0);
                int foodIDInt = atoi(foodID);
                int quantityInt = atoi(quantity);

                fstream foodFile(FoodnDrinkFile, ios::in | ios::out | ios::binary);
                if (!foodFile.is_open())
                {
                    H::foreColor(7);H::gotoxy(91, 29);
                    cout << "Food file could not be opened";
                    Design::message(2,0,38);
                }
                else
                {
                    bool foodFound = false;
                    while (foodFile.read((char *)&fnd, sizeof(FoodnDrink)))
                    {
                        if (fnd.getFndID() == foodIDInt)
                        {
                            int availableQty = atoi(fnd.getQty());
                            if (quantityInt <= availableQty)
                            {
                                int newQty = availableQty - quantityInt;
                                char newQtyStr[5];
                                sprintf(newQtyStr, "%d", newQty);
                                fnd.setQty(newQtyStr);

                                foodFile.seekp(-sizeof(FoodnDrink), ios::cur);
                                foodFile.write((char *)&fnd, sizeof(FoodnDrink));

                                mup.setFnd(fnd.getName(), fnd.getPrice(), quantity);

                                H::foreColor(7);
                                H::gotoxy(91, 29); cout << "\3\3";
                                H::setcolor(4);
                                cout << " Successfully Purchase";
                                H::setcolor(7); cout << " \3\3";

                                Design::message(2,0,38);
                            }
                            else
                            {
                                H::foreColor(7); H::gotoxy(88, 29);
                                cout << "Insufficient quantity are available";

                                Design::message(2,0,38);
                            }
                            foodFound = true;
                            break;
                        }
                    }
                    foodFile.close();

                    if (!foodFound)
                    {
                        H::foreColor(4);
                        H::gotoxy(80, 29);
                        cout << "Food or Drink ID is not found";
                        
                        Design::message(2,0,38);
                    }
                }
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

    B::ViewProfileTxt();
    B::ViewProfile_Design();

    while (1)
    {
        file.open(UserInfoFile, ios::in | ios::binary);
        while (file.read((char *)&mup, sizeof(mup)))
        {
            if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
            {
                OutputDate(77,20,236);
                mup.userProfile();
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
// USER INVOICE
////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::viewAllUserInvoice()
{
    double allTotal = 0;
    file.open(UserInfoFile, ios::in | ios::binary);

    int y = 0;
    while (file.read((char *)&mup, sizeof(MgUserPayment)))
    {
        allTotal += mup.totalIncome();
        mup.viewAll(y);
        y++;
    }
    H::gotoxy(30,36); H::setcolor(55); 
    cout << "All Income ";

    H::gotoxy(81,36); H::setcolor(103); 
    cout << "USD : " << fixed << setprecision(2) << allTotal / 4000;
    H::gotoxy(111,36); H::setcolor(103); 
    cout << "KHR : " << fixed << setprecision(0) << allTotal;

    file.close();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
////////////////////////////////
// INCOME
////////////////////////////////
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::viewIncome()
{
    file.open(UserInfoFile, ios::in | ios::binary);
    while (file.read((char *)&mup, sizeof(MgUserPayment)))
    {
        mup.income();
    }
    file.close();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
                                END OF FILE
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif