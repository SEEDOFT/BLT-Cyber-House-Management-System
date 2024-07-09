#ifndef ___File_H___
#define ___File_H___

#include "MgUserPayment.h"
#include <sys/stat.h>
#include <vector>
#include <ctime>
#include <cmath>
#include <sstream>

class File
{
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
	    static vector<MgUserInfo> muiVector;
	
	    static FoodnDrink fnd;
	    static Game game;
	    static MgUserInfo mui;
	
	    static fstream file;
	    static string currentFile;
	
	public:
	    static void insertFile(int n);
	    static void viewFile(int n);
	    static void searchFile(int n);
	    static void updateFile(int n);
	    static void deleteFile(int n);
	    static bool check_file(const string &fileName);
	    static void viewProfile(const char *username, const char *password);
	
		static void setCurrentFile(int n);
		static void insertToVector(int n, string &fileName);
	    static void loginTimeToFile(const char *username, const char *password);
	    static void logoutTimeToFile(const char *username, const char *password);
	    static void readLogin(const char *username, const char *password);
	    static void readLogout(const char *username, const char *password);
	    static void user_login();
	    static void buyMoreTime(const char *username, const char *password);
	    static void invoice(const char *username, const char *password);
	    static void calculateTime(const char *username, const char *password);
	    static void buyFood(const char *username, const char *password);
};

vector<FoodnDrink> File::fndVector;
vector<Game> File::gameVector;
vector<MgUserInfo> File::muiVector;

FoodnDrink File::fnd;
Game File::game;
MgUserInfo File::mui;

fstream File::file;

string File::dir = "Data";
string File::FoodnDrinkFile = dir + "/FoodnDrink.ant";
string File::Backup = dir + "/BackUpFile.ant";
string File::GameFile = dir + "/Game.ant";
string File::UserInfoFile = dir + "/UserInfo.ant";
string File::MgUserPaymentFile = dir + "/MgUserPayment.ant";
string File::currentFile = "";

// bool sortByPriceDesc(const PhoneInfo& a, const PhoneInfo& b)
//{
//     return a.getPrice() > b.getPrice();
// }

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

