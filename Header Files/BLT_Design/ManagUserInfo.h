#ifndef __MANAGEUSERINFO_H__
#define __MANAGEUSERINFO_H__
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "All_Design.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ManageUserInfo::ManageUserInfoTxt()
{
    static int x = 10;
	static int y = 15;
	 
	Design::TxtOutline(x-39,y-11,11,1);
	H::setcolor(7); H::gotoxy(x+1,y-8); cout << R"(                                                                _    _____        __       )";
	H::setcolor(7); H::gotoxy(x+1,y-7); cout << R"(  /\/\   __ _ _ __   __ _  __ _  ___   /\ /\  ___  ___ _ __ ___( )   \_   \_ __  / _| ___  )";
	H::setcolor(1); H::gotoxy(x+1,y-6); cout << R"( /    \ / _` | '_ \ / _` |/ _` |/ _ \ / / \ \/ __|/ _ \ '__/ __|/     / /\/ '_ \| |_ / _ \ )";
	H::setcolor(7); H::gotoxy(x+1,y-5); cout << R"(/ /\/\ \ (_| | | | | (_| | (_| |  __/ \ \_/ /\__ \  __/ |  \__ \   /\/ /_ | | | |  _| (_) |)";
	H::setcolor(7); H::gotoxy(x+1,y-4); cout << R"(\/    \/\__,_|_| |_|\__,_|\__, |\___|  \___/ |___/\___|_|  |___/   \____/ |_| |_|_|  \___/ )";
	H::setcolor(7); H::gotoxy(x+1,y-3); cout << R"(                          |___/                                                            )";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void BLT::ManageUserInfo::ManageUserInfo_Design()
{
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	H::setcolor(6); H::gotoxy(80,14); cout << R"(                                                              __)),)";
	H::setcolor(3); H::gotoxy(80,15); cout << R"(               .........                       )"; H::setcolor(6); cout << R"(              //_ _))";
	H::setcolor(3); H::gotoxy(80,16); cout << R"(            .'------.' |                       )"; H::setcolor(6); cout << R"(              ( "\")";
	H::setcolor(3); H::gotoxy(80,17); cout << R"(           | .-----. | |                       )"; H::setcolor(6); cout << R"(               \_-/)";
	H::setcolor(3); H::gotoxy(80,18); cout << R"(           | |     | | |                       )"; H::setcolor(6); cout << R"(         ,---/  '---.)";
	H::setcolor(7); H::gotoxy(80,19); cout << R"(         __)"; H::setcolor(3); cout << R"(| |     | | |;. )"; H::setcolor(7); cout << R"(_______________     )"; H::setcolor(6); cout << R"(        /     - -    \)";
	H::setcolor(7); H::gotoxy(80,20); cout << R"(        /  )"; H::setcolor(3); cout << R"(|*`-----'.|.' `;)"; H::setcolor(7); cout << R"(              //    )"; H::setcolor(6); cout << R"(       /  \_. _|__,/  \)";
	H::setcolor(7); H::gotoxy(80,21); cout << R"(       /   )"; H::setcolor(3); cout << R"(`---------' .;')"; H::setcolor(7); cout << R"(              //     )"; H::setcolor(6); cout << R"(      /  )\        )\_ \)";
	H::setcolor(7); H::gotoxy(80,22); cout << R"(      /  )"; H::setcolor(3); cout << R"(.''''////////;')"; H::setcolor(7); cout << R"(               //      )"; H::setcolor(6); cout << R"(     / _/  (   '  ) /  /)";
	H::setcolor(7); H::gotoxy(80,23); cout << R"(     /   )"; H::setcolor(3); cout << R"(######### /;/ )"; H::setcolor(7); cout << R"(               //|      )"; H::setcolor(6); cout << R"(    / |     (_____) | /)";
	H::setcolor(7); H::gotoxy(80,24); cout << R"(    /  )"; H::setcolor(3); cout << R"(/ ######### // )"; H::setcolor(7); cout << R"(               //||      )"; H::setcolor(6); cout << R"(   /,'      /     \/ /,)";
	H::setcolor(7); H::gotoxy(80,25); cout << R"(   /   )"; H::setcolor(3); cout << R"(`-----------' )"; H::setcolor(7); cout << R"(               // ||      )"; H::setcolor(6); cout << R"( _/(_      (   ._, )-')";
	H::setcolor(7); H::gotoxy(80,26); cout << R"(  /________________________________//| ||      )"; H::setcolor(6); cout << R"(`--,/      |____|__|)";
	H::setcolor(7); H::gotoxy(80,27); cout << R"(  `--------------------------------' | ||      )"; H::setcolor(6); cout << R"(           |    )  |)";
	H::setcolor(7); H::gotoxy(80,28); cout << R"(   : | ||      | || |__LL__|| ||     | ||      )"; H::setcolor(6); cout << R"(           |   /   |)";
	H::setcolor(7); H::gotoxy(80,29); cout << R"(   : | ||      | ||         | ||     `""'      )"; H::setcolor(6); cout << R"(           |  / \  |)";
	H::setcolor(7); H::gotoxy(80,30); cout << R"(   n | ||      `""'         | ||               )"; H::setcolor(6); cout << R"(          / `|  | _))";
	H::setcolor(7); H::gotoxy(80,31); cout << R"(   M | ||                   | ||               )"; H::setcolor(6); cout << R"(          |  |  |  |)";
	H::setcolor(7); H::gotoxy(80,32); cout << R"(     | ||                   | ||               )"; H::setcolor(6); cout << R"(          |  /  \  |)";
	H::setcolor(7); H::gotoxy(80,33); cout << R"(     `""'                   `""'               )"; H::setcolor(6); cout << R"(          | |    \ |)";
	H::setcolor(6); H::gotoxy(80,34); cout << R"(                                                         | \    | \_)";
	H::setcolor(6); H::gotoxy(80,35); cout << R"(                                                        /__(    '-._`,)";
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif