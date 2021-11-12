#include "funcXandO.h"

int main()
{
	Game set1;
	while (set1.playAgain())
	{
		set1.startGame();
		set1.nextStep();
	}
	set1.getPartiaO();
	set1.getPartiaX();
}