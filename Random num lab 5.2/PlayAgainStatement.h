#include <stdlib.h>
#include <time.h>
#include <iostream>

void PlayAgainMessage() { // void statement that picks a random message asking if you want to play again

	int random10 = rand() % 10;


		switch (random10) {
		case 0:
			std::cout << "Would you like to play another round if so press 1?" << std::endl;
			break;
		case 1:
			std::cout << "How about giving it another shot if so press 1?" << std::endl;
			break;
		case 2:
			std::cout << "Feeling lucky? Want to play again if so press 1?" << std::endl;
			break;
		case 3:
			std::cout << "Shall we go for another game if so press 1?" << std::endl;
			break;
		case 4:
			std::cout << "One more round if so press 1? Let's do it!" << std::endl;
			break;
		case 5:
			std::cout << "Care for a rematch if so press 1?" << std::endl;
			break;
		case 6:
			std::cout << "Up for another challenge if so press 1?" << std::endl;
			break;
		case 7:
			std::cout << "How about one more game if so press 1?" << std::endl;
			break;
		case 8:
			std::cout << "Think you can beat the odds if so press 1? Play again?" << std::endl;
			break;
		case 9:
			std::cout << "Fancy another round if so press 1?" << std::endl;
			break;
		}
}