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
	    static vector<MgUserPayment> mupVector;
	
	    static FoodnDrink fnd;
	    static Game game;
	    static MgUserInfo mui;
	    static MgUserPayment mup;
	
	    static fstream file;
	    static string currentFile;
	
	public:
	    static void insertFile(int n);
	    static void viewFile(int n);
	    static void searchFile(int n);
	    static void updateFile(int n);
	    static void deleteFile(int n);
	    static bool check_file(const string &fileName);
	    static bool checkUsername(const char * username);
	    static bool checkUsernameInVector(const char *username);
	    static void viewProfile(const char *username, const char *password);
	
		static void setCurrentFile(int n);
		static void insertToVector(int n, string &fileName);
		static void pushToVector(int n);
	    static void loginTimeToFile(const char *username, const char *password);
	    static void logoutTimeToFile(const char *username, const char *password);
	    static void readLogin(const char *username, const char *password);
	    static void readLogout(const char *username, const char *password);
	    static void user_login();
	    static void userSubMenu(const char * username, const char * password);
	    static void buyMoreTime(const char *username, const char *password);
	    static void invoice(const char *username, const char *password);
	    static void calculateTime(const char *username, const char *password);
	    static void buyFood(const char *username, const char *password);
	    
	    static void viewAllUserInvoice();
	    static void totalIncome();
	    static void viewIncome();
};

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

bool sortByPriceDesc(const FoodnDrink& a, const FoodnDrink& b)
{
     return a.getPrice() > b.getPrice();
}

bool sortByPriceAsc(const FoodnDrink& a, const FoodnDrink& b)
{
     return a.getPrice() < b.getPrice();
}

//////////////////////////////////////////
		//CHECK FILE DATA
//////////////////////////////////////////
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

//////////////////////////////////////////
			//AUTO ID
//////////////////////////////////////////
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

//////////////////////////////////////////
			//SET FILE
//////////////////////////////////////////
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

//////////////////////////////////////////
	//CHECK USERNAME IN FILE
//////////////////////////////////////////
bool File::checkUsername(const char * username)
{
    file.open(UserInfoFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        return false;
    }
    else
    {
        while (file.read((char*)&mup, sizeof(MgUserPayment)))
        {
            if (strcmp(mup.getUsername(), username) == 0)
            {
                cout << "Username already exists" << endl;
                file.close();
                return true;
            }
        }
    }
    file.close();
    return false;
}

//////////////////////////////////////////
	//CHECK USERNAME IN VECTOR
//////////////////////////////////////////
bool File::checkUsernameInVector(const char *username)
{
    for (const auto &user : mupVector)
    {
        if (strcmp(user.getUsername(), username) == 0)
        {
            cout << "Username already exists" << endl;
            return true;
        }
    }
    return false;
}

//////////////////////////////////////////
		//ADD DATA TO VECTOR
//////////////////////////////////////////
void File::insertToVector(int n, string &currentFile)
{
    int i = 1;
    char press = ' ';
    char guestName[20];
    char username[20];
    while (1)
    {
        int maxID = getMaxID(currentFile, n);

        if (n == 1)
        {
            fnd.setID(maxID + i);
            cout << "ID : " << fnd.getFndID() << endl;
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
            mup.setID(maxID + i);
            cout << "ID : " << mup.getID() << endl;
            cout << "Enter Guest name : "; H::inputLetter(guestName, sizeof(guestName)); cout << endl;

            do
            {
                cout << "Enter Account username : "; H::inputAll(username, sizeof(username)); cout << endl;
            } while (checkUsername(username) || checkUsernameInVector(username));

            mup.setGuestname(guestName);
            mup.setUsername(username);
            mup.input();
            mupVector.push_back(mup);
        }

        cout << "Press any key to input again and [ESC] to stop" << endl;
        press = getch();
        if (press == 27)
        {
            break;
        }
        i++;
    }
}

//////////////////////////////////////////
		//ADD DATA TO FILE
//////////////////////////////////////////
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
//////////////////////////////////////////
			//VIEW DATA
//////////////////////////////////////////
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
                while (file.read((char *)&mup, sizeof(MgUserPayment)))
                {
                    mup.output();
                }
            }
        }
    }

    file.close();
}

//////////////////////////////////////////
			//SEARCH DATA
//////////////////////////////////////////
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
                        if (atoi(searchID) == fnd.getFndID())
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
                    while (file.read((char *)&mup, sizeof(MgUserPayment)))
                    {
                        if (atoi(searchID) == mup.getID())
                        {
                            mup.output();
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
                cout << "Press any key to search again or [ESC] to stop" << endl;
                press = getch();
                if (press == 27)
                {
                    file.close();
                    break;
                }
                file.close();
            }
        }
    }
}

//////////////////////////////////////////
			//UPDATE DATA