int File::getMaxID(const string &fileName, int type)
{
    ifstream file(fileName, ios::in | ios::binary);
    int maxID = 999;

    if (type == 1)
    {
        while (file.read((char *)&fnd, sizeof(fnd)))
        {
            if (fnd.getID() > maxID)
            {
                maxID = fnd.getID();
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
        while (file.read((char *)&mui, sizeof(mui)))
        {
            if (mui.getID() > maxID)
            {
                maxID = mui.getID();
            }
        }
    }

    file.close();
    return maxID;
}

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

void File::insertToVector(int n, string &currentFile)
{
	int i = 1;
	char press = ' ';
	while (1)
    {
        int maxID = getMaxID(currentFile, n);

        if (n == 1)
        {
            fnd.setID(maxID + i);
            cout << "ID : " << fnd.getID() << endl;
            fnd.input();
            fndVector.push_back(fnd);
        }
        else if (n == 2)
        {
            game.setID(maxID + i);
            cout << "ID : " << game.getID() << endl;
            game.input();
            gameVector.push_back(game);
        }
        else if (n == 3)
        {
            mui.setID(maxID + i);
            cout << "ID : " << mui.getID() << endl;
            mui.input();
            muiVector.push_back(mui);
        }
        cout << "press any key to input again and [Enter] to stop" << endl;
        press = getch();
        if (press == 13)
        {
            break;
        }
        i++;
    }
}

void File::insertFile(int n)
{
//    char press = ' ';
//    int i = 1;

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
        for (const auto &insert : muiVector)
        {
            file.write((char *)&insert, sizeof(MgUserInfo));
        }
        muiVector.clear();
    }
    file.close();
}
void File::viewFile(int n)
{
    setCurrentFile(n);
    
    file.open(currentFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        cout << "File Curropted" << endl;
    }
    else
    {
        if (check_file(currentFile))
        {
            cout << "File has no data" << endl;
        }
        else
        {
            if (n == 1)
            {
                while (file.read((char *)&fnd, sizeof(fnd)))
                {
                    fnd.output();
                }
            }
            else if (n == 2)
            {
                while (file.read((char *)&game, sizeof(game)))
                {
                    game.output();
                }
            }
            else if (n == 3)
            {
                while (file.read((char *)&mui, sizeof(mui)))
                {
                    mui.output();
                }
            }
        }
    }

    file.close();
}

void File::searchFile(int n)
{
    char searchID[5];
    bool isfound = false;
    char press = ' ';

    setCurrentFile(n);
    
    file.open(currentFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        cout << "File Corrupted" << endl;
    }
    else
    {
        if (check_file(currentFile))
        {
            cout << "File has no data" << endl;
        }
        else
        {
            file.close();
            while (1)
            {
                file.open(currentFile, ios::in | ios::binary);
                isfound = false;
                cout << "Enter Food ID : ";
                H::inputNumber(searchID, sizeof(searchID));
                cout << endl;
                // can  use this instread of open again
                //                ---------------------------------------------------------
                //                file.clear();  // Clear any potential eof or fail flags
                //                file.seekg(0);  // Reset file pointer to beginning
                //                ---------------------------------------------------------

                if (n == 1)
                {
                    while (file.read((char *)&fnd, sizeof(FoodnDrink)))
                    {
                        if (atoi(searchID) == fnd.getID())
                        {
                            fnd.output();
                            isfound = true;
                        }
                    }
                }
                else if (n == 2)
                {
                    while (file.read((char *)&game, sizeof(Game)))
                    {
                        if (atoi(searchID) == game.getID())
                        {
                            game.output();
                            isfound = true;
                        }
                    }
                }
                else if (n == 3)
                {
                    while (file.read((char *)&mui, sizeof(MgUserInfo)))
                    {
                        if (atoi(searchID) == mui.getID())
                        {
                            mui.output();
                            isfound = true;
                        }
                    }
                }

                if (isfound == false)
                {
                    cout << "ID not found" << endl;
                }
                else
                {
                    cout << "ID found" << endl;
                }
                cout << "Press any key to search again or [Enter] to stop" << endl;
                press = getch();
                if (press == 13)
                {
                    file.close();
                    break;
                }
                file.close();
            }
        }
    }
}

void File::viewProfile(const char *username, const char *password)
{
    file.open(UserInfoFile, ios::in | ios::binary);
    while (file.read((char *)&mui, sizeof(mui)))
    {
        if (strcmp(username, mui.getUsername()) == 0 && strcmp(password, mui.getPassword()) == 0)
        {
            mui.output();
        }
    }
    file.close();
}

void File::updateFile(int n)
{
    char updateID[5];
    bool isfound = false;
    char press = ' ';

    setCurrentFile(n);
    
    file.open(currentFile, ios::out | ios::in | ios::binary);

    if (!file.is_open())
    {
        cout << "File Curropted" << endl;
    }
    else
    {
        if (check_file(currentFile))
        {
            cout << "File has no data" << endl;
        }
        else
        {
            while (1)
            {
                isfound = false;
                cout << "Enter Food ID : ";
                H::inputNumber(updateID, sizeof(updateID));
                cout << endl;
                file.clear();            // Clear any potential eof or fail flags
                file.seekg(0, ios::beg); // Reset file pointer to beginning

                if (n == 1)
                {
                    while (file.read((char *)&fnd, sizeof(FoodnDrink)))
                    {
                        if (atoi(updateID) == fnd.getID())
                        {
                            fnd.input();
                            file.seekp((int)file.tellg() - sizeof(FoodnDrink));
                            file.write((char *)&fnd, sizeof(FoodnDrink));
                            isfound = true;
                        }
                    }
                }
                else if (n == 2)
                {
                    while (file.read((char *)&game, sizeof(Game)))
                    {
                        if (atoi(updateID) == game.getID())
                        {
                            game.input();
                            file.seekp((int)file.tellg() - sizeof(Game));
                            file.write((char *)&game, sizeof(Game));
                            isfound = true;
                        }
                    }
                }
                else if (n == 3)
                {
                    while (file.read((char *)&mui, sizeof(MgUserInfo)))
                    {
                        if (atoi(updateID) == mui.getID())
                        {
                            mui.input();
                            file.seekp((int)file.tellg() - sizeof(MgUserInfo));
                            file.write((char *)&mui, sizeof(MgUserInfo));
                            isfound = true;
                        }
                    }
                }

                if (isfound == false)
                {
                    cout << "...Incorrect Invoice ID..." << endl;
                }
                else
                {
                    cout << "...Update Successfully..." << endl;
                }
                cout << "Press any key to update again or [Enter] to stop" << endl;
                press = getch();
                if (press == 13)
                {
                    file.close();
                    break;
                }
            }
        }
    }
}

void File::deleteFile(int n)
{
    char deleteID[5];
    bool isfound = false;
    char press = ' ';

    setCurrentFile(n);

    file.open(currentFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        cout << "File Corrupted" << endl;
    }
    else if (check_file(currentFile))
    {
        cout << "File has no data" << endl;
        file.close();
    }
    else
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
            muiVector.clear();
            while (file.read((char *)&mui, sizeof(MgUserInfo)))
            {
                muiVector.push_back(mui);
            }
            break;
        }
        }

        file.close();

        while (true)
        {
            isfound = false;
            cout << "Enter ID to delete: ";
            H::inputNumber(deleteID, sizeof(deleteID));
            cout << endl;
            int deleteIDInt = atoi(deleteID);

            switch (n)
            {
            case 1:
            {
                for (auto it = fndVector.begin(); it != fndVector.end();)
                {
                    if (it->getID() == deleteIDInt)
                    {
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
                for (auto it = gameVector.begin(); it != gameVector.end();)
                {
                    if (it->getID() == deleteIDInt)
                    {
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
                for (auto it = muiVector.begin(); it != muiVector.end();)
                {
                    if (it->getID() == deleteIDInt)
                    {
                        it = muiVector.erase(it);
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
                cout << "ID not found" << endl;
            }
            else
            {
                cout << "Deleted Successfully" << endl;
            }

            cout << "Press any key to delete again or [Enter] to stop" << endl;
            press = getch();
            if (press == 13)
            {
                break;
            }
        }

        file.open(currentFile, ios::out | ios::binary | ios::trunc);
        if (!file.is_open())
        {
            cout << "File Curropted" << endl;
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
                for (const auto &mui : muiVector)
                {
                    file.write((char *)&mui, sizeof(MgUserInfo));
                }
                break;
            }
            }
        }

        file.close();
    }
}

void File::loginTimeToFile(const char *username, const char *password)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string tempFileName = "Data/temp.ant";

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);
    if (file.is_open())
    {
        while (file.read((char *)&mui, sizeof(mui)))
        {
            if (strcmp(username, mui.getUsername()) == 0 && strcmp(password, mui.getPassword()) == 0)
            {
                mui.setLoginHour(ltm->tm_hour);
                mui.setLoginMn(ltm->tm_min);
                tempFile.write((char *)&mui, sizeof(mui));
                break;
            }
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }
    file.close();
    tempFile.close();
    remove(UserInfoFile.c_str());
    rename(Backup.c_str(), UserInfoFile.c_str());
}

void File::logoutTimeToFile(const char *username, const char *password)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    // string tempFileName = "Data/temp.ant";

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);
    if (!file.is_open() || !tempFile.is_open())
    {
        cout << "File Corrupted" << endl;
    }
    else
    {
        while (file.read((char *)&mui, sizeof(mui)))
        {
            if (strcmp(username, mui.getUsername()) == 0 && strcmp(password, mui.getPassword()) == 0)
            {
                mui.setLogoutHour(ltm->tm_hour);
                mui.setLogoutMn(ltm->tm_min);
                //                file.seekp(-static_cast<int>(sizeof(mui)), ios::cur);  // Move the write pointer back to overwrite the current record
                tempFile.write((char *)&mui, sizeof(mui));
                break;
            }
        }
    }

    file.close();
    tempFile.close();
    remove(UserInfoFile.c_str());
    rename(Backup.c_str(), UserInfoFile.c_str());
}

