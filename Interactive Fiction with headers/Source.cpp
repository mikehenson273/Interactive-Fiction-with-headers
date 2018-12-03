#include "functions.h"

using namespace std;

 

int main()
{
	//makes full screen when activated
	//SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
	system("title Waking Up");
	system("color 02"); //changes all console colors

	mainEngine();
	return 0;
}