//////////////////////////////////////////
void File::updateFile(int n)
{
    char updateID[5];
    bool isfound = false;
    char press = ' ';
    char guestName[20];
    char username[20];

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
                        if (atoi(updateID) == fnd.getFndID())
                        {
                        	cout << "ID : " << fnd.getFndID() << endl;
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
                        	cout << "ID : " << game.getID() << endl;
                            game.input();
                            file.seekp((int)file.tellg() - sizeof(Game));
                            file.write((char *)&game, sizeof(Game));
                            isfound = true;
                        }
                    }
                }
                else if (n == 3)
                {
                    while (file.read((char *)&mup, sizeof(MgUserPayment)))
                    {
                        if (atoi(updateID) == mup.getID())
                        {
				            cout << "ID : " << mup.getID() << endl;
				            cout << "Enter Guest name : "; H::inputLetter(guestName, sizeof(guestName)); cout << endl;
				
				            do
				            {
				                cout << "Enter Account username : "; H::inputAll(username, sizeof(username)); cout << endl;
				            } while (checkUsername(username));
				
				            mup.setGuestname(guestName);
				            mup.setUsername(username);
				            mup.input();
				            
                            file.seekp((int)file.tellg() - sizeof(MgUserPayment));
                            file.write((char *)&mup, sizeof(MgUserPayment));
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
                cout << "Press any key to update again or [ESC] to stop" << endl;
                press = getch();
                if (press == 27)
                {
                    file.close();
                    break;
                }
            }
        }
    }
}

//////////////////////////////////////////
			//DELETE DATA
//////////////////////////////////////////
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
        pushToVector(n);

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
	                    if (it->getFndID() == deleteIDInt)
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
	                for (auto it = mupVector.begin(); it != mupVector.end();)
	                {
	                    if (it->getID() == deleteIDInt)
	                    {
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
                cout << "ID not found" << endl;
            }
            else
            {
                cout << "Deleted Successfully" << endl;
            }

            cout << "Press any key to delete again or [ESC] to stop" << endl;
            press = getch();
            if (press == 27)
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
	                for (const auto &mup : mupVector)
	                {
	                    file.write((char *)&mup, sizeof(MgUserPayment));
	                }
	                break;
	            }
            }
        }

        file.close();
    }
}
//////////////////////////////////////////
		//PUSH DATA TO VECTOR
//////////////////////////////////////////

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

//////////////////////////////////////////
		//GET LOGIN TIME
//////////////////////////////////////////
void File::loginTimeToFile(const char* username, const char* password) 
{
    time_t now = time(0);
    tm* ltm = localtime(&now);

    file.open(UserInfoFile, ios::in | ios::binary);
    if (!file.is_open()) 
	{
        cout << "Unable to open file" << endl;
    }
    else
    {
    	mupVector.clear();
	    while (file.read((char*)&mup, sizeof(MgUserPayment))) 
		{
	        mupVector.push_back(mup);
	    }
	    file.close();
	    
	    for (auto& user : mupVector) 
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
	        cout << "Unable to open file" << endl;
	    }
		else
		{
			for (const auto& user : mupVector) 
			{
		        file.write((char*)&user, sizeof(MgUserPayment));
		    }
		}
	}
	
    file.close();
}

//////////////////////////////////////////
		//GET LOGOUT TIME
//////////////////////////////////////////
void File::logoutTimeToFile(const char* username, const char* password) 
{
    time_t now = time(0);
    tm* ltm = localtime(&now);

    file.open(UserInfoFile, ios::in | ios::binary);
    if (!file.is_open()) 
	{
        cout << "Unable to open file" << endl;
    }
    else
    {
    	mupVector.clear();
	    while (file.read((char*)&mup, sizeof(MgUserPayment))) 
		{
	        mupVector.push_back(mup);
	    }
	    file.close();
	
	    for (auto& user : mupVector) 
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
	        cout << "Unable to open file" << endl;
	    }
		else
		{
			for (const auto& user : mupVector) 
			{
		        file.write((char*)&user, sizeof(MgUserPayment));
		    }
		}
	    
	}
    file.close();
}

//////////////////////////////////////////
			//USER LOGIN
//////////////////////////////////////////
void File::user_login()
{
    char username[20];
    char password[20];
    bool islogin = false;
    char press;

	islogin = false;

    file.open(UserInfoFile, ios::in | ios::binary);
    if (!file.is_open())
    {
        cout << "File Corrupted" << endl;
    }
    else
    {
        mupVector.clear();
        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            mupVector.push_back(mup);
        }
        file.close();
        
        while(1)
        {
        	cout << "Enter Username: ";
	        H::inputLetter(username, sizeof(username));
	        cout << endl;
	        cout << "Enter Password: ";
	        H::hidePassword(password, sizeof(password));
	        cout << endl;
	
	        for (const auto &user : mupVector)
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
		userSubMenu(username, password);
    }

}

//////////////////////////////////////////
			//USER MENU
//////////////////////////////////////////
void File::userSubMenu(const char * username, const char * password)
{
	char press;
	while (true)
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
                buyFood(username, password);
                break;
            case '4':
                invoice(username, password);
                break;
            case '5':
                logoutTimeToFile(username, password);
                calculateTime(username, password);
                return;
            case '6':
                logoutTimeToFile(username, password);
                calculateTime(username, password);
                exit(0);
        }
    }
}

//////////////////////////////////////////
		//USER BUY MORE TIME
//////////////////////////////////////////
void File::buyMoreTime(const char *username, const char *password)
{
    char hours[5];
    char creditCard[17];
    bool isfound = false;

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);

    if (file.is_open() && tempFile.is_open())
    {
        cout << "Enter hours you want to buy: ";
        H::inputNumber(hours, sizeof(hours));
        cout << endl;

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

        cout << "Enter credit card: ";
        H::inputNumber(creditCard, sizeof(creditCard));
        cout << endl;

        if (isfound)
        {
            cout << "Purchase successful" << endl;
        }
    }
    else
    {
        cout << "File Corrupted" << endl;
    }

    file.close();
    tempFile.close();
    remove(UserInfoFile.c_str());
    rename(Backup.c_str(), UserInfoFile.c_str());
}

//////////////////////////////////////////
			//USER INVOICE
//////////////////////////////////////////
void File::invoice(const char *username, const char *password)
{
    file.open(UserInfoFile, ios::in | ios::binary);

    if (!file.is_open())
    {
        cout << "File Corrupted" << endl;
    }
    else
    {
        while (file.read((char *)&mup, sizeof(MgUserPayment)))
        {
            if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
            {
                cout << "Added Time: " << mup.getBuyedTime() << endl;
                cout << "Buyed Snack " << setw(25) << mup.getFoodnDrink() << "Price " << setw(8) << mup.getPrice() << "Quantity " << setw(5) << mup.getQty() << "Total Price " << mup.getFndTotal() << endl;
            }
        }
    }

    file.close();
}

//////////////////////////////////////////
		//CALCULATE USING TIME
//////////////////////////////////////////
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
    	while (file.read((char *)&mup, sizeof(MgUserPayment)))
	    {
	        if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
	        {
	            isfound = true;
	
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
	
	            tempFile.write((char *)&mup, sizeof(MgUserPayment));
	        }
//	        tempFile.write((char *)&mup, sizeof(MgUserPayment));
	    }
	
	    file.close();
	    tempFile.close();
	    remove(UserInfoFile.c_str());
	    rename(Backup.c_str(), UserInfoFile.c_str());
	}
}

//////////////////////////////////////////
			//USER BUY FOOD
//////////////////////////////////////////
void File::buyFood(const char *username, const char *password)
{
    char foodID[5];
    char quantity[13];
    bool isfound = false;

    viewFile(1);

    file.open(UserInfoFile, ios::in | ios::binary);
    fstream tempFile(Backup, ios::out | ios::binary);

    if (!file.is_open() || !tempFile.is_open())
    {
        cout << "File Corrupted" << endl;
    }
	else
	{
		while (file.read((char *)&mup, sizeof(MgUserPayment)))
	    {
	        if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
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
	
	            fstream foodFile(FoodnDrinkFile, ios::in | ios::out | ios::binary);
	            if (!foodFile.is_open())
	            {
	                cout << "Food file could not be opened" << endl;
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
		
		                        cout << "Food purchase successful" << endl;
		                    }
		                    else
		                    {
		                        cout << "Insufficient quantity available" << endl;
		                    }
		                    foodFound = true;
		                    break;
		                }
		            }
		            foodFile.close();
		
		            if (!foodFound)
		            {
		                cout << "Food ID not found" << endl;
		            }
				}
	        }
	        tempFile.write((char *)&mup, sizeof(MgUserPayment));
	    }
	
	    if (!isfound)
	    {
	        cout << "User not found" << endl;
	    }	
	}

    file.close();
    tempFile.close();
    remove(UserInfoFile.c_str());
    rename(Backup.c_str(), UserInfoFile.c_str());
}

//////////////////////////////////////////
			//VIEW USER PROFILE
//////////////////////////////////////////
void File::viewProfile(const char *username, const char *password)
{
    file.open(UserInfoFile, ios::in | ios::binary);
    while (file.read((char *)&mup, sizeof(mup)))
    {
        if (strcmp(username, mup.getUsername()) == 0 && strcmp(password, mup.getPassword()) == 0)
        {
            mup.output();
        }
    }
    file.close();
}


////////////////////////////////
		//USER INVOICE
////////////////////////////////
void File::viewAllUserInvoice()
{
    file.open(UserInfoFile, ios::in | ios::binary);
    while (file.read((char *)&mup, sizeof(MgUserPayment)))
    {
        mup.viewAll();
    }
    file.close();
}
////////////////////////////////
		//INCOME
////////////////////////////////
void File::viewIncome()
{
    file.open(UserInfoFile, ios::in | ios::binary);
    while (file.read((char *)&mup, sizeof(MgUserPayment)))
    {
        mup.income();
    }
    file.close();
}

#endif