void File::user_login()
{
    char username[20];
    char password[20];
    bool islogin = false;
    char press;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    while (true)
    {
        cout << "Enter Username: ";
        H::inputLetter(username, sizeof(username));
        cout << endl;
        cout << "Enter Password: ";
        H::hidePassword(password, sizeof(password));
        cout << endl;

        file.open(UserInfoFile, ios::in | ios::binary);
        if (!file.is_open())
        {
            cout << "File Corrupted" << endl;
        }
        else
        {
            muiVector.clear();
            while (file.read((char *)&mui, sizeof(MgUserInfo)))
            {
                muiVector.push_back(mui);
            }
            file.close();

            for (const auto &user : muiVector)
            {
                if (strcmp(username, user.getUsername()) == 0 && strcmp(password, user.getPassword()) == 0)
                {
                    islogin = true;
                    break;
                }
            }

            if (islogin)
            {
                loginTimeToFile(username, password);
                cout << "Login successful." << endl;
                break;
            }
            else
            {
                cout << "Login failed. Incorrect username or password." << endl;
                cout << "Press [Any Key] to login again or [ESC] to return" << endl;
                press = getch();
                if (press == 27)
                {
                    break;
                }
            }
        }
    }
    while(1)
    {
    	cout << "[ 1 ] . VIEW PROFILE" << endl;
	    cout << "[ 2 ] . BUY TIME" << endl;
	    cout << "[ 3 ] . BUY SNACK" << endl;
	    cout << "[ 4 ] . INVOICE" << endl;
	    cout << "[ 5 ] . LOGOUT" << endl;
	    cout << "[ 6 ] . EXIT" << endl;
	    cout << "Choose option" << endl;
	    press = getch();
	    switch (press)
	    {
		    case '1':
		        viewProfile(username, password);
		        break;
		    case '2':
		        buyMoreTime(username, password);
		        break;
		    case '3':
		    	buyFood(username,password);
		        break;
		    case '4':
		        invoice(username, password);
		        break;
		    case '5':
		        logoutTimeToFile(username, password);
		        calculateTime(username, password);
		        user_login();
		        break;
		    case '6':
		        logoutTimeToFile(username, password);
		        calculateTime(username, password);
		        exit(0);
		        break;
	    }
	}
}

