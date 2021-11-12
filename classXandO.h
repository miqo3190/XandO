#include <iostream>
#include <string>
static int partia = 0;
static int partiaX = 0;
class Game
{
public:
	void startGame();
	void nextStep();
	bool winGame();
	void getPartiaO();
	void getPartiaX();
	bool playAgain();

private:
	char  arr[3][3];
	int kordX, kordY;
	char chek;
	int size=0;
};