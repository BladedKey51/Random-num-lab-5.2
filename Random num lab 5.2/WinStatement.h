#include <stdlib.h>
#include <time.h>
#include <iostream>

void WinStatement() { // void statement that picks a random win message 
	
	int random10 = rand() % 10;

	switch (random10) {
	case 0:
		std::cout << "Congratulations! You're on a roll!" << std::endl;
		break;
	case 1:
		std::cout << "Nice win! Keep up the good work!" << std::endl;
		break;
	case 2:
		std::cout << "Awesome! You nailed it!" << std::endl;
		break;
	case 3:
		std::cout << "Great job! Victory is yours!" << std::endl;
		break;
	case 4:
		std::cout << "Fantastic! You're unstoppable!" << std::endl;
		break;
	case 5:
		std::cout << "Well played! That was impressive!" << std::endl;
		break;
	case 6:
		std::cout << "Bravo! You're on fire!" << std::endl;
		break;
	case 7:
		std::cout << "Amazing! Keep that winning streak going!" << std::endl;
		break;
	case 8:
		std::cout << "Exceptional performance! Another win!" << std::endl;
		break;
	case 9:
		std::cout << "Victory! You're really making progress!" << std::endl;
		break;
	}
}