void File::buyMoreTime(const char *username, const char *password)
{
    char hours[5];
    char creditCard[17];
    bool isfound = false;

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);

    if (!file.is_open() || !tempFile.is_open())
    {
        cout << "File Corrupted" << endl;
    }
    else
    {
        cout << "Enter hours you want to buy: ";
        H::inputNumber(hours, sizeof(hours));
        cout << endl;

        while (file.read((char *)&mui, sizeof(MgUserInfo)))
        {
            if (strcmp(username, mui.getUsername()) == 0 && strcmp(password, mui.getPassword()) == 0)
            {
                isfound = true;
//                mui.setTime(atof(hours));
//                mui.setRemainTime(remainingTime);
				mui.setnTime(atof(hours));
                mui.setBuyingTime(atof(hours));
            }
            tempFile.write((char *)&mui, sizeof(MgUserInfo));
        }

        cout << "Enter credit card: ";
        H::inputNumber(creditCard, sizeof(creditCard));
        cout << endl;

        if (isfound)
        {
            cout << "Purchase successful" << endl;
        }
    }

    file.close();
    tempFile.close();
    remove(UserInfoFile.c_str());
    rename(Backup.c_str(), UserInfoFile.c_str());
}

void File::invoice(const char *username, const char *password)
{
    file.open(UserInfoFile, ios::in | ios::binary);

    if (!file.is_open())
    {
        cout << "File Corrupted" << endl;
    }
    else
    {
        while (file.read((char *)&mui, sizeof(MgUserInfo)))
        {
            if (strcmp(username, mui.getUsername()) == 0 && strcmp(password, mui.getPassword()) == 0)
            {
                cout << "Added Time: " << mui.getBuyedTime() << endl;
                cout << "Buyed Snack " << setw(25) << mui.getFoodnDrink() << "Price " << setw(8) << mui.getPrice() << "Quantity " << setw(5) << mui.getQty() << "Total Price " << mui.getFndTotal() << endl;
            }
        }
    }

    file.close();
}

