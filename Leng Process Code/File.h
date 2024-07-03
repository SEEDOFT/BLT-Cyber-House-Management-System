#ifndef ___File_H___
#define ___File_H___
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "Food.h"
#include "Game.h"
#include "MgUserInfo.h"
#include <sys/stat.h>
#include <vector>
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class File {
private:
    static string dir;

    static string FoodnDrinkFile;
    static string Backup;

    static string GameFile;
//    static string GameBackupFile;

    static string UserInfoFile;
//    static string UserInfoBackupFile;

    static int getMaxID(const string& fileName, int type);
    
    static vector<FoodnDrink> fndVector;
    static vector<Game> gameVector;
    static vector<MgUserInfo> muiVector;

    static FoodnDrink fnd;
    static Game game;
    static MgUserInfo mui;
    
    static fstream file;
    static string  currentFile;

public:
    static void insertFile(int n);
    static void viewFile(int n);
    static void searchFile(int n);
    static void updateFile(int n);
    static void deleteFile(int n);
    static bool check_file(const string& fileName);
};
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
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
//string File::GameBackupFile = dir + "/GameBackupFile.ant";

string File::UserInfoFile = dir + "/UserInfo.ant";
//string File::UserInfoBackupFile = dir + "/UserInfoBackup.ant";

string File::currentFile = "";
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//bool sortByPriceDesc(const PhoneInfo& a, const PhoneInfo& b)
//{
//    return a.getPrice() > b.getPrice();
//}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool File::check_file(const string& fileName) 
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
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int File::getMaxID(const string& fileName, int type) 
{
    ifstream file(fileName, ios::in | ios::binary);
    int maxID = 999;

    if (type == 1) 
	{
//        FoodnDrink fnd;
        while (file.read((char*)&fnd, sizeof(fnd))) 
		{
            if (fnd.getID() > maxID) 
			{
                maxID = fnd.getID();
            }
        }
    }
    else if (type == 2) 
	{
//        Game game;
        while (file.read((char*)&game, sizeof(game))) 
		{
            if (game.getID() > maxID) 
			{
                maxID = game.getID();
            }
        }
    }
    else if (type == 3) 
	{
//        MgUserInfo mui;
        while (file.read((char*)&mui, sizeof(mui))) 
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

//int maxID = getMaxID(currentFile, n);
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::insertFile(int n)
{
	char press = ' ';
	int i = 1;
	
	struct stat sb;
	if(stat(dir.c_str(), &sb) != 0)
	{
		mkdir(dir.c_str());
	}
	
	switch(n)
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
	
	while(1)
	{
		int maxID = getMaxID(currentFile, n);
		
		if(n == 1)
		{
			fnd.setID(maxID + i);
	        cout << "ID : " << fnd.getID() << endl;
	        fnd.input();
			fndVector.push_back(fnd);
		}
		else if(n == 2)
		{
			game.setID(maxID + 1);
			cout << "ID : " << game.getID() << endl;
			game.input();
			gameVector.push_back(game);
		}
		else if(n == 3)
		{
			mui.setID(maxID + 1);
			cout << "ID : " << mui.getID() << endl;
			mui.input();
			muiVector.push_back(mui);
		}
		cout << "press any key to input again and [Enter] to stop" << endl;
		press = getch();
		if(press == 13)
		{
			break;
		}
		i++;
	}
	
	file.open(currentFile, ios::out | ios::app | ios::binary);
	if(n == 1)
	{
		for(const auto & insert : fndVector)
		{
			file.write((char*)&insert, sizeof(FoodnDrink));
		}
		fndVector.clear();
	}
	else if(n == 2)
	{
		for(const auto & insert : gameVector)
		{
			file.write((char*)&insert, sizeof(Game));
		}
		gameVector.clear();
	}
	else if(n == 3)
	{
		for(const auto & insert : muiVector)
		{
			file.write((char*)&insert, sizeof(MgUserInfo));
		}
		muiVector.clear();
	}
	file.close();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::viewFile(int n)
{
	switch(n)
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
	
	file.open(currentFile, ios::in | ios::binary);
	if(!file.is_open())
	{
		cout << "File Curropted" << endl;
	}
	else
	{
		if(check_file(currentFile))
		{
			cout << "File has no data" << endl;
		}
		else
		{
			if(n == 1)
			{
				file.read((char*)&fnd,sizeof(fnd));
				while(file.eof() == false)
				{
					fnd.output();
					file.read((char*)&fnd,sizeof(fnd));
				}
			}
			else if(n == 2)
			{
				file.read((char*)&game,sizeof(game));
				while(file.eof() == false)
				{
					game.output();
					file.read((char*)&game,sizeof(game));
				}
			}
			else if(n == 3)
			{
		//		file.open(currentFile, ios::in | ios::binary);
		//		if(!file.is_open())
		//		{
		//			cout << "File Curropted" << endl;
		//		}
//				if(!check_file(currentFile))
//				{
//					
//				}	
//				else
//				{
//					cout << "File has no data" << endl;
//				}
				file.read((char*)&mui,sizeof(mui));
				while(file.eof() == false)
				{
					mui.output();
					file.read((char*)&mui,sizeof(mui));
				}
			}	
		}
	}
	
	file.close();
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::searchFile(int n)
{
    char searchID[5];
    bool isfound = false;
    char press = ' ';
    
    switch(n)
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
    file.open(currentFile, ios::in | ios::binary);
    if(!file.is_open())
    {
        cout << "File Corrupted" << endl;
    }
    else
    {
        if(check_file(currentFile))
        {
            cout << "File has no data" << endl; 
        }
        else
        {
            while(1)
            {
                isfound = false;
                cout << "Enter Food ID : "; H::inputNumber(searchID, sizeof(searchID)); cout << endl;
                file.clear();  // Clear any potential eof or fail flags
                file.seekg(0, ios::beg);  // Reset file pointer to beginning
                
                if(n == 1)
                {
                    file.read((char*)&fnd, sizeof(FoodnDrink));
                    while(file.eof() == false)
                    {
                        if(atoi(searchID) == fnd.getID())
                        {
                            fnd.output();
                            isfound = true;
                        }
                        file.read((char*)&fnd, sizeof(FoodnDrink));
                    }
                }
                else if(n == 2)
                {
                    file.read((char*)&game, sizeof(Game));
                    while(file.eof() == false)
                    {
                        if(atoi(searchID) == game.getID())
                        {
                            game.output();
                            isfound = true;
                        }
                        file.read((char*)&game, sizeof(Game));
                    }
                }
                else if(n == 3)
                {
                    file.read((char*)&mui, sizeof(MgUserInfo));
                    while(file.eof() == false)
                    {
                        if(atoi(searchID) == mui.getID())
                        {
                            mui.output();
                            isfound = true;
                        }
                        file.read((char*)&mui, sizeof(MgUserInfo));
                    }
                }
                
                if(isfound == false)
                {
                    cout << "ID not found" << endl;
                }
                else 
                {
                    cout << "ID found" << endl;
                }
                cout << "Press any key to search again or [Enter] to stop" << endl;
                press = getch();
                if(press == 13)
                {
                    file.close();
                    break;
                }
            }
        }
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::updateFile(int n)
{
	char updateID[5];
	bool isfound = false;
	char press = ' ';
	
	switch(n)
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
	file.open(currentFile, ios::out | ios::in | ios::binary);
	
	if(!file.is_open())
	{
		cout << "File Curropted" << endl;
	}
	else
	{
		if(check_file(currentFile))
		{
			cout << "File has no data" << endl; 
		}
		else
		{
			while(1)
			{
				isfound = false;
				cout << "Enter Food ID : "; H::inputNumber(updateID,sizeof(updateID)); cout << endl;
				file.clear();  // Clear any potential eof or fail flags
	            file.seekg(0, ios::beg);  // Reset file pointer to beginning
	            
				if(n == 1)
				{
					file.read((char*)&fnd,sizeof(FoodnDrink));
					while(file.eof() == false)
					{
						if(atoi(updateID) == fnd.getID())
						{
							fnd.input();
							file.seekp((int)file.tellg()-sizeof(FoodnDrink));
							file.write((char*)&fnd,sizeof(FoodnDrink));
							isfound = true;
						}
						file.read((char*)&fnd,sizeof(FoodnDrink));
					}
				}
				else if(n == 2)
				{
					file.read((char*)&game,sizeof(Game));
					while(file.eof() == false)
					{
						if(atoi(updateID) == game.getID())
						{
							game.input();
							file.seekp((int)file.tellg()-sizeof(Game));
							file.write((char*)&game,sizeof(Game));
							isfound = true;
						}
						file.read((char*)&game,sizeof(Game));
					}
				}
				else if(n == 3)
				{
					file.read((char*)&mui,sizeof(MgUserInfo));
					while(file.eof() == false)
					{
						if(atoi(updateID) == mui.getID())
						{
							mui.input();
							file.seekp((int)file.tellg()-sizeof(MgUserInfo));
							file.write((char*)&mui,sizeof(MgUserInfo));
							isfound = true;
						}
						file.read((char*)&mui,sizeof(MgUserInfo));
					}
				}
				
				if(isfound == false)
				{
					cout << "...Incorrect Invoice ID..." << endl;
				}
				else 
				{
					cout << "...Update Successfully..." << endl;
				}
				cout << "Press any key to update again or [Enter] to stop" << endl;
                press = getch();
                if(press == 13)
                {
                    file.close();
                    break;
                }
			}
		}
	}
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void File::deleteFile(int n)
{
    char deleteID[5];
    bool isfound = false;
    char press = ' ';

    // Set the current file based on the input 'n'
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

    // Open the file to check its status
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
        // Read the contents of the file into the respective vectors
        switch (n)
        {
            case 1:
            {
                fndVector.clear();
                while (file.read((char*)&fnd, sizeof(FoodnDrink)))
                {
                    fndVector.push_back(fnd);
                }
                break;
            }
            case 2:
            {
                gameVector.clear();
                while (file.read((char*)&game, sizeof(Game)))
                {
                    gameVector.push_back(game);
                }
                break;
            }
            case 3:
            {
                muiVector.clear();
                while (file.read((char*)&mui, sizeof(MgUserInfo)))
                {
                    muiVector.push_back(mui);
                }
                break;
            }
        }

        file.close();

        // Main loop to handle deletion of records
        while (true)
        {
            isfound = false;
            cout << "Enter ID to delete: "; H::inputNumber(deleteID, sizeof(deleteID)); cout << endl;
            int deleteIDInt = atoi(deleteID);

            switch (n)
            {
                case 1:
                {
                    for (auto it = fndVector.begin(); it != fndVector.end(); )
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
                    for (auto it = gameVector.begin(); it != gameVector.end(); )
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
                    for (auto it = muiVector.begin(); it != muiVector.end(); )
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

        // Open the file for writing and update its contents
        file.open(currentFile, ios::out | ios::binary | ios::trunc); // when the file is opened, the old contents are immediately removed.
        if (!file.is_open())
        {
            cout << "Error opening file for writing" << endl;
        }
        else
        {
            switch (n)
            {
                case 1:
                {
                    for (const auto& fnd : fndVector)
                    {
                        file.write((char*)&fnd, sizeof(FoodnDrink));
                    }
                    break;
                }
                case 2:
                {
                    for (const auto& game : gameVector)
                    {
                        file.write((char*)&game, sizeof(Game));
                    }
                    break;
                }
                case 3:
                {
                    for (const auto& mui : muiVector)
                    {
                        file.write((char*)&mui, sizeof(MgUserInfo));
                    }
                    break;
                }
            }
        }

        file.close();
    }
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif