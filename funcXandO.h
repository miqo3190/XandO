#include "classXandO.h"

void Game::startGame()
{
	std::cout << "step X"<<std::endl;
	std::cout << "enter x kordinat \b" << std::endl;
	std::cin >> kordX;
	std::cout << "enter y kordinat" << std::endl;
	std::cin >> kordY;
	arr[kordX-1][kordY-1] = 'X';
	chek = 'X';
	
	for (int i = 0; i < 3; ++i)
	{
		
		for (int j = 0; j < 3; ++j)
		{
			if (arr[i][j] != 'X' && arr[i][j] != 'O')

			{
				arr[i][j] = ' ';
			}
			std::cout <<"|" << arr[i][j] << "|"<<"\b";
		}
		std::cout << std::endl;
	}
}
void Game::nextStep()
{
	Game win;
	
	while (size < 8)
	{
		if (chek == 'X')
		{
			std::cout << "step O" << std::endl;
			std::cout << "enter x kordinat" << std::endl;
			std::cin >> kordX;
			std::cout << "enter y kordinat" << std::endl;
			std::cin >> kordY;
			arr[kordX - 1][kordY - 1] = 'O';
			chek = 'O';
			
			
		}
		for (int i = 0; i < 3; ++i)
		{

			for (int j = 0; j < 3; ++j)
			{
				
				if (arr[i][j] != 'X' && arr[i][j] != 'O')

				{
					arr[i][j] = ' ';
				}
				std::cout <<"|" << arr[i][j] << "|";
			}
			std::cout << std::endl;
		}
		if (winGame() == false)
		{
			break;
		}
		size++;
		
		if (chek == 'O')
		{
			std::cout << "step X" << std::endl;
			std::cout << "enter x kordinat" << std::endl;
			std::cin >> kordX;
			std::cout << "enter y kordinat" << std::endl;
			std::cin >> kordY;
			arr[kordX - 1][kordY - 1] = 'X';
			chek = 'X';
			
		}
		for (int i = 0; i < 3; ++i)
		{

			for (int j = 0; j < 3; ++j)
			{
				
				if (arr[i][j] != 'X' && arr[i][j] != 'O')

				{
					arr[i][j] = ' ';
				}

				std::cout <<"|" << arr[i][j] <<"|"<< "\b";
			}
			std::cout << std::endl;
		}
		if (winGame() == false)
		{
			break;
		}
		size++;
	}
	
	playAgain();

}
bool Game::winGame()
{
	if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
	{
		std::cout << "Player X win ";
		partiaX++;
		return 0;
	}
	if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X')
	{
		std::cout << "Player X win ";
		partiaX++;
		return 0;
	}
	if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
	{
		std::cout << "Player X win ";
		partiaX++;
		return 0;
	}
	if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
	{
		std::cout << "Player X win ";
		partiaX++;
		return 0;
	}
	if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')
	{
		std::cout << "Player X win ";
		partiaX++;
		return 0;
	}
	if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
	{
		std::cout << "Player X win ";
		partiaX++;
		return 0;
	}
	if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
	{
		std::cout << "Player X win ";
		partiaX++;
		return 0;
	}
	if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
	{
		std::cout << "Player O win ";
		partia++;
		return 0;
	}
	if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
	{
		std::cout << "Player O win ";
		partia++;
		return 0;
	}
	if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
	{
		std::cout << "Player O win ";
		partia++;
		return 0;
	}
	if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
	{
		std::cout << "Player O win ";
		partia++;
		return 0;
	}
	if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')
	{
		std::cout << "Player O win ";
		partia++;
		return 0;
	}
	if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
	{
		std::cout << "Player O win ";
		partia++;
		return 0;
	}
	if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
	{
		std::cout << "Player O win ";
		partia++;
		return 0;
	}
}
void Game::getPartiaO()
{	
	std::cout<< "Points O :  "<< partia<<"\n";
	 
}
void Game::getPartiaX()
{
	std::cout << "Points X : " << partiaX << "\n";
}
bool Game::playAgain()
{
	std::string key;
	std::cout << " Do not winner : Play again? \n";
	getline(std::cin, key);
	if (key != "yes" && key != "Yes")
	{
		size = 0;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = ' ';
			}
		}
		return false;
	}
	else { return true; }
}

