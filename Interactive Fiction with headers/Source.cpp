#include "functions.h"
using namespace std;

bool checkAgain = false;
bool deskKey = false;
bool doorCheck = false; //had to add an additional boolean as a check so the program wouldn't freak out
bool doorKey = false;
bool isLightOn = false;
bool lightCheck = false;
bool playAgain = false;

int main()
{
	//makes full screen when activated
	//SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
	system("title Waking Up");
	system("color 02"); //changes all console colors

	do //do loop that the main resides in is a play again loop
	{
		//resets booleans at program restart
		checkAgain = false;
		deskKey = false;
		doorCheck = false;
		doorKey = false;
		isLightOn = false;
		lightCheck = false;
		playAgain = false;

		GameEngine();
		goAgain(); //function run for confirmation on playing again
	} while (playAgain);

	//mainEngine();
	return 0;
}