void File::calculateTime(const char *username, const char *password)
{
    bool isfound = false;
    // string tempFileName = "Data/temp.ant";

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);

    if (!file.is_open() || !tempFile.is_open())
    {
        cout << "File Corrupted" << endl;
    }
    else
    {
    	while (file.read((char *)&mui, sizeof(MgUserInfo)))
	    {
	        if (strcmp(username, mui.getUsername()) == 0 && strcmp(password, mui.getPassword()) == 0)
	        {
	            isfound = true;
	
	            double loginHour = mui.getLoginHour();
	            double loginMn = mui.getLoginMn();
	            double logoutHour = mui.getLogoutHour();
	            double logoutMn = mui.getLogoutMn();
	
	            double loginTime = loginHour * 60 + loginMn;
	            double logoutTime = logoutHour * 60 + logoutMn;
	
	            double usedTimeMinutes = logoutTime - loginTime;
	
	            if (usedTimeMinutes < 0)
	            {
	                usedTimeMinutes += 24 * 60;
	            }
	            double remainingTime = mui.getTime() - usedTimeMinutes;
	
	            if (remainingTime < 0)
	            {
	                remainingTime = 0;
	            }
//	            mui.setnTime(remainingTime);
	            mui.setRemainTime(remainingTime);
	            cout << "Debug Output:" << endl;
	            cout << "loginHour: " << loginHour << ", loginMn: " << loginMn << endl;
	            cout << "logoutHour: " << logoutHour << ", logoutMn: " << logoutMn << endl;
	            cout << "loginTime (minutes): " << loginTime << ", logoutTime (minutes): " << logoutTime << endl;
	            cout << "usedTime (minutes): " << usedTimeMinutes << endl;
	            cout << "remainingTime: " << remainingTime << endl;
	
	            tempFile.write((char *)&mui, sizeof(mui));
	        }
	    }
	
	    file.close();
	    tempFile.close();
	    remove(UserInfoFile.c_str());
	    rename(Backup.c_str(), UserInfoFile.c_str());
	}
}

void File::buyFood(const char *username, const char *password)
{
    char foodID[5];
    char quantity[5];
    bool isfound = false;

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);

    if (!file.is_open() || !tempFile.is_open())
    {
        cout << "File Corrupted" << endl;
    }
    else
    {
        while (file.read((char *)&mui, sizeof(MgUserInfo)))
        {
            if (strcmp(username, mui.getUsername()) == 0 && strcmp(password, mui.getPassword()) == 0)
            {
                isfound = true;
                cout << "Enter Food ID: ";
                H::inputNumber(foodID, sizeof(foodID));
                cout << endl;

                cout << "Enter Quantity: ";
                H::inputNumber(quantity, sizeof(quantity));
                cout << endl;

                int foodIDInt = atoi(foodID);
                int quantityInt = atoi(quantity);

                fstream foodFile(FoodnDrinkFile, ios::in | ios::binary);
                FoodnDrink food;
                while (foodFile.read((char *)&food, sizeof(FoodnDrink)))
                {
                    if (food.getID() == foodIDInt)
                    {
                        mui.setFnd(food.getName(), food.getPrice(), quantity);
                        break;
                    }
                }
                foodFile.close();
            }
            tempFile.write((char *)&mui, sizeof(MgUserInfo));
        }

        if (isfound)
        {
            cout << "Food purchase successful" << endl;
        }
        else
        {
            cout << "User not found" << endl;
        }
    }

    file.close();
    tempFile.close();
    remove(UserInfoFile.c_str());
    rename(Backup.c_str(), UserInfoFile.c_str());
}